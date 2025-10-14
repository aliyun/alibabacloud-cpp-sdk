// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEAICOACHTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEAICOACHTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchCreateAICoachTaskRequestStudentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchCreateAICoachTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateAICoachTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scriptRecordId, scriptRecordId_);
      DARABONBA_PTR_TO_JSON(studentIds, studentIds_);
      DARABONBA_PTR_TO_JSON(studentList, studentList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateAICoachTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scriptRecordId, scriptRecordId_);
      DARABONBA_PTR_FROM_JSON(studentIds, studentIds_);
      DARABONBA_PTR_FROM_JSON(studentList, studentList_);
    };
    BatchCreateAICoachTaskRequest() = default ;
    BatchCreateAICoachTaskRequest(const BatchCreateAICoachTaskRequest &) = default ;
    BatchCreateAICoachTaskRequest(BatchCreateAICoachTaskRequest &&) = default ;
    BatchCreateAICoachTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateAICoachTaskRequest() = default ;
    BatchCreateAICoachTaskRequest& operator=(const BatchCreateAICoachTaskRequest &) = default ;
    BatchCreateAICoachTaskRequest& operator=(BatchCreateAICoachTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->scriptRecordId_ == nullptr && return this->studentIds_ == nullptr && return this->studentList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchCreateAICoachTaskRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scriptRecordId Field Functions 
    bool hasScriptRecordId() const { return this->scriptRecordId_ != nullptr;};
    void deleteScriptRecordId() { this->scriptRecordId_ = nullptr;};
    inline string scriptRecordId() const { DARABONBA_PTR_GET_DEFAULT(scriptRecordId_, "") };
    inline BatchCreateAICoachTaskRequest& setScriptRecordId(string scriptRecordId) { DARABONBA_PTR_SET_VALUE(scriptRecordId_, scriptRecordId) };


    // studentIds Field Functions 
    bool hasStudentIds() const { return this->studentIds_ != nullptr;};
    void deleteStudentIds() { this->studentIds_ = nullptr;};
    inline const vector<string> & studentIds() const { DARABONBA_PTR_GET_CONST(studentIds_, vector<string>) };
    inline vector<string> studentIds() { DARABONBA_PTR_GET(studentIds_, vector<string>) };
    inline BatchCreateAICoachTaskRequest& setStudentIds(const vector<string> & studentIds) { DARABONBA_PTR_SET_VALUE(studentIds_, studentIds) };
    inline BatchCreateAICoachTaskRequest& setStudentIds(vector<string> && studentIds) { DARABONBA_PTR_SET_RVALUE(studentIds_, studentIds) };


    // studentList Field Functions 
    bool hasStudentList() const { return this->studentList_ != nullptr;};
    void deleteStudentList() { this->studentList_ = nullptr;};
    inline const vector<BatchCreateAICoachTaskRequestStudentList> & studentList() const { DARABONBA_PTR_GET_CONST(studentList_, vector<BatchCreateAICoachTaskRequestStudentList>) };
    inline vector<BatchCreateAICoachTaskRequestStudentList> studentList() { DARABONBA_PTR_GET(studentList_, vector<BatchCreateAICoachTaskRequestStudentList>) };
    inline BatchCreateAICoachTaskRequest& setStudentList(const vector<BatchCreateAICoachTaskRequestStudentList> & studentList) { DARABONBA_PTR_SET_VALUE(studentList_, studentList) };
    inline BatchCreateAICoachTaskRequest& setStudentList(vector<BatchCreateAICoachTaskRequestStudentList> && studentList) { DARABONBA_PTR_SET_RVALUE(studentList_, studentList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> scriptRecordId_ = nullptr;
    std::shared_ptr<vector<string>> studentIds_ = nullptr;
    std::shared_ptr<vector<BatchCreateAICoachTaskRequestStudentList>> studentList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
