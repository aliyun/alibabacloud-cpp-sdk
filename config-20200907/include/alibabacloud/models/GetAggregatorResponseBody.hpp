// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATORRESPONSEBODY_HPP_
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
  class GetAggregatorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregatorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Aggregator, aggregator_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregatorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Aggregator, aggregator_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregatorResponseBody() = default ;
    GetAggregatorResponseBody(const GetAggregatorResponseBody &) = default ;
    GetAggregatorResponseBody(GetAggregatorResponseBody &&) = default ;
    GetAggregatorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregatorResponseBody() = default ;
    GetAggregatorResponseBody& operator=(const GetAggregatorResponseBody &) = default ;
    GetAggregatorResponseBody& operator=(GetAggregatorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Aggregator : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Aggregator& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AggregatorAccountCount, aggregatorAccountCount_);
        DARABONBA_PTR_TO_JSON(AggregatorAccounts, aggregatorAccounts_);
        DARABONBA_PTR_TO_JSON(AggregatorCreateTimestamp, aggregatorCreateTimestamp_);
        DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
        DARABONBA_PTR_TO_JSON(AggregatorName, aggregatorName_);
        DARABONBA_PTR_TO_JSON(AggregatorStatus, aggregatorStatus_);
        DARABONBA_PTR_TO_JSON(AggregatorType, aggregatorType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FolderId, folderId_);
        DARABONBA_PTR_TO_JSON(FolderName, folderName_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Aggregator& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AggregatorAccountCount, aggregatorAccountCount_);
        DARABONBA_PTR_FROM_JSON(AggregatorAccounts, aggregatorAccounts_);
        DARABONBA_PTR_FROM_JSON(AggregatorCreateTimestamp, aggregatorCreateTimestamp_);
        DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
        DARABONBA_PTR_FROM_JSON(AggregatorName, aggregatorName_);
        DARABONBA_PTR_FROM_JSON(AggregatorStatus, aggregatorStatus_);
        DARABONBA_PTR_FROM_JSON(AggregatorType, aggregatorType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
        DARABONBA_PTR_FROM_JSON(FolderName, folderName_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      Aggregator() = default ;
      Aggregator(const Aggregator &) = default ;
      Aggregator(Aggregator &&) = default ;
      Aggregator(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Aggregator() = default ;
      Aggregator& operator=(const Aggregator &) = default ;
      Aggregator& operator=(Aggregator &&) = default ;
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
        // The tag key.
        shared_ptr<string> tagKey_ {};
        // The tag value.
        shared_ptr<string> tagValue_ {};
      };

      class AggregatorAccounts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AggregatorAccounts& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(AccountType, accountType_);
          DARABONBA_PTR_TO_JSON(RecorderStatus, recorderStatus_);
        };
        friend void from_json(const Darabonba::Json& j, AggregatorAccounts& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
          DARABONBA_PTR_FROM_JSON(RecorderStatus, recorderStatus_);
        };
        AggregatorAccounts() = default ;
        AggregatorAccounts(const AggregatorAccounts &) = default ;
        AggregatorAccounts(AggregatorAccounts &&) = default ;
        AggregatorAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AggregatorAccounts() = default ;
        AggregatorAccounts& operator=(const AggregatorAccounts &) = default ;
        AggregatorAccounts& operator=(AggregatorAccounts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->accountType_ == nullptr && this->recorderStatus_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
        inline AggregatorAccounts& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline AggregatorAccounts& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // accountType Field Functions 
        bool hasAccountType() const { return this->accountType_ != nullptr;};
        void deleteAccountType() { this->accountType_ = nullptr;};
        inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
        inline AggregatorAccounts& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


        // recorderStatus Field Functions 
        bool hasRecorderStatus() const { return this->recorderStatus_ != nullptr;};
        void deleteRecorderStatus() { this->recorderStatus_ = nullptr;};
        inline string getRecorderStatus() const { DARABONBA_PTR_GET_DEFAULT(recorderStatus_, "") };
        inline AggregatorAccounts& setRecorderStatus(string recorderStatus) { DARABONBA_PTR_SET_VALUE(recorderStatus_, recorderStatus) };


      protected:
        // The ID of the member.
        shared_ptr<int64_t> accountId_ {};
        // The display name of the member.
        shared_ptr<string> accountName_ {};
        // The resource directory to which the member belongs. Valid value: ResourceDirectory. ResourceDirectory indicates that the member belongs to a resource directory.
        shared_ptr<string> accountType_ {};
        // The status of the configuration recorder for the member. Valid values:
        // 
        // *   REGISTRABLE: The configuration recorder is not registered.
        // *   BUILDING: The configuration recorder is being deployed.
        // *   REGISTERED: The configuration recorder is registered.
        // *   REBUILDING: The configuration recorder is being redeployed.
        shared_ptr<string> recorderStatus_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->aggregatorAccountCount_ == nullptr && this->aggregatorAccounts_ == nullptr && this->aggregatorCreateTimestamp_ == nullptr && this->aggregatorId_ == nullptr && this->aggregatorName_ == nullptr
        && this->aggregatorStatus_ == nullptr && this->aggregatorType_ == nullptr && this->description_ == nullptr && this->folderId_ == nullptr && this->folderName_ == nullptr
        && this->tags_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
      inline Aggregator& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // aggregatorAccountCount Field Functions 
      bool hasAggregatorAccountCount() const { return this->aggregatorAccountCount_ != nullptr;};
      void deleteAggregatorAccountCount() { this->aggregatorAccountCount_ = nullptr;};
      inline int64_t getAggregatorAccountCount() const { DARABONBA_PTR_GET_DEFAULT(aggregatorAccountCount_, 0L) };
      inline Aggregator& setAggregatorAccountCount(int64_t aggregatorAccountCount) { DARABONBA_PTR_SET_VALUE(aggregatorAccountCount_, aggregatorAccountCount) };


      // aggregatorAccounts Field Functions 
      bool hasAggregatorAccounts() const { return this->aggregatorAccounts_ != nullptr;};
      void deleteAggregatorAccounts() { this->aggregatorAccounts_ = nullptr;};
      inline const vector<Aggregator::AggregatorAccounts> & getAggregatorAccounts() const { DARABONBA_PTR_GET_CONST(aggregatorAccounts_, vector<Aggregator::AggregatorAccounts>) };
      inline vector<Aggregator::AggregatorAccounts> getAggregatorAccounts() { DARABONBA_PTR_GET(aggregatorAccounts_, vector<Aggregator::AggregatorAccounts>) };
      inline Aggregator& setAggregatorAccounts(const vector<Aggregator::AggregatorAccounts> & aggregatorAccounts) { DARABONBA_PTR_SET_VALUE(aggregatorAccounts_, aggregatorAccounts) };
      inline Aggregator& setAggregatorAccounts(vector<Aggregator::AggregatorAccounts> && aggregatorAccounts) { DARABONBA_PTR_SET_RVALUE(aggregatorAccounts_, aggregatorAccounts) };


      // aggregatorCreateTimestamp Field Functions 
      bool hasAggregatorCreateTimestamp() const { return this->aggregatorCreateTimestamp_ != nullptr;};
      void deleteAggregatorCreateTimestamp() { this->aggregatorCreateTimestamp_ = nullptr;};
      inline string getAggregatorCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(aggregatorCreateTimestamp_, "") };
      inline Aggregator& setAggregatorCreateTimestamp(string aggregatorCreateTimestamp) { DARABONBA_PTR_SET_VALUE(aggregatorCreateTimestamp_, aggregatorCreateTimestamp) };


      // aggregatorId Field Functions 
      bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
      void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
      inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
      inline Aggregator& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


      // aggregatorName Field Functions 
      bool hasAggregatorName() const { return this->aggregatorName_ != nullptr;};
      void deleteAggregatorName() { this->aggregatorName_ = nullptr;};
      inline string getAggregatorName() const { DARABONBA_PTR_GET_DEFAULT(aggregatorName_, "") };
      inline Aggregator& setAggregatorName(string aggregatorName) { DARABONBA_PTR_SET_VALUE(aggregatorName_, aggregatorName) };


      // aggregatorStatus Field Functions 
      bool hasAggregatorStatus() const { return this->aggregatorStatus_ != nullptr;};
      void deleteAggregatorStatus() { this->aggregatorStatus_ = nullptr;};
      inline int32_t getAggregatorStatus() const { DARABONBA_PTR_GET_DEFAULT(aggregatorStatus_, 0) };
      inline Aggregator& setAggregatorStatus(int32_t aggregatorStatus) { DARABONBA_PTR_SET_VALUE(aggregatorStatus_, aggregatorStatus) };


      // aggregatorType Field Functions 
      bool hasAggregatorType() const { return this->aggregatorType_ != nullptr;};
      void deleteAggregatorType() { this->aggregatorType_ = nullptr;};
      inline string getAggregatorType() const { DARABONBA_PTR_GET_DEFAULT(aggregatorType_, "") };
      inline Aggregator& setAggregatorType(string aggregatorType) { DARABONBA_PTR_SET_VALUE(aggregatorType_, aggregatorType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Aggregator& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // folderId Field Functions 
      bool hasFolderId() const { return this->folderId_ != nullptr;};
      void deleteFolderId() { this->folderId_ = nullptr;};
      inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
      inline Aggregator& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


      // folderName Field Functions 
      bool hasFolderName() const { return this->folderName_ != nullptr;};
      void deleteFolderName() { this->folderName_ = nullptr;};
      inline string getFolderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
      inline Aggregator& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Aggregator::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Aggregator::Tags>) };
      inline vector<Aggregator::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Aggregator::Tags>) };
      inline Aggregator& setTags(const vector<Aggregator::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Aggregator& setTags(vector<Aggregator::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The ID of the management account that is used to create the account group.
      shared_ptr<int64_t> accountId_ {};
      // The number of members in the account group.
      shared_ptr<int64_t> aggregatorAccountCount_ {};
      // The information about the members in the account group.
      shared_ptr<vector<Aggregator::AggregatorAccounts>> aggregatorAccounts_ {};
      // The timestamp generated when the account group was created.
      // 
      // Unit: milliseconds.
      shared_ptr<string> aggregatorCreateTimestamp_ {};
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
      // *   RD: a global account group.
      // *   FOLDER: an account group for a folder.
      // *   CUSTOM: a custom account group.
      shared_ptr<string> aggregatorType_ {};
      // The description of the account group.
      shared_ptr<string> description_ {};
      // The ID of the attached folder of the account group.
      shared_ptr<string> folderId_ {};
      shared_ptr<string> folderName_ {};
      // tags
      shared_ptr<vector<Aggregator::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->aggregator_ == nullptr
        && this->requestId_ == nullptr; };
    // aggregator Field Functions 
    bool hasAggregator() const { return this->aggregator_ != nullptr;};
    void deleteAggregator() { this->aggregator_ = nullptr;};
    inline const GetAggregatorResponseBody::Aggregator & getAggregator() const { DARABONBA_PTR_GET_CONST(aggregator_, GetAggregatorResponseBody::Aggregator) };
    inline GetAggregatorResponseBody::Aggregator getAggregator() { DARABONBA_PTR_GET(aggregator_, GetAggregatorResponseBody::Aggregator) };
    inline GetAggregatorResponseBody& setAggregator(const GetAggregatorResponseBody::Aggregator & aggregator) { DARABONBA_PTR_SET_VALUE(aggregator_, aggregator) };
    inline GetAggregatorResponseBody& setAggregator(GetAggregatorResponseBody::Aggregator && aggregator) { DARABONBA_PTR_SET_RVALUE(aggregator_, aggregator) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregatorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the account group.
    shared_ptr<GetAggregatorResponseBody::Aggregator> aggregator_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
