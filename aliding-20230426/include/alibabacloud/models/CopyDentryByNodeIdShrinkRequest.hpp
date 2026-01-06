// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYDENTRYBYNODEIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYDENTRYBYNODEIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CopyDentryByNodeIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyDentryByNodeIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(ToNextNodeId, toNextNodeId_);
      DARABONBA_PTR_TO_JSON(ToParentNodeId, toParentNodeId_);
      DARABONBA_PTR_TO_JSON(ToPrevNodeId, toPrevNodeId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyDentryByNodeIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(ToNextNodeId, toNextNodeId_);
      DARABONBA_PTR_FROM_JSON(ToParentNodeId, toParentNodeId_);
      DARABONBA_PTR_FROM_JSON(ToPrevNodeId, toPrevNodeId_);
    };
    CopyDentryByNodeIdShrinkRequest() = default ;
    CopyDentryByNodeIdShrinkRequest(const CopyDentryByNodeIdShrinkRequest &) = default ;
    CopyDentryByNodeIdShrinkRequest(CopyDentryByNodeIdShrinkRequest &&) = default ;
    CopyDentryByNodeIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyDentryByNodeIdShrinkRequest() = default ;
    CopyDentryByNodeIdShrinkRequest& operator=(const CopyDentryByNodeIdShrinkRequest &) = default ;
    CopyDentryByNodeIdShrinkRequest& operator=(CopyDentryByNodeIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dentryUuid_ == nullptr
        && this->name_ == nullptr && this->tenantContextShrink_ == nullptr && this->toNextNodeId_ == nullptr && this->toParentNodeId_ == nullptr && this->toPrevNodeId_ == nullptr; };
    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string getDentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline CopyDentryByNodeIdShrinkRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CopyDentryByNodeIdShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline CopyDentryByNodeIdShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // toNextNodeId Field Functions 
    bool hasToNextNodeId() const { return this->toNextNodeId_ != nullptr;};
    void deleteToNextNodeId() { this->toNextNodeId_ = nullptr;};
    inline string getToNextNodeId() const { DARABONBA_PTR_GET_DEFAULT(toNextNodeId_, "") };
    inline CopyDentryByNodeIdShrinkRequest& setToNextNodeId(string toNextNodeId) { DARABONBA_PTR_SET_VALUE(toNextNodeId_, toNextNodeId) };


    // toParentNodeId Field Functions 
    bool hasToParentNodeId() const { return this->toParentNodeId_ != nullptr;};
    void deleteToParentNodeId() { this->toParentNodeId_ = nullptr;};
    inline string getToParentNodeId() const { DARABONBA_PTR_GET_DEFAULT(toParentNodeId_, "") };
    inline CopyDentryByNodeIdShrinkRequest& setToParentNodeId(string toParentNodeId) { DARABONBA_PTR_SET_VALUE(toParentNodeId_, toParentNodeId) };


    // toPrevNodeId Field Functions 
    bool hasToPrevNodeId() const { return this->toPrevNodeId_ != nullptr;};
    void deleteToPrevNodeId() { this->toPrevNodeId_ = nullptr;};
    inline string getToPrevNodeId() const { DARABONBA_PTR_GET_DEFAULT(toPrevNodeId_, "") };
    inline CopyDentryByNodeIdShrinkRequest& setToPrevNodeId(string toPrevNodeId) { DARABONBA_PTR_SET_VALUE(toPrevNodeId_, toPrevNodeId) };


  protected:
    // This parameter is required.
    shared_ptr<string> dentryUuid_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> tenantContextShrink_ {};
    shared_ptr<string> toNextNodeId_ {};
    shared_ptr<string> toParentNodeId_ {};
    shared_ptr<string> toPrevNodeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
