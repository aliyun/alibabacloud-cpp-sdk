// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSCONFIGURATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSCONFIGURATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class ListAccessConfigurationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessConfigurations, accessConfigurations_);
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCounts, totalCounts_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessConfigurations, accessConfigurations_);
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCounts, totalCounts_);
    };
    ListAccessConfigurationsResponseBody() = default ;
    ListAccessConfigurationsResponseBody(const ListAccessConfigurationsResponseBody &) = default ;
    ListAccessConfigurationsResponseBody(ListAccessConfigurationsResponseBody &&) = default ;
    ListAccessConfigurationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessConfigurationsResponseBody() = default ;
    ListAccessConfigurationsResponseBody& operator=(const ListAccessConfigurationsResponseBody &) = default ;
    ListAccessConfigurationsResponseBody& operator=(ListAccessConfigurationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessConfigurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessConfigurations& obj) { 
        DARABONBA_PTR_TO_JSON(AccessConfigurationId, accessConfigurationId_);
        DARABONBA_PTR_TO_JSON(AccessConfigurationName, accessConfigurationName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(RelayState, relayState_);
        DARABONBA_PTR_TO_JSON(SessionDuration, sessionDuration_);
        DARABONBA_PTR_TO_JSON(StatusNotifications, statusNotifications_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, AccessConfigurations& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessConfigurationId, accessConfigurationId_);
        DARABONBA_PTR_FROM_JSON(AccessConfigurationName, accessConfigurationName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(RelayState, relayState_);
        DARABONBA_PTR_FROM_JSON(SessionDuration, sessionDuration_);
        DARABONBA_PTR_FROM_JSON(StatusNotifications, statusNotifications_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      AccessConfigurations() = default ;
      AccessConfigurations(const AccessConfigurations &) = default ;
      AccessConfigurations(AccessConfigurations &&) = default ;
      AccessConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessConfigurations() = default ;
      AccessConfigurations& operator=(const AccessConfigurations &) = default ;
      AccessConfigurations& operator=(AccessConfigurations &&) = default ;
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
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->accessConfigurationId_ == nullptr
        && this->accessConfigurationName_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->relayState_ == nullptr && this->sessionDuration_ == nullptr
        && this->statusNotifications_ == nullptr && this->tags_ == nullptr && this->updateTime_ == nullptr; };
      // accessConfigurationId Field Functions 
      bool hasAccessConfigurationId() const { return this->accessConfigurationId_ != nullptr;};
      void deleteAccessConfigurationId() { this->accessConfigurationId_ = nullptr;};
      inline string getAccessConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationId_, "") };
      inline AccessConfigurations& setAccessConfigurationId(string accessConfigurationId) { DARABONBA_PTR_SET_VALUE(accessConfigurationId_, accessConfigurationId) };


      // accessConfigurationName Field Functions 
      bool hasAccessConfigurationName() const { return this->accessConfigurationName_ != nullptr;};
      void deleteAccessConfigurationName() { this->accessConfigurationName_ = nullptr;};
      inline string getAccessConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationName_, "") };
      inline AccessConfigurations& setAccessConfigurationName(string accessConfigurationName) { DARABONBA_PTR_SET_VALUE(accessConfigurationName_, accessConfigurationName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline AccessConfigurations& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AccessConfigurations& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // relayState Field Functions 
      bool hasRelayState() const { return this->relayState_ != nullptr;};
      void deleteRelayState() { this->relayState_ = nullptr;};
      inline string getRelayState() const { DARABONBA_PTR_GET_DEFAULT(relayState_, "") };
      inline AccessConfigurations& setRelayState(string relayState) { DARABONBA_PTR_SET_VALUE(relayState_, relayState) };


      // sessionDuration Field Functions 
      bool hasSessionDuration() const { return this->sessionDuration_ != nullptr;};
      void deleteSessionDuration() { this->sessionDuration_ = nullptr;};
      inline int32_t getSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(sessionDuration_, 0) };
      inline AccessConfigurations& setSessionDuration(int32_t sessionDuration) { DARABONBA_PTR_SET_VALUE(sessionDuration_, sessionDuration) };


      // statusNotifications Field Functions 
      bool hasStatusNotifications() const { return this->statusNotifications_ != nullptr;};
      void deleteStatusNotifications() { this->statusNotifications_ = nullptr;};
      inline const vector<string> & getStatusNotifications() const { DARABONBA_PTR_GET_CONST(statusNotifications_, vector<string>) };
      inline vector<string> getStatusNotifications() { DARABONBA_PTR_GET(statusNotifications_, vector<string>) };
      inline AccessConfigurations& setStatusNotifications(const vector<string> & statusNotifications) { DARABONBA_PTR_SET_VALUE(statusNotifications_, statusNotifications) };
      inline AccessConfigurations& setStatusNotifications(vector<string> && statusNotifications) { DARABONBA_PTR_SET_RVALUE(statusNotifications_, statusNotifications) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<AccessConfigurations::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<AccessConfigurations::Tags>) };
      inline vector<AccessConfigurations::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<AccessConfigurations::Tags>) };
      inline AccessConfigurations& setTags(const vector<AccessConfigurations::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline AccessConfigurations& setTags(vector<AccessConfigurations::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline AccessConfigurations& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The ID of the access configuration.
      shared_ptr<string> accessConfigurationId_ {};
      // The name of the access configuration.
      shared_ptr<string> accessConfigurationName_ {};
      // The time when the access configuration was created.
      shared_ptr<string> createTime_ {};
      // The description of the access configuration.
      shared_ptr<string> description_ {};
      // The initial access page.
      // 
      // The URL of the initial page that is displayed when a CloudSSO user uses the access configuration to access an account in a resource directory.
      shared_ptr<string> relayState_ {};
      // The session duration.
      // 
      // The maximum duration of a session when a CloudSSO user uses the access configuration to access an account in a resource directory.
      // 
      // Unit: seconds.
      shared_ptr<int32_t> sessionDuration_ {};
      // The status notification information.
      shared_ptr<vector<string>> statusNotifications_ {};
      // The list of tags.
      shared_ptr<vector<AccessConfigurations::Tags>> tags_ {};
      // The time when the access configuration was last modified.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->accessConfigurations_ == nullptr
        && this->isTruncated_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCounts_ == nullptr; };
    // accessConfigurations Field Functions 
    bool hasAccessConfigurations() const { return this->accessConfigurations_ != nullptr;};
    void deleteAccessConfigurations() { this->accessConfigurations_ = nullptr;};
    inline const vector<ListAccessConfigurationsResponseBody::AccessConfigurations> & getAccessConfigurations() const { DARABONBA_PTR_GET_CONST(accessConfigurations_, vector<ListAccessConfigurationsResponseBody::AccessConfigurations>) };
    inline vector<ListAccessConfigurationsResponseBody::AccessConfigurations> getAccessConfigurations() { DARABONBA_PTR_GET(accessConfigurations_, vector<ListAccessConfigurationsResponseBody::AccessConfigurations>) };
    inline ListAccessConfigurationsResponseBody& setAccessConfigurations(const vector<ListAccessConfigurationsResponseBody::AccessConfigurations> & accessConfigurations) { DARABONBA_PTR_SET_VALUE(accessConfigurations_, accessConfigurations) };
    inline ListAccessConfigurationsResponseBody& setAccessConfigurations(vector<ListAccessConfigurationsResponseBody::AccessConfigurations> && accessConfigurations) { DARABONBA_PTR_SET_RVALUE(accessConfigurations_, accessConfigurations) };


    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListAccessConfigurationsResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAccessConfigurationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAccessConfigurationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccessConfigurationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCounts Field Functions 
    bool hasTotalCounts() const { return this->totalCounts_ != nullptr;};
    void deleteTotalCounts() { this->totalCounts_ = nullptr;};
    inline int32_t getTotalCounts() const { DARABONBA_PTR_GET_DEFAULT(totalCounts_, 0) };
    inline ListAccessConfigurationsResponseBody& setTotalCounts(int32_t totalCounts) { DARABONBA_PTR_SET_VALUE(totalCounts_, totalCounts) };


  protected:
    // The list of access configurations.
    shared_ptr<vector<ListAccessConfigurationsResponseBody::AccessConfigurations>> accessConfigurations_ {};
    // Indicates whether the results are truncated. Valid values:
    // 
    // - true: The results are truncated.
    // - false: The results are not truncated.
    shared_ptr<bool> isTruncated_ {};
    // The maximum number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next page of results.
    // 
    // > This parameter is returned only when `IsTruncated` is `true`.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries that match the request parameters.
    shared_ptr<int32_t> totalCounts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
