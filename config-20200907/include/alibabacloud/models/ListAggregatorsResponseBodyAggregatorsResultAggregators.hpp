// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATORSRESPONSEBODYAGGREGATORSRESULTAGGREGATORS_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATORSRESPONSEBODYAGGREGATORSRESULTAGGREGATORS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAggregatorsResponseBodyAggregatorsResultAggregatorsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregatorsResponseBodyAggregatorsResultAggregators : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregatorsResponseBodyAggregatorsResultAggregators& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListAggregatorsResponseBodyAggregatorsResultAggregators& obj) { 
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
    ListAggregatorsResponseBodyAggregatorsResultAggregators() = default ;
    ListAggregatorsResponseBodyAggregatorsResultAggregators(const ListAggregatorsResponseBodyAggregatorsResultAggregators &) = default ;
    ListAggregatorsResponseBodyAggregatorsResultAggregators(ListAggregatorsResponseBodyAggregatorsResultAggregators &&) = default ;
    ListAggregatorsResponseBodyAggregatorsResultAggregators(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregatorsResponseBodyAggregatorsResultAggregators() = default ;
    ListAggregatorsResponseBodyAggregatorsResultAggregators& operator=(const ListAggregatorsResponseBodyAggregatorsResultAggregators &) = default ;
    ListAggregatorsResponseBodyAggregatorsResultAggregators& operator=(ListAggregatorsResponseBodyAggregatorsResultAggregators &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->aggregatorAccountCount_ == nullptr && return this->aggregatorCreateTimestamp_ == nullptr && return this->aggregatorId_ == nullptr && return this->aggregatorName_ == nullptr && return this->aggregatorStatus_ == nullptr
        && return this->aggregatorType_ == nullptr && return this->description_ == nullptr && return this->folderId_ == nullptr && return this->tags_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline ListAggregatorsResponseBodyAggregatorsResultAggregators& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // aggregatorAccountCount Field Functions 
    bool hasAggregatorAccountCount() const { return this->aggregatorAccountCount_ != nullptr;};
    void deleteAggregatorAccountCount() { this->aggregatorAccountCount_ = nullptr;};
    inline int64_t aggregatorAccountCount() const { DARABONBA_PTR_GET_DEFAULT(aggregatorAccountCount_, 0L) };
    inline ListAggregatorsResponseBodyAggregatorsResultAggregators& setAggregatorAccountCount(int64_t aggregatorAccountCount) { DARABONBA_PTR_SET_VALUE(aggregatorAccountCount_, aggregatorAccountCount) };


    // aggregatorCreateTimestamp Field Functions 
    bool hasAggregatorCreateTimestamp() const { return this->aggregatorCreateTimestamp_ != nullptr;};
    void deleteAggregatorCreateTimestamp() { this->aggregatorCreateTimestamp_ = nullptr;};
    inline int64_t aggregatorCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(aggregatorCreateTimestamp_, 0L) };
    inline ListAggregatorsResponseBodyAggregatorsResultAggregators& setAggregatorCreateTimestamp(int64_t aggregatorCreateTimestamp) { DARABONBA_PTR_SET_VALUE(aggregatorCreateTimestamp_, aggregatorCreateTimestamp) };


    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline ListAggregatorsResponseBodyAggregatorsResultAggregators& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // aggregatorName Field Functions 
    bool hasAggregatorName() const { return this->aggregatorName_ != nullptr;};
    void deleteAggregatorName() { this->aggregatorName_ = nullptr;};
    inline string aggregatorName() const { DARABONBA_PTR_GET_DEFAULT(aggregatorName_, "") };
    inline ListAggregatorsResponseBodyAggregatorsResultAggregators& setAggregatorName(string aggregatorName) { DARABONBA_PTR_SET_VALUE(aggregatorName_, aggregatorName) };


    // aggregatorStatus Field Functions 
    bool hasAggregatorStatus() const { return this->aggregatorStatus_ != nullptr;};
    void deleteAggregatorStatus() { this->aggregatorStatus_ = nullptr;};
    inline int32_t aggregatorStatus() const { DARABONBA_PTR_GET_DEFAULT(aggregatorStatus_, 0) };
    inline ListAggregatorsResponseBodyAggregatorsResultAggregators& setAggregatorStatus(int32_t aggregatorStatus) { DARABONBA_PTR_SET_VALUE(aggregatorStatus_, aggregatorStatus) };


    // aggregatorType Field Functions 
    bool hasAggregatorType() const { return this->aggregatorType_ != nullptr;};
    void deleteAggregatorType() { this->aggregatorType_ = nullptr;};
    inline string aggregatorType() const { DARABONBA_PTR_GET_DEFAULT(aggregatorType_, "") };
    inline ListAggregatorsResponseBodyAggregatorsResultAggregators& setAggregatorType(string aggregatorType) { DARABONBA_PTR_SET_VALUE(aggregatorType_, aggregatorType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAggregatorsResponseBodyAggregatorsResultAggregators& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline ListAggregatorsResponseBodyAggregatorsResultAggregators& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListAggregatorsResponseBodyAggregatorsResultAggregatorsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListAggregatorsResponseBodyAggregatorsResultAggregatorsTags>) };
    inline vector<Models::ListAggregatorsResponseBodyAggregatorsResultAggregatorsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListAggregatorsResponseBodyAggregatorsResultAggregatorsTags>) };
    inline ListAggregatorsResponseBodyAggregatorsResultAggregators& setTags(const vector<Models::ListAggregatorsResponseBodyAggregatorsResultAggregatorsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListAggregatorsResponseBodyAggregatorsResultAggregators& setTags(vector<Models::ListAggregatorsResponseBodyAggregatorsResultAggregatorsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the management account that is used to create the account group.
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The number of member accounts in the account group.
    std::shared_ptr<int64_t> aggregatorAccountCount_ = nullptr;
    // The timestamp generated when the account group was created.
    std::shared_ptr<int64_t> aggregatorCreateTimestamp_ = nullptr;
    // The ID of the account group.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The name of the account group.
    std::shared_ptr<string> aggregatorName_ = nullptr;
    // The status of the account group. Valid values:
    // 
    // *   0: The account group is being created.
    // *   1: The account group was created.
    std::shared_ptr<int32_t> aggregatorStatus_ = nullptr;
    // The type of the account group. Valid values:
    // 
    // *   RD: global account group.
    // *   FOLDER: account group of the folder.
    // *   CUSTOM: custom account group.
    std::shared_ptr<string> aggregatorType_ = nullptr;
    // The description of the account group.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the folder.
    std::shared_ptr<string> folderId_ = nullptr;
    // tags
    std::shared_ptr<vector<Models::ListAggregatorsResponseBodyAggregatorsResultAggregatorsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
