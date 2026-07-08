// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLOWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFLOWSRESPONSEBODY_HPP_
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
  class ListFlowsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlowsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Flows, flows_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlowsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Flows, flows_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFlowsResponseBody() = default ;
    ListFlowsResponseBody(const ListFlowsResponseBody &) = default ;
    ListFlowsResponseBody(ListFlowsResponseBody &&) = default ;
    ListFlowsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlowsResponseBody() = default ;
    ListFlowsResponseBody& operator=(const ListFlowsResponseBody &) = default ;
    ListFlowsResponseBody& operator=(ListFlowsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Flows : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Flows& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(FlowDesc, flowDesc_);
        DARABONBA_PTR_TO_JSON(FlowId, flowId_);
        DARABONBA_PTR_TO_JSON(FlowName, flowName_);
        DARABONBA_PTR_TO_JSON(FlowTemplate, flowTemplate_);
        DARABONBA_PTR_TO_JSON(FlowVersion, flowVersion_);
        DARABONBA_PTR_TO_JSON(FlowVersionStatus, flowVersionStatus_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(ReleasedVersion, releasedVersion_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(WebhookUrl, webhookUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Flows& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(FlowDesc, flowDesc_);
        DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
        DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
        DARABONBA_PTR_FROM_JSON(FlowTemplate, flowTemplate_);
        DARABONBA_PTR_FROM_JSON(FlowVersion, flowVersion_);
        DARABONBA_PTR_FROM_JSON(FlowVersionStatus, flowVersionStatus_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(ReleasedVersion, releasedVersion_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(WebhookUrl, webhookUrl_);
      };
      Flows() = default ;
      Flows(const Flows &) = default ;
      Flows(Flows &&) = default ;
      Flows(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Flows() = default ;
      Flows& operator=(const Flows &) = default ;
      Flows& operator=(Flows &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key. The tag key can be up to 64 characters in length.
        shared_ptr<string> key_ {};
        // The tag values.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->flowDesc_ == nullptr && this->flowId_ == nullptr && this->flowName_ == nullptr && this->flowTemplate_ == nullptr && this->flowVersion_ == nullptr
        && this->flowVersionStatus_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->releasedVersion_ == nullptr && this->tags_ == nullptr
        && this->webhookUrl_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Flows& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // flowDesc Field Functions 
      bool hasFlowDesc() const { return this->flowDesc_ != nullptr;};
      void deleteFlowDesc() { this->flowDesc_ = nullptr;};
      inline string getFlowDesc() const { DARABONBA_PTR_GET_DEFAULT(flowDesc_, "") };
      inline Flows& setFlowDesc(string flowDesc) { DARABONBA_PTR_SET_VALUE(flowDesc_, flowDesc) };


      // flowId Field Functions 
      bool hasFlowId() const { return this->flowId_ != nullptr;};
      void deleteFlowId() { this->flowId_ = nullptr;};
      inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
      inline Flows& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


      // flowName Field Functions 
      bool hasFlowName() const { return this->flowName_ != nullptr;};
      void deleteFlowName() { this->flowName_ = nullptr;};
      inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
      inline Flows& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


      // flowTemplate Field Functions 
      bool hasFlowTemplate() const { return this->flowTemplate_ != nullptr;};
      void deleteFlowTemplate() { this->flowTemplate_ = nullptr;};
      inline string getFlowTemplate() const { DARABONBA_PTR_GET_DEFAULT(flowTemplate_, "") };
      inline Flows& setFlowTemplate(string flowTemplate) { DARABONBA_PTR_SET_VALUE(flowTemplate_, flowTemplate) };


      // flowVersion Field Functions 
      bool hasFlowVersion() const { return this->flowVersion_ != nullptr;};
      void deleteFlowVersion() { this->flowVersion_ = nullptr;};
      inline string getFlowVersion() const { DARABONBA_PTR_GET_DEFAULT(flowVersion_, "") };
      inline Flows& setFlowVersion(string flowVersion) { DARABONBA_PTR_SET_VALUE(flowVersion_, flowVersion) };


      // flowVersionStatus Field Functions 
      bool hasFlowVersionStatus() const { return this->flowVersionStatus_ != nullptr;};
      void deleteFlowVersionStatus() { this->flowVersionStatus_ = nullptr;};
      inline string getFlowVersionStatus() const { DARABONBA_PTR_GET_DEFAULT(flowVersionStatus_, "") };
      inline Flows& setFlowVersionStatus(string flowVersionStatus) { DARABONBA_PTR_SET_VALUE(flowVersionStatus_, flowVersionStatus) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Flows& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Flows& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // releasedVersion Field Functions 
      bool hasReleasedVersion() const { return this->releasedVersion_ != nullptr;};
      void deleteReleasedVersion() { this->releasedVersion_ = nullptr;};
      inline int32_t getReleasedVersion() const { DARABONBA_PTR_GET_DEFAULT(releasedVersion_, 0) };
      inline Flows& setReleasedVersion(int32_t releasedVersion) { DARABONBA_PTR_SET_VALUE(releasedVersion_, releasedVersion) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Flows::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Flows::Tags>) };
      inline vector<Flows::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Flows::Tags>) };
      inline Flows& setTags(const vector<Flows::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Flows& setTags(vector<Flows::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // webhookUrl Field Functions 
      bool hasWebhookUrl() const { return this->webhookUrl_ != nullptr;};
      void deleteWebhookUrl() { this->webhookUrl_ = nullptr;};
      inline string getWebhookUrl() const { DARABONBA_PTR_GET_DEFAULT(webhookUrl_, "") };
      inline Flows& setWebhookUrl(string webhookUrl) { DARABONBA_PTR_SET_VALUE(webhookUrl_, webhookUrl) };


    protected:
      // Indicates whether the connector flow is enabled.
      shared_ptr<bool> enabled_ {};
      // The connector flow description.
      shared_ptr<string> flowDesc_ {};
      // The connector flow ID.
      shared_ptr<string> flowId_ {};
      // The connector flow name.
      shared_ptr<string> flowName_ {};
      // The connector flow template content.
      shared_ptr<string> flowTemplate_ {};
      // The connector flow version.
      shared_ptr<string> flowVersion_ {};
      // The connector flow version status.
      shared_ptr<string> flowVersionStatus_ {};
      // The time when the connector flow was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the connector flow was last modified.
      shared_ptr<string> gmtModified_ {};
      // The released version number.
      shared_ptr<int32_t> releasedVersion_ {};
      // The tag values.
      shared_ptr<vector<Flows::Tags>> tags_ {};
      // The webhook URL.
      shared_ptr<string> webhookUrl_ {};
    };

    virtual bool empty() const override { return this->flows_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // flows Field Functions 
    bool hasFlows() const { return this->flows_ != nullptr;};
    void deleteFlows() { this->flows_ = nullptr;};
    inline const vector<ListFlowsResponseBody::Flows> & getFlows() const { DARABONBA_PTR_GET_CONST(flows_, vector<ListFlowsResponseBody::Flows>) };
    inline vector<ListFlowsResponseBody::Flows> getFlows() { DARABONBA_PTR_GET(flows_, vector<ListFlowsResponseBody::Flows>) };
    inline ListFlowsResponseBody& setFlows(const vector<ListFlowsResponseBody::Flows> & flows) { DARABONBA_PTR_SET_VALUE(flows_, flows) };
    inline ListFlowsResponseBody& setFlows(vector<ListFlowsResponseBody::Flows> && flows) { DARABONBA_PTR_SET_RVALUE(flows_, flows) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListFlowsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFlowsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFlowsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListFlowsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of connector flows.
    shared_ptr<vector<ListFlowsResponseBody::Flows>> flows_ {};
    // The page size.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Appflow20230904
#endif
