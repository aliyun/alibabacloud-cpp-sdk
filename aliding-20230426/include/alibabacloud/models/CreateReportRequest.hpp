// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPORTREQUEST_HPP_
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
  class CreateReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Contents, contents_);
      DARABONBA_PTR_TO_JSON(DdFrom, ddFrom_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(ToChat, toChat_);
      DARABONBA_PTR_TO_JSON(ToCids, toCids_);
      DARABONBA_PTR_TO_JSON(ToUserids, toUserids_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Contents, contents_);
      DARABONBA_PTR_FROM_JSON(DdFrom, ddFrom_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(ToChat, toChat_);
      DARABONBA_PTR_FROM_JSON(ToCids, toCids_);
      DARABONBA_PTR_FROM_JSON(ToUserids, toUserids_);
    };
    CreateReportRequest() = default ;
    CreateReportRequest(const CreateReportRequest &) = default ;
    CreateReportRequest(CreateReportRequest &&) = default ;
    CreateReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReportRequest() = default ;
    CreateReportRequest& operator=(const CreateReportRequest &) = default ;
    CreateReportRequest& operator=(CreateReportRequest &&) = default ;
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
        && this->ddFrom_ == nullptr && this->templateId_ == nullptr && this->tenantContext_ == nullptr && this->toChat_ == nullptr && this->toCids_ == nullptr
        && this->toUserids_ == nullptr; };
    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<CreateReportRequest::Contents> & getContents() const { DARABONBA_PTR_GET_CONST(contents_, vector<CreateReportRequest::Contents>) };
    inline vector<CreateReportRequest::Contents> getContents() { DARABONBA_PTR_GET(contents_, vector<CreateReportRequest::Contents>) };
    inline CreateReportRequest& setContents(const vector<CreateReportRequest::Contents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline CreateReportRequest& setContents(vector<CreateReportRequest::Contents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // ddFrom Field Functions 
    bool hasDdFrom() const { return this->ddFrom_ != nullptr;};
    void deleteDdFrom() { this->ddFrom_ = nullptr;};
    inline string getDdFrom() const { DARABONBA_PTR_GET_DEFAULT(ddFrom_, "") };
    inline CreateReportRequest& setDdFrom(string ddFrom) { DARABONBA_PTR_SET_VALUE(ddFrom_, ddFrom) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateReportRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CreateReportRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CreateReportRequest::TenantContext) };
    inline CreateReportRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, CreateReportRequest::TenantContext) };
    inline CreateReportRequest& setTenantContext(const CreateReportRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CreateReportRequest& setTenantContext(CreateReportRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // toChat Field Functions 
    bool hasToChat() const { return this->toChat_ != nullptr;};
    void deleteToChat() { this->toChat_ = nullptr;};
    inline bool getToChat() const { DARABONBA_PTR_GET_DEFAULT(toChat_, false) };
    inline CreateReportRequest& setToChat(bool toChat) { DARABONBA_PTR_SET_VALUE(toChat_, toChat) };


    // toCids Field Functions 
    bool hasToCids() const { return this->toCids_ != nullptr;};
    void deleteToCids() { this->toCids_ = nullptr;};
    inline const vector<string> & getToCids() const { DARABONBA_PTR_GET_CONST(toCids_, vector<string>) };
    inline vector<string> getToCids() { DARABONBA_PTR_GET(toCids_, vector<string>) };
    inline CreateReportRequest& setToCids(const vector<string> & toCids) { DARABONBA_PTR_SET_VALUE(toCids_, toCids) };
    inline CreateReportRequest& setToCids(vector<string> && toCids) { DARABONBA_PTR_SET_RVALUE(toCids_, toCids) };


    // toUserids Field Functions 
    bool hasToUserids() const { return this->toUserids_ != nullptr;};
    void deleteToUserids() { this->toUserids_ = nullptr;};
    inline const vector<string> & getToUserids() const { DARABONBA_PTR_GET_CONST(toUserids_, vector<string>) };
    inline vector<string> getToUserids() { DARABONBA_PTR_GET(toUserids_, vector<string>) };
    inline CreateReportRequest& setToUserids(const vector<string> & toUserids) { DARABONBA_PTR_SET_VALUE(toUserids_, toUserids) };
    inline CreateReportRequest& setToUserids(vector<string> && toUserids) { DARABONBA_PTR_SET_RVALUE(toUserids_, toUserids) };


  protected:
    // This parameter is required.
    shared_ptr<vector<CreateReportRequest::Contents>> contents_ {};
    // This parameter is required.
    shared_ptr<string> ddFrom_ {};
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    shared_ptr<CreateReportRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<bool> toChat_ {};
    shared_ptr<vector<string>> toCids_ {};
    shared_ptr<vector<string>> toUserids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
