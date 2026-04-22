// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIATEPPTCREATIONV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITIATEPPTCREATIONV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class InitiatePptCreationV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitiatePptCreationV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalUserId, externalUserId_);
      DARABONBA_PTR_TO_JSON(IsMobile, isMobile_);
      DARABONBA_PTR_TO_JSON(Outline, outline_);
      DARABONBA_PTR_TO_JSON(PptTemplateId, pptTemplateId_);
      DARABONBA_PTR_TO_JSON(PptTemplateType, pptTemplateType_);
      DARABONBA_PTR_TO_JSON(ProcessType, processType_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, InitiatePptCreationV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalUserId, externalUserId_);
      DARABONBA_PTR_FROM_JSON(IsMobile, isMobile_);
      DARABONBA_PTR_FROM_JSON(Outline, outline_);
      DARABONBA_PTR_FROM_JSON(PptTemplateId, pptTemplateId_);
      DARABONBA_PTR_FROM_JSON(PptTemplateType, pptTemplateType_);
      DARABONBA_PTR_FROM_JSON(ProcessType, processType_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    InitiatePptCreationV2Request() = default ;
    InitiatePptCreationV2Request(const InitiatePptCreationV2Request &) = default ;
    InitiatePptCreationV2Request(InitiatePptCreationV2Request &&) = default ;
    InitiatePptCreationV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitiatePptCreationV2Request() = default ;
    InitiatePptCreationV2Request& operator=(const InitiatePptCreationV2Request &) = default ;
    InitiatePptCreationV2Request& operator=(InitiatePptCreationV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->externalUserId_ == nullptr
        && this->isMobile_ == nullptr && this->outline_ == nullptr && this->pptTemplateId_ == nullptr && this->pptTemplateType_ == nullptr && this->processType_ == nullptr
        && this->taskId_ == nullptr && this->workspaceId_ == nullptr; };
    // externalUserId Field Functions 
    bool hasExternalUserId() const { return this->externalUserId_ != nullptr;};
    void deleteExternalUserId() { this->externalUserId_ = nullptr;};
    inline string getExternalUserId() const { DARABONBA_PTR_GET_DEFAULT(externalUserId_, "") };
    inline InitiatePptCreationV2Request& setExternalUserId(string externalUserId) { DARABONBA_PTR_SET_VALUE(externalUserId_, externalUserId) };


    // isMobile Field Functions 
    bool hasIsMobile() const { return this->isMobile_ != nullptr;};
    void deleteIsMobile() { this->isMobile_ = nullptr;};
    inline bool getIsMobile() const { DARABONBA_PTR_GET_DEFAULT(isMobile_, false) };
    inline InitiatePptCreationV2Request& setIsMobile(bool isMobile) { DARABONBA_PTR_SET_VALUE(isMobile_, isMobile) };


    // outline Field Functions 
    bool hasOutline() const { return this->outline_ != nullptr;};
    void deleteOutline() { this->outline_ = nullptr;};
    inline string getOutline() const { DARABONBA_PTR_GET_DEFAULT(outline_, "") };
    inline InitiatePptCreationV2Request& setOutline(string outline) { DARABONBA_PTR_SET_VALUE(outline_, outline) };


    // pptTemplateId Field Functions 
    bool hasPptTemplateId() const { return this->pptTemplateId_ != nullptr;};
    void deletePptTemplateId() { this->pptTemplateId_ = nullptr;};
    inline int32_t getPptTemplateId() const { DARABONBA_PTR_GET_DEFAULT(pptTemplateId_, 0) };
    inline InitiatePptCreationV2Request& setPptTemplateId(int32_t pptTemplateId) { DARABONBA_PTR_SET_VALUE(pptTemplateId_, pptTemplateId) };


    // pptTemplateType Field Functions 
    bool hasPptTemplateType() const { return this->pptTemplateType_ != nullptr;};
    void deletePptTemplateType() { this->pptTemplateType_ = nullptr;};
    inline int32_t getPptTemplateType() const { DARABONBA_PTR_GET_DEFAULT(pptTemplateType_, 0) };
    inline InitiatePptCreationV2Request& setPptTemplateType(int32_t pptTemplateType) { DARABONBA_PTR_SET_VALUE(pptTemplateType_, pptTemplateType) };


    // processType Field Functions 
    bool hasProcessType() const { return this->processType_ != nullptr;};
    void deleteProcessType() { this->processType_ = nullptr;};
    inline int32_t getProcessType() const { DARABONBA_PTR_GET_DEFAULT(processType_, 0) };
    inline InitiatePptCreationV2Request& setProcessType(int32_t processType) { DARABONBA_PTR_SET_VALUE(processType_, processType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline InitiatePptCreationV2Request& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline InitiatePptCreationV2Request& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> externalUserId_ {};
    shared_ptr<bool> isMobile_ {};
    shared_ptr<string> outline_ {};
    shared_ptr<int32_t> pptTemplateId_ {};
    shared_ptr<int32_t> pptTemplateType_ {};
    shared_ptr<int32_t> processType_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
