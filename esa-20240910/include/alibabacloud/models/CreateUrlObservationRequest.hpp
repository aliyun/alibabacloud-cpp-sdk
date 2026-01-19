// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEURLOBSERVATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEURLOBSERVATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateUrlObservationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUrlObservationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SdkType, sdkType_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUrlObservationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SdkType, sdkType_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    CreateUrlObservationRequest() = default ;
    CreateUrlObservationRequest(const CreateUrlObservationRequest &) = default ;
    CreateUrlObservationRequest(CreateUrlObservationRequest &&) = default ;
    CreateUrlObservationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUrlObservationRequest() = default ;
    CreateUrlObservationRequest& operator=(const CreateUrlObservationRequest &) = default ;
    CreateUrlObservationRequest& operator=(CreateUrlObservationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sdkType_ == nullptr
        && this->siteId_ == nullptr && this->url_ == nullptr; };
    // sdkType Field Functions 
    bool hasSdkType() const { return this->sdkType_ != nullptr;};
    void deleteSdkType() { this->sdkType_ = nullptr;};
    inline string getSdkType() const { DARABONBA_PTR_GET_DEFAULT(sdkType_, "") };
    inline CreateUrlObservationRequest& setSdkType(string sdkType) { DARABONBA_PTR_SET_VALUE(sdkType_, sdkType) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateUrlObservationRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateUrlObservationRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // SDK integration. Supported
    // 
    // *   **automatic**
    // *   **manual**
    // 
    // This parameter is required.
    shared_ptr<string> sdkType_ {};
    // The website ID, which can be obtained by calling the [ListSites](~~ListSites~~) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The URL of the web page to monitor.
    // 
    // This parameter is required.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
