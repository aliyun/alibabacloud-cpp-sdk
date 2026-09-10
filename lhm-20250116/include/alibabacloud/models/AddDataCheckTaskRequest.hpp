// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATACHECKTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDATACHECKTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class AddDataCheckTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDataCheckTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(checkTemplateId, checkTemplateId_);
      DARABONBA_PTR_TO_JSON(checkType, checkType_);
      DARABONBA_PTR_TO_JSON(dstDsId, dstDsId_);
      DARABONBA_PTR_TO_JSON(dstDsName, dstDsName_);
      DARABONBA_PTR_TO_JSON(dstDsType, dstDsType_);
      DARABONBA_PTR_TO_JSON(srcDsId, srcDsId_);
      DARABONBA_PTR_TO_JSON(srcDsName, srcDsName_);
      DARABONBA_PTR_TO_JSON(srcDsType, srcDsType_);
      DARABONBA_PTR_TO_JSON(taskMode, taskMode_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, AddDataCheckTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(checkTemplateId, checkTemplateId_);
      DARABONBA_PTR_FROM_JSON(checkType, checkType_);
      DARABONBA_PTR_FROM_JSON(dstDsId, dstDsId_);
      DARABONBA_PTR_FROM_JSON(dstDsName, dstDsName_);
      DARABONBA_PTR_FROM_JSON(dstDsType, dstDsType_);
      DARABONBA_PTR_FROM_JSON(srcDsId, srcDsId_);
      DARABONBA_PTR_FROM_JSON(srcDsName, srcDsName_);
      DARABONBA_PTR_FROM_JSON(srcDsType, srcDsType_);
      DARABONBA_PTR_FROM_JSON(taskMode, taskMode_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
    };
    AddDataCheckTaskRequest() = default ;
    AddDataCheckTaskRequest(const AddDataCheckTaskRequest &) = default ;
    AddDataCheckTaskRequest(AddDataCheckTaskRequest &&) = default ;
    AddDataCheckTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDataCheckTaskRequest() = default ;
    AddDataCheckTaskRequest& operator=(const AddDataCheckTaskRequest &) = default ;
    AddDataCheckTaskRequest& operator=(AddDataCheckTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkTemplateId_ == nullptr
        && this->checkType_ == nullptr && this->dstDsId_ == nullptr && this->dstDsName_ == nullptr && this->dstDsType_ == nullptr && this->srcDsId_ == nullptr
        && this->srcDsName_ == nullptr && this->srcDsType_ == nullptr && this->taskMode_ == nullptr && this->taskName_ == nullptr; };
    // checkTemplateId Field Functions 
    bool hasCheckTemplateId() const { return this->checkTemplateId_ != nullptr;};
    void deleteCheckTemplateId() { this->checkTemplateId_ = nullptr;};
    inline string getCheckTemplateId() const { DARABONBA_PTR_GET_DEFAULT(checkTemplateId_, "") };
    inline AddDataCheckTaskRequest& setCheckTemplateId(string checkTemplateId) { DARABONBA_PTR_SET_VALUE(checkTemplateId_, checkTemplateId) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
    inline AddDataCheckTaskRequest& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // dstDsId Field Functions 
    bool hasDstDsId() const { return this->dstDsId_ != nullptr;};
    void deleteDstDsId() { this->dstDsId_ = nullptr;};
    inline string getDstDsId() const { DARABONBA_PTR_GET_DEFAULT(dstDsId_, "") };
    inline AddDataCheckTaskRequest& setDstDsId(string dstDsId) { DARABONBA_PTR_SET_VALUE(dstDsId_, dstDsId) };


    // dstDsName Field Functions 
    bool hasDstDsName() const { return this->dstDsName_ != nullptr;};
    void deleteDstDsName() { this->dstDsName_ = nullptr;};
    inline string getDstDsName() const { DARABONBA_PTR_GET_DEFAULT(dstDsName_, "") };
    inline AddDataCheckTaskRequest& setDstDsName(string dstDsName) { DARABONBA_PTR_SET_VALUE(dstDsName_, dstDsName) };


    // dstDsType Field Functions 
    bool hasDstDsType() const { return this->dstDsType_ != nullptr;};
    void deleteDstDsType() { this->dstDsType_ = nullptr;};
    inline string getDstDsType() const { DARABONBA_PTR_GET_DEFAULT(dstDsType_, "") };
    inline AddDataCheckTaskRequest& setDstDsType(string dstDsType) { DARABONBA_PTR_SET_VALUE(dstDsType_, dstDsType) };


    // srcDsId Field Functions 
    bool hasSrcDsId() const { return this->srcDsId_ != nullptr;};
    void deleteSrcDsId() { this->srcDsId_ = nullptr;};
    inline string getSrcDsId() const { DARABONBA_PTR_GET_DEFAULT(srcDsId_, "") };
    inline AddDataCheckTaskRequest& setSrcDsId(string srcDsId) { DARABONBA_PTR_SET_VALUE(srcDsId_, srcDsId) };


    // srcDsName Field Functions 
    bool hasSrcDsName() const { return this->srcDsName_ != nullptr;};
    void deleteSrcDsName() { this->srcDsName_ = nullptr;};
    inline string getSrcDsName() const { DARABONBA_PTR_GET_DEFAULT(srcDsName_, "") };
    inline AddDataCheckTaskRequest& setSrcDsName(string srcDsName) { DARABONBA_PTR_SET_VALUE(srcDsName_, srcDsName) };


    // srcDsType Field Functions 
    bool hasSrcDsType() const { return this->srcDsType_ != nullptr;};
    void deleteSrcDsType() { this->srcDsType_ = nullptr;};
    inline string getSrcDsType() const { DARABONBA_PTR_GET_DEFAULT(srcDsType_, "") };
    inline AddDataCheckTaskRequest& setSrcDsType(string srcDsType) { DARABONBA_PTR_SET_VALUE(srcDsType_, srcDsType) };


    // taskMode Field Functions 
    bool hasTaskMode() const { return this->taskMode_ != nullptr;};
    void deleteTaskMode() { this->taskMode_ = nullptr;};
    inline int32_t getTaskMode() const { DARABONBA_PTR_GET_DEFAULT(taskMode_, 0) };
    inline AddDataCheckTaskRequest& setTaskMode(int32_t taskMode) { DARABONBA_PTR_SET_VALUE(taskMode_, taskMode) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline AddDataCheckTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The validation template ID. If not specified, the built-in default template is used.
    shared_ptr<string> checkTemplateId_ {};
    // The validation type. Valid values:
    // 
    // - 0: data volume comparison.
    // - 1: metric comparison.
    // - 2: weak content comparison.
    // 
    // This parameter is required.
    shared_ptr<int32_t> checkType_ {};
    // The ID of the destination data source.
    // 
    // This parameter is required.
    shared_ptr<string> dstDsId_ {};
    // The name of the destination data source.
    shared_ptr<string> dstDsName_ {};
    // The type of the destination data source.
    // 
    // This parameter is required.
    shared_ptr<string> dstDsType_ {};
    // The ID of the source data source.
    // 
    // This parameter is required.
    shared_ptr<string> srcDsId_ {};
    // The name of the source data source.
    shared_ptr<string> srcDsName_ {};
    // The type of the source data source.
    // 
    // This parameter is required.
    shared_ptr<string> srcDsType_ {};
    // The table detail creation mode. Valid values:
    // 
    // - 0: table-by-table fine-grained creation.
    // - 1: batch creation with the same schema.
    // 
    // This parameter is required.
    shared_ptr<int32_t> taskMode_ {};
    // The task name. Only Chinese characters, English characters, and digits are supported.
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
