// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBMITRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBMITRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListSubmitRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubmitRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubmitRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListSubmitRecordsRequest() = default ;
    ListSubmitRecordsRequest(const ListSubmitRecordsRequest &) = default ;
    ListSubmitRecordsRequest(ListSubmitRecordsRequest &&) = default ;
    ListSubmitRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubmitRecordsRequest() = default ;
    ListSubmitRecordsRequest& operator=(const ListSubmitRecordsRequest &) = default ;
    ListSubmitRecordsRequest& operator=(ListSubmitRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(SearchFilter, searchFilter_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(SearchFilter, searchFilter_);
      };
      ListQuery() = default ;
      ListQuery(const ListQuery &) = default ;
      ListQuery(ListQuery &&) = default ;
      ListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListQuery() = default ;
      ListQuery& operator=(const ListQuery &) = default ;
      ListQuery& operator=(ListQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SearchFilter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SearchFilter& obj) { 
          DARABONBA_PTR_TO_JSON(ChangeTypeList, changeTypeList_);
          DARABONBA_PTR_TO_JSON(Page, page_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(ProjectIdList, projectIdList_);
          DARABONBA_PTR_TO_JSON(SubmitEndTime, submitEndTime_);
          DARABONBA_PTR_TO_JSON(SubmitStartTime, submitStartTime_);
          DARABONBA_PTR_TO_JSON(SubmitterList, submitterList_);
        };
        friend void from_json(const Darabonba::Json& j, SearchFilter& obj) { 
          DARABONBA_PTR_FROM_JSON(ChangeTypeList, changeTypeList_);
          DARABONBA_PTR_FROM_JSON(Page, page_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
          DARABONBA_PTR_FROM_JSON(ProjectIdList, projectIdList_);
          DARABONBA_PTR_FROM_JSON(SubmitEndTime, submitEndTime_);
          DARABONBA_PTR_FROM_JSON(SubmitStartTime, submitStartTime_);
          DARABONBA_PTR_FROM_JSON(SubmitterList, submitterList_);
        };
        SearchFilter() = default ;
        SearchFilter(const SearchFilter &) = default ;
        SearchFilter(SearchFilter &&) = default ;
        SearchFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SearchFilter() = default ;
        SearchFilter& operator=(const SearchFilter &) = default ;
        SearchFilter& operator=(SearchFilter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->changeTypeList_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->projectIdList_ == nullptr && this->submitEndTime_ == nullptr && this->submitStartTime_ == nullptr
        && this->submitterList_ == nullptr; };
        // changeTypeList Field Functions 
        bool hasChangeTypeList() const { return this->changeTypeList_ != nullptr;};
        void deleteChangeTypeList() { this->changeTypeList_ = nullptr;};
        inline const vector<int32_t> & getChangeTypeList() const { DARABONBA_PTR_GET_CONST(changeTypeList_, vector<int32_t>) };
        inline vector<int32_t> getChangeTypeList() { DARABONBA_PTR_GET(changeTypeList_, vector<int32_t>) };
        inline SearchFilter& setChangeTypeList(const vector<int32_t> & changeTypeList) { DARABONBA_PTR_SET_VALUE(changeTypeList_, changeTypeList) };
        inline SearchFilter& setChangeTypeList(vector<int32_t> && changeTypeList) { DARABONBA_PTR_SET_RVALUE(changeTypeList_, changeTypeList) };


        // page Field Functions 
        bool hasPage() const { return this->page_ != nullptr;};
        void deletePage() { this->page_ = nullptr;};
        inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
        inline SearchFilter& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
        inline SearchFilter& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // projectIdList Field Functions 
        bool hasProjectIdList() const { return this->projectIdList_ != nullptr;};
        void deleteProjectIdList() { this->projectIdList_ = nullptr;};
        inline const vector<int64_t> & getProjectIdList() const { DARABONBA_PTR_GET_CONST(projectIdList_, vector<int64_t>) };
        inline vector<int64_t> getProjectIdList() { DARABONBA_PTR_GET(projectIdList_, vector<int64_t>) };
        inline SearchFilter& setProjectIdList(const vector<int64_t> & projectIdList) { DARABONBA_PTR_SET_VALUE(projectIdList_, projectIdList) };
        inline SearchFilter& setProjectIdList(vector<int64_t> && projectIdList) { DARABONBA_PTR_SET_RVALUE(projectIdList_, projectIdList) };


        // submitEndTime Field Functions 
        bool hasSubmitEndTime() const { return this->submitEndTime_ != nullptr;};
        void deleteSubmitEndTime() { this->submitEndTime_ = nullptr;};
        inline string getSubmitEndTime() const { DARABONBA_PTR_GET_DEFAULT(submitEndTime_, "") };
        inline SearchFilter& setSubmitEndTime(string submitEndTime) { DARABONBA_PTR_SET_VALUE(submitEndTime_, submitEndTime) };


        // submitStartTime Field Functions 
        bool hasSubmitStartTime() const { return this->submitStartTime_ != nullptr;};
        void deleteSubmitStartTime() { this->submitStartTime_ = nullptr;};
        inline string getSubmitStartTime() const { DARABONBA_PTR_GET_DEFAULT(submitStartTime_, "") };
        inline SearchFilter& setSubmitStartTime(string submitStartTime) { DARABONBA_PTR_SET_VALUE(submitStartTime_, submitStartTime) };


        // submitterList Field Functions 
        bool hasSubmitterList() const { return this->submitterList_ != nullptr;};
        void deleteSubmitterList() { this->submitterList_ = nullptr;};
        inline const vector<string> & getSubmitterList() const { DARABONBA_PTR_GET_CONST(submitterList_, vector<string>) };
        inline vector<string> getSubmitterList() { DARABONBA_PTR_GET(submitterList_, vector<string>) };
        inline SearchFilter& setSubmitterList(const vector<string> & submitterList) { DARABONBA_PTR_SET_VALUE(submitterList_, submitterList) };
        inline SearchFilter& setSubmitterList(vector<string> && submitterList) { DARABONBA_PTR_SET_RVALUE(submitterList_, submitterList) };


      protected:
        shared_ptr<vector<int32_t>> changeTypeList_ {};
        // This parameter is required.
        shared_ptr<int32_t> page_ {};
        // This parameter is required.
        shared_ptr<int32_t> pageSize_ {};
        // This parameter is required.
        shared_ptr<vector<int64_t>> projectIdList_ {};
        shared_ptr<string> submitEndTime_ {};
        shared_ptr<string> submitStartTime_ {};
        shared_ptr<vector<string>> submitterList_ {};
      };

      virtual bool empty() const override { return this->keyword_ == nullptr
        && this->searchFilter_ == nullptr; };
      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline ListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


      // searchFilter Field Functions 
      bool hasSearchFilter() const { return this->searchFilter_ != nullptr;};
      void deleteSearchFilter() { this->searchFilter_ = nullptr;};
      inline const ListQuery::SearchFilter & getSearchFilter() const { DARABONBA_PTR_GET_CONST(searchFilter_, ListQuery::SearchFilter) };
      inline ListQuery::SearchFilter getSearchFilter() { DARABONBA_PTR_GET(searchFilter_, ListQuery::SearchFilter) };
      inline ListQuery& setSearchFilter(const ListQuery::SearchFilter & searchFilter) { DARABONBA_PTR_SET_VALUE(searchFilter_, searchFilter) };
      inline ListQuery& setSearchFilter(ListQuery::SearchFilter && searchFilter) { DARABONBA_PTR_SET_RVALUE(searchFilter_, searchFilter) };


    protected:
      shared_ptr<string> keyword_ {};
      // This parameter is required.
      shared_ptr<ListQuery::SearchFilter> searchFilter_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListSubmitRecordsRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListSubmitRecordsRequest::ListQuery) };
    inline ListSubmitRecordsRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListSubmitRecordsRequest::ListQuery) };
    inline ListSubmitRecordsRequest& setListQuery(const ListSubmitRecordsRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListSubmitRecordsRequest& setListQuery(ListSubmitRecordsRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListSubmitRecordsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<ListSubmitRecordsRequest::ListQuery> listQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
