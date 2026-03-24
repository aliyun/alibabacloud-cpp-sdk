// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTHREADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTHREADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetThreadResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetThreadResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(attributes, attributes_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(threadId, threadId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetThreadResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(threadId, threadId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    GetThreadResponseBody() = default ;
    GetThreadResponseBody(const GetThreadResponseBody &) = default ;
    GetThreadResponseBody(GetThreadResponseBody &&) = default ;
    GetThreadResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetThreadResponseBody() = default ;
    GetThreadResponseBody& operator=(const GetThreadResponseBody &) = default ;
    GetThreadResponseBody& operator=(GetThreadResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Variables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Variables& obj) { 
        DARABONBA_PTR_TO_JSON(project, project_);
        DARABONBA_PTR_TO_JSON(workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, Variables& obj) { 
        DARABONBA_PTR_FROM_JSON(project, project_);
        DARABONBA_PTR_FROM_JSON(workspace, workspace_);
      };
      Variables() = default ;
      Variables(const Variables &) = default ;
      Variables(Variables &&) = default ;
      Variables(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Variables() = default ;
      Variables& operator=(const Variables &) = default ;
      Variables& operator=(Variables &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->project_ == nullptr
        && this->workspace_ == nullptr; };
      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
      inline Variables& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline Variables& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      // The name of the SLS project.
      shared_ptr<string> project_ {};
      // The name of the workspace.
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->attributes_ == nullptr
        && this->createTime_ == nullptr && this->digitalEmployeeName_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->threadId_ == nullptr
        && this->title_ == nullptr && this->updateTime_ == nullptr && this->variables_ == nullptr && this->version_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const map<string, string> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, map<string, string>) };
    inline map<string, string> getAttributes() { DARABONBA_PTR_GET(attributes_, map<string, string>) };
    inline GetThreadResponseBody& setAttributes(const map<string, string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline GetThreadResponseBody& setAttributes(map<string, string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetThreadResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // digitalEmployeeName Field Functions 
    bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
    void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
    inline string getDigitalEmployeeName() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeName_, "") };
    inline GetThreadResponseBody& setDigitalEmployeeName(string digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetThreadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetThreadResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline GetThreadResponseBody& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetThreadResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetThreadResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const GetThreadResponseBody::Variables & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, GetThreadResponseBody::Variables) };
    inline GetThreadResponseBody::Variables getVariables() { DARABONBA_PTR_GET(variables_, GetThreadResponseBody::Variables) };
    inline GetThreadResponseBody& setVariables(const GetThreadResponseBody::Variables & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline GetThreadResponseBody& setVariables(GetThreadResponseBody::Variables && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline GetThreadResponseBody& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The attributes.
    shared_ptr<map<string, string>> attributes_ {};
    // The time when the session was created.
    shared_ptr<string> createTime_ {};
    // The name of the digital employee.
    shared_ptr<string> digitalEmployeeName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The session status.
    shared_ptr<string> status_ {};
    // The session ID.
    shared_ptr<string> threadId_ {};
    // The session title.
    shared_ptr<string> title_ {};
    // The time when the thread was last updated.
    shared_ptr<string> updateTime_ {};
    // The session properties.
    shared_ptr<GetThreadResponseBody::Variables> variables_ {};
    // The version.
    shared_ptr<int64_t> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
