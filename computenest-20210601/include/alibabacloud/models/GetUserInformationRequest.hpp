// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERINFORMATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERINFORMATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetUserInformationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserInformationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserInformationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetUserInformationRequest() = default ;
    GetUserInformationRequest(const GetUserInformationRequest &) = default ;
    GetUserInformationRequest(GetUserInformationRequest &&) = default ;
    GetUserInformationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserInformationRequest() = default ;
    GetUserInformationRequest& operator=(const GetUserInformationRequest &) = default ;
    GetUserInformationRequest& operator=(GetUserInformationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetUserInformationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
