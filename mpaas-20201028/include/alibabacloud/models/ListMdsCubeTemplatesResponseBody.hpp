// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMDSCUBETEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMDSCUBETEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMdsCubeTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMdsCubeTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMdsCubeTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMdsCubeTemplatesResponseBody() = default ;
    ListMdsCubeTemplatesResponseBody(const ListMdsCubeTemplatesResponseBody &) = default ;
    ListMdsCubeTemplatesResponseBody(ListMdsCubeTemplatesResponseBody &&) = default ;
    ListMdsCubeTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMdsCubeTemplatesResponseBody() = default ;
    ListMdsCubeTemplatesResponseBody& operator=(const ListMdsCubeTemplatesResponseBody &) = default ;
    ListMdsCubeTemplatesResponseBody& operator=(ListMdsCubeTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultContent& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      };
      friend void from_json(const Darabonba::Json& j, ResultContent& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      };
      ResultContent() = default ;
      ResultContent(const ResultContent &) = default ;
      ResultContent(ResultContent &&) = default ;
      ResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultContent() = default ;
      ResultContent& operator=(const ResultContent &) = default ;
      ResultContent& operator=(ResultContent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(RequestId, requestId_);
          DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
          DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
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
        class Content : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Content& obj) { 
            DARABONBA_PTR_TO_JSON(FirstPage, firstPage_);
            DARABONBA_PTR_TO_JSON(FirstResult, firstResult_);
            DARABONBA_PTR_TO_JSON(LastPage, lastPage_);
            DARABONBA_PTR_TO_JSON(List, list_);
            DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
            DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
            DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
            DARABONBA_PTR_TO_JSON(PrePage, prePage_);
            DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
            DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
          };
          friend void from_json(const Darabonba::Json& j, Content& obj) { 
            DARABONBA_PTR_FROM_JSON(FirstPage, firstPage_);
            DARABONBA_PTR_FROM_JSON(FirstResult, firstResult_);
            DARABONBA_PTR_FROM_JSON(LastPage, lastPage_);
            DARABONBA_PTR_FROM_JSON(List, list_);
            DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
            DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
            DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
            DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
            DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
            DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
          };
          Content() = default ;
          Content(const Content &) = default ;
          Content(Content &&) = default ;
          Content(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Content() = default ;
          Content& operator=(const Content &) = default ;
          Content& operator=(Content &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class List : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const List& obj) { 
              DARABONBA_PTR_TO_JSON(AppCode, appCode_);
              DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
              DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Status, status_);
              DARABONBA_PTR_TO_JSON(TemplateDesc, templateDesc_);
              DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
              DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
            };
            friend void from_json(const Darabonba::Json& j, List& obj) { 
              DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
              DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
              DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
              DARABONBA_PTR_FROM_JSON(TemplateDesc, templateDesc_);
              DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
              DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
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
            virtual bool empty() const override { return this->appCode_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->status_ == nullptr && this->templateDesc_ == nullptr
        && this->templateId_ == nullptr && this->templateName_ == nullptr; };
            // appCode Field Functions 
            bool hasAppCode() const { return this->appCode_ != nullptr;};
            void deleteAppCode() { this->appCode_ = nullptr;};
            inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
            inline List& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


            // gmtCreate Field Functions 
            bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
            void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
            inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
            inline List& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


            // gmtModified Field Functions 
            bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
            void deleteGmtModified() { this->gmtModified_ = nullptr;};
            inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
            inline List& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline List& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
            inline List& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // templateDesc Field Functions 
            bool hasTemplateDesc() const { return this->templateDesc_ != nullptr;};
            void deleteTemplateDesc() { this->templateDesc_ = nullptr;};
            inline string getTemplateDesc() const { DARABONBA_PTR_GET_DEFAULT(templateDesc_, "") };
            inline List& setTemplateDesc(string templateDesc) { DARABONBA_PTR_SET_VALUE(templateDesc_, templateDesc) };


            // templateId Field Functions 
            bool hasTemplateId() const { return this->templateId_ != nullptr;};
            void deleteTemplateId() { this->templateId_ = nullptr;};
            inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
            inline List& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


            // templateName Field Functions 
            bool hasTemplateName() const { return this->templateName_ != nullptr;};
            void deleteTemplateName() { this->templateName_ = nullptr;};
            inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
            inline List& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


          protected:
            shared_ptr<string> appCode_ {};
            shared_ptr<string> gmtCreate_ {};
            shared_ptr<string> gmtModified_ {};
            shared_ptr<int64_t> id_ {};
            shared_ptr<int32_t> status_ {};
            shared_ptr<string> templateDesc_ {};
            shared_ptr<string> templateId_ {};
            shared_ptr<string> templateName_ {};
          };

          virtual bool empty() const override { return this->firstPage_ == nullptr
        && this->firstResult_ == nullptr && this->lastPage_ == nullptr && this->list_ == nullptr && this->nextPage_ == nullptr && this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->prePage_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
          // firstPage Field Functions 
          bool hasFirstPage() const { return this->firstPage_ != nullptr;};
          void deleteFirstPage() { this->firstPage_ = nullptr;};
          inline bool getFirstPage() const { DARABONBA_PTR_GET_DEFAULT(firstPage_, false) };
          inline Content& setFirstPage(bool firstPage) { DARABONBA_PTR_SET_VALUE(firstPage_, firstPage) };


          // firstResult Field Functions 
          bool hasFirstResult() const { return this->firstResult_ != nullptr;};
          void deleteFirstResult() { this->firstResult_ = nullptr;};
          inline int64_t getFirstResult() const { DARABONBA_PTR_GET_DEFAULT(firstResult_, 0L) };
          inline Content& setFirstResult(int64_t firstResult) { DARABONBA_PTR_SET_VALUE(firstResult_, firstResult) };


          // lastPage Field Functions 
          bool hasLastPage() const { return this->lastPage_ != nullptr;};
          void deleteLastPage() { this->lastPage_ = nullptr;};
          inline bool getLastPage() const { DARABONBA_PTR_GET_DEFAULT(lastPage_, false) };
          inline Content& setLastPage(bool lastPage) { DARABONBA_PTR_SET_VALUE(lastPage_, lastPage) };


          // list Field Functions 
          bool hasList() const { return this->list_ != nullptr;};
          void deleteList() { this->list_ = nullptr;};
          inline const vector<Content::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Content::List>) };
          inline vector<Content::List> getList() { DARABONBA_PTR_GET(list_, vector<Content::List>) };
          inline Content& setList(const vector<Content::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
          inline Content& setList(vector<Content::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


          // nextPage Field Functions 
          bool hasNextPage() const { return this->nextPage_ != nullptr;};
          void deleteNextPage() { this->nextPage_ = nullptr;};
          inline int64_t getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, 0L) };
          inline Content& setNextPage(int64_t nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


          // pageNo Field Functions 
          bool hasPageNo() const { return this->pageNo_ != nullptr;};
          void deletePageNo() { this->pageNo_ = nullptr;};
          inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
          inline Content& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


          // pageSize Field Functions 
          bool hasPageSize() const { return this->pageSize_ != nullptr;};
          void deletePageSize() { this->pageSize_ = nullptr;};
          inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
          inline Content& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


          // prePage Field Functions 
          bool hasPrePage() const { return this->prePage_ != nullptr;};
          void deletePrePage() { this->prePage_ = nullptr;};
          inline int64_t getPrePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, 0L) };
          inline Content& setPrePage(int64_t prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


          // totalCount Field Functions 
          bool hasTotalCount() const { return this->totalCount_ != nullptr;};
          void deleteTotalCount() { this->totalCount_ = nullptr;};
          inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
          inline Content& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


          // totalPage Field Functions 
          bool hasTotalPage() const { return this->totalPage_ != nullptr;};
          void deleteTotalPage() { this->totalPage_ = nullptr;};
          inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
          inline Content& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


        protected:
          shared_ptr<bool> firstPage_ {};
          shared_ptr<int64_t> firstResult_ {};
          shared_ptr<bool> lastPage_ {};
          shared_ptr<vector<Content::List>> list_ {};
          shared_ptr<int64_t> nextPage_ {};
          shared_ptr<int32_t> pageNo_ {};
          shared_ptr<int32_t> pageSize_ {};
          shared_ptr<int64_t> prePage_ {};
          shared_ptr<int32_t> totalCount_ {};
          shared_ptr<int64_t> totalPage_ {};
        };

        virtual bool empty() const override { return this->content_ == nullptr
        && this->errorCode_ == nullptr && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline const Data::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, Data::Content) };
        inline Data::Content getContent() { DARABONBA_PTR_GET(content_, Data::Content) };
        inline Data& setContent(const Data::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
        inline Data& setContent(Data::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline Data& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // requestId Field Functions 
        bool hasRequestId() const { return this->requestId_ != nullptr;};
        void deleteRequestId() { this->requestId_ = nullptr;};
        inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
        inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


        // resultMsg Field Functions 
        bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
        void deleteResultMsg() { this->resultMsg_ = nullptr;};
        inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
        inline Data& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        shared_ptr<Data::Content> content_ {};
        shared_ptr<string> errorCode_ {};
        shared_ptr<string> requestId_ {};
        shared_ptr<string> resultMsg_ {};
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const ResultContent::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ResultContent::Data) };
      inline ResultContent::Data getData() { DARABONBA_PTR_GET(data_, ResultContent::Data) };
      inline ResultContent& setData(const ResultContent::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline ResultContent& setData(ResultContent::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline ResultContent& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    protected:
      shared_ptr<ResultContent::Data> data_ {};
      shared_ptr<string> requestId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultCode_ == nullptr && this->resultContent_ == nullptr && this->resultMessage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMdsCubeTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMdsCubeTemplatesResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultContent Field Functions 
    bool hasResultContent() const { return this->resultContent_ != nullptr;};
    void deleteResultContent() { this->resultContent_ = nullptr;};
    inline const ListMdsCubeTemplatesResponseBody::ResultContent & getResultContent() const { DARABONBA_PTR_GET_CONST(resultContent_, ListMdsCubeTemplatesResponseBody::ResultContent) };
    inline ListMdsCubeTemplatesResponseBody::ResultContent getResultContent() { DARABONBA_PTR_GET(resultContent_, ListMdsCubeTemplatesResponseBody::ResultContent) };
    inline ListMdsCubeTemplatesResponseBody& setResultContent(const ListMdsCubeTemplatesResponseBody::ResultContent & resultContent) { DARABONBA_PTR_SET_VALUE(resultContent_, resultContent) };
    inline ListMdsCubeTemplatesResponseBody& setResultContent(ListMdsCubeTemplatesResponseBody::ResultContent && resultContent) { DARABONBA_PTR_SET_RVALUE(resultContent_, resultContent) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMdsCubeTemplatesResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<ListMdsCubeTemplatesResponseBody::ResultContent> resultContent_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
