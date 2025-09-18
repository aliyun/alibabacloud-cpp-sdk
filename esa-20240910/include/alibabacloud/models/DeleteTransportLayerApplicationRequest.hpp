// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETRANSPORTLAYERAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETRANSPORTLAYERAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteTransportLayerApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTransportLayerApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTransportLayerApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    DeleteTransportLayerApplicationRequest() = default ;
    DeleteTransportLayerApplicationRequest(const DeleteTransportLayerApplicationRequest &) = default ;
    DeleteTransportLayerApplicationRequest(DeleteTransportLayerApplicationRequest &&) = default ;
    DeleteTransportLayerApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTransportLayerApplicationRequest() = default ;
    DeleteTransportLayerApplicationRequest& operator=(const DeleteTransportLayerApplicationRequest &) = default ;
    DeleteTransportLayerApplicationRequest& operator=(DeleteTransportLayerApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->siteId_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline int64_t applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, 0L) };
    inline DeleteTransportLayerApplicationRequest& setApplicationId(int64_t applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline DeleteTransportLayerApplicationRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // Application ID, which can be obtained by calling the [ListTransportLayerApplications](~~ListTransportLayerApplications~~) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> applicationId_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
