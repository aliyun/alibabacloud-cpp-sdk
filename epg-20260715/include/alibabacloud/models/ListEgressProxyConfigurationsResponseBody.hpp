// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEGRESSPROXYCONFIGURATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEGRESSPROXYCONFIGURATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class ListEgressProxyConfigurationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEgressProxyConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EgressProxyConfigurations, egressProxyConfigurations_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEgressProxyConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EgressProxyConfigurations, egressProxyConfigurations_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListEgressProxyConfigurationsResponseBody() = default ;
    ListEgressProxyConfigurationsResponseBody(const ListEgressProxyConfigurationsResponseBody &) = default ;
    ListEgressProxyConfigurationsResponseBody(ListEgressProxyConfigurationsResponseBody &&) = default ;
    ListEgressProxyConfigurationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEgressProxyConfigurationsResponseBody() = default ;
    ListEgressProxyConfigurationsResponseBody& operator=(const ListEgressProxyConfigurationsResponseBody &) = default ;
    ListEgressProxyConfigurationsResponseBody& operator=(ListEgressProxyConfigurationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EgressProxyConfigurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EgressProxyConfigurations& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EgressProxyConfigurationId, egressProxyConfigurationId_);
        DARABONBA_PTR_TO_JSON(EgressProxyConfigurationName, egressProxyConfigurationName_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, EgressProxyConfigurations& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EgressProxyConfigurationId, egressProxyConfigurationId_);
        DARABONBA_PTR_FROM_JSON(EgressProxyConfigurationName, egressProxyConfigurationName_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      EgressProxyConfigurations() = default ;
      EgressProxyConfigurations(const EgressProxyConfigurations &) = default ;
      EgressProxyConfigurations(EgressProxyConfigurations &&) = default ;
      EgressProxyConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EgressProxyConfigurations() = default ;
      EgressProxyConfigurations& operator=(const EgressProxyConfigurations &) = default ;
      EgressProxyConfigurations& operator=(EgressProxyConfigurations &&) = default ;
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
        // The tag key. The key can be up to 128 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
        shared_ptr<string> key_ {};
        // The tag value. The value can be up to 256 characters in length and cannot contain `http://` or `https://`.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->egressProxyConfigurationId_ == nullptr && this->egressProxyConfigurationName_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline EgressProxyConfigurations& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline EgressProxyConfigurations& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // egressProxyConfigurationId Field Functions 
      bool hasEgressProxyConfigurationId() const { return this->egressProxyConfigurationId_ != nullptr;};
      void deleteEgressProxyConfigurationId() { this->egressProxyConfigurationId_ = nullptr;};
      inline string getEgressProxyConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyConfigurationId_, "") };
      inline EgressProxyConfigurations& setEgressProxyConfigurationId(string egressProxyConfigurationId) { DARABONBA_PTR_SET_VALUE(egressProxyConfigurationId_, egressProxyConfigurationId) };


      // egressProxyConfigurationName Field Functions 
      bool hasEgressProxyConfigurationName() const { return this->egressProxyConfigurationName_ != nullptr;};
      void deleteEgressProxyConfigurationName() { this->egressProxyConfigurationName_ = nullptr;};
      inline string getEgressProxyConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(egressProxyConfigurationName_, "") };
      inline EgressProxyConfigurations& setEgressProxyConfigurationName(string egressProxyConfigurationName) { DARABONBA_PTR_SET_VALUE(egressProxyConfigurationName_, egressProxyConfigurationName) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline EgressProxyConfigurations& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline EgressProxyConfigurations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<EgressProxyConfigurations::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<EgressProxyConfigurations::Tags>) };
      inline vector<EgressProxyConfigurations::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<EgressProxyConfigurations::Tags>) };
      inline EgressProxyConfigurations& setTags(const vector<EgressProxyConfigurations::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline EgressProxyConfigurations& setTags(vector<EgressProxyConfigurations::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The time when the egress proxy configuration was created. The time is displayed in UTC in the yyyy-MM-ddTHH:mm:ssZ format.
      shared_ptr<string> createTime_ {};
      // The description of the egress proxy configuration. The description must be 2 to 256 characters in length, and can contain Chinese characters, letters, digits, hyphens (-), forward slashes (/), periods (.), and underscores (_).
      shared_ptr<string> description_ {};
      // The ID of the egress proxy configuration.
      shared_ptr<string> egressProxyConfigurationId_ {};
      // The name of the egress proxy configuration. The name must be 2 to 128 characters in length, and must start with a letter or a Chinese character. It can contain digits, periods (.), underscores (_), and hyphens (-).
      shared_ptr<string> egressProxyConfigurationName_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The status of the egress proxy configuration. Valid values:
      // 
      // - **Provisioning**: The egress proxy configuration is being created.
      // 
      // - **Available**: The egress proxy configuration is available.
      // 
      // - **Configuring**: The specifications of the egress proxy configuration are being changed.
      shared_ptr<string> status_ {};
      // The list of tags.
      shared_ptr<vector<EgressProxyConfigurations::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->egressProxyConfigurations_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // egressProxyConfigurations Field Functions 
    bool hasEgressProxyConfigurations() const { return this->egressProxyConfigurations_ != nullptr;};
    void deleteEgressProxyConfigurations() { this->egressProxyConfigurations_ = nullptr;};
    inline const vector<ListEgressProxyConfigurationsResponseBody::EgressProxyConfigurations> & getEgressProxyConfigurations() const { DARABONBA_PTR_GET_CONST(egressProxyConfigurations_, vector<ListEgressProxyConfigurationsResponseBody::EgressProxyConfigurations>) };
    inline vector<ListEgressProxyConfigurationsResponseBody::EgressProxyConfigurations> getEgressProxyConfigurations() { DARABONBA_PTR_GET(egressProxyConfigurations_, vector<ListEgressProxyConfigurationsResponseBody::EgressProxyConfigurations>) };
    inline ListEgressProxyConfigurationsResponseBody& setEgressProxyConfigurations(const vector<ListEgressProxyConfigurationsResponseBody::EgressProxyConfigurations> & egressProxyConfigurations) { DARABONBA_PTR_SET_VALUE(egressProxyConfigurations_, egressProxyConfigurations) };
    inline ListEgressProxyConfigurationsResponseBody& setEgressProxyConfigurations(vector<ListEgressProxyConfigurationsResponseBody::EgressProxyConfigurations> && egressProxyConfigurations) { DARABONBA_PTR_SET_RVALUE(egressProxyConfigurations_, egressProxyConfigurations) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListEgressProxyConfigurationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEgressProxyConfigurationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEgressProxyConfigurationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListEgressProxyConfigurationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of egress proxy configurations.
    shared_ptr<vector<ListEgressProxyConfigurationsResponseBody::EgressProxyConfigurations>> egressProxyConfigurations_ {};
    // The maximum number of entries returned for the current request.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. Valid values:
    // 
    // - If NextToken is empty, no next query is required.
    // - If NextToken is returned, the value indicates the token for the next query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of egress proxy configurations that meet the query conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
