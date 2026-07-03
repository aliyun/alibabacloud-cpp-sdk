// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRDUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRDUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListRdUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRdUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRdUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListRdUsersRequest() = default ;
    ListRdUsersRequest(const ListRdUsersRequest &) = default ;
    ListRdUsersRequest(ListRdUsersRequest &&) = default ;
    ListRdUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRdUsersRequest() = default ;
    ListRdUsersRequest& operator=(const ListRdUsersRequest &) = default ;
    ListRdUsersRequest& operator=(ListRdUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListRdUsersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The region where the Data Management center of Threat Analysis is located. Select the region of the Management Center based on the region where your assets are located. Valid values:
    // 
    // - cn-hangzhou: Your assets are in the Chinese mainland or China (Hong Kong).
    // 
    // - ap-southeast-1: Your assets are in regions outside China.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
