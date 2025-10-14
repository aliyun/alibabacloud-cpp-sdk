// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMANAGEDTRANSFORMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMANAGEDTRANSFORMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateManagedTransformRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateManagedTransformRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddClientGeolocationHeader, addClientGeolocationHeader_);
      DARABONBA_PTR_TO_JSON(AddRealClientIpHeader, addRealClientIpHeader_);
      DARABONBA_PTR_TO_JSON(RealClientIpHeaderName, realClientIpHeaderName_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateManagedTransformRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddClientGeolocationHeader, addClientGeolocationHeader_);
      DARABONBA_PTR_FROM_JSON(AddRealClientIpHeader, addRealClientIpHeader_);
      DARABONBA_PTR_FROM_JSON(RealClientIpHeaderName, realClientIpHeaderName_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    UpdateManagedTransformRequest() = default ;
    UpdateManagedTransformRequest(const UpdateManagedTransformRequest &) = default ;
    UpdateManagedTransformRequest(UpdateManagedTransformRequest &&) = default ;
    UpdateManagedTransformRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateManagedTransformRequest() = default ;
    UpdateManagedTransformRequest& operator=(const UpdateManagedTransformRequest &) = default ;
    UpdateManagedTransformRequest& operator=(UpdateManagedTransformRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addClientGeolocationHeader_ == nullptr
        && return this->addRealClientIpHeader_ == nullptr && return this->realClientIpHeaderName_ == nullptr && return this->siteId_ == nullptr && return this->siteVersion_ == nullptr; };
    // addClientGeolocationHeader Field Functions 
    bool hasAddClientGeolocationHeader() const { return this->addClientGeolocationHeader_ != nullptr;};
    void deleteAddClientGeolocationHeader() { this->addClientGeolocationHeader_ = nullptr;};
    inline string addClientGeolocationHeader() const { DARABONBA_PTR_GET_DEFAULT(addClientGeolocationHeader_, "") };
    inline UpdateManagedTransformRequest& setAddClientGeolocationHeader(string addClientGeolocationHeader) { DARABONBA_PTR_SET_VALUE(addClientGeolocationHeader_, addClientGeolocationHeader) };


    // addRealClientIpHeader Field Functions 
    bool hasAddRealClientIpHeader() const { return this->addRealClientIpHeader_ != nullptr;};
    void deleteAddRealClientIpHeader() { this->addRealClientIpHeader_ = nullptr;};
    inline string addRealClientIpHeader() const { DARABONBA_PTR_GET_DEFAULT(addRealClientIpHeader_, "") };
    inline UpdateManagedTransformRequest& setAddRealClientIpHeader(string addRealClientIpHeader) { DARABONBA_PTR_SET_VALUE(addRealClientIpHeader_, addRealClientIpHeader) };


    // realClientIpHeaderName Field Functions 
    bool hasRealClientIpHeaderName() const { return this->realClientIpHeaderName_ != nullptr;};
    void deleteRealClientIpHeaderName() { this->realClientIpHeaderName_ = nullptr;};
    inline string realClientIpHeaderName() const { DARABONBA_PTR_GET_DEFAULT(realClientIpHeaderName_, "") };
    inline UpdateManagedTransformRequest& setRealClientIpHeaderName(string realClientIpHeaderName) { DARABONBA_PTR_SET_VALUE(realClientIpHeaderName_, realClientIpHeaderName) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateManagedTransformRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline UpdateManagedTransformRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // Specifies whether to include the header that indicates the geographical location of a client in an origin request. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> addClientGeolocationHeader_ = nullptr;
    // Specifies whether to include the "ali-real-client-ip" header that indicates the client\\"s real IP address in an origin request. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> addRealClientIpHeader_ = nullptr;
    std::shared_ptr<string> realClientIpHeaderName_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The version number of the website. You can use this parameter to specify a version of your website to apply the feature settings. By default, version 0 is used.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
