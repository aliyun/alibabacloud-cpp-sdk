// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLANSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPLANSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class ListPlansRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPlansRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPlansRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListPlansRequest() = default ;
    ListPlansRequest(const ListPlansRequest &) = default ;
    ListPlansRequest(ListPlansRequest &&) = default ;
    ListPlansRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPlansRequest() = default ;
    ListPlansRequest& operator=(const ListPlansRequest &) = default ;
    ListPlansRequest& operator=(ListPlansRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListPlansRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The region ID. You can call [ListRegions](https://help.aliyun.com/document_detail/189315.html) to query the available regions for simple application servers.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
