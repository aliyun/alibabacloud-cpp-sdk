// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHARE_HPP_
#define ALIBABACLOUD_MODELS_SHARE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class Share : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Share& obj) { 
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
      DARABONBA_PTR_TO_JSON(owner, owner_);
      DARABONBA_PTR_TO_JSON(providerTenantId, providerTenantId_);
      DARABONBA_PTR_TO_JSON(shareId, shareId_);
      DARABONBA_PTR_TO_JSON(shareName, shareName_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(updatedBy, updatedBy_);
    };
    friend void from_json(const Darabonba::Json& j, Share& obj) { 
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(owner, owner_);
      DARABONBA_PTR_FROM_JSON(providerTenantId, providerTenantId_);
      DARABONBA_PTR_FROM_JSON(shareId, shareId_);
      DARABONBA_PTR_FROM_JSON(shareName, shareName_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(updatedBy, updatedBy_);
    };
    Share() = default ;
    Share(const Share &) = default ;
    Share(Share &&) = default ;
    Share(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Share() = default ;
    Share& operator=(const Share &) = default ;
    Share& operator=(Share &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->createdAt_ != nullptr && this->createdBy_ != nullptr && this->owner_ != nullptr && this->providerTenantId_ != nullptr && this->shareId_ != nullptr
        && this->shareName_ != nullptr && this->updatedAt_ != nullptr && this->updatedBy_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline Share& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline Share& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline Share& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline Share& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // providerTenantId Field Functions 
    bool hasProviderTenantId() const { return this->providerTenantId_ != nullptr;};
    void deleteProviderTenantId() { this->providerTenantId_ = nullptr;};
    inline int64_t providerTenantId() const { DARABONBA_PTR_GET_DEFAULT(providerTenantId_, 0L) };
    inline Share& setProviderTenantId(int64_t providerTenantId) { DARABONBA_PTR_SET_VALUE(providerTenantId_, providerTenantId) };


    // shareId Field Functions 
    bool hasShareId() const { return this->shareId_ != nullptr;};
    void deleteShareId() { this->shareId_ = nullptr;};
    inline string shareId() const { DARABONBA_PTR_GET_DEFAULT(shareId_, "") };
    inline Share& setShareId(string shareId) { DARABONBA_PTR_SET_VALUE(shareId_, shareId) };


    // shareName Field Functions 
    bool hasShareName() const { return this->shareName_ != nullptr;};
    void deleteShareName() { this->shareName_ = nullptr;};
    inline string shareName() const { DARABONBA_PTR_GET_DEFAULT(shareName_, "") };
    inline Share& setShareName(string shareName) { DARABONBA_PTR_SET_VALUE(shareName_, shareName) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline Share& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // updatedBy Field Functions 
    bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
    void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
    inline string updatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
    inline Share& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<int64_t> createdAt_ = nullptr;
    std::shared_ptr<string> createdBy_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<int64_t> providerTenantId_ = nullptr;
    std::shared_ptr<string> shareId_ = nullptr;
    std::shared_ptr<string> shareName_ = nullptr;
    std::shared_ptr<int64_t> updatedAt_ = nullptr;
    std::shared_ptr<string> updatedBy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
