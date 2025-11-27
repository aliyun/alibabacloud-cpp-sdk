// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITTENANTALIASRESPONSEBODYALIASINFO_HPP_
#define ALIBABACLOUD_MODELS_INITTENANTALIASRESPONSEBODYALIASINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class InitTenantAliasResponseBodyAliasInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitTenantAliasResponseBodyAliasInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AliasEditDisabledReason, aliasEditDisabledReason_);
      DARABONBA_PTR_TO_JSON(AliasEditable, aliasEditable_);
      DARABONBA_PTR_TO_JSON(AliasSourceType, aliasSourceType_);
      DARABONBA_PTR_TO_JSON(NextModifyTime, nextModifyTime_);
    };
    friend void from_json(const Darabonba::Json& j, InitTenantAliasResponseBodyAliasInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasEditDisabledReason, aliasEditDisabledReason_);
      DARABONBA_PTR_FROM_JSON(AliasEditable, aliasEditable_);
      DARABONBA_PTR_FROM_JSON(AliasSourceType, aliasSourceType_);
      DARABONBA_PTR_FROM_JSON(NextModifyTime, nextModifyTime_);
    };
    InitTenantAliasResponseBodyAliasInfo() = default ;
    InitTenantAliasResponseBodyAliasInfo(const InitTenantAliasResponseBodyAliasInfo &) = default ;
    InitTenantAliasResponseBodyAliasInfo(InitTenantAliasResponseBodyAliasInfo &&) = default ;
    InitTenantAliasResponseBodyAliasInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitTenantAliasResponseBodyAliasInfo() = default ;
    InitTenantAliasResponseBodyAliasInfo& operator=(const InitTenantAliasResponseBodyAliasInfo &) = default ;
    InitTenantAliasResponseBodyAliasInfo& operator=(InitTenantAliasResponseBodyAliasInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasEditDisabledReason_ == nullptr
        && return this->aliasEditable_ == nullptr && return this->aliasSourceType_ == nullptr && return this->nextModifyTime_ == nullptr; };
    // aliasEditDisabledReason Field Functions 
    bool hasAliasEditDisabledReason() const { return this->aliasEditDisabledReason_ != nullptr;};
    void deleteAliasEditDisabledReason() { this->aliasEditDisabledReason_ = nullptr;};
    inline string aliasEditDisabledReason() const { DARABONBA_PTR_GET_DEFAULT(aliasEditDisabledReason_, "") };
    inline InitTenantAliasResponseBodyAliasInfo& setAliasEditDisabledReason(string aliasEditDisabledReason) { DARABONBA_PTR_SET_VALUE(aliasEditDisabledReason_, aliasEditDisabledReason) };


    // aliasEditable Field Functions 
    bool hasAliasEditable() const { return this->aliasEditable_ != nullptr;};
    void deleteAliasEditable() { this->aliasEditable_ = nullptr;};
    inline bool aliasEditable() const { DARABONBA_PTR_GET_DEFAULT(aliasEditable_, false) };
    inline InitTenantAliasResponseBodyAliasInfo& setAliasEditable(bool aliasEditable) { DARABONBA_PTR_SET_VALUE(aliasEditable_, aliasEditable) };


    // aliasSourceType Field Functions 
    bool hasAliasSourceType() const { return this->aliasSourceType_ != nullptr;};
    void deleteAliasSourceType() { this->aliasSourceType_ = nullptr;};
    inline string aliasSourceType() const { DARABONBA_PTR_GET_DEFAULT(aliasSourceType_, "") };
    inline InitTenantAliasResponseBodyAliasInfo& setAliasSourceType(string aliasSourceType) { DARABONBA_PTR_SET_VALUE(aliasSourceType_, aliasSourceType) };


    // nextModifyTime Field Functions 
    bool hasNextModifyTime() const { return this->nextModifyTime_ != nullptr;};
    void deleteNextModifyTime() { this->nextModifyTime_ = nullptr;};
    inline string nextModifyTime() const { DARABONBA_PTR_GET_DEFAULT(nextModifyTime_, "") };
    inline InitTenantAliasResponseBodyAliasInfo& setNextModifyTime(string nextModifyTime) { DARABONBA_PTR_SET_VALUE(nextModifyTime_, nextModifyTime) };


  protected:
    // The reason why modification is not allowed.
    std::shared_ptr<string> aliasEditDisabledReason_ = nullptr;
    // Indicates whether modification is allowed.
    std::shared_ptr<bool> aliasEditable_ = nullptr;
    // The source of the organization ID.
    // 
    // Valid values:
    // 
    // *   Generated: auto-generated.
    // *   Customized: user-defined.
    std::shared_ptr<string> aliasSourceType_ = nullptr;
    // The time window during which modification is allowed.
    std::shared_ptr<string> nextModifyTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
