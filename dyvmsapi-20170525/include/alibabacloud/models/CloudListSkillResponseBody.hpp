// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDLISTSKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDLISTSKILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudListSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudListSkillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudListSkillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudListSkillResponseBody() = default ;
    CloudListSkillResponseBody(const CloudListSkillResponseBody &) = default ;
    CloudListSkillResponseBody(CloudListSkillResponseBody &&) = default ;
    CloudListSkillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudListSkillResponseBody() = default ;
    CloudListSkillResponseBody& operator=(const CloudListSkillResponseBody &) = default ;
    CloudListSkillResponseBody& operator=(CloudListSkillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EndRow, endRow_);
        DARABONBA_PTR_TO_JSON(FirstPage, firstPage_);
        DARABONBA_PTR_TO_JSON(HasNextPage, hasNextPage_);
        DARABONBA_PTR_TO_JSON(HasPreviousPage, hasPreviousPage_);
        DARABONBA_PTR_TO_JSON(IsFirstPage, isFirstPage_);
        DARABONBA_PTR_TO_JSON(IsLastPage, isLastPage_);
        DARABONBA_PTR_TO_JSON(LastPage, lastPage_);
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(NavigatePages, navigatePages_);
        DARABONBA_PTR_TO_JSON(NavigatepageNums, navigatepageNums_);
        DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
        DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Pages, pages_);
        DARABONBA_PTR_TO_JSON(PrePage, prePage_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(StartRow, startRow_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EndRow, endRow_);
        DARABONBA_PTR_FROM_JSON(FirstPage, firstPage_);
        DARABONBA_PTR_FROM_JSON(HasNextPage, hasNextPage_);
        DARABONBA_PTR_FROM_JSON(HasPreviousPage, hasPreviousPage_);
        DARABONBA_PTR_FROM_JSON(IsFirstPage, isFirstPage_);
        DARABONBA_PTR_FROM_JSON(IsLastPage, isLastPage_);
        DARABONBA_PTR_FROM_JSON(LastPage, lastPage_);
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(NavigatePages, navigatePages_);
        DARABONBA_PTR_FROM_JSON(NavigatepageNums, navigatepageNums_);
        DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
        DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Pages, pages_);
        DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(StartRow, startRow_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comment_ == nullptr
        && this->createTime_ == nullptr && this->enterpriseId_ == nullptr && this->id_ == nullptr && this->name_ == nullptr; };
        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline List& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline List& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // enterpriseId Field Functions 
        bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
        void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
        inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
        inline List& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline List& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline List& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // 描述
        shared_ptr<string> comment_ {};
        // 创建时间,精确到秒
        shared_ptr<string> createTime_ {};
        // 企业编号
        shared_ptr<int64_t> enterpriseId_ {};
        // 技能id
        shared_ptr<int64_t> id_ {};
        // 技能名称
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->endRow_ == nullptr
        && this->firstPage_ == nullptr && this->hasNextPage_ == nullptr && this->hasPreviousPage_ == nullptr && this->isFirstPage_ == nullptr && this->isLastPage_ == nullptr
        && this->lastPage_ == nullptr && this->list_ == nullptr && this->navigatePages_ == nullptr && this->navigatepageNums_ == nullptr && this->nextPage_ == nullptr
        && this->orderBy_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->pages_ == nullptr && this->prePage_ == nullptr
        && this->size_ == nullptr && this->startRow_ == nullptr && this->total_ == nullptr; };
      // endRow Field Functions 
      bool hasEndRow() const { return this->endRow_ != nullptr;};
      void deleteEndRow() { this->endRow_ = nullptr;};
      inline string getEndRow() const { DARABONBA_PTR_GET_DEFAULT(endRow_, "") };
      inline Data& setEndRow(string endRow) { DARABONBA_PTR_SET_VALUE(endRow_, endRow) };


      // firstPage Field Functions 
      bool hasFirstPage() const { return this->firstPage_ != nullptr;};
      void deleteFirstPage() { this->firstPage_ = nullptr;};
      inline string getFirstPage() const { DARABONBA_PTR_GET_DEFAULT(firstPage_, "") };
      inline Data& setFirstPage(string firstPage) { DARABONBA_PTR_SET_VALUE(firstPage_, firstPage) };


      // hasNextPage Field Functions 
      bool hasHasNextPage() const { return this->hasNextPage_ != nullptr;};
      void deleteHasNextPage() { this->hasNextPage_ = nullptr;};
      inline bool getHasNextPage() const { DARABONBA_PTR_GET_DEFAULT(hasNextPage_, false) };
      inline Data& setHasNextPage(bool hasNextPage) { DARABONBA_PTR_SET_VALUE(hasNextPage_, hasNextPage) };


      // hasPreviousPage Field Functions 
      bool hasHasPreviousPage() const { return this->hasPreviousPage_ != nullptr;};
      void deleteHasPreviousPage() { this->hasPreviousPage_ = nullptr;};
      inline bool getHasPreviousPage() const { DARABONBA_PTR_GET_DEFAULT(hasPreviousPage_, false) };
      inline Data& setHasPreviousPage(bool hasPreviousPage) { DARABONBA_PTR_SET_VALUE(hasPreviousPage_, hasPreviousPage) };


      // isFirstPage Field Functions 
      bool hasIsFirstPage() const { return this->isFirstPage_ != nullptr;};
      void deleteIsFirstPage() { this->isFirstPage_ = nullptr;};
      inline bool getIsFirstPage() const { DARABONBA_PTR_GET_DEFAULT(isFirstPage_, false) };
      inline Data& setIsFirstPage(bool isFirstPage) { DARABONBA_PTR_SET_VALUE(isFirstPage_, isFirstPage) };


      // isLastPage Field Functions 
      bool hasIsLastPage() const { return this->isLastPage_ != nullptr;};
      void deleteIsLastPage() { this->isLastPage_ = nullptr;};
      inline bool getIsLastPage() const { DARABONBA_PTR_GET_DEFAULT(isLastPage_, false) };
      inline Data& setIsLastPage(bool isLastPage) { DARABONBA_PTR_SET_VALUE(isLastPage_, isLastPage) };


      // lastPage Field Functions 
      bool hasLastPage() const { return this->lastPage_ != nullptr;};
      void deleteLastPage() { this->lastPage_ = nullptr;};
      inline string getLastPage() const { DARABONBA_PTR_GET_DEFAULT(lastPage_, "") };
      inline Data& setLastPage(string lastPage) { DARABONBA_PTR_SET_VALUE(lastPage_, lastPage) };


      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // navigatePages Field Functions 
      bool hasNavigatePages() const { return this->navigatePages_ != nullptr;};
      void deleteNavigatePages() { this->navigatePages_ = nullptr;};
      inline string getNavigatePages() const { DARABONBA_PTR_GET_DEFAULT(navigatePages_, "") };
      inline Data& setNavigatePages(string navigatePages) { DARABONBA_PTR_SET_VALUE(navigatePages_, navigatePages) };


      // navigatepageNums Field Functions 
      bool hasNavigatepageNums() const { return this->navigatepageNums_ != nullptr;};
      void deleteNavigatepageNums() { this->navigatepageNums_ = nullptr;};
      inline const vector<string> & getNavigatepageNums() const { DARABONBA_PTR_GET_CONST(navigatepageNums_, vector<string>) };
      inline vector<string> getNavigatepageNums() { DARABONBA_PTR_GET(navigatepageNums_, vector<string>) };
      inline Data& setNavigatepageNums(const vector<string> & navigatepageNums) { DARABONBA_PTR_SET_VALUE(navigatepageNums_, navigatepageNums) };
      inline Data& setNavigatepageNums(vector<string> && navigatepageNums) { DARABONBA_PTR_SET_RVALUE(navigatepageNums_, navigatepageNums) };


      // nextPage Field Functions 
      bool hasNextPage() const { return this->nextPage_ != nullptr;};
      void deleteNextPage() { this->nextPage_ = nullptr;};
      inline string getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, "") };
      inline Data& setNextPage(string nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


      // orderBy Field Functions 
      bool hasOrderBy() const { return this->orderBy_ != nullptr;};
      void deleteOrderBy() { this->orderBy_ = nullptr;};
      inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
      inline Data& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline string getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, "") };
      inline Data& setPageNum(string pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
      inline Data& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // pages Field Functions 
      bool hasPages() const { return this->pages_ != nullptr;};
      void deletePages() { this->pages_ = nullptr;};
      inline string getPages() const { DARABONBA_PTR_GET_DEFAULT(pages_, "") };
      inline Data& setPages(string pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


      // prePage Field Functions 
      bool hasPrePage() const { return this->prePage_ != nullptr;};
      void deletePrePage() { this->prePage_ = nullptr;};
      inline string getPrePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, "") };
      inline Data& setPrePage(string prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
      inline Data& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // startRow Field Functions 
      bool hasStartRow() const { return this->startRow_ != nullptr;};
      void deleteStartRow() { this->startRow_ = nullptr;};
      inline string getStartRow() const { DARABONBA_PTR_GET_DEFAULT(startRow_, "") };
      inline Data& setStartRow(string startRow) { DARABONBA_PTR_SET_VALUE(startRow_, startRow) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline string getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
      inline Data& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<string> endRow_ {};
      shared_ptr<string> firstPage_ {};
      shared_ptr<bool> hasNextPage_ {};
      shared_ptr<bool> hasPreviousPage_ {};
      shared_ptr<bool> isFirstPage_ {};
      shared_ptr<bool> isLastPage_ {};
      shared_ptr<string> lastPage_ {};
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<string> navigatePages_ {};
      shared_ptr<vector<string>> navigatepageNums_ {};
      shared_ptr<string> nextPage_ {};
      shared_ptr<string> orderBy_ {};
      shared_ptr<string> pageNum_ {};
      shared_ptr<string> pageSize_ {};
      shared_ptr<string> pages_ {};
      shared_ptr<string> prePage_ {};
      shared_ptr<string> size_ {};
      shared_ptr<string> startRow_ {};
      shared_ptr<string> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudListSkillResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudListSkillResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudListSkillResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudListSkillResponseBody::Data) };
    inline CloudListSkillResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudListSkillResponseBody::Data) };
    inline CloudListSkillResponseBody& setData(const CloudListSkillResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudListSkillResponseBody& setData(CloudListSkillResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudListSkillResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudListSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudListSkillResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
