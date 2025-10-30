// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENROLLEDACCOUNTRESPONSEBODYINPUTS_HPP_
#define ALIBABACLOUD_MODELS_GETENROLLEDACCOUNTRESPONSEBODYINPUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetEnrolledAccountResponseBodyInputsBaselineItems.hpp>
#include <alibabacloud/models/GetEnrolledAccountResponseBodyInputsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class GetEnrolledAccountResponseBodyInputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEnrolledAccountResponseBodyInputs& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNamePrefix, accountNamePrefix_);
      DARABONBA_PTR_TO_JSON(AccountUid, accountUid_);
      DARABONBA_PTR_TO_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(PayerAccountUid, payerAccountUid_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetEnrolledAccountResponseBodyInputs& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNamePrefix, accountNamePrefix_);
      DARABONBA_PTR_FROM_JSON(AccountUid, accountUid_);
      DARABONBA_PTR_FROM_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(PayerAccountUid, payerAccountUid_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetEnrolledAccountResponseBodyInputs() = default ;
    GetEnrolledAccountResponseBodyInputs(const GetEnrolledAccountResponseBodyInputs &) = default ;
    GetEnrolledAccountResponseBodyInputs(GetEnrolledAccountResponseBodyInputs &&) = default ;
    GetEnrolledAccountResponseBodyInputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEnrolledAccountResponseBodyInputs() = default ;
    GetEnrolledAccountResponseBodyInputs& operator=(const GetEnrolledAccountResponseBodyInputs &) = default ;
    GetEnrolledAccountResponseBodyInputs& operator=(GetEnrolledAccountResponseBodyInputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNamePrefix_ == nullptr
        && return this->accountUid_ == nullptr && return this->baselineItems_ == nullptr && return this->displayName_ == nullptr && return this->folderId_ == nullptr && return this->payerAccountUid_ == nullptr
        && return this->tag_ == nullptr; };
    // accountNamePrefix Field Functions 
    bool hasAccountNamePrefix() const { return this->accountNamePrefix_ != nullptr;};
    void deleteAccountNamePrefix() { this->accountNamePrefix_ = nullptr;};
    inline string accountNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(accountNamePrefix_, "") };
    inline GetEnrolledAccountResponseBodyInputs& setAccountNamePrefix(string accountNamePrefix) { DARABONBA_PTR_SET_VALUE(accountNamePrefix_, accountNamePrefix) };


    // accountUid Field Functions 
    bool hasAccountUid() const { return this->accountUid_ != nullptr;};
    void deleteAccountUid() { this->accountUid_ = nullptr;};
    inline int64_t accountUid() const { DARABONBA_PTR_GET_DEFAULT(accountUid_, 0L) };
    inline GetEnrolledAccountResponseBodyInputs& setAccountUid(int64_t accountUid) { DARABONBA_PTR_SET_VALUE(accountUid_, accountUid) };


    // baselineItems Field Functions 
    bool hasBaselineItems() const { return this->baselineItems_ != nullptr;};
    void deleteBaselineItems() { this->baselineItems_ = nullptr;};
    inline const vector<Models::GetEnrolledAccountResponseBodyInputsBaselineItems> & baselineItems() const { DARABONBA_PTR_GET_CONST(baselineItems_, vector<Models::GetEnrolledAccountResponseBodyInputsBaselineItems>) };
    inline vector<Models::GetEnrolledAccountResponseBodyInputsBaselineItems> baselineItems() { DARABONBA_PTR_GET(baselineItems_, vector<Models::GetEnrolledAccountResponseBodyInputsBaselineItems>) };
    inline GetEnrolledAccountResponseBodyInputs& setBaselineItems(const vector<Models::GetEnrolledAccountResponseBodyInputsBaselineItems> & baselineItems) { DARABONBA_PTR_SET_VALUE(baselineItems_, baselineItems) };
    inline GetEnrolledAccountResponseBodyInputs& setBaselineItems(vector<Models::GetEnrolledAccountResponseBodyInputsBaselineItems> && baselineItems) { DARABONBA_PTR_SET_RVALUE(baselineItems_, baselineItems) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetEnrolledAccountResponseBodyInputs& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline GetEnrolledAccountResponseBodyInputs& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // payerAccountUid Field Functions 
    bool hasPayerAccountUid() const { return this->payerAccountUid_ != nullptr;};
    void deletePayerAccountUid() { this->payerAccountUid_ = nullptr;};
    inline int64_t payerAccountUid() const { DARABONBA_PTR_GET_DEFAULT(payerAccountUid_, 0L) };
    inline GetEnrolledAccountResponseBodyInputs& setPayerAccountUid(int64_t payerAccountUid) { DARABONBA_PTR_SET_VALUE(payerAccountUid_, payerAccountUid) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::GetEnrolledAccountResponseBodyInputsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::GetEnrolledAccountResponseBodyInputsTag>) };
    inline vector<Models::GetEnrolledAccountResponseBodyInputsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::GetEnrolledAccountResponseBodyInputsTag>) };
    inline GetEnrolledAccountResponseBodyInputs& setTag(const vector<Models::GetEnrolledAccountResponseBodyInputsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline GetEnrolledAccountResponseBodyInputs& setTag(vector<Models::GetEnrolledAccountResponseBodyInputsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The prefix of the account name.
    std::shared_ptr<string> accountNamePrefix_ = nullptr;
    // The account ID.
    std::shared_ptr<int64_t> accountUid_ = nullptr;
    // The baseline items.
    std::shared_ptr<vector<Models::GetEnrolledAccountResponseBodyInputsBaselineItems>> baselineItems_ = nullptr;
    // The display name of the account.
    std::shared_ptr<string> displayName_ = nullptr;
    // The ID of the parent folder.
    std::shared_ptr<string> folderId_ = nullptr;
    // The ID of the settlement account.
    std::shared_ptr<int64_t> payerAccountUid_ = nullptr;
    // The tag.
    std::shared_ptr<vector<Models::GetEnrolledAccountResponseBodyInputsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
