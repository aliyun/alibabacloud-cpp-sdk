// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETUSERIDBYOPENDINGTALKIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETUSERIDBYOPENDINGTALKIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class BatchGetUserIdByOpenDingtalkIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetUserIdByOpenDingtalkIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(openDingtalkIds, openDingtalkIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetUserIdByOpenDingtalkIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(openDingtalkIds, openDingtalkIds_);
    };
    BatchGetUserIdByOpenDingtalkIdRequest() = default ;
    BatchGetUserIdByOpenDingtalkIdRequest(const BatchGetUserIdByOpenDingtalkIdRequest &) = default ;
    BatchGetUserIdByOpenDingtalkIdRequest(BatchGetUserIdByOpenDingtalkIdRequest &&) = default ;
    BatchGetUserIdByOpenDingtalkIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetUserIdByOpenDingtalkIdRequest() = default ;
    BatchGetUserIdByOpenDingtalkIdRequest& operator=(const BatchGetUserIdByOpenDingtalkIdRequest &) = default ;
    BatchGetUserIdByOpenDingtalkIdRequest& operator=(BatchGetUserIdByOpenDingtalkIdRequest &&) = default ;
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

    virtual bool empty() const override { return this->tenantContext_ == nullptr
        && this->openDingtalkIds_ == nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const BatchGetUserIdByOpenDingtalkIdRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, BatchGetUserIdByOpenDingtalkIdRequest::TenantContext) };
    inline BatchGetUserIdByOpenDingtalkIdRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, BatchGetUserIdByOpenDingtalkIdRequest::TenantContext) };
    inline BatchGetUserIdByOpenDingtalkIdRequest& setTenantContext(const BatchGetUserIdByOpenDingtalkIdRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline BatchGetUserIdByOpenDingtalkIdRequest& setTenantContext(BatchGetUserIdByOpenDingtalkIdRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // openDingtalkIds Field Functions 
    bool hasOpenDingtalkIds() const { return this->openDingtalkIds_ != nullptr;};
    void deleteOpenDingtalkIds() { this->openDingtalkIds_ = nullptr;};
    inline const vector<string> & getOpenDingtalkIds() const { DARABONBA_PTR_GET_CONST(openDingtalkIds_, vector<string>) };
    inline vector<string> getOpenDingtalkIds() { DARABONBA_PTR_GET(openDingtalkIds_, vector<string>) };
    inline BatchGetUserIdByOpenDingtalkIdRequest& setOpenDingtalkIds(const vector<string> & openDingtalkIds) { DARABONBA_PTR_SET_VALUE(openDingtalkIds_, openDingtalkIds) };
    inline BatchGetUserIdByOpenDingtalkIdRequest& setOpenDingtalkIds(vector<string> && openDingtalkIds) { DARABONBA_PTR_SET_RVALUE(openDingtalkIds_, openDingtalkIds) };


  protected:
    shared_ptr<BatchGetUserIdByOpenDingtalkIdRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<vector<string>> openDingtalkIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
