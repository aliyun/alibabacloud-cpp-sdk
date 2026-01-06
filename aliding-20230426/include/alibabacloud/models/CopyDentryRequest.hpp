// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYDENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYDENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CopyDentryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyDentryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryId, dentryId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(TargetSpaceId, targetSpaceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(ToNextDentryId, toNextDentryId_);
      DARABONBA_PTR_TO_JSON(ToParentDentryId, toParentDentryId_);
      DARABONBA_PTR_TO_JSON(ToPrevDentryId, toPrevDentryId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyDentryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryId, dentryId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(TargetSpaceId, targetSpaceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(ToNextDentryId, toNextDentryId_);
      DARABONBA_PTR_FROM_JSON(ToParentDentryId, toParentDentryId_);
      DARABONBA_PTR_FROM_JSON(ToPrevDentryId, toPrevDentryId_);
    };
    CopyDentryRequest() = default ;
    CopyDentryRequest(const CopyDentryRequest &) = default ;
    CopyDentryRequest(CopyDentryRequest &&) = default ;
    CopyDentryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyDentryRequest() = default ;
    CopyDentryRequest& operator=(const CopyDentryRequest &) = default ;
    CopyDentryRequest& operator=(CopyDentryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->dentryId_ == nullptr
        && this->name_ == nullptr && this->spaceId_ == nullptr && this->targetSpaceId_ == nullptr && this->tenantContext_ == nullptr && this->toNextDentryId_ == nullptr
        && this->toParentDentryId_ == nullptr && this->toPrevDentryId_ == nullptr; };
    // dentryId Field Functions 
    bool hasDentryId() const { return this->dentryId_ != nullptr;};
    void deleteDentryId() { this->dentryId_ = nullptr;};
    inline string getDentryId() const { DARABONBA_PTR_GET_DEFAULT(dentryId_, "") };
    inline CopyDentryRequest& setDentryId(string dentryId) { DARABONBA_PTR_SET_VALUE(dentryId_, dentryId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CopyDentryRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string getSpaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline CopyDentryRequest& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // targetSpaceId Field Functions 
    bool hasTargetSpaceId() const { return this->targetSpaceId_ != nullptr;};
    void deleteTargetSpaceId() { this->targetSpaceId_ = nullptr;};
    inline string getTargetSpaceId() const { DARABONBA_PTR_GET_DEFAULT(targetSpaceId_, "") };
    inline CopyDentryRequest& setTargetSpaceId(string targetSpaceId) { DARABONBA_PTR_SET_VALUE(targetSpaceId_, targetSpaceId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CopyDentryRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CopyDentryRequest::TenantContext) };
    inline CopyDentryRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, CopyDentryRequest::TenantContext) };
    inline CopyDentryRequest& setTenantContext(const CopyDentryRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CopyDentryRequest& setTenantContext(CopyDentryRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // toNextDentryId Field Functions 
    bool hasToNextDentryId() const { return this->toNextDentryId_ != nullptr;};
    void deleteToNextDentryId() { this->toNextDentryId_ = nullptr;};
    inline string getToNextDentryId() const { DARABONBA_PTR_GET_DEFAULT(toNextDentryId_, "") };
    inline CopyDentryRequest& setToNextDentryId(string toNextDentryId) { DARABONBA_PTR_SET_VALUE(toNextDentryId_, toNextDentryId) };


    // toParentDentryId Field Functions 
    bool hasToParentDentryId() const { return this->toParentDentryId_ != nullptr;};
    void deleteToParentDentryId() { this->toParentDentryId_ = nullptr;};
    inline string getToParentDentryId() const { DARABONBA_PTR_GET_DEFAULT(toParentDentryId_, "") };
    inline CopyDentryRequest& setToParentDentryId(string toParentDentryId) { DARABONBA_PTR_SET_VALUE(toParentDentryId_, toParentDentryId) };


    // toPrevDentryId Field Functions 
    bool hasToPrevDentryId() const { return this->toPrevDentryId_ != nullptr;};
    void deleteToPrevDentryId() { this->toPrevDentryId_ = nullptr;};
    inline string getToPrevDentryId() const { DARABONBA_PTR_GET_DEFAULT(toPrevDentryId_, "") };
    inline CopyDentryRequest& setToPrevDentryId(string toPrevDentryId) { DARABONBA_PTR_SET_VALUE(toPrevDentryId_, toPrevDentryId) };


  protected:
    // This parameter is required.
    shared_ptr<string> dentryId_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> spaceId_ {};
    // This parameter is required.
    shared_ptr<string> targetSpaceId_ {};
    shared_ptr<CopyDentryRequest::TenantContext> tenantContext_ {};
    shared_ptr<string> toNextDentryId_ {};
    shared_ptr<string> toParentDentryId_ {};
    shared_ptr<string> toPrevDentryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
