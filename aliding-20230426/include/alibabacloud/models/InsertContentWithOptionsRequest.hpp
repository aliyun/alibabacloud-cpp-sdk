// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTCONTENTWITHOPTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTCONTENTWITHOPTIONSREQUEST_HPP_
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
  class InsertContentWithOptionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertContentWithOptionsRequest& obj) { 
      DARABONBA_ANY_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DocumentId, documentId_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, InsertContentWithOptionsRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DocumentId, documentId_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    InsertContentWithOptionsRequest() = default ;
    InsertContentWithOptionsRequest(const InsertContentWithOptionsRequest &) = default ;
    InsertContentWithOptionsRequest(InsertContentWithOptionsRequest &&) = default ;
    InsertContentWithOptionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertContentWithOptionsRequest() = default ;
    InsertContentWithOptionsRequest& operator=(const InsertContentWithOptionsRequest &) = default ;
    InsertContentWithOptionsRequest& operator=(InsertContentWithOptionsRequest &&) = default ;
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
        && this->documentId_ == nullptr && this->index_ == nullptr && this->path_ == nullptr && this->tenantContext_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline     const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
    Darabonba::Json & getContent() { DARABONBA_GET(content_) };
    inline InsertContentWithOptionsRequest& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
    inline InsertContentWithOptionsRequest& setContent(Darabonba::Json && content) { DARABONBA_SET_RVALUE(content_, content) };


    // documentId Field Functions 
    bool hasDocumentId() const { return this->documentId_ != nullptr;};
    void deleteDocumentId() { this->documentId_ = nullptr;};
    inline string getDocumentId() const { DARABONBA_PTR_GET_DEFAULT(documentId_, "") };
    inline InsertContentWithOptionsRequest& setDocumentId(string documentId) { DARABONBA_PTR_SET_VALUE(documentId_, documentId) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline InsertContentWithOptionsRequest& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline const vector<int32_t> & getPath() const { DARABONBA_PTR_GET_CONST(path_, vector<int32_t>) };
    inline vector<int32_t> getPath() { DARABONBA_PTR_GET(path_, vector<int32_t>) };
    inline InsertContentWithOptionsRequest& setPath(const vector<int32_t> & path) { DARABONBA_PTR_SET_VALUE(path_, path) };
    inline InsertContentWithOptionsRequest& setPath(vector<int32_t> && path) { DARABONBA_PTR_SET_RVALUE(path_, path) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const InsertContentWithOptionsRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, InsertContentWithOptionsRequest::TenantContext) };
    inline InsertContentWithOptionsRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, InsertContentWithOptionsRequest::TenantContext) };
    inline InsertContentWithOptionsRequest& setTenantContext(const InsertContentWithOptionsRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline InsertContentWithOptionsRequest& setTenantContext(InsertContentWithOptionsRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    Darabonba::Json content_ {};
    // This parameter is required.
    shared_ptr<string> documentId_ {};
    shared_ptr<int32_t> index_ {};
    shared_ptr<vector<int32_t>> path_ {};
    shared_ptr<InsertContentWithOptionsRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
