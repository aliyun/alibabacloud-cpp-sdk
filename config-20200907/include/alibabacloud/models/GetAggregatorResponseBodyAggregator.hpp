// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATORRESPONSEBODYAGGREGATOR_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATORRESPONSEBODYAGGREGATOR_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAggregatorResponseBodyAggregatorAggregatorAccounts.hpp>
#include <alibabacloud/models/GetAggregatorResponseBodyAggregatorTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregatorResponseBodyAggregator : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregatorResponseBodyAggregator& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetAggregatorResponseBodyAggregator& obj) { 
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
    GetAggregatorResponseBodyAggregator() = default ;
    GetAggregatorResponseBodyAggregator(const GetAggregatorResponseBodyAggregator &) = default ;
    GetAggregatorResponseBodyAggregator(GetAggregatorResponseBodyAggregator &&) = default ;
    GetAggregatorResponseBodyAggregator(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregatorResponseBodyAggregator() = default ;
    GetAggregatorResponseBodyAggregator& operator=(const GetAggregatorResponseBodyAggregator &) = default ;
    GetAggregatorResponseBodyAggregator& operator=(GetAggregatorResponseBodyAggregator &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->aggregatorAccountCount_ == nullptr && return this->aggregatorAccounts_ == nullptr && return this->aggregatorCreateTimestamp_ == nullptr && return this->aggregatorId_ == nullptr && return this->aggregatorName_ == nullptr
        && return this->aggregatorStatus_ == nullptr && return this->aggregatorType_ == nullptr && return this->description_ == nullptr && return this->folderId_ == nullptr && return this->folderName_ == nullptr
        && return this->tags_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline GetAggregatorResponseBodyAggregator& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // aggregatorAccountCount Field Functions 
    bool hasAggregatorAccountCount() const { return this->aggregatorAccountCount_ != nullptr;};
    void deleteAggregatorAccountCount() { this->aggregatorAccountCount_ = nullptr;};
    inline int64_t aggregatorAccountCount() const { DARABONBA_PTR_GET_DEFAULT(aggregatorAccountCount_, 0L) };
    inline GetAggregatorResponseBodyAggregator& setAggregatorAccountCount(int64_t aggregatorAccountCount) { DARABONBA_PTR_SET_VALUE(aggregatorAccountCount_, aggregatorAccountCount) };


    // aggregatorAccounts Field Functions 
    bool hasAggregatorAccounts() const { return this->aggregatorAccounts_ != nullptr;};
    void deleteAggregatorAccounts() { this->aggregatorAccounts_ = nullptr;};
    inline const vector<Models::GetAggregatorResponseBodyAggregatorAggregatorAccounts> & aggregatorAccounts() const { DARABONBA_PTR_GET_CONST(aggregatorAccounts_, vector<Models::GetAggregatorResponseBodyAggregatorAggregatorAccounts>) };
    inline vector<Models::GetAggregatorResponseBodyAggregatorAggregatorAccounts> aggregatorAccounts() { DARABONBA_PTR_GET(aggregatorAccounts_, vector<Models::GetAggregatorResponseBodyAggregatorAggregatorAccounts>) };
    inline GetAggregatorResponseBodyAggregator& setAggregatorAccounts(const vector<Models::GetAggregatorResponseBodyAggregatorAggregatorAccounts> & aggregatorAccounts) { DARABONBA_PTR_SET_VALUE(aggregatorAccounts_, aggregatorAccounts) };
    inline GetAggregatorResponseBodyAggregator& setAggregatorAccounts(vector<Models::GetAggregatorResponseBodyAggregatorAggregatorAccounts> && aggregatorAccounts) { DARABONBA_PTR_SET_RVALUE(aggregatorAccounts_, aggregatorAccounts) };


    // aggregatorCreateTimestamp Field Functions 
    bool hasAggregatorCreateTimestamp() const { return this->aggregatorCreateTimestamp_ != nullptr;};
    void deleteAggregatorCreateTimestamp() { this->aggregatorCreateTimestamp_ = nullptr;};
    inline string aggregatorCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(aggregatorCreateTimestamp_, "") };
    inline GetAggregatorResponseBodyAggregator& setAggregatorCreateTimestamp(string aggregatorCreateTimestamp) { DARABONBA_PTR_SET_VALUE(aggregatorCreateTimestamp_, aggregatorCreateTimestamp) };


    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline GetAggregatorResponseBodyAggregator& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // aggregatorName Field Functions 
    bool hasAggregatorName() const { return this->aggregatorName_ != nullptr;};
    void deleteAggregatorName() { this->aggregatorName_ = nullptr;};
    inline string aggregatorName() const { DARABONBA_PTR_GET_DEFAULT(aggregatorName_, "") };
    inline GetAggregatorResponseBodyAggregator& setAggregatorName(string aggregatorName) { DARABONBA_PTR_SET_VALUE(aggregatorName_, aggregatorName) };


    // aggregatorStatus Field Functions 
    bool hasAggregatorStatus() const { return this->aggregatorStatus_ != nullptr;};
    void deleteAggregatorStatus() { this->aggregatorStatus_ = nullptr;};
    inline int32_t aggregatorStatus() const { DARABONBA_PTR_GET_DEFAULT(aggregatorStatus_, 0) };
    inline GetAggregatorResponseBodyAggregator& setAggregatorStatus(int32_t aggregatorStatus) { DARABONBA_PTR_SET_VALUE(aggregatorStatus_, aggregatorStatus) };


    // aggregatorType Field Functions 
    bool hasAggregatorType() const { return this->aggregatorType_ != nullptr;};
    void deleteAggregatorType() { this->aggregatorType_ = nullptr;};
    inline string aggregatorType() const { DARABONBA_PTR_GET_DEFAULT(aggregatorType_, "") };
    inline GetAggregatorResponseBodyAggregator& setAggregatorType(string aggregatorType) { DARABONBA_PTR_SET_VALUE(aggregatorType_, aggregatorType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAggregatorResponseBodyAggregator& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline GetAggregatorResponseBodyAggregator& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // folderName Field Functions 
    bool hasFolderName() const { return this->folderName_ != nullptr;};
    void deleteFolderName() { this->folderName_ = nullptr;};
    inline string folderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
    inline GetAggregatorResponseBodyAggregator& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetAggregatorResponseBodyAggregatorTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetAggregatorResponseBodyAggregatorTags>) };
    inline vector<Models::GetAggregatorResponseBodyAggregatorTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetAggregatorResponseBodyAggregatorTags>) };
    inline GetAggregatorResponseBodyAggregator& setTags(const vector<Models::GetAggregatorResponseBodyAggregatorTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetAggregatorResponseBodyAggregator& setTags(vector<Models::GetAggregatorResponseBodyAggregatorTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the management account that is used to create the account group.
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The number of members in the account group.
    std::shared_ptr<int64_t> aggregatorAccountCount_ = nullptr;
    // The information about the members in the account group.
    std::shared_ptr<vector<Models::GetAggregatorResponseBodyAggregatorAggregatorAccounts>> aggregatorAccounts_ = nullptr;
    // The timestamp generated when the account group was created.
    // 
    // Unit: milliseconds.
    std::shared_ptr<string> aggregatorCreateTimestamp_ = nullptr;
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
    // *   RD: a global account group.
    // *   FOLDER: an account group for a folder.
    // *   CUSTOM: a custom account group.
    std::shared_ptr<string> aggregatorType_ = nullptr;
    // The description of the account group.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the attached folder of the account group.
    std::shared_ptr<string> folderId_ = nullptr;
    std::shared_ptr<string> folderName_ = nullptr;
    // tags
    std::shared_ptr<vector<Models::GetAggregatorResponseBodyAggregatorTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
