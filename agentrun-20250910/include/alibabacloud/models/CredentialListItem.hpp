// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALLISTITEM_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALLISTITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CredentialListItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialListItem& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(credentialAuthType, credentialAuthType_);
      DARABONBA_PTR_TO_JSON(credentialId, credentialId_);
      DARABONBA_PTR_TO_JSON(credentialName, credentialName_);
      DARABONBA_PTR_TO_JSON(credentialSourceType, credentialSourceType_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(relatedResourceCount, relatedResourceCount_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialListItem& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(credentialAuthType, credentialAuthType_);
      DARABONBA_PTR_FROM_JSON(credentialId, credentialId_);
      DARABONBA_PTR_FROM_JSON(credentialName, credentialName_);
      DARABONBA_PTR_FROM_JSON(credentialSourceType, credentialSourceType_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(relatedResourceCount, relatedResourceCount_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    CredentialListItem() = default ;
    CredentialListItem(const CredentialListItem &) = default ;
    CredentialListItem(CredentialListItem &&) = default ;
    CredentialListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialListItem() = default ;
    CredentialListItem& operator=(const CredentialListItem &) = default ;
    CredentialListItem& operator=(CredentialListItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && return this->credentialAuthType_ == nullptr && return this->credentialId_ == nullptr && return this->credentialName_ == nullptr && return this->credentialSourceType_ == nullptr && return this->enabled_ == nullptr
        && return this->relatedResourceCount_ == nullptr && return this->updatedAt_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline CredentialListItem& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // credentialAuthType Field Functions 
    bool hasCredentialAuthType() const { return this->credentialAuthType_ != nullptr;};
    void deleteCredentialAuthType() { this->credentialAuthType_ = nullptr;};
    inline string credentialAuthType() const { DARABONBA_PTR_GET_DEFAULT(credentialAuthType_, "") };
    inline CredentialListItem& setCredentialAuthType(string credentialAuthType) { DARABONBA_PTR_SET_VALUE(credentialAuthType_, credentialAuthType) };


    // credentialId Field Functions 
    bool hasCredentialId() const { return this->credentialId_ != nullptr;};
    void deleteCredentialId() { this->credentialId_ = nullptr;};
    inline string credentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
    inline CredentialListItem& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string credentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline CredentialListItem& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


    // credentialSourceType Field Functions 
    bool hasCredentialSourceType() const { return this->credentialSourceType_ != nullptr;};
    void deleteCredentialSourceType() { this->credentialSourceType_ = nullptr;};
    inline string credentialSourceType() const { DARABONBA_PTR_GET_DEFAULT(credentialSourceType_, "") };
    inline CredentialListItem& setCredentialSourceType(string credentialSourceType) { DARABONBA_PTR_SET_VALUE(credentialSourceType_, credentialSourceType) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CredentialListItem& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // relatedResourceCount Field Functions 
    bool hasRelatedResourceCount() const { return this->relatedResourceCount_ != nullptr;};
    void deleteRelatedResourceCount() { this->relatedResourceCount_ = nullptr;};
    inline int32_t relatedResourceCount() const { DARABONBA_PTR_GET_DEFAULT(relatedResourceCount_, 0) };
    inline CredentialListItem& setRelatedResourceCount(int32_t relatedResourceCount) { DARABONBA_PTR_SET_VALUE(relatedResourceCount_, relatedResourceCount) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline CredentialListItem& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> credentialAuthType_ = nullptr;
    std::shared_ptr<string> credentialId_ = nullptr;
    std::shared_ptr<string> credentialName_ = nullptr;
    std::shared_ptr<string> credentialSourceType_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<int32_t> relatedResourceCount_ = nullptr;
    std::shared_ptr<string> updatedAt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
