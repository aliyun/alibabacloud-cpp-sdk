// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASCRIPTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASCRIPTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListAScriptsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAScriptsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AScripts, AScripts_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAScriptsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AScripts, AScripts_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAScriptsResponseBody() = default ;
    ListAScriptsResponseBody(const ListAScriptsResponseBody &) = default ;
    ListAScriptsResponseBody(ListAScriptsResponseBody &&) = default ;
    ListAScriptsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAScriptsResponseBody() = default ;
    ListAScriptsResponseBody& operator=(const ListAScriptsResponseBody &) = default ;
    ListAScriptsResponseBody& operator=(ListAScriptsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AScripts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AScripts& obj) { 
        DARABONBA_PTR_TO_JSON(AScriptId, AScriptId_);
        DARABONBA_PTR_TO_JSON(AScriptName, AScriptName_);
        DARABONBA_PTR_TO_JSON(AScriptStatus, AScriptStatus_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_TO_JSON(ScriptContent, scriptContent_);
      };
      friend void from_json(const Darabonba::Json& j, AScripts& obj) { 
        DARABONBA_PTR_FROM_JSON(AScriptId, AScriptId_);
        DARABONBA_PTR_FROM_JSON(AScriptName, AScriptName_);
        DARABONBA_PTR_FROM_JSON(AScriptStatus, AScriptStatus_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_FROM_JSON(ScriptContent, scriptContent_);
      };
      AScripts() = default ;
      AScripts(const AScripts &) = default ;
      AScripts(AScripts &&) = default ;
      AScripts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AScripts() = default ;
      AScripts& operator=(const AScripts &) = default ;
      AScripts& operator=(AScripts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->AScriptId_ == nullptr
        && this->AScriptName_ == nullptr && this->AScriptStatus_ == nullptr && this->enabled_ == nullptr && this->listenerId_ == nullptr && this->loadBalancerId_ == nullptr
        && this->scriptContent_ == nullptr; };
      // AScriptId Field Functions 
      bool hasAScriptId() const { return this->AScriptId_ != nullptr;};
      void deleteAScriptId() { this->AScriptId_ = nullptr;};
      inline string getAScriptId() const { DARABONBA_PTR_GET_DEFAULT(AScriptId_, "") };
      inline AScripts& setAScriptId(string AScriptId) { DARABONBA_PTR_SET_VALUE(AScriptId_, AScriptId) };


      // AScriptName Field Functions 
      bool hasAScriptName() const { return this->AScriptName_ != nullptr;};
      void deleteAScriptName() { this->AScriptName_ = nullptr;};
      inline string getAScriptName() const { DARABONBA_PTR_GET_DEFAULT(AScriptName_, "") };
      inline AScripts& setAScriptName(string AScriptName) { DARABONBA_PTR_SET_VALUE(AScriptName_, AScriptName) };


      // AScriptStatus Field Functions 
      bool hasAScriptStatus() const { return this->AScriptStatus_ != nullptr;};
      void deleteAScriptStatus() { this->AScriptStatus_ = nullptr;};
      inline string getAScriptStatus() const { DARABONBA_PTR_GET_DEFAULT(AScriptStatus_, "") };
      inline AScripts& setAScriptStatus(string AScriptStatus) { DARABONBA_PTR_SET_VALUE(AScriptStatus_, AScriptStatus) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline AScripts& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // listenerId Field Functions 
      bool hasListenerId() const { return this->listenerId_ != nullptr;};
      void deleteListenerId() { this->listenerId_ = nullptr;};
      inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
      inline AScripts& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


      // loadBalancerId Field Functions 
      bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
      void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
      inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
      inline AScripts& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


      // scriptContent Field Functions 
      bool hasScriptContent() const { return this->scriptContent_ != nullptr;};
      void deleteScriptContent() { this->scriptContent_ = nullptr;};
      inline string getScriptContent() const { DARABONBA_PTR_GET_DEFAULT(scriptContent_, "") };
      inline AScripts& setScriptContent(string scriptContent) { DARABONBA_PTR_SET_VALUE(scriptContent_, scriptContent) };


    protected:
      // The AScript rule ID.
      shared_ptr<string> AScriptId_ {};
      // The name of the AScript rule.
      shared_ptr<string> AScriptName_ {};
      // The status of the AScript rule. Valid values:
      // 
      // *   **Creating**
      // *   **Available**
      // *   **Configuring**
      // *   **Deleting**
      shared_ptr<string> AScriptStatus_ {};
      // Indicates whether the AScript rule is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> enabled_ {};
      // The listener ID.
      shared_ptr<string> listenerId_ {};
      // The Application Load Balancer (ALB) instance ID.
      shared_ptr<string> loadBalancerId_ {};
      // The content of the AScript rule.
      shared_ptr<string> scriptContent_ {};
    };

    virtual bool empty() const override { return this->AScripts_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // AScripts Field Functions 
    bool hasAScripts() const { return this->AScripts_ != nullptr;};
    void deleteAScripts() { this->AScripts_ = nullptr;};
    inline const vector<ListAScriptsResponseBody::AScripts> & getAScripts() const { DARABONBA_PTR_GET_CONST(AScripts_, vector<ListAScriptsResponseBody::AScripts>) };
    inline vector<ListAScriptsResponseBody::AScripts> getAScripts() { DARABONBA_PTR_GET(AScripts_, vector<ListAScriptsResponseBody::AScripts>) };
    inline ListAScriptsResponseBody& setAScripts(const vector<ListAScriptsResponseBody::AScripts> & aScripts) { DARABONBA_PTR_SET_VALUE(AScripts_, aScripts) };
    inline ListAScriptsResponseBody& setAScripts(vector<ListAScriptsResponseBody::AScripts> && aScripts) { DARABONBA_PTR_SET_RVALUE(AScripts_, aScripts) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAScriptsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAScriptsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAScriptsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAScriptsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The AScript rules.
    shared_ptr<vector<ListAScriptsResponseBody::AScripts>> AScripts_ {};
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is the token that determines the start point of the next query.
    // 
    // This parameter is required.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    // 
    // > This parameter is optional. By default, this parameter is not returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
