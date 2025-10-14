// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYDENTRYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYDENTRYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CopyDentryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyDentryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryId, dentryId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(TargetSpaceId, targetSpaceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(ToNextDentryId, toNextDentryId_);
      DARABONBA_PTR_TO_JSON(ToParentDentryId, toParentDentryId_);
      DARABONBA_PTR_TO_JSON(ToPrevDentryId, toPrevDentryId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyDentryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryId, dentryId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(TargetSpaceId, targetSpaceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(ToNextDentryId, toNextDentryId_);
      DARABONBA_PTR_FROM_JSON(ToParentDentryId, toParentDentryId_);
      DARABONBA_PTR_FROM_JSON(ToPrevDentryId, toPrevDentryId_);
    };
    CopyDentryShrinkRequest() = default ;
    CopyDentryShrinkRequest(const CopyDentryShrinkRequest &) = default ;
    CopyDentryShrinkRequest(CopyDentryShrinkRequest &&) = default ;
    CopyDentryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyDentryShrinkRequest() = default ;
    CopyDentryShrinkRequest& operator=(const CopyDentryShrinkRequest &) = default ;
    CopyDentryShrinkRequest& operator=(CopyDentryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dentryId_ == nullptr
        && return this->name_ == nullptr && return this->spaceId_ == nullptr && return this->targetSpaceId_ == nullptr && return this->tenantContextShrink_ == nullptr && return this->toNextDentryId_ == nullptr
        && return this->toParentDentryId_ == nullptr && return this->toPrevDentryId_ == nullptr; };
    // dentryId Field Functions 
    bool hasDentryId() const { return this->dentryId_ != nullptr;};
    void deleteDentryId() { this->dentryId_ = nullptr;};
    inline string dentryId() const { DARABONBA_PTR_GET_DEFAULT(dentryId_, "") };
    inline CopyDentryShrinkRequest& setDentryId(string dentryId) { DARABONBA_PTR_SET_VALUE(dentryId_, dentryId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CopyDentryShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline CopyDentryShrinkRequest& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // targetSpaceId Field Functions 
    bool hasTargetSpaceId() const { return this->targetSpaceId_ != nullptr;};
    void deleteTargetSpaceId() { this->targetSpaceId_ = nullptr;};
    inline string targetSpaceId() const { DARABONBA_PTR_GET_DEFAULT(targetSpaceId_, "") };
    inline CopyDentryShrinkRequest& setTargetSpaceId(string targetSpaceId) { DARABONBA_PTR_SET_VALUE(targetSpaceId_, targetSpaceId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline CopyDentryShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // toNextDentryId Field Functions 
    bool hasToNextDentryId() const { return this->toNextDentryId_ != nullptr;};
    void deleteToNextDentryId() { this->toNextDentryId_ = nullptr;};
    inline string toNextDentryId() const { DARABONBA_PTR_GET_DEFAULT(toNextDentryId_, "") };
    inline CopyDentryShrinkRequest& setToNextDentryId(string toNextDentryId) { DARABONBA_PTR_SET_VALUE(toNextDentryId_, toNextDentryId) };


    // toParentDentryId Field Functions 
    bool hasToParentDentryId() const { return this->toParentDentryId_ != nullptr;};
    void deleteToParentDentryId() { this->toParentDentryId_ = nullptr;};
    inline string toParentDentryId() const { DARABONBA_PTR_GET_DEFAULT(toParentDentryId_, "") };
    inline CopyDentryShrinkRequest& setToParentDentryId(string toParentDentryId) { DARABONBA_PTR_SET_VALUE(toParentDentryId_, toParentDentryId) };


    // toPrevDentryId Field Functions 
    bool hasToPrevDentryId() const { return this->toPrevDentryId_ != nullptr;};
    void deleteToPrevDentryId() { this->toPrevDentryId_ = nullptr;};
    inline string toPrevDentryId() const { DARABONBA_PTR_GET_DEFAULT(toPrevDentryId_, "") };
    inline CopyDentryShrinkRequest& setToPrevDentryId(string toPrevDentryId) { DARABONBA_PTR_SET_VALUE(toPrevDentryId_, toPrevDentryId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dentryId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetSpaceId_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
    std::shared_ptr<string> toNextDentryId_ = nullptr;
    std::shared_ptr<string> toParentDentryId_ = nullptr;
    std::shared_ptr<string> toPrevDentryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
