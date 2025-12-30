// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIBYAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIBYAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListApiByAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiByAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(PageQuery, pageQuery_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiByAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(PageQuery, pageQuery_);
    };
    ListApiByAppRequest() = default ;
    ListApiByAppRequest(const ListApiByAppRequest &) = default ;
    ListApiByAppRequest(ListApiByAppRequest &&) = default ;
    ListApiByAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiByAppRequest() = default ;
    ListApiByAppRequest& operator=(const ListApiByAppRequest &) = default ;
    ListApiByAppRequest& operator=(ListApiByAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageQuery& obj) { 
        DARABONBA_PTR_TO_JSON(AppKey, appKey_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      };
      friend void from_json(const Darabonba::Json& j, PageQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      };
      PageQuery() = default ;
      PageQuery(const PageQuery &) = default ;
      PageQuery(PageQuery &&) = default ;
      PageQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageQuery() = default ;
      PageQuery& operator=(const PageQuery &) = default ;
      PageQuery& operator=(PageQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appKey_ == nullptr
        && this->keyword_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr; };
      // appKey Field Functions 
      bool hasAppKey() const { return this->appKey_ != nullptr;};
      void deleteAppKey() { this->appKey_ = nullptr;};
      inline int64_t getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
      inline PageQuery& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline PageQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline PageQuery& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    protected:
      // appKey
      // 
      // This parameter is required.
      shared_ptr<int64_t> appKey_ {};
      shared_ptr<string> keyword_ {};
      // This parameter is required.
      shared_ptr<int32_t> pageNum_ {};
      // This parameter is required.
      shared_ptr<int32_t> pageSize_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->pageQuery_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListApiByAppRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // pageQuery Field Functions 
    bool hasPageQuery() const { return this->pageQuery_ != nullptr;};
    void deletePageQuery() { this->pageQuery_ = nullptr;};
    inline const ListApiByAppRequest::PageQuery & getPageQuery() const { DARABONBA_PTR_GET_CONST(pageQuery_, ListApiByAppRequest::PageQuery) };
    inline ListApiByAppRequest::PageQuery getPageQuery() { DARABONBA_PTR_GET(pageQuery_, ListApiByAppRequest::PageQuery) };
    inline ListApiByAppRequest& setPageQuery(const ListApiByAppRequest::PageQuery & pageQuery) { DARABONBA_PTR_SET_VALUE(pageQuery_, pageQuery) };
    inline ListApiByAppRequest& setPageQuery(ListApiByAppRequest::PageQuery && pageQuery) { DARABONBA_PTR_SET_RVALUE(pageQuery_, pageQuery) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<ListApiByAppRequest::PageQuery> pageQuery_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
