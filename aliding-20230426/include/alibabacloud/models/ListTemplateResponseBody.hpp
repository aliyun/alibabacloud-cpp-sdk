// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATERESPONSEBODY_HPP_
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
  class ListTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(templateList, templateList_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(templateList, templateList_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    ListTemplateResponseBody() = default ;
    ListTemplateResponseBody(const ListTemplateResponseBody &) = default ;
    ListTemplateResponseBody(ListTemplateResponseBody &&) = default ;
    ListTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplateResponseBody() = default ;
    ListTemplateResponseBody& operator=(const ListTemplateResponseBody &) = default ;
    ListTemplateResponseBody& operator=(ListTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TemplateList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateList& obj) { 
        DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DocType, docType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateList& obj) { 
        DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DocType, docType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      };
      TemplateList() = default ;
      TemplateList(const TemplateList &) = default ;
      TemplateList(TemplateList &&) = default ;
      TemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateList() = default ;
      TemplateList& operator=(const TemplateList &) = default ;
      TemplateList& operator=(TemplateList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->coverUrl_ == nullptr
        && this->createTime_ == nullptr && this->docType_ == nullptr && this->id_ == nullptr && this->templateType_ == nullptr && this->title_ == nullptr
        && this->updateTime_ == nullptr && this->workspaceId_ == nullptr; };
      // coverUrl Field Functions 
      bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
      void deleteCoverUrl() { this->coverUrl_ = nullptr;};
      inline string getCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
      inline TemplateList& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline TemplateList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // docType Field Functions 
      bool hasDocType() const { return this->docType_ != nullptr;};
      void deleteDocType() { this->docType_ = nullptr;};
      inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
      inline TemplateList& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline TemplateList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline TemplateList& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline TemplateList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline TemplateList& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline TemplateList& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      shared_ptr<string> coverUrl_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> docType_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> templateType_ {};
      shared_ptr<string> title_ {};
      shared_ptr<int64_t> updateTime_ {};
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->hasMore_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->templateList_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListTemplateResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTemplateResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateList Field Functions 
    bool hasTemplateList() const { return this->templateList_ != nullptr;};
    void deleteTemplateList() { this->templateList_ = nullptr;};
    inline const vector<ListTemplateResponseBody::TemplateList> & getTemplateList() const { DARABONBA_PTR_GET_CONST(templateList_, vector<ListTemplateResponseBody::TemplateList>) };
    inline vector<ListTemplateResponseBody::TemplateList> getTemplateList() { DARABONBA_PTR_GET(templateList_, vector<ListTemplateResponseBody::TemplateList>) };
    inline ListTemplateResponseBody& setTemplateList(const vector<ListTemplateResponseBody::TemplateList> & templateList) { DARABONBA_PTR_SET_VALUE(templateList_, templateList) };
    inline ListTemplateResponseBody& setTemplateList(vector<ListTemplateResponseBody::TemplateList> && templateList) { DARABONBA_PTR_SET_RVALUE(templateList_, templateList) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline ListTemplateResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline ListTemplateResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<bool> hasMore_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListTemplateResponseBody::TemplateList>> templateList_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
