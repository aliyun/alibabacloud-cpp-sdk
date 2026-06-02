// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERAUTHCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERAUTHCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Appflow20230904
{
namespace Models
{
  class ListUserAuthConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserAuthConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserAuthConfigs, userAuthConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserAuthConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserAuthConfigs, userAuthConfigs_);
    };
    ListUserAuthConfigsResponseBody() = default ;
    ListUserAuthConfigsResponseBody(const ListUserAuthConfigsResponseBody &) = default ;
    ListUserAuthConfigsResponseBody(ListUserAuthConfigsResponseBody &&) = default ;
    ListUserAuthConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserAuthConfigsResponseBody() = default ;
    ListUserAuthConfigsResponseBody& operator=(const ListUserAuthConfigsResponseBody &) = default ;
    ListUserAuthConfigsResponseBody& operator=(ListUserAuthConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserAuthConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserAuthConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(AuthConfigId, authConfigId_);
        DARABONBA_PTR_TO_JSON(AuthConfigName, authConfigName_);
        DARABONBA_PTR_TO_JSON(AuthType, authType_);
        DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
        DARABONBA_PTR_TO_JSON(ConnectorVersion, connectorVersion_);
        DARABONBA_PTR_TO_JSON(FlowCount, flowCount_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      };
      friend void from_json(const Darabonba::Json& j, UserAuthConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthConfigId, authConfigId_);
        DARABONBA_PTR_FROM_JSON(AuthConfigName, authConfigName_);
        DARABONBA_PTR_FROM_JSON(AuthType, authType_);
        DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
        DARABONBA_PTR_FROM_JSON(ConnectorVersion, connectorVersion_);
        DARABONBA_PTR_FROM_JSON(FlowCount, flowCount_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      };
      UserAuthConfigs() = default ;
      UserAuthConfigs(const UserAuthConfigs &) = default ;
      UserAuthConfigs(UserAuthConfigs &&) = default ;
      UserAuthConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserAuthConfigs() = default ;
      UserAuthConfigs& operator=(const UserAuthConfigs &) = default ;
      UserAuthConfigs& operator=(UserAuthConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authConfigId_ == nullptr
        && this->authConfigName_ == nullptr && this->authType_ == nullptr && this->connectorId_ == nullptr && this->connectorVersion_ == nullptr && this->flowCount_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr; };
      // authConfigId Field Functions 
      bool hasAuthConfigId() const { return this->authConfigId_ != nullptr;};
      void deleteAuthConfigId() { this->authConfigId_ = nullptr;};
      inline string getAuthConfigId() const { DARABONBA_PTR_GET_DEFAULT(authConfigId_, "") };
      inline UserAuthConfigs& setAuthConfigId(string authConfigId) { DARABONBA_PTR_SET_VALUE(authConfigId_, authConfigId) };


      // authConfigName Field Functions 
      bool hasAuthConfigName() const { return this->authConfigName_ != nullptr;};
      void deleteAuthConfigName() { this->authConfigName_ = nullptr;};
      inline string getAuthConfigName() const { DARABONBA_PTR_GET_DEFAULT(authConfigName_, "") };
      inline UserAuthConfigs& setAuthConfigName(string authConfigName) { DARABONBA_PTR_SET_VALUE(authConfigName_, authConfigName) };


      // authType Field Functions 
      bool hasAuthType() const { return this->authType_ != nullptr;};
      void deleteAuthType() { this->authType_ = nullptr;};
      inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
      inline UserAuthConfigs& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


      // connectorId Field Functions 
      bool hasConnectorId() const { return this->connectorId_ != nullptr;};
      void deleteConnectorId() { this->connectorId_ = nullptr;};
      inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
      inline UserAuthConfigs& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


      // connectorVersion Field Functions 
      bool hasConnectorVersion() const { return this->connectorVersion_ != nullptr;};
      void deleteConnectorVersion() { this->connectorVersion_ = nullptr;};
      inline string getConnectorVersion() const { DARABONBA_PTR_GET_DEFAULT(connectorVersion_, "") };
      inline UserAuthConfigs& setConnectorVersion(string connectorVersion) { DARABONBA_PTR_SET_VALUE(connectorVersion_, connectorVersion) };


      // flowCount Field Functions 
      bool hasFlowCount() const { return this->flowCount_ != nullptr;};
      void deleteFlowCount() { this->flowCount_ = nullptr;};
      inline int32_t getFlowCount() const { DARABONBA_PTR_GET_DEFAULT(flowCount_, 0) };
      inline UserAuthConfigs& setFlowCount(int32_t flowCount) { DARABONBA_PTR_SET_VALUE(flowCount_, flowCount) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline UserAuthConfigs& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline UserAuthConfigs& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    protected:
      shared_ptr<string> authConfigId_ {};
      shared_ptr<string> authConfigName_ {};
      shared_ptr<string> authType_ {};
      shared_ptr<string> connectorId_ {};
      shared_ptr<string> connectorVersion_ {};
      shared_ptr<int32_t> flowCount_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->userAuthConfigs_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListUserAuthConfigsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUserAuthConfigsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserAuthConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUserAuthConfigsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userAuthConfigs Field Functions 
    bool hasUserAuthConfigs() const { return this->userAuthConfigs_ != nullptr;};
    void deleteUserAuthConfigs() { this->userAuthConfigs_ = nullptr;};
    inline const vector<ListUserAuthConfigsResponseBody::UserAuthConfigs> & getUserAuthConfigs() const { DARABONBA_PTR_GET_CONST(userAuthConfigs_, vector<ListUserAuthConfigsResponseBody::UserAuthConfigs>) };
    inline vector<ListUserAuthConfigsResponseBody::UserAuthConfigs> getUserAuthConfigs() { DARABONBA_PTR_GET(userAuthConfigs_, vector<ListUserAuthConfigsResponseBody::UserAuthConfigs>) };
    inline ListUserAuthConfigsResponseBody& setUserAuthConfigs(const vector<ListUserAuthConfigsResponseBody::UserAuthConfigs> & userAuthConfigs) { DARABONBA_PTR_SET_VALUE(userAuthConfigs_, userAuthConfigs) };
    inline ListUserAuthConfigsResponseBody& setUserAuthConfigs(vector<ListUserAuthConfigsResponseBody::UserAuthConfigs> && userAuthConfigs) { DARABONBA_PTR_SET_RVALUE(userAuthConfigs_, userAuthConfigs) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<vector<ListUserAuthConfigsResponseBody::UserAuthConfigs>> userAuthConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Appflow20230904
#endif
