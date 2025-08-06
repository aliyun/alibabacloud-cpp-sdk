// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCUPDATECONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOCUPDATECONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DocUpdateContentRequestTenantContext.hpp>
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
    virtual bool empty() const override { this->content_ != nullptr
        && this->dataType_ != nullptr && this->docKey_ != nullptr && this->tenantContext_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DocUpdateContentRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DocUpdateContentRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // docKey Field Functions 
    bool hasDocKey() const { return this->docKey_ != nullptr;};
    void deleteDocKey() { this->docKey_ = nullptr;};
    inline string docKey() const { DARABONBA_PTR_GET_DEFAULT(docKey_, "") };
    inline DocUpdateContentRequest& setDocKey(string docKey) { DARABONBA_PTR_SET_VALUE(docKey_, docKey) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DocUpdateContentRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DocUpdateContentRequestTenantContext) };
    inline DocUpdateContentRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, DocUpdateContentRequestTenantContext) };
    inline DocUpdateContentRequest& setTenantContext(const DocUpdateContentRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DocUpdateContentRequest& setTenantContext(DocUpdateContentRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> dataType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> docKey_ = nullptr;
    std::shared_ptr<DocUpdateContentRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
