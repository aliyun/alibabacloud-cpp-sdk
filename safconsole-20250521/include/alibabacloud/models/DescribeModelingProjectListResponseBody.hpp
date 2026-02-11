// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODELINGPROJECTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODELINGPROJECTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class DescribeModelingProjectListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModelingProjectListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModelingProjectListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeModelingProjectListResponseBody() = default ;
    DescribeModelingProjectListResponseBody(const DescribeModelingProjectListResponseBody &) = default ;
    DescribeModelingProjectListResponseBody(DescribeModelingProjectListResponseBody &&) = default ;
    DescribeModelingProjectListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModelingProjectListResponseBody() = default ;
    DescribeModelingProjectListResponseBody& operator=(const DescribeModelingProjectListResponseBody &) = default ;
    DescribeModelingProjectListResponseBody& operator=(DescribeModelingProjectListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(EnvStatus, envStatus_);
        DARABONBA_PTR_TO_JSON(LoginAccount, loginAccount_);
        DARABONBA_PTR_TO_JSON(ModelingStatus, modelingStatus_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(EnvStatus, envStatus_);
        DARABONBA_PTR_FROM_JSON(LoginAccount, loginAccount_);
        DARABONBA_PTR_FROM_JSON(ModelingStatus, modelingStatus_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->envStatus_ == nullptr && this->loginAccount_ == nullptr && this->modelingStatus_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr
        && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline ResultObject& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // envStatus Field Functions 
      bool hasEnvStatus() const { return this->envStatus_ != nullptr;};
      void deleteEnvStatus() { this->envStatus_ = nullptr;};
      inline string getEnvStatus() const { DARABONBA_PTR_GET_DEFAULT(envStatus_, "") };
      inline ResultObject& setEnvStatus(string envStatus) { DARABONBA_PTR_SET_VALUE(envStatus_, envStatus) };


      // loginAccount Field Functions 
      bool hasLoginAccount() const { return this->loginAccount_ != nullptr;};
      void deleteLoginAccount() { this->loginAccount_ = nullptr;};
      inline string getLoginAccount() const { DARABONBA_PTR_GET_DEFAULT(loginAccount_, "") };
      inline ResultObject& setLoginAccount(string loginAccount) { DARABONBA_PTR_SET_VALUE(loginAccount_, loginAccount) };


      // modelingStatus Field Functions 
      bool hasModelingStatus() const { return this->modelingStatus_ != nullptr;};
      void deleteModelingStatus() { this->modelingStatus_ = nullptr;};
      inline string getModelingStatus() const { DARABONBA_PTR_GET_DEFAULT(modelingStatus_, "") };
      inline ResultObject& setModelingStatus(string modelingStatus) { DARABONBA_PTR_SET_VALUE(modelingStatus_, modelingStatus) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline ResultObject& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline ResultObject& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline ResultObject& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // End time of the secure modeling project.
      shared_ptr<int64_t> endTime_ {};
      // Secure environment status.
      shared_ptr<string> envStatus_ {};
      // Login account.
      shared_ptr<string> loginAccount_ {};
      // Modeling project status.
      shared_ptr<string> modelingStatus_ {};
      // Project ID.
      shared_ptr<string> projectId_ {};
      // Project name.
      shared_ptr<string> projectName_ {};
      // Start time of the secure modeling project.
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr && this->success_ == nullptr
        && this->totalItem_ == nullptr && this->totalPage_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline DescribeModelingProjectListResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline DescribeModelingProjectListResponseBody& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeModelingProjectListResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeModelingProjectListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeModelingProjectListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeModelingProjectListResponseBody::ResultObject>) };
    inline vector<DescribeModelingProjectListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeModelingProjectListResponseBody::ResultObject>) };
    inline DescribeModelingProjectListResponseBody& setResultObject(const vector<DescribeModelingProjectListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeModelingProjectListResponseBody& setResultObject(vector<DescribeModelingProjectListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeModelingProjectListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int64_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0L) };
    inline DescribeModelingProjectListResponseBody& setTotalItem(int64_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline DescribeModelingProjectListResponseBody& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Status code. A return value of 200 indicates success.
    shared_ptr<int64_t> code_ {};
    // Current page.
    shared_ptr<int64_t> currentPage_ {};
    // Pagination parameter: number of items per page, with a default value of 10.
    shared_ptr<int64_t> pageSize_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned result.
    shared_ptr<vector<DescribeModelingProjectListResponseBody::ResultObject>> resultObject_ {};
    // Indicates whether the call was successful.
    // 
    // - **true**: Call succeeded.
    // - **false**: Call failed.
    shared_ptr<bool> success_ {};
    // Total number of records.
    shared_ptr<int64_t> totalItem_ {};
    // Total number of pages.
    shared_ptr<int64_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
