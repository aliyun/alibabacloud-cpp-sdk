// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCCONTENTTAKIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOCCONTENTTAKIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetDocContentTakIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocContentTakIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(GenerateCp, generateCp_);
      DARABONBA_PTR_TO_JSON(TargetFormat, targetFormat_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocContentTakIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(GenerateCp, generateCp_);
      DARABONBA_PTR_FROM_JSON(TargetFormat, targetFormat_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetDocContentTakIdRequest() = default ;
    GetDocContentTakIdRequest(const GetDocContentTakIdRequest &) = default ;
    GetDocContentTakIdRequest(GetDocContentTakIdRequest &&) = default ;
    GetDocContentTakIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocContentTakIdRequest() = default ;
    GetDocContentTakIdRequest& operator=(const GetDocContentTakIdRequest &) = default ;
    GetDocContentTakIdRequest& operator=(GetDocContentTakIdRequest &&) = default ;
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

    virtual bool empty() const override { return this->dentryUuid_ == nullptr
        && this->generateCp_ == nullptr && this->targetFormat_ == nullptr && this->tenantContext_ == nullptr; };
    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string getDentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline GetDocContentTakIdRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // generateCp Field Functions 
    bool hasGenerateCp() const { return this->generateCp_ != nullptr;};
    void deleteGenerateCp() { this->generateCp_ = nullptr;};
    inline bool getGenerateCp() const { DARABONBA_PTR_GET_DEFAULT(generateCp_, false) };
    inline GetDocContentTakIdRequest& setGenerateCp(bool generateCp) { DARABONBA_PTR_SET_VALUE(generateCp_, generateCp) };


    // targetFormat Field Functions 
    bool hasTargetFormat() const { return this->targetFormat_ != nullptr;};
    void deleteTargetFormat() { this->targetFormat_ = nullptr;};
    inline string getTargetFormat() const { DARABONBA_PTR_GET_DEFAULT(targetFormat_, "") };
    inline GetDocContentTakIdRequest& setTargetFormat(string targetFormat) { DARABONBA_PTR_SET_VALUE(targetFormat_, targetFormat) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetDocContentTakIdRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetDocContentTakIdRequest::TenantContext) };
    inline GetDocContentTakIdRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GetDocContentTakIdRequest::TenantContext) };
    inline GetDocContentTakIdRequest& setTenantContext(const GetDocContentTakIdRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetDocContentTakIdRequest& setTenantContext(GetDocContentTakIdRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> dentryUuid_ {};
    shared_ptr<bool> generateCp_ {};
    shared_ptr<string> targetFormat_ {};
    shared_ptr<GetDocContentTakIdRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
