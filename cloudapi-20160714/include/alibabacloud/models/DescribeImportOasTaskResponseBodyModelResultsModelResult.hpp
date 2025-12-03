// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMPORTOASTASKRESPONSEBODYMODELRESULTSMODELRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMPORTOASTASKRESPONSEBODYMODELRESULTSMODELRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeImportOASTaskResponseBodyModelResultsModelResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImportOASTaskResponseBodyModelResultsModelResult& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(UpdateStatus, updateStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImportOASTaskResponseBodyModelResultsModelResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(UpdateStatus, updateStatus_);
    };
    DescribeImportOASTaskResponseBodyModelResultsModelResult() = default ;
    DescribeImportOASTaskResponseBodyModelResultsModelResult(const DescribeImportOASTaskResponseBodyModelResultsModelResult &) = default ;
    DescribeImportOASTaskResponseBodyModelResultsModelResult(DescribeImportOASTaskResponseBodyModelResultsModelResult &&) = default ;
    DescribeImportOASTaskResponseBodyModelResultsModelResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImportOASTaskResponseBodyModelResultsModelResult() = default ;
    DescribeImportOASTaskResponseBodyModelResultsModelResult& operator=(const DescribeImportOASTaskResponseBodyModelResultsModelResult &) = default ;
    DescribeImportOASTaskResponseBodyModelResultsModelResult& operator=(DescribeImportOASTaskResponseBodyModelResultsModelResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && return this->groupId_ == nullptr && return this->modelId_ == nullptr && return this->modelName_ == nullptr && return this->updateStatus_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeImportOASTaskResponseBodyModelResultsModelResult& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeImportOASTaskResponseBodyModelResultsModelResult& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline DescribeImportOASTaskResponseBodyModelResultsModelResult& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline DescribeImportOASTaskResponseBodyModelResultsModelResult& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // updateStatus Field Functions 
    bool hasUpdateStatus() const { return this->updateStatus_ != nullptr;};
    void deleteUpdateStatus() { this->updateStatus_ = nullptr;};
    inline string updateStatus() const { DARABONBA_PTR_GET_DEFAULT(updateStatus_, "") };
    inline DescribeImportOASTaskResponseBodyModelResultsModelResult& setUpdateStatus(string updateStatus) { DARABONBA_PTR_SET_VALUE(updateStatus_, updateStatus) };


  protected:
    // The cause of the failure if the model fails to be imported.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The API group ID.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the imported model.
    std::shared_ptr<string> modelId_ = nullptr;
    // The model name.
    std::shared_ptr<string> modelName_ = nullptr;
    // The execution status of the subtask. Valid values:
    // 
    // *   RUNNING
    // *   WAIT
    // *   OVER
    // *   FAIL
    // *   CANCEL
    std::shared_ptr<string> updateStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
