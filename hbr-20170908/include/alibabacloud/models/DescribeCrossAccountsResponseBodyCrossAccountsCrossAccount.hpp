// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSACCOUNTSRESPONSEBODYCROSSACCOUNTSCROSSACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSACCOUNTSRESPONSEBODYCROSSACCOUNTSCROSSACCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
    };
    DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount() = default ;
    DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount(const DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount &) = default ;
    DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount(DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount &&) = default ;
    DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount() = default ;
    DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount& operator=(const DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount &) = default ;
    DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount& operator=(DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && return this->createdTime_ == nullptr && return this->crossAccountRoleName_ == nullptr && return this->crossAccountUserId_ == nullptr && return this->id_ == nullptr && return this->ownerId_ == nullptr
        && return this->updatedTime_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string crossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t crossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


  protected:
    // The account alias. The value can be up to 32 bits in length.
    std::shared_ptr<string> alias_ = nullptr;
    // The time when the account was created. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The name of the RAM role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountRoleName_ = nullptr;
    // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<int64_t> crossAccountUserId_ = nullptr;
    // The ID of the backup type.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The ID of the current account.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The time when the account information was updated. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
