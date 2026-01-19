// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregatorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregatorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorsResult, aggregatorsResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregatorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorsResult, aggregatorsResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAggregatorsResponseBody() = default ;
    ListAggregatorsResponseBody(const ListAggregatorsResponseBody &) = default ;
    ListAggregatorsResponseBody(ListAggregatorsResponseBody &&) = default ;
    ListAggregatorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregatorsResponseBody() = default ;
    ListAggregatorsResponseBody& operator=(const ListAggregatorsResponseBody &) = default ;
    ListAggregatorsResponseBody& operator=(ListAggregatorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AggregatorsResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AggregatorsResult& obj) { 
        DARABONBA_PTR_TO_JSON(Aggregators, aggregators_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      };
      friend void from_json(const Darabonba::Json& j, AggregatorsResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Aggregators, aggregators_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      };
      AggregatorsResult() = default ;
      AggregatorsResult(const AggregatorsResult &) = default ;
      AggregatorsResult(AggregatorsResult &&) = default ;
      AggregatorsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AggregatorsResult() = default ;
      AggregatorsResult& operator=(const AggregatorsResult &) = default ;
      AggregatorsResult& operator=(AggregatorsResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Aggregators : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Aggregators& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(AggregatorAccountCount, aggregatorAccountCount_);
          DARABONBA_PTR_TO_JSON(AggregatorCreateTimestamp, aggregatorCreateTimestamp_);
          DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
          DARABONBA_PTR_TO_JSON(AggregatorName, aggregatorName_);
          DARABONBA_PTR_TO_JSON(AggregatorStatus, aggregatorStatus_);
          DARABONBA_PTR_TO_JSON(AggregatorType, aggregatorType_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FolderId, folderId_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, Aggregators& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(AggregatorAccountCount, aggregatorAccountCount_);
          DARABONBA_PTR_FROM_JSON(AggregatorCreateTimestamp, aggregatorCreateTimestamp_);
          DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
          DARABONBA_PTR_FROM_JSON(AggregatorName, aggregatorName_);
          DARABONBA_PTR_FROM_JSON(AggregatorStatus, aggregatorStatus_);
          DARABONBA_PTR_FROM_JSON(AggregatorType, aggregatorType_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        Aggregators() = default ;
        Aggregators(const Aggregators &) = default ;
        Aggregators(Aggregators &&) = default ;
        Aggregators(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Aggregators() = default ;
        Aggregators& operator=(const Aggregators &) = default ;
        Aggregators& operator=(Aggregators &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
            DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
            DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
          virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
          // tagKey Field Functions 
          bool hasTagKey() const { return this->tagKey_ != nullptr;};
          void deleteTagKey() { this->tagKey_ = nullptr;};
          inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
          inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


          // tagValue Field Functions 
          bool hasTagValue() const { return this->tagValue_ != nullptr;};
          void deleteTagValue() { this->tagValue_ = nullptr;};
          inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
          inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


        protected:
          // The tag keys of the resource.
          shared_ptr<string> tagKey_ {};
          // The tag values of the resource.
          shared_ptr<string> tagValue_ {};
        };

        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->aggregatorAccountCount_ == nullptr && this->aggregatorCreateTimestamp_ == nullptr && this->aggregatorId_ == nullptr && this->aggregatorName_ == nullptr && this->aggregatorStatus_ == nullptr
        && this->aggregatorType_ == nullptr && this->description_ == nullptr && this->folderId_ == nullptr && this->tags_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
        inline Aggregators& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // aggregatorAccountCount Field Functions 
        bool hasAggregatorAccountCount() const { return this->aggregatorAccountCount_ != nullptr;};
        void deleteAggregatorAccountCount() { this->aggregatorAccountCount_ = nullptr;};
        inline int64_t getAggregatorAccountCount() const { DARABONBA_PTR_GET_DEFAULT(aggregatorAccountCount_, 0L) };
        inline Aggregators& setAggregatorAccountCount(int64_t aggregatorAccountCount) { DARABONBA_PTR_SET_VALUE(aggregatorAccountCount_, aggregatorAccountCount) };


        // aggregatorCreateTimestamp Field Functions 
        bool hasAggregatorCreateTimestamp() const { return this->aggregatorCreateTimestamp_ != nullptr;};
        void deleteAggregatorCreateTimestamp() { this->aggregatorCreateTimestamp_ = nullptr;};
        inline int64_t getAggregatorCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(aggregatorCreateTimestamp_, 0L) };
        inline Aggregators& setAggregatorCreateTimestamp(int64_t aggregatorCreateTimestamp) { DARABONBA_PTR_SET_VALUE(aggregatorCreateTimestamp_, aggregatorCreateTimestamp) };


        // aggregatorId Field Functions 
        bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
        void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
        inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
        inline Aggregators& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


        // aggregatorName Field Functions 
        bool hasAggregatorName() const { return this->aggregatorName_ != nullptr;};
        void deleteAggregatorName() { this->aggregatorName_ = nullptr;};
        inline string getAggregatorName() const { DARABONBA_PTR_GET_DEFAULT(aggregatorName_, "") };
        inline Aggregators& setAggregatorName(string aggregatorName) { DARABONBA_PTR_SET_VALUE(aggregatorName_, aggregatorName) };


        // aggregatorStatus Field Functions 
        bool hasAggregatorStatus() const { return this->aggregatorStatus_ != nullptr;};
        void deleteAggregatorStatus() { this->aggregatorStatus_ = nullptr;};
        inline int32_t getAggregatorStatus() const { DARABONBA_PTR_GET_DEFAULT(aggregatorStatus_, 0) };
        inline Aggregators& setAggregatorStatus(int32_t aggregatorStatus) { DARABONBA_PTR_SET_VALUE(aggregatorStatus_, aggregatorStatus) };


        // aggregatorType Field Functions 
        bool hasAggregatorType() const { return this->aggregatorType_ != nullptr;};
        void deleteAggregatorType() { this->aggregatorType_ = nullptr;};
        inline string getAggregatorType() const { DARABONBA_PTR_GET_DEFAULT(aggregatorType_, "") };
        inline Aggregators& setAggregatorType(string aggregatorType) { DARABONBA_PTR_SET_VALUE(aggregatorType_, aggregatorType) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Aggregators& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // folderId Field Functions 
        bool hasFolderId() const { return this->folderId_ != nullptr;};
        void deleteFolderId() { this->folderId_ = nullptr;};
        inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
        inline Aggregators& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<Aggregators::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Aggregators::Tags>) };
        inline vector<Aggregators::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Aggregators::Tags>) };
        inline Aggregators& setTags(const vector<Aggregators::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Aggregators& setTags(vector<Aggregators::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // The ID of the management account that is used to create the account group.
        shared_ptr<int64_t> accountId_ {};
        // The number of member accounts in the account group.
        shared_ptr<int64_t> aggregatorAccountCount_ {};
        // The timestamp generated when the account group was created.
        shared_ptr<int64_t> aggregatorCreateTimestamp_ {};
        // The ID of the account group.
        shared_ptr<string> aggregatorId_ {};
        // The name of the account group.
        shared_ptr<string> aggregatorName_ {};
        // The status of the account group. Valid values:
        // 
        // *   0: The account group is being created.
        // *   1: The account group was created.
        shared_ptr<int32_t> aggregatorStatus_ {};
        // The type of the account group. Valid values:
        // 
        // *   RD: global account group.
        // *   FOLDER: account group of the folder.
        // *   CUSTOM: custom account group.
        shared_ptr<string> aggregatorType_ {};
        // The description of the account group.
        shared_ptr<string> description_ {};
        // The ID of the folder.
        shared_ptr<string> folderId_ {};
        // tags
        shared_ptr<vector<Aggregators::Tags>> tags_ {};
      };

      virtual bool empty() const override { return this->aggregators_ == nullptr
        && this->nextToken_ == nullptr; };
      // aggregators Field Functions 
      bool hasAggregators() const { return this->aggregators_ != nullptr;};
      void deleteAggregators() { this->aggregators_ = nullptr;};
      inline const vector<AggregatorsResult::Aggregators> & getAggregators() const { DARABONBA_PTR_GET_CONST(aggregators_, vector<AggregatorsResult::Aggregators>) };
      inline vector<AggregatorsResult::Aggregators> getAggregators() { DARABONBA_PTR_GET(aggregators_, vector<AggregatorsResult::Aggregators>) };
      inline AggregatorsResult& setAggregators(const vector<AggregatorsResult::Aggregators> & aggregators) { DARABONBA_PTR_SET_VALUE(aggregators_, aggregators) };
      inline AggregatorsResult& setAggregators(vector<AggregatorsResult::Aggregators> && aggregators) { DARABONBA_PTR_SET_RVALUE(aggregators_, aggregators) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline AggregatorsResult& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    protected:
      // The list of the account groups.
      shared_ptr<vector<AggregatorsResult::Aggregators>> aggregators_ {};
      // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of `NextToken`.
      shared_ptr<string> nextToken_ {};
    };

    virtual bool empty() const override { return this->aggregatorsResult_ == nullptr
        && this->requestId_ == nullptr; };
    // aggregatorsResult Field Functions 
    bool hasAggregatorsResult() const { return this->aggregatorsResult_ != nullptr;};
    void deleteAggregatorsResult() { this->aggregatorsResult_ = nullptr;};
    inline const ListAggregatorsResponseBody::AggregatorsResult & getAggregatorsResult() const { DARABONBA_PTR_GET_CONST(aggregatorsResult_, ListAggregatorsResponseBody::AggregatorsResult) };
    inline ListAggregatorsResponseBody::AggregatorsResult getAggregatorsResult() { DARABONBA_PTR_GET(aggregatorsResult_, ListAggregatorsResponseBody::AggregatorsResult) };
    inline ListAggregatorsResponseBody& setAggregatorsResult(const ListAggregatorsResponseBody::AggregatorsResult & aggregatorsResult) { DARABONBA_PTR_SET_VALUE(aggregatorsResult_, aggregatorsResult) };
    inline ListAggregatorsResponseBody& setAggregatorsResult(ListAggregatorsResponseBody::AggregatorsResult && aggregatorsResult) { DARABONBA_PTR_SET_RVALUE(aggregatorsResult_, aggregatorsResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAggregatorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The account groups.
    shared_ptr<ListAggregatorsResponseBody::AggregatorsResult> aggregatorsResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
