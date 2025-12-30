// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAUTHORIZEDPROJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAUTHORIZEDPROJECTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceAuthorizedProjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceAuthorizedProjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ProjectList, projectList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceAuthorizedProjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ProjectList, projectList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataServiceAuthorizedProjectsResponseBody() = default ;
    GetDataServiceAuthorizedProjectsResponseBody(const GetDataServiceAuthorizedProjectsResponseBody &) = default ;
    GetDataServiceAuthorizedProjectsResponseBody(GetDataServiceAuthorizedProjectsResponseBody &&) = default ;
    GetDataServiceAuthorizedProjectsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceAuthorizedProjectsResponseBody() = default ;
    GetDataServiceAuthorizedProjectsResponseBody& operator=(const GetDataServiceAuthorizedProjectsResponseBody &) = default ;
    GetDataServiceAuthorizedProjectsResponseBody& operator=(GetDataServiceAuthorizedProjectsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProjectList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProjectList& obj) { 
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(Role, role_);
      };
      friend void from_json(const Darabonba::Json& j, ProjectList& obj) { 
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
      };
      ProjectList() = default ;
      ProjectList(const ProjectList &) = default ;
      ProjectList(ProjectList &&) = default ;
      ProjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProjectList() = default ;
      ProjectList& operator=(const ProjectList &) = default ;
      ProjectList& operator=(ProjectList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->projectId_ == nullptr
        && this->projectName_ == nullptr && this->role_ == nullptr; };
      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int32_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
      inline ProjectList& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline ProjectList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline int32_t getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, 0) };
      inline ProjectList& setRole(int32_t role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      shared_ptr<int32_t> projectId_ {};
      shared_ptr<string> projectName_ {};
      shared_ptr<int32_t> role_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->projectList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDataServiceAuthorizedProjectsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDataServiceAuthorizedProjectsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDataServiceAuthorizedProjectsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // projectList Field Functions 
    bool hasProjectList() const { return this->projectList_ != nullptr;};
    void deleteProjectList() { this->projectList_ = nullptr;};
    inline const vector<GetDataServiceAuthorizedProjectsResponseBody::ProjectList> & getProjectList() const { DARABONBA_PTR_GET_CONST(projectList_, vector<GetDataServiceAuthorizedProjectsResponseBody::ProjectList>) };
    inline vector<GetDataServiceAuthorizedProjectsResponseBody::ProjectList> getProjectList() { DARABONBA_PTR_GET(projectList_, vector<GetDataServiceAuthorizedProjectsResponseBody::ProjectList>) };
    inline GetDataServiceAuthorizedProjectsResponseBody& setProjectList(const vector<GetDataServiceAuthorizedProjectsResponseBody::ProjectList> & projectList) { DARABONBA_PTR_SET_VALUE(projectList_, projectList) };
    inline GetDataServiceAuthorizedProjectsResponseBody& setProjectList(vector<GetDataServiceAuthorizedProjectsResponseBody::ProjectList> && projectList) { DARABONBA_PTR_SET_RVALUE(projectList_, projectList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataServiceAuthorizedProjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataServiceAuthorizedProjectsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<GetDataServiceAuthorizedProjectsResponseBody::ProjectList>> projectList_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
