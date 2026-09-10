// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATACHECKTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATACHECKTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class UpdateDataCheckTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataCheckTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(checkTemplateId, checkTemplateId_);
      DARABONBA_PTR_TO_JSON(dstDsId, dstDsId_);
      DARABONBA_PTR_TO_JSON(dstDsName, dstDsName_);
      DARABONBA_PTR_TO_JSON(dstDsType, dstDsType_);
      DARABONBA_PTR_TO_JSON(dstEngineId, dstEngineId_);
      DARABONBA_PTR_TO_JSON(dstEngineName, dstEngineName_);
      DARABONBA_PTR_TO_JSON(dstEngineType, dstEngineType_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(srcDsId, srcDsId_);
      DARABONBA_PTR_TO_JSON(srcDsName, srcDsName_);
      DARABONBA_PTR_TO_JSON(srcDsType, srcDsType_);
      DARABONBA_PTR_TO_JSON(srcEngineId, srcEngineId_);
      DARABONBA_PTR_TO_JSON(srcEngineName, srcEngineName_);
      DARABONBA_PTR_TO_JSON(srcEngineType, srcEngineType_);
      DARABONBA_PTR_TO_JSON(taskDescription, taskDescription_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataCheckTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(checkTemplateId, checkTemplateId_);
      DARABONBA_PTR_FROM_JSON(dstDsId, dstDsId_);
      DARABONBA_PTR_FROM_JSON(dstDsName, dstDsName_);
      DARABONBA_PTR_FROM_JSON(dstDsType, dstDsType_);
      DARABONBA_PTR_FROM_JSON(dstEngineId, dstEngineId_);
      DARABONBA_PTR_FROM_JSON(dstEngineName, dstEngineName_);
      DARABONBA_PTR_FROM_JSON(dstEngineType, dstEngineType_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(srcDsId, srcDsId_);
      DARABONBA_PTR_FROM_JSON(srcDsName, srcDsName_);
      DARABONBA_PTR_FROM_JSON(srcDsType, srcDsType_);
      DARABONBA_PTR_FROM_JSON(srcEngineId, srcEngineId_);
      DARABONBA_PTR_FROM_JSON(srcEngineName, srcEngineName_);
      DARABONBA_PTR_FROM_JSON(srcEngineType, srcEngineType_);
      DARABONBA_PTR_FROM_JSON(taskDescription, taskDescription_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
    };
    UpdateDataCheckTaskRequest() = default ;
    UpdateDataCheckTaskRequest(const UpdateDataCheckTaskRequest &) = default ;
    UpdateDataCheckTaskRequest(UpdateDataCheckTaskRequest &&) = default ;
    UpdateDataCheckTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataCheckTaskRequest() = default ;
    UpdateDataCheckTaskRequest& operator=(const UpdateDataCheckTaskRequest &) = default ;
    UpdateDataCheckTaskRequest& operator=(UpdateDataCheckTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkTemplateId_ == nullptr
        && this->dstDsId_ == nullptr && this->dstDsName_ == nullptr && this->dstDsType_ == nullptr && this->dstEngineId_ == nullptr && this->dstEngineName_ == nullptr
        && this->dstEngineType_ == nullptr && this->id_ == nullptr && this->srcDsId_ == nullptr && this->srcDsName_ == nullptr && this->srcDsType_ == nullptr
        && this->srcEngineId_ == nullptr && this->srcEngineName_ == nullptr && this->srcEngineType_ == nullptr && this->taskDescription_ == nullptr && this->taskName_ == nullptr; };
    // checkTemplateId Field Functions 
    bool hasCheckTemplateId() const { return this->checkTemplateId_ != nullptr;};
    void deleteCheckTemplateId() { this->checkTemplateId_ = nullptr;};
    inline string getCheckTemplateId() const { DARABONBA_PTR_GET_DEFAULT(checkTemplateId_, "") };
    inline UpdateDataCheckTaskRequest& setCheckTemplateId(string checkTemplateId) { DARABONBA_PTR_SET_VALUE(checkTemplateId_, checkTemplateId) };


    // dstDsId Field Functions 
    bool hasDstDsId() const { return this->dstDsId_ != nullptr;};
    void deleteDstDsId() { this->dstDsId_ = nullptr;};
    inline string getDstDsId() const { DARABONBA_PTR_GET_DEFAULT(dstDsId_, "") };
    inline UpdateDataCheckTaskRequest& setDstDsId(string dstDsId) { DARABONBA_PTR_SET_VALUE(dstDsId_, dstDsId) };


    // dstDsName Field Functions 
    bool hasDstDsName() const { return this->dstDsName_ != nullptr;};
    void deleteDstDsName() { this->dstDsName_ = nullptr;};
    inline string getDstDsName() const { DARABONBA_PTR_GET_DEFAULT(dstDsName_, "") };
    inline UpdateDataCheckTaskRequest& setDstDsName(string dstDsName) { DARABONBA_PTR_SET_VALUE(dstDsName_, dstDsName) };


    // dstDsType Field Functions 
    bool hasDstDsType() const { return this->dstDsType_ != nullptr;};
    void deleteDstDsType() { this->dstDsType_ = nullptr;};
    inline string getDstDsType() const { DARABONBA_PTR_GET_DEFAULT(dstDsType_, "") };
    inline UpdateDataCheckTaskRequest& setDstDsType(string dstDsType) { DARABONBA_PTR_SET_VALUE(dstDsType_, dstDsType) };


    // dstEngineId Field Functions 
    bool hasDstEngineId() const { return this->dstEngineId_ != nullptr;};
    void deleteDstEngineId() { this->dstEngineId_ = nullptr;};
    inline string getDstEngineId() const { DARABONBA_PTR_GET_DEFAULT(dstEngineId_, "") };
    inline UpdateDataCheckTaskRequest& setDstEngineId(string dstEngineId) { DARABONBA_PTR_SET_VALUE(dstEngineId_, dstEngineId) };


    // dstEngineName Field Functions 
    bool hasDstEngineName() const { return this->dstEngineName_ != nullptr;};
    void deleteDstEngineName() { this->dstEngineName_ = nullptr;};
    inline string getDstEngineName() const { DARABONBA_PTR_GET_DEFAULT(dstEngineName_, "") };
    inline UpdateDataCheckTaskRequest& setDstEngineName(string dstEngineName) { DARABONBA_PTR_SET_VALUE(dstEngineName_, dstEngineName) };


    // dstEngineType Field Functions 
    bool hasDstEngineType() const { return this->dstEngineType_ != nullptr;};
    void deleteDstEngineType() { this->dstEngineType_ = nullptr;};
    inline string getDstEngineType() const { DARABONBA_PTR_GET_DEFAULT(dstEngineType_, "") };
    inline UpdateDataCheckTaskRequest& setDstEngineType(string dstEngineType) { DARABONBA_PTR_SET_VALUE(dstEngineType_, dstEngineType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateDataCheckTaskRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // srcDsId Field Functions 
    bool hasSrcDsId() const { return this->srcDsId_ != nullptr;};
    void deleteSrcDsId() { this->srcDsId_ = nullptr;};
    inline string getSrcDsId() const { DARABONBA_PTR_GET_DEFAULT(srcDsId_, "") };
    inline UpdateDataCheckTaskRequest& setSrcDsId(string srcDsId) { DARABONBA_PTR_SET_VALUE(srcDsId_, srcDsId) };


    // srcDsName Field Functions 
    bool hasSrcDsName() const { return this->srcDsName_ != nullptr;};
    void deleteSrcDsName() { this->srcDsName_ = nullptr;};
    inline string getSrcDsName() const { DARABONBA_PTR_GET_DEFAULT(srcDsName_, "") };
    inline UpdateDataCheckTaskRequest& setSrcDsName(string srcDsName) { DARABONBA_PTR_SET_VALUE(srcDsName_, srcDsName) };


    // srcDsType Field Functions 
    bool hasSrcDsType() const { return this->srcDsType_ != nullptr;};
    void deleteSrcDsType() { this->srcDsType_ = nullptr;};
    inline string getSrcDsType() const { DARABONBA_PTR_GET_DEFAULT(srcDsType_, "") };
    inline UpdateDataCheckTaskRequest& setSrcDsType(string srcDsType) { DARABONBA_PTR_SET_VALUE(srcDsType_, srcDsType) };


    // srcEngineId Field Functions 
    bool hasSrcEngineId() const { return this->srcEngineId_ != nullptr;};
    void deleteSrcEngineId() { this->srcEngineId_ = nullptr;};
    inline string getSrcEngineId() const { DARABONBA_PTR_GET_DEFAULT(srcEngineId_, "") };
    inline UpdateDataCheckTaskRequest& setSrcEngineId(string srcEngineId) { DARABONBA_PTR_SET_VALUE(srcEngineId_, srcEngineId) };


    // srcEngineName Field Functions 
    bool hasSrcEngineName() const { return this->srcEngineName_ != nullptr;};
    void deleteSrcEngineName() { this->srcEngineName_ = nullptr;};
    inline string getSrcEngineName() const { DARABONBA_PTR_GET_DEFAULT(srcEngineName_, "") };
    inline UpdateDataCheckTaskRequest& setSrcEngineName(string srcEngineName) { DARABONBA_PTR_SET_VALUE(srcEngineName_, srcEngineName) };


    // srcEngineType Field Functions 
    bool hasSrcEngineType() const { return this->srcEngineType_ != nullptr;};
    void deleteSrcEngineType() { this->srcEngineType_ = nullptr;};
    inline string getSrcEngineType() const { DARABONBA_PTR_GET_DEFAULT(srcEngineType_, "") };
    inline UpdateDataCheckTaskRequest& setSrcEngineType(string srcEngineType) { DARABONBA_PTR_SET_VALUE(srcEngineType_, srcEngineType) };


    // taskDescription Field Functions 
    bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
    void deleteTaskDescription() { this->taskDescription_ = nullptr;};
    inline string getTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
    inline UpdateDataCheckTaskRequest& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline UpdateDataCheckTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The ID of the validation template. If this field is not specified, the original value is retained.
    shared_ptr<string> checkTemplateId_ {};
    // The ID of the destination data source.
    shared_ptr<string> dstDsId_ {};
    // The name of the destination data source.
    shared_ptr<string> dstDsName_ {};
    // The type of the destination data source.
    shared_ptr<string> dstDsType_ {};
    // The ID of the destination validation engine.
    shared_ptr<string> dstEngineId_ {};
    // The name of the destination validation engine.
    shared_ptr<string> dstEngineName_ {};
    // The type of the destination validation engine.
    shared_ptr<string> dstEngineType_ {};
    // The ID of the task to modify. This field is required.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The ID of the source data source.
    shared_ptr<string> srcDsId_ {};
    // The name of the source data source.
    shared_ptr<string> srcDsName_ {};
    // The type of the source data source.
    shared_ptr<string> srcDsType_ {};
    // The ID of the source validation engine.
    shared_ptr<string> srcEngineId_ {};
    // The name of the source validation engine.
    shared_ptr<string> srcEngineName_ {};
    // The type of the source validation engine.
    shared_ptr<string> srcEngineType_ {};
    // The description of the task.
    shared_ptr<string> taskDescription_ {};
    // The name of the task. Only Chinese characters, English letters, and digits are supported.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
