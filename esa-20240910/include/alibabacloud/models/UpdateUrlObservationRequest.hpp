// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEURLOBSERVATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEURLOBSERVATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateUrlObservationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUrlObservationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(SdkType, sdkType_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUrlObservationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(SdkType, sdkType_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateUrlObservationRequest() = default ;
    UpdateUrlObservationRequest(const UpdateUrlObservationRequest &) = default ;
    UpdateUrlObservationRequest(UpdateUrlObservationRequest &&) = default ;
    UpdateUrlObservationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUrlObservationRequest() = default ;
    UpdateUrlObservationRequest& operator=(const UpdateUrlObservationRequest &) = default ;
    UpdateUrlObservationRequest& operator=(UpdateUrlObservationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configId_ != nullptr
        && this->sdkType_ != nullptr && this->siteId_ != nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline UpdateUrlObservationRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // sdkType Field Functions 
    bool hasSdkType() const { return this->sdkType_ != nullptr;};
    void deleteSdkType() { this->sdkType_ = nullptr;};
    inline string sdkType() const { DARABONBA_PTR_GET_DEFAULT(sdkType_, "") };
    inline UpdateUrlObservationRequest& setSdkType(string sdkType) { DARABONBA_PTR_SET_VALUE(sdkType_, sdkType) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateUrlObservationRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sdkType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
