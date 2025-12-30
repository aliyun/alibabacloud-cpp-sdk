// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROWPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTROWPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListRowPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRowPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(PageRowPermissionQuery, pageRowPermissionQuery_);
    };
    friend void from_json(const Darabonba::Json& j, ListRowPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(PageRowPermissionQuery, pageRowPermissionQuery_);
    };
    ListRowPermissionRequest() = default ;
    ListRowPermissionRequest(const ListRowPermissionRequest &) = default ;
    ListRowPermissionRequest(ListRowPermissionRequest &&) = default ;
    ListRowPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRowPermissionRequest() = default ;
    ListRowPermissionRequest& operator=(const ListRowPermissionRequest &) = default ;
    ListRowPermissionRequest& operator=(ListRowPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageRowPermissionQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageRowPermissionQuery& obj) { 
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      };
      friend void from_json(const Darabonba::Json& j, PageRowPermissionQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      };
      PageRowPermissionQuery() = default ;
      PageRowPermissionQuery(const PageRowPermissionQuery &) = default ;
      PageRowPermissionQuery(PageRowPermissionQuery &&) = default ;
      PageRowPermissionQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageRowPermissionQuery() = default ;
      PageRowPermissionQuery& operator=(const PageRowPermissionQuery &) = default ;
      PageRowPermissionQuery& operator=(PageRowPermissionQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->keyword_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr; };
      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline PageRowPermissionQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline PageRowPermissionQuery& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageRowPermissionQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    protected:
      shared_ptr<string> keyword_ {};
      // This parameter is required.
      shared_ptr<int32_t> pageNum_ {};
      // This parameter is required.
      shared_ptr<int32_t> pageSize_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->pageRowPermissionQuery_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListRowPermissionRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // pageRowPermissionQuery Field Functions 
    bool hasPageRowPermissionQuery() const { return this->pageRowPermissionQuery_ != nullptr;};
    void deletePageRowPermissionQuery() { this->pageRowPermissionQuery_ = nullptr;};
    inline const ListRowPermissionRequest::PageRowPermissionQuery & getPageRowPermissionQuery() const { DARABONBA_PTR_GET_CONST(pageRowPermissionQuery_, ListRowPermissionRequest::PageRowPermissionQuery) };
    inline ListRowPermissionRequest::PageRowPermissionQuery getPageRowPermissionQuery() { DARABONBA_PTR_GET(pageRowPermissionQuery_, ListRowPermissionRequest::PageRowPermissionQuery) };
    inline ListRowPermissionRequest& setPageRowPermissionQuery(const ListRowPermissionRequest::PageRowPermissionQuery & pageRowPermissionQuery) { DARABONBA_PTR_SET_VALUE(pageRowPermissionQuery_, pageRowPermissionQuery) };
    inline ListRowPermissionRequest& setPageRowPermissionQuery(ListRowPermissionRequest::PageRowPermissionQuery && pageRowPermissionQuery) { DARABONBA_PTR_SET_RVALUE(pageRowPermissionQuery_, pageRowPermissionQuery) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<ListRowPermissionRequest::PageRowPermissionQuery> pageRowPermissionQuery_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
