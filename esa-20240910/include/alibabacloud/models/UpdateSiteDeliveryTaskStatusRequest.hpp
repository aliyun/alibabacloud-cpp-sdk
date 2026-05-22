// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESITEDELIVERYTASKSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESITEDELIVERYTASKSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateSiteDeliveryTaskStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSiteDeliveryTaskStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSiteDeliveryTaskStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    UpdateSiteDeliveryTaskStatusRequest() = default ;
    UpdateSiteDeliveryTaskStatusRequest(const UpdateSiteDeliveryTaskStatusRequest &) = default ;
    UpdateSiteDeliveryTaskStatusRequest(UpdateSiteDeliveryTaskStatusRequest &&) = default ;
    UpdateSiteDeliveryTaskStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSiteDeliveryTaskStatusRequest() = default ;
    UpdateSiteDeliveryTaskStatusRequest& operator=(const UpdateSiteDeliveryTaskStatusRequest &) = default ;
    UpdateSiteDeliveryTaskStatusRequest& operator=(UpdateSiteDeliveryTaskStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->method_ == nullptr
        && this->siteId_ == nullptr && this->taskName_ == nullptr; };
    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline UpdateSiteDeliveryTaskStatusRequest& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateSiteDeliveryTaskStatusRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline UpdateSiteDeliveryTaskStatusRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // Specifies whether to enable the delivery task.
    // 
    // This parameter is required.
    shared_ptr<string> method_ {};
    // The website ID.
    shared_ptr<int64_t> siteId_ {};
    // The name of the delivery task.
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
