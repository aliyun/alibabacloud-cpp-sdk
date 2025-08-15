// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTPROCESSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTPROCESSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class StartProcessInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartProcessInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(comments, comments_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(interval, interval_);
      DARABONBA_PTR_TO_JSON(isProd, isProd_);
      DARABONBA_PTR_TO_JSON(processDefinitionCode, processDefinitionCode_);
      DARABONBA_PTR_TO_JSON(productNamespace, productNamespace_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(runtimeQueue, runtimeQueue_);
      DARABONBA_PTR_TO_JSON(versionHashCode, versionHashCode_);
      DARABONBA_PTR_TO_JSON(versionNumber, versionNumber_);
    };
    friend void from_json(const Darabonba::Json& j, StartProcessInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(comments, comments_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(interval, interval_);
      DARABONBA_PTR_FROM_JSON(isProd, isProd_);
      DARABONBA_PTR_FROM_JSON(processDefinitionCode, processDefinitionCode_);
      DARABONBA_PTR_FROM_JSON(productNamespace, productNamespace_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(runtimeQueue, runtimeQueue_);
      DARABONBA_PTR_FROM_JSON(versionHashCode, versionHashCode_);
      DARABONBA_PTR_FROM_JSON(versionNumber, versionNumber_);
    };
    StartProcessInstanceRequest() = default ;
    StartProcessInstanceRequest(const StartProcessInstanceRequest &) = default ;
    StartProcessInstanceRequest(StartProcessInstanceRequest &&) = default ;
    StartProcessInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartProcessInstanceRequest() = default ;
    StartProcessInstanceRequest& operator=(const StartProcessInstanceRequest &) = default ;
    StartProcessInstanceRequest& operator=(StartProcessInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->comments_ != nullptr && this->email_ != nullptr && this->interval_ != nullptr && this->isProd_ != nullptr && this->processDefinitionCode_ != nullptr
        && this->productNamespace_ != nullptr && this->regionId_ != nullptr && this->runtimeQueue_ != nullptr && this->versionHashCode_ != nullptr && this->versionNumber_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline StartProcessInstanceRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string comments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline StartProcessInstanceRequest& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline StartProcessInstanceRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline StartProcessInstanceRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // isProd Field Functions 
    bool hasIsProd() const { return this->isProd_ != nullptr;};
    void deleteIsProd() { this->isProd_ = nullptr;};
    inline bool isProd() const { DARABONBA_PTR_GET_DEFAULT(isProd_, false) };
    inline StartProcessInstanceRequest& setIsProd(bool isProd) { DARABONBA_PTR_SET_VALUE(isProd_, isProd) };


    // processDefinitionCode Field Functions 
    bool hasProcessDefinitionCode() const { return this->processDefinitionCode_ != nullptr;};
    void deleteProcessDefinitionCode() { this->processDefinitionCode_ = nullptr;};
    inline int64_t processDefinitionCode() const { DARABONBA_PTR_GET_DEFAULT(processDefinitionCode_, 0L) };
    inline StartProcessInstanceRequest& setProcessDefinitionCode(int64_t processDefinitionCode) { DARABONBA_PTR_SET_VALUE(processDefinitionCode_, processDefinitionCode) };


    // productNamespace Field Functions 
    bool hasProductNamespace() const { return this->productNamespace_ != nullptr;};
    void deleteProductNamespace() { this->productNamespace_ = nullptr;};
    inline string productNamespace() const { DARABONBA_PTR_GET_DEFAULT(productNamespace_, "") };
    inline StartProcessInstanceRequest& setProductNamespace(string productNamespace) { DARABONBA_PTR_SET_VALUE(productNamespace_, productNamespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartProcessInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // runtimeQueue Field Functions 
    bool hasRuntimeQueue() const { return this->runtimeQueue_ != nullptr;};
    void deleteRuntimeQueue() { this->runtimeQueue_ = nullptr;};
    inline string runtimeQueue() const { DARABONBA_PTR_GET_DEFAULT(runtimeQueue_, "") };
    inline StartProcessInstanceRequest& setRuntimeQueue(string runtimeQueue) { DARABONBA_PTR_SET_VALUE(runtimeQueue_, runtimeQueue) };


    // versionHashCode Field Functions 
    bool hasVersionHashCode() const { return this->versionHashCode_ != nullptr;};
    void deleteVersionHashCode() { this->versionHashCode_ = nullptr;};
    inline string versionHashCode() const { DARABONBA_PTR_GET_DEFAULT(versionHashCode_, "") };
    inline StartProcessInstanceRequest& setVersionHashCode(string versionHashCode) { DARABONBA_PTR_SET_VALUE(versionHashCode_, versionHashCode) };


    // versionNumber Field Functions 
    bool hasVersionNumber() const { return this->versionNumber_ != nullptr;};
    void deleteVersionNumber() { this->versionNumber_ = nullptr;};
    inline int32_t versionNumber() const { DARABONBA_PTR_GET_DEFAULT(versionNumber_, 0) };
    inline StartProcessInstanceRequest& setVersionNumber(int32_t versionNumber) { DARABONBA_PTR_SET_VALUE(versionNumber_, versionNumber) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> comments_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> interval_ = nullptr;
    // Specifies whether to run the workflow in the production environment.
    std::shared_ptr<bool> isProd_ = nullptr;
    // The workflow ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> processDefinitionCode_ = nullptr;
    // The code of the service.
    // 
    // This parameter is required.
    std::shared_ptr<string> productNamespace_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The queue on which the workflow runs.
    std::shared_ptr<string> runtimeQueue_ = nullptr;
    // The hash code of the version.
    std::shared_ptr<string> versionHashCode_ = nullptr;
    // The version number of the workflow.
    std::shared_ptr<int32_t> versionNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
