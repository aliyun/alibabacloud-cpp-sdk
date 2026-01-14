// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEAICOACHTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEAICOACHTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class StudentList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StudentList& obj) { 
        DARABONBA_PTR_TO_JSON(studentAudioUrl, studentAudioUrl_);
        DARABONBA_PTR_TO_JSON(studentId, studentId_);
      };
      friend void from_json(const Darabonba::Json& j, StudentList& obj) { 
        DARABONBA_PTR_FROM_JSON(studentAudioUrl, studentAudioUrl_);
        DARABONBA_PTR_FROM_JSON(studentId, studentId_);
      };
      StudentList() = default ;
      StudentList(const StudentList &) = default ;
      StudentList(StudentList &&) = default ;
      StudentList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StudentList() = default ;
      StudentList& operator=(const StudentList &) = default ;
      StudentList& operator=(StudentList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->studentAudioUrl_ == nullptr
        && this->studentId_ == nullptr; };
      // studentAudioUrl Field Functions 
      bool hasStudentAudioUrl() const { return this->studentAudioUrl_ != nullptr;};
      void deleteStudentAudioUrl() { this->studentAudioUrl_ = nullptr;};
      inline string getStudentAudioUrl() const { DARABONBA_PTR_GET_DEFAULT(studentAudioUrl_, "") };
      inline StudentList& setStudentAudioUrl(string studentAudioUrl) { DARABONBA_PTR_SET_VALUE(studentAudioUrl_, studentAudioUrl) };


      // studentId Field Functions 
      bool hasStudentId() const { return this->studentId_ != nullptr;};
      void deleteStudentId() { this->studentId_ = nullptr;};
      inline string getStudentId() const { DARABONBA_PTR_GET_DEFAULT(studentId_, "") };
      inline StudentList& setStudentId(string studentId) { DARABONBA_PTR_SET_VALUE(studentId_, studentId) };


    protected:
      shared_ptr<string> studentAudioUrl_ {};
      shared_ptr<string> studentId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->scriptRecordId_ == nullptr && this->studentIds_ == nullptr && this->studentList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchCreateAICoachTaskRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scriptRecordId Field Functions 
    bool hasScriptRecordId() const { return this->scriptRecordId_ != nullptr;};
    void deleteScriptRecordId() { this->scriptRecordId_ = nullptr;};
    inline string getScriptRecordId() const { DARABONBA_PTR_GET_DEFAULT(scriptRecordId_, "") };
    inline BatchCreateAICoachTaskRequest& setScriptRecordId(string scriptRecordId) { DARABONBA_PTR_SET_VALUE(scriptRecordId_, scriptRecordId) };


    // studentIds Field Functions 
    bool hasStudentIds() const { return this->studentIds_ != nullptr;};
    void deleteStudentIds() { this->studentIds_ = nullptr;};
    inline const vector<string> & getStudentIds() const { DARABONBA_PTR_GET_CONST(studentIds_, vector<string>) };
    inline vector<string> getStudentIds() { DARABONBA_PTR_GET(studentIds_, vector<string>) };
    inline BatchCreateAICoachTaskRequest& setStudentIds(const vector<string> & studentIds) { DARABONBA_PTR_SET_VALUE(studentIds_, studentIds) };
    inline BatchCreateAICoachTaskRequest& setStudentIds(vector<string> && studentIds) { DARABONBA_PTR_SET_RVALUE(studentIds_, studentIds) };


    // studentList Field Functions 
    bool hasStudentList() const { return this->studentList_ != nullptr;};
    void deleteStudentList() { this->studentList_ = nullptr;};
    inline const vector<BatchCreateAICoachTaskRequest::StudentList> & getStudentList() const { DARABONBA_PTR_GET_CONST(studentList_, vector<BatchCreateAICoachTaskRequest::StudentList>) };
    inline vector<BatchCreateAICoachTaskRequest::StudentList> getStudentList() { DARABONBA_PTR_GET(studentList_, vector<BatchCreateAICoachTaskRequest::StudentList>) };
    inline BatchCreateAICoachTaskRequest& setStudentList(const vector<BatchCreateAICoachTaskRequest::StudentList> & studentList) { DARABONBA_PTR_SET_VALUE(studentList_, studentList) };
    inline BatchCreateAICoachTaskRequest& setStudentList(vector<BatchCreateAICoachTaskRequest::StudentList> && studentList) { DARABONBA_PTR_SET_RVALUE(studentList_, studentList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> scriptRecordId_ {};
    shared_ptr<vector<string>> studentIds_ {};
    shared_ptr<vector<BatchCreateAICoachTaskRequest::StudentList>> studentList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
