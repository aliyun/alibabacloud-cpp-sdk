// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEGRESSPROXYGATEWAYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEGRESSPROXYGATEWAYSRESPONSEBODY_HPP_
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
  class ListEgressProxyGatewaysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEgressProxyGatewaysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EgressProxyGateways, egressProxyGateways_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEgressProxyGatewaysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EgressProxyGateways, egressProxyGateways_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListEgressProxyGatewaysResponseBody() = default ;
    ListEgressProxyGatewaysResponseBody(const ListEgressProxyGatewaysResponseBody &) = default ;
    ListEgressProxyGatewaysResponseBody(ListEgressProxyGatewaysResponseBody &&) = default ;
    ListEgressProxyGatewaysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEgressProxyGatewaysResponseBody() = default ;
    ListEgressProxyGatewaysResponseBody& operator=(const ListEgressProxyGatewaysResponseBody &) = default ;
    ListEgressProxyGatewaysResponseBody& operator=(ListEgressProxyGatewaysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EgressProxyGateways : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EgressProxyGateways& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DefaultEgressProxyIpPoolId, defaultEgressProxyIpPoolId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EgressProxyConfigurationId, egressProxyConfigurationId_);
        DARABONBA_PTR_TO_JSON(EgressProxyGatewayId, egressProxyGatewayId_);
        DARABONBA_PTR_TO_JSON(EgressProxyGatewayName, egressProxyGatewayName_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, EgressProxyGateways& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DefaultEgressProxyIpPoolId, defaultEgressProxyIpPoolId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EgressProxyConfigurationId, egressProxyConfigurationId_);
        DARABONBA_PTR_FROM_JSON(EgressProxyGatewayId, egressProxyGatewayId_);
        DARABONBA_PTR_FROM_JSON(EgressProxyGatewayName, egressProxyGatewayName_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      EgressProxyGateways() = default ;
      EgressProxyGateways(const EgressProxyGateways &) = default ;
      EgressProxyGateways(EgressProxyGateways &&) = default ;
      EgressProxyGateways(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EgressProxyGateways() = default ;
      EgressProxyGateways& operator=(const EgressProxyGateways &) = default ;
      EgressProxyGateways& operator=(EgressProxyGateways &&) = default ;
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
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->defaultEgressProxyIpPoolId_ == nullptr && this->description_ == nullptr && this->egressProxyConfigurationId_ == nullptr && this->egressProxyGatewayId_ == nullptr && this->egressProxyGatewayName_ == nullptr
        && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline EgressProxyGateways& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // defaultEgressProxyIpPoolId Field Functions 
      bool hasDefaultEgressProxyIpPoolId() const { return this->defaultEgressProxyIpPoolId_ != nullptr;};
      void deleteDefaultEgressProxyIpPoolId() { this->defaultEgressProxyIpPoolId_ = nullptr;};
      inline string getDefaultEgressProxyIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(defaultEgressProxyIpPoolId_, "") };
      inline EgressProxyGateways& setDefaultEgressProxyIpPoolId(string defaultEgressProxyIpPoolId) { DARABONBA_PTR_SET_VALUE(defaultEgressProxyIpPoolId_, defaultEgressProxyIpPoolId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline EgressProxyGateways& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // egressProxyConfigurationId Field Functions 
      bool hasEgressProxyConfigurationId() const { return this->egressProxyConfigurationId_ != nullptr;};
      void deleteEgressProxyConfigurationId() { this->egressProxyConfigurationId_ = nullptr;};
      inline string getEgressProxyConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyConfigurationId_, "") };
      inline EgressProxyGateways& setEgressProxyConfigurationId(string egressProxyConfigurationId) { DARABONBA_PTR_SET_VALUE(egressProxyConfigurationId_, egressProxyConfigurationId) };


      // egressProxyGatewayId Field Functions 
      bool hasEgressProxyGatewayId() const { return this->egressProxyGatewayId_ != nullptr;};
      void deleteEgressProxyGatewayId() { this->egressProxyGatewayId_ = nullptr;};
      inline string getEgressProxyGatewayId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyGatewayId_, "") };
      inline EgressProxyGateways& setEgressProxyGatewayId(string egressProxyGatewayId) { DARABONBA_PTR_SET_VALUE(egressProxyGatewayId_, egressProxyGatewayId) };


      // egressProxyGatewayName Field Functions 
      bool hasEgressProxyGatewayName() const { return this->egressProxyGatewayName_ != nullptr;};
      void deleteEgressProxyGatewayName() { this->egressProxyGatewayName_ = nullptr;};
      inline string getEgressProxyGatewayName() const { DARABONBA_PTR_GET_DEFAULT(egressProxyGatewayName_, "") };
      inline EgressProxyGateways& setEgressProxyGatewayName(string egressProxyGatewayName) { DARABONBA_PTR_SET_VALUE(egressProxyGatewayName_, egressProxyGatewayName) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline EgressProxyGateways& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline EgressProxyGateways& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<EgressProxyGateways::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<EgressProxyGateways::Tags>) };
      inline vector<EgressProxyGateways::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<EgressProxyGateways::Tags>) };
      inline EgressProxyGateways& setTags(const vector<EgressProxyGateways::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline EgressProxyGateways& setTags(vector<EgressProxyGateways::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline EgressProxyGateways& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> defaultEgressProxyIpPoolId_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> egressProxyConfigurationId_ {};
      shared_ptr<string> egressProxyGatewayId_ {};
      shared_ptr<string> egressProxyGatewayName_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<EgressProxyGateways::Tags>> tags_ {};
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->egressProxyGateways_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // egressProxyGateways Field Functions 
    bool hasEgressProxyGateways() const { return this->egressProxyGateways_ != nullptr;};
    void deleteEgressProxyGateways() { this->egressProxyGateways_ = nullptr;};
    inline const vector<ListEgressProxyGatewaysResponseBody::EgressProxyGateways> & getEgressProxyGateways() const { DARABONBA_PTR_GET_CONST(egressProxyGateways_, vector<ListEgressProxyGatewaysResponseBody::EgressProxyGateways>) };
    inline vector<ListEgressProxyGatewaysResponseBody::EgressProxyGateways> getEgressProxyGateways() { DARABONBA_PTR_GET(egressProxyGateways_, vector<ListEgressProxyGatewaysResponseBody::EgressProxyGateways>) };
    inline ListEgressProxyGatewaysResponseBody& setEgressProxyGateways(const vector<ListEgressProxyGatewaysResponseBody::EgressProxyGateways> & egressProxyGateways) { DARABONBA_PTR_SET_VALUE(egressProxyGateways_, egressProxyGateways) };
    inline ListEgressProxyGatewaysResponseBody& setEgressProxyGateways(vector<ListEgressProxyGatewaysResponseBody::EgressProxyGateways> && egressProxyGateways) { DARABONBA_PTR_SET_RVALUE(egressProxyGateways_, egressProxyGateways) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListEgressProxyGatewaysResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEgressProxyGatewaysResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEgressProxyGatewaysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListEgressProxyGatewaysResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListEgressProxyGatewaysResponseBody::EgressProxyGateways>> egressProxyGateways_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
