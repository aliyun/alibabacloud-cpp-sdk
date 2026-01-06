// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCUPDATECONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOCUPDATECONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DocUpdateContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocUpdateContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(DocKey, docKey_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, DocUpdateContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(DocKey, docKey_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    DocUpdateContentRequest() = default ;
    DocUpdateContentRequest(const DocUpdateContentRequest &) = default ;
    DocUpdateContentRequest(DocUpdateContentRequest &&) = default ;
    DocUpdateContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocUpdateContentRequest() = default ;
    DocUpdateContentRequest& operator=(const DocUpdateContentRequest &) = default ;
    DocUpdateContentRequest& operator=(DocUpdateContentRequest &&) = default ;
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

    virtual bool empty() const override { return this->content_ == nullptr
        && this->dataType_ == nullptr && this->docKey_ == nullptr && this->tenantContext_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DocUpdateContentRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DocUpdateContentRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // docKey Field Functions 
    bool hasDocKey() const { return this->docKey_ != nullptr;};
    void deleteDocKey() { this->docKey_ = nullptr;};
    inline string getDocKey() const { DARABONBA_PTR_GET_DEFAULT(docKey_, "") };
    inline DocUpdateContentRequest& setDocKey(string docKey) { DARABONBA_PTR_SET_VALUE(docKey_, docKey) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DocUpdateContentRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DocUpdateContentRequest::TenantContext) };
    inline DocUpdateContentRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, DocUpdateContentRequest::TenantContext) };
    inline DocUpdateContentRequest& setTenantContext(const DocUpdateContentRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DocUpdateContentRequest& setTenantContext(DocUpdateContentRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> content_ {};
    shared_ptr<string> dataType_ {};
    // This parameter is required.
    shared_ptr<string> docKey_ {};
    shared_ptr<DocUpdateContentRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
