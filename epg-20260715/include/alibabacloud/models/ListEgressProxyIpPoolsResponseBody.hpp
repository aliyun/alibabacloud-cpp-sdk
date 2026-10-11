// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEGRESSPROXYIPPOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEGRESSPROXYIPPOOLSRESPONSEBODY_HPP_
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
  class ListEgressProxyIpPoolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEgressProxyIpPoolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EgressProxyIpPools, egressProxyIpPools_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEgressProxyIpPoolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EgressProxyIpPools, egressProxyIpPools_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListEgressProxyIpPoolsResponseBody() = default ;
    ListEgressProxyIpPoolsResponseBody(const ListEgressProxyIpPoolsResponseBody &) = default ;
    ListEgressProxyIpPoolsResponseBody(ListEgressProxyIpPoolsResponseBody &&) = default ;
    ListEgressProxyIpPoolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEgressProxyIpPoolsResponseBody() = default ;
    ListEgressProxyIpPoolsResponseBody& operator=(const ListEgressProxyIpPoolsResponseBody &) = default ;
    ListEgressProxyIpPoolsResponseBody& operator=(ListEgressProxyIpPoolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EgressProxyIpPools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EgressProxyIpPools& obj) { 
        DARABONBA_PTR_TO_JSON(AddressType, addressType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EgressProxyGatewayId, egressProxyGatewayId_);
        DARABONBA_PTR_TO_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
        DARABONBA_PTR_TO_JSON(EgressProxyIpPoolName, egressProxyIpPoolName_);
        DARABONBA_PTR_TO_JSON(HashFactor, hashFactor_);
        DARABONBA_PTR_TO_JSON(HashHeaderName, hashHeaderName_);
        DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, EgressProxyIpPools& obj) { 
        DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EgressProxyGatewayId, egressProxyGatewayId_);
        DARABONBA_PTR_FROM_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
        DARABONBA_PTR_FROM_JSON(EgressProxyIpPoolName, egressProxyIpPoolName_);
        DARABONBA_PTR_FROM_JSON(HashFactor, hashFactor_);
        DARABONBA_PTR_FROM_JSON(HashHeaderName, hashHeaderName_);
        DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      EgressProxyIpPools() = default ;
      EgressProxyIpPools(const EgressProxyIpPools &) = default ;
      EgressProxyIpPools(EgressProxyIpPools &&) = default ;
      EgressProxyIpPools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EgressProxyIpPools() = default ;
      EgressProxyIpPools& operator=(const EgressProxyIpPools &) = default ;
      EgressProxyIpPools& operator=(EgressProxyIpPools &&) = default ;
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

      virtual bool empty() const override { return this->addressType_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->egressProxyGatewayId_ == nullptr && this->egressProxyIpPoolId_ == nullptr && this->egressProxyIpPoolName_ == nullptr
        && this->hashFactor_ == nullptr && this->hashHeaderName_ == nullptr && this->scheduler_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
      // addressType Field Functions 
      bool hasAddressType() const { return this->addressType_ != nullptr;};
      void deleteAddressType() { this->addressType_ = nullptr;};
      inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
      inline EgressProxyIpPools& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline EgressProxyIpPools& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline EgressProxyIpPools& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // egressProxyGatewayId Field Functions 
      bool hasEgressProxyGatewayId() const { return this->egressProxyGatewayId_ != nullptr;};
      void deleteEgressProxyGatewayId() { this->egressProxyGatewayId_ = nullptr;};
      inline string getEgressProxyGatewayId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyGatewayId_, "") };
      inline EgressProxyIpPools& setEgressProxyGatewayId(string egressProxyGatewayId) { DARABONBA_PTR_SET_VALUE(egressProxyGatewayId_, egressProxyGatewayId) };


      // egressProxyIpPoolId Field Functions 
      bool hasEgressProxyIpPoolId() const { return this->egressProxyIpPoolId_ != nullptr;};
      void deleteEgressProxyIpPoolId() { this->egressProxyIpPoolId_ = nullptr;};
      inline string getEgressProxyIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyIpPoolId_, "") };
      inline EgressProxyIpPools& setEgressProxyIpPoolId(string egressProxyIpPoolId) { DARABONBA_PTR_SET_VALUE(egressProxyIpPoolId_, egressProxyIpPoolId) };


      // egressProxyIpPoolName Field Functions 
      bool hasEgressProxyIpPoolName() const { return this->egressProxyIpPoolName_ != nullptr;};
      void deleteEgressProxyIpPoolName() { this->egressProxyIpPoolName_ = nullptr;};
      inline string getEgressProxyIpPoolName() const { DARABONBA_PTR_GET_DEFAULT(egressProxyIpPoolName_, "") };
      inline EgressProxyIpPools& setEgressProxyIpPoolName(string egressProxyIpPoolName) { DARABONBA_PTR_SET_VALUE(egressProxyIpPoolName_, egressProxyIpPoolName) };


      // hashFactor Field Functions 
      bool hasHashFactor() const { return this->hashFactor_ != nullptr;};
      void deleteHashFactor() { this->hashFactor_ = nullptr;};
      inline string getHashFactor() const { DARABONBA_PTR_GET_DEFAULT(hashFactor_, "") };
      inline EgressProxyIpPools& setHashFactor(string hashFactor) { DARABONBA_PTR_SET_VALUE(hashFactor_, hashFactor) };


      // hashHeaderName Field Functions 
      bool hasHashHeaderName() const { return this->hashHeaderName_ != nullptr;};
      void deleteHashHeaderName() { this->hashHeaderName_ = nullptr;};
      inline string getHashHeaderName() const { DARABONBA_PTR_GET_DEFAULT(hashHeaderName_, "") };
      inline EgressProxyIpPools& setHashHeaderName(string hashHeaderName) { DARABONBA_PTR_SET_VALUE(hashHeaderName_, hashHeaderName) };


      // scheduler Field Functions 
      bool hasScheduler() const { return this->scheduler_ != nullptr;};
      void deleteScheduler() { this->scheduler_ = nullptr;};
      inline string getScheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
      inline EgressProxyIpPools& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline EgressProxyIpPools& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<EgressProxyIpPools::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<EgressProxyIpPools::Tags>) };
      inline vector<EgressProxyIpPools::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<EgressProxyIpPools::Tags>) };
      inline EgressProxyIpPools& setTags(const vector<EgressProxyIpPools::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline EgressProxyIpPools& setTags(vector<EgressProxyIpPools::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      shared_ptr<string> addressType_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> egressProxyGatewayId_ {};
      shared_ptr<string> egressProxyIpPoolId_ {};
      shared_ptr<string> egressProxyIpPoolName_ {};
      shared_ptr<string> hashFactor_ {};
      shared_ptr<string> hashHeaderName_ {};
      shared_ptr<string> scheduler_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<EgressProxyIpPools::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->egressProxyIpPools_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // egressProxyIpPools Field Functions 
    bool hasEgressProxyIpPools() const { return this->egressProxyIpPools_ != nullptr;};
    void deleteEgressProxyIpPools() { this->egressProxyIpPools_ = nullptr;};
    inline const vector<ListEgressProxyIpPoolsResponseBody::EgressProxyIpPools> & getEgressProxyIpPools() const { DARABONBA_PTR_GET_CONST(egressProxyIpPools_, vector<ListEgressProxyIpPoolsResponseBody::EgressProxyIpPools>) };
    inline vector<ListEgressProxyIpPoolsResponseBody::EgressProxyIpPools> getEgressProxyIpPools() { DARABONBA_PTR_GET(egressProxyIpPools_, vector<ListEgressProxyIpPoolsResponseBody::EgressProxyIpPools>) };
    inline ListEgressProxyIpPoolsResponseBody& setEgressProxyIpPools(const vector<ListEgressProxyIpPoolsResponseBody::EgressProxyIpPools> & egressProxyIpPools) { DARABONBA_PTR_SET_VALUE(egressProxyIpPools_, egressProxyIpPools) };
    inline ListEgressProxyIpPoolsResponseBody& setEgressProxyIpPools(vector<ListEgressProxyIpPoolsResponseBody::EgressProxyIpPools> && egressProxyIpPools) { DARABONBA_PTR_SET_RVALUE(egressProxyIpPools_, egressProxyIpPools) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListEgressProxyIpPoolsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEgressProxyIpPoolsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEgressProxyIpPoolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListEgressProxyIpPoolsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListEgressProxyIpPoolsResponseBody::EgressProxyIpPools>> egressProxyIpPools_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
