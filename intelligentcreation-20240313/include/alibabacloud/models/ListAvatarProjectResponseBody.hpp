// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVATARPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAVATARPROJECTRESPONSEBODY_HPP_
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
  class ListAvatarProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvatarProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(queryAvatarProjectResultList, queryAvatarProjectResultList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvatarProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(queryAvatarProjectResultList, queryAvatarProjectResultList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListAvatarProjectResponseBody() = default ;
    ListAvatarProjectResponseBody(const ListAvatarProjectResponseBody &) = default ;
    ListAvatarProjectResponseBody(ListAvatarProjectResponseBody &&) = default ;
    ListAvatarProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvatarProjectResponseBody() = default ;
    ListAvatarProjectResponseBody& operator=(const ListAvatarProjectResponseBody &) = default ;
    ListAvatarProjectResponseBody& operator=(ListAvatarProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueryAvatarProjectResultList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryAvatarProjectResultList& obj) { 
        DARABONBA_PTR_TO_JSON(agentId, agentId_);
        DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(projectId, projectId_);
        DARABONBA_PTR_TO_JSON(projectName, projectName_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, QueryAvatarProjectResultList& obj) { 
        DARABONBA_PTR_FROM_JSON(agentId, agentId_);
        DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(projectId, projectId_);
        DARABONBA_PTR_FROM_JSON(projectName, projectName_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      QueryAvatarProjectResultList() = default ;
      QueryAvatarProjectResultList(const QueryAvatarProjectResultList &) = default ;
      QueryAvatarProjectResultList(QueryAvatarProjectResultList &&) = default ;
      QueryAvatarProjectResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryAvatarProjectResultList() = default ;
      QueryAvatarProjectResultList& operator=(const QueryAvatarProjectResultList &) = default ;
      QueryAvatarProjectResultList& operator=(QueryAvatarProjectResultList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->errorMsg_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr && this->status_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline QueryAvatarProjectResultList& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline QueryAvatarProjectResultList& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline QueryAvatarProjectResultList& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline QueryAvatarProjectResultList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline QueryAvatarProjectResultList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> agentId_ {};
      shared_ptr<string> errorMsg_ {};
      shared_ptr<string> projectId_ {};
      shared_ptr<string> projectName_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->queryAvatarProjectResultList_ == nullptr
        && this->requestId_ == nullptr; };
    // queryAvatarProjectResultList Field Functions 
    bool hasQueryAvatarProjectResultList() const { return this->queryAvatarProjectResultList_ != nullptr;};
    void deleteQueryAvatarProjectResultList() { this->queryAvatarProjectResultList_ = nullptr;};
    inline const vector<ListAvatarProjectResponseBody::QueryAvatarProjectResultList> & getQueryAvatarProjectResultList() const { DARABONBA_PTR_GET_CONST(queryAvatarProjectResultList_, vector<ListAvatarProjectResponseBody::QueryAvatarProjectResultList>) };
    inline vector<ListAvatarProjectResponseBody::QueryAvatarProjectResultList> getQueryAvatarProjectResultList() { DARABONBA_PTR_GET(queryAvatarProjectResultList_, vector<ListAvatarProjectResponseBody::QueryAvatarProjectResultList>) };
    inline ListAvatarProjectResponseBody& setQueryAvatarProjectResultList(const vector<ListAvatarProjectResponseBody::QueryAvatarProjectResultList> & queryAvatarProjectResultList) { DARABONBA_PTR_SET_VALUE(queryAvatarProjectResultList_, queryAvatarProjectResultList) };
    inline ListAvatarProjectResponseBody& setQueryAvatarProjectResultList(vector<ListAvatarProjectResponseBody::QueryAvatarProjectResultList> && queryAvatarProjectResultList) { DARABONBA_PTR_SET_RVALUE(queryAvatarProjectResultList_, queryAvatarProjectResultList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAvatarProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListAvatarProjectResponseBody::QueryAvatarProjectResultList>> queryAvatarProjectResultList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
