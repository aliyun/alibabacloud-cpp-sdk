// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVECONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVECONTENTREQUEST_HPP_
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
  class SaveContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Contents, contents_);
      DARABONBA_PTR_TO_JSON(DdFrom, ddFrom_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, SaveContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Contents, contents_);
      DARABONBA_PTR_FROM_JSON(DdFrom, ddFrom_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    SaveContentRequest() = default ;
    SaveContentRequest(const SaveContentRequest &) = default ;
    SaveContentRequest(SaveContentRequest &&) = default ;
    SaveContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveContentRequest() = default ;
    SaveContentRequest& operator=(const SaveContentRequest &) = default ;
    SaveContentRequest& operator=(SaveContentRequest &&) = default ;
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

    class Contents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Contents& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(ContentType, contentType_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Sort, sort_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Contents& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Sort, sort_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Contents() = default ;
      Contents(const Contents &) = default ;
      Contents(Contents &&) = default ;
      Contents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Contents() = default ;
      Contents& operator=(const Contents &) = default ;
      Contents& operator=(Contents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->contentType_ == nullptr && this->key_ == nullptr && this->sort_ == nullptr && this->type_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Contents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline Contents& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Contents& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // sort Field Functions 
      bool hasSort() const { return this->sort_ != nullptr;};
      void deleteSort() { this->sort_ = nullptr;};
      inline int64_t getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, 0L) };
      inline Contents& setSort(int64_t sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
      inline Contents& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // This parameter is required.
      shared_ptr<string> content_ {};
      // This parameter is required.
      shared_ptr<string> contentType_ {};
      // This parameter is required.
      shared_ptr<string> key_ {};
      // This parameter is required.
      shared_ptr<int64_t> sort_ {};
      // This parameter is required.
      shared_ptr<int64_t> type_ {};
    };

    virtual bool empty() const override { return this->contents_ == nullptr
        && this->ddFrom_ == nullptr && this->templateId_ == nullptr && this->tenantContext_ == nullptr; };
    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<SaveContentRequest::Contents> & getContents() const { DARABONBA_PTR_GET_CONST(contents_, vector<SaveContentRequest::Contents>) };
    inline vector<SaveContentRequest::Contents> getContents() { DARABONBA_PTR_GET(contents_, vector<SaveContentRequest::Contents>) };
    inline SaveContentRequest& setContents(const vector<SaveContentRequest::Contents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline SaveContentRequest& setContents(vector<SaveContentRequest::Contents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // ddFrom Field Functions 
    bool hasDdFrom() const { return this->ddFrom_ != nullptr;};
    void deleteDdFrom() { this->ddFrom_ = nullptr;};
    inline string getDdFrom() const { DARABONBA_PTR_GET_DEFAULT(ddFrom_, "") };
    inline SaveContentRequest& setDdFrom(string ddFrom) { DARABONBA_PTR_SET_VALUE(ddFrom_, ddFrom) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SaveContentRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const SaveContentRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, SaveContentRequest::TenantContext) };
    inline SaveContentRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, SaveContentRequest::TenantContext) };
    inline SaveContentRequest& setTenantContext(const SaveContentRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline SaveContentRequest& setTenantContext(SaveContentRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<vector<SaveContentRequest::Contents>> contents_ {};
    // This parameter is required.
    shared_ptr<string> ddFrom_ {};
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    shared_ptr<SaveContentRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
