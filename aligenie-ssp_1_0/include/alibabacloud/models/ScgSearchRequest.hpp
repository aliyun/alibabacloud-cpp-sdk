// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCGSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCGSEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ScgSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScgSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ScgFilter, scgFilter_);
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
    };
    friend void from_json(const Darabonba::Json& j, ScgSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ScgFilter, scgFilter_);
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
    };
    ScgSearchRequest() = default ;
    ScgSearchRequest(const ScgSearchRequest &) = default ;
    ScgSearchRequest(ScgSearchRequest &&) = default ;
    ScgSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScgSearchRequest() = default ;
    ScgSearchRequest& operator=(const ScgSearchRequest &) = default ;
    ScgSearchRequest& operator=(ScgSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScgFilter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScgFilter& obj) { 
        DARABONBA_PTR_TO_JSON(OffSetParam, offSetParam_);
        DARABONBA_PTR_TO_JSON(PageParam, pageParam_);
        DARABONBA_PTR_TO_JSON(SortParam, sortParam_);
        DARABONBA_PTR_TO_JSON(UseOffSet, useOffSet_);
      };
      friend void from_json(const Darabonba::Json& j, ScgFilter& obj) { 
        DARABONBA_PTR_FROM_JSON(OffSetParam, offSetParam_);
        DARABONBA_PTR_FROM_JSON(PageParam, pageParam_);
        DARABONBA_PTR_FROM_JSON(SortParam, sortParam_);
        DARABONBA_PTR_FROM_JSON(UseOffSet, useOffSet_);
      };
      ScgFilter() = default ;
      ScgFilter(const ScgFilter &) = default ;
      ScgFilter(ScgFilter &&) = default ;
      ScgFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScgFilter() = default ;
      ScgFilter& operator=(const ScgFilter &) = default ;
      ScgFilter& operator=(ScgFilter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SortParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SortParam& obj) { 
          DARABONBA_PTR_TO_JSON(SortKey, sortKey_);
          DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
          DARABONBA_PTR_TO_JSON(SortText, sortText_);
        };
        friend void from_json(const Darabonba::Json& j, SortParam& obj) { 
          DARABONBA_PTR_FROM_JSON(SortKey, sortKey_);
          DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
          DARABONBA_PTR_FROM_JSON(SortText, sortText_);
        };
        SortParam() = default ;
        SortParam(const SortParam &) = default ;
        SortParam(SortParam &&) = default ;
        SortParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SortParam() = default ;
        SortParam& operator=(const SortParam &) = default ;
        SortParam& operator=(SortParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->sortKey_ == nullptr
        && this->sortOrder_ == nullptr && this->sortText_ == nullptr; };
        // sortKey Field Functions 
        bool hasSortKey() const { return this->sortKey_ != nullptr;};
        void deleteSortKey() { this->sortKey_ = nullptr;};
        inline string getSortKey() const { DARABONBA_PTR_GET_DEFAULT(sortKey_, "") };
        inline SortParam& setSortKey(string sortKey) { DARABONBA_PTR_SET_VALUE(sortKey_, sortKey) };


        // sortOrder Field Functions 
        bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
        void deleteSortOrder() { this->sortOrder_ = nullptr;};
        inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
        inline SortParam& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


        // sortText Field Functions 
        bool hasSortText() const { return this->sortText_ != nullptr;};
        void deleteSortText() { this->sortText_ = nullptr;};
        inline string getSortText() const { DARABONBA_PTR_GET_DEFAULT(sortText_, "") };
        inline SortParam& setSortText(string sortText) { DARABONBA_PTR_SET_VALUE(sortText_, sortText) };


      protected:
        // Sorting field
        shared_ptr<string> sortKey_ {};
        // Sorting order
        shared_ptr<string> sortOrder_ {};
        // Sorting field (default: empty string)
        shared_ptr<string> sortText_ {};
      };

      class PageParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageParam& obj) { 
          DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        };
        friend void from_json(const Darabonba::Json& j, PageParam& obj) { 
          DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        };
        PageParam() = default ;
        PageParam(const PageParam &) = default ;
        PageParam(PageParam &&) = default ;
        PageParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageParam() = default ;
        PageParam& operator=(const PageParam &) = default ;
        PageParam& operator=(PageParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->pageNum_ == nullptr
        && this->pageSize_ == nullptr; };
        // pageNum Field Functions 
        bool hasPageNum() const { return this->pageNum_ != nullptr;};
        void deletePageNum() { this->pageNum_ = nullptr;};
        inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
        inline PageParam& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
        inline PageParam& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      protected:
        // Page number
        shared_ptr<int32_t> pageNum_ {};
        // Number of records per page
        shared_ptr<int32_t> pageSize_ {};
      };

      class OffSetParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OffSetParam& obj) { 
          DARABONBA_PTR_TO_JSON(Limit, limit_);
          DARABONBA_PTR_TO_JSON(Offset, offset_);
        };
        friend void from_json(const Darabonba::Json& j, OffSetParam& obj) { 
          DARABONBA_PTR_FROM_JSON(Limit, limit_);
          DARABONBA_PTR_FROM_JSON(Offset, offset_);
        };
        OffSetParam() = default ;
        OffSetParam(const OffSetParam &) = default ;
        OffSetParam(OffSetParam &&) = default ;
        OffSetParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OffSetParam() = default ;
        OffSetParam& operator=(const OffSetParam &) = default ;
        OffSetParam& operator=(OffSetParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->limit_ == nullptr
        && this->offset_ == nullptr; };
        // limit Field Functions 
        bool hasLimit() const { return this->limit_ != nullptr;};
        void deleteLimit() { this->limit_ = nullptr;};
        inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
        inline OffSetParam& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


        // offset Field Functions 
        bool hasOffset() const { return this->offset_ != nullptr;};
        void deleteOffset() { this->offset_ = nullptr;};
        inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
        inline OffSetParam& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


      protected:
        // Number of returned items
        shared_ptr<int32_t> limit_ {};
        // Number of skipped items
        shared_ptr<int32_t> offset_ {};
      };

      virtual bool empty() const override { return this->offSetParam_ == nullptr
        && this->pageParam_ == nullptr && this->sortParam_ == nullptr && this->useOffSet_ == nullptr; };
      // offSetParam Field Functions 
      bool hasOffSetParam() const { return this->offSetParam_ != nullptr;};
      void deleteOffSetParam() { this->offSetParam_ = nullptr;};
      inline const ScgFilter::OffSetParam & getOffSetParam() const { DARABONBA_PTR_GET_CONST(offSetParam_, ScgFilter::OffSetParam) };
      inline ScgFilter::OffSetParam getOffSetParam() { DARABONBA_PTR_GET(offSetParam_, ScgFilter::OffSetParam) };
      inline ScgFilter& setOffSetParam(const ScgFilter::OffSetParam & offSetParam) { DARABONBA_PTR_SET_VALUE(offSetParam_, offSetParam) };
      inline ScgFilter& setOffSetParam(ScgFilter::OffSetParam && offSetParam) { DARABONBA_PTR_SET_RVALUE(offSetParam_, offSetParam) };


      // pageParam Field Functions 
      bool hasPageParam() const { return this->pageParam_ != nullptr;};
      void deletePageParam() { this->pageParam_ = nullptr;};
      inline const ScgFilter::PageParam & getPageParam() const { DARABONBA_PTR_GET_CONST(pageParam_, ScgFilter::PageParam) };
      inline ScgFilter::PageParam getPageParam() { DARABONBA_PTR_GET(pageParam_, ScgFilter::PageParam) };
      inline ScgFilter& setPageParam(const ScgFilter::PageParam & pageParam) { DARABONBA_PTR_SET_VALUE(pageParam_, pageParam) };
      inline ScgFilter& setPageParam(ScgFilter::PageParam && pageParam) { DARABONBA_PTR_SET_RVALUE(pageParam_, pageParam) };


      // sortParam Field Functions 
      bool hasSortParam() const { return this->sortParam_ != nullptr;};
      void deleteSortParam() { this->sortParam_ = nullptr;};
      inline const ScgFilter::SortParam & getSortParam() const { DARABONBA_PTR_GET_CONST(sortParam_, ScgFilter::SortParam) };
      inline ScgFilter::SortParam getSortParam() { DARABONBA_PTR_GET(sortParam_, ScgFilter::SortParam) };
      inline ScgFilter& setSortParam(const ScgFilter::SortParam & sortParam) { DARABONBA_PTR_SET_VALUE(sortParam_, sortParam) };
      inline ScgFilter& setSortParam(ScgFilter::SortParam && sortParam) { DARABONBA_PTR_SET_RVALUE(sortParam_, sortParam) };


      // useOffSet Field Functions 
      bool hasUseOffSet() const { return this->useOffSet_ != nullptr;};
      void deleteUseOffSet() { this->useOffSet_ = nullptr;};
      inline bool getUseOffSet() const { DARABONBA_PTR_GET_DEFAULT(useOffSet_, false) };
      inline ScgFilter& setUseOffSet(bool useOffSet) { DARABONBA_PTR_SET_VALUE(useOffSet_, useOffSet) };


    protected:
      // Paging type
      shared_ptr<ScgFilter::OffSetParam> offSetParam_ {};
      // Paging type
      shared_ptr<ScgFilter::PageParam> pageParam_ {};
      // Sorting parameters
      // 
      // This parameter is required.
      shared_ptr<ScgFilter::SortParam> sortParam_ {};
      // Whether to use the pageParam object for paging. Choose either offSetParam or pageParam. The default paging mode is pageParam.
      // 
      // This parameter is required.
      shared_ptr<bool> useOffSet_ {};
    };

    virtual bool empty() const override { return this->scgFilter_ == nullptr
        && this->topicId_ == nullptr; };
    // scgFilter Field Functions 
    bool hasScgFilter() const { return this->scgFilter_ != nullptr;};
    void deleteScgFilter() { this->scgFilter_ = nullptr;};
    inline const ScgSearchRequest::ScgFilter & getScgFilter() const { DARABONBA_PTR_GET_CONST(scgFilter_, ScgSearchRequest::ScgFilter) };
    inline ScgSearchRequest::ScgFilter getScgFilter() { DARABONBA_PTR_GET(scgFilter_, ScgSearchRequest::ScgFilter) };
    inline ScgSearchRequest& setScgFilter(const ScgSearchRequest::ScgFilter & scgFilter) { DARABONBA_PTR_SET_VALUE(scgFilter_, scgFilter) };
    inline ScgSearchRequest& setScgFilter(ScgSearchRequest::ScgFilter && scgFilter) { DARABONBA_PTR_SET_RVALUE(scgFilter_, scgFilter) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline string getTopicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, "") };
    inline ScgSearchRequest& setTopicId(string topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


  protected:
    // Query filter
    // 
    // This parameter is required.
    shared_ptr<ScgSearchRequest::ScgFilter> scgFilter_ {};
    // Selection pool ID. Optional values: MC201132 (Ethnic Chinese Style), MC201136 (Pop Music), MC201139 (Sweet Love), MC201133 (Folk), MC201137 (Relaxing Reading), MC201138 (Happiness), PA202029 (Stories), PA202030 (Children\\"s Songs), PA202028 (Chinese Classics and History), PA202032 (Encyclopedia), PA202031 (English Children\\"s Songs)
    // 
    // This parameter is required.
    shared_ptr<string> topicId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
