// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTYUNQITASKBYUIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTYUNQITASKBYUIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CustomerService20231228
{
namespace Models
{
  class ListYunQiTaskByUidResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListYunQiTaskByUidResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListYunQiTaskByUidResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListYunQiTaskByUidResponseBody() = default ;
    ListYunQiTaskByUidResponseBody(const ListYunQiTaskByUidResponseBody &) = default ;
    ListYunQiTaskByUidResponseBody(ListYunQiTaskByUidResponseBody &&) = default ;
    ListYunQiTaskByUidResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListYunQiTaskByUidResponseBody() = default ;
    ListYunQiTaskByUidResponseBody& operator=(const ListYunQiTaskByUidResponseBody &) = default ;
    ListYunQiTaskByUidResponseBody& operator=(ListYunQiTaskByUidResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_ANY_TO_JSON(extend, extend_);
        DARABONBA_PTR_TO_JSON(list, list_);
        DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_ANY_FROM_JSON(extend, extend_);
        DARABONBA_PTR_FROM_JSON(list, list_);
        DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(total, total_);
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
          DARABONBA_PTR_TO_JSON(chatId, chatId_);
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
          DARABONBA_PTR_TO_JSON(endTime, endTime_);
          DARABONBA_PTR_TO_JSON(evaluationStar, evaluationStar_);
          DARABONBA_PTR_TO_JSON(important, important_);
          DARABONBA_PTR_TO_JSON(mainDingDepartmentId, mainDingDepartmentId_);
          DARABONBA_PTR_TO_JSON(mainDingGroupId, mainDingGroupId_);
          DARABONBA_PTR_TO_JSON(mainDingGroupName, mainDingGroupName_);
          DARABONBA_PTR_TO_JSON(productName, productName_);
          DARABONBA_PTR_TO_JSON(recordId, recordId_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(subDingDepartmentId, subDingDepartmentId_);
          DARABONBA_PTR_TO_JSON(subDingGroupId, subDingGroupId_);
          DARABONBA_PTR_TO_JSON(subDingGroupName, subDingGroupName_);
          DARABONBA_PTR_TO_JSON(title, title_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(chatId, chatId_);
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
          DARABONBA_PTR_FROM_JSON(endTime, endTime_);
          DARABONBA_PTR_FROM_JSON(evaluationStar, evaluationStar_);
          DARABONBA_PTR_FROM_JSON(important, important_);
          DARABONBA_PTR_FROM_JSON(mainDingDepartmentId, mainDingDepartmentId_);
          DARABONBA_PTR_FROM_JSON(mainDingGroupId, mainDingGroupId_);
          DARABONBA_PTR_FROM_JSON(mainDingGroupName, mainDingGroupName_);
          DARABONBA_PTR_FROM_JSON(productName, productName_);
          DARABONBA_PTR_FROM_JSON(recordId, recordId_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(subDingDepartmentId, subDingDepartmentId_);
          DARABONBA_PTR_FROM_JSON(subDingGroupId, subDingGroupId_);
          DARABONBA_PTR_FROM_JSON(subDingGroupName, subDingGroupName_);
          DARABONBA_PTR_FROM_JSON(title, title_);
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
        virtual bool empty() const override { return this->chatId_ == nullptr
        && this->createTime_ == nullptr && this->creatorName_ == nullptr && this->endTime_ == nullptr && this->evaluationStar_ == nullptr && this->important_ == nullptr
        && this->mainDingDepartmentId_ == nullptr && this->mainDingGroupId_ == nullptr && this->mainDingGroupName_ == nullptr && this->productName_ == nullptr && this->recordId_ == nullptr
        && this->status_ == nullptr && this->subDingDepartmentId_ == nullptr && this->subDingGroupId_ == nullptr && this->subDingGroupName_ == nullptr && this->title_ == nullptr; };
        // chatId Field Functions 
        bool hasChatId() const { return this->chatId_ != nullptr;};
        void deleteChatId() { this->chatId_ = nullptr;};
        inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
        inline List& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline List& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creatorName Field Functions 
        bool hasCreatorName() const { return this->creatorName_ != nullptr;};
        void deleteCreatorName() { this->creatorName_ = nullptr;};
        inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
        inline List& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline List& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // evaluationStar Field Functions 
        bool hasEvaluationStar() const { return this->evaluationStar_ != nullptr;};
        void deleteEvaluationStar() { this->evaluationStar_ = nullptr;};
        inline int32_t getEvaluationStar() const { DARABONBA_PTR_GET_DEFAULT(evaluationStar_, 0) };
        inline List& setEvaluationStar(int32_t evaluationStar) { DARABONBA_PTR_SET_VALUE(evaluationStar_, evaluationStar) };


        // important Field Functions 
        bool hasImportant() const { return this->important_ != nullptr;};
        void deleteImportant() { this->important_ = nullptr;};
        inline string getImportant() const { DARABONBA_PTR_GET_DEFAULT(important_, "") };
        inline List& setImportant(string important) { DARABONBA_PTR_SET_VALUE(important_, important) };


        // mainDingDepartmentId Field Functions 
        bool hasMainDingDepartmentId() const { return this->mainDingDepartmentId_ != nullptr;};
        void deleteMainDingDepartmentId() { this->mainDingDepartmentId_ = nullptr;};
        inline string getMainDingDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(mainDingDepartmentId_, "") };
        inline List& setMainDingDepartmentId(string mainDingDepartmentId) { DARABONBA_PTR_SET_VALUE(mainDingDepartmentId_, mainDingDepartmentId) };


        // mainDingGroupId Field Functions 
        bool hasMainDingGroupId() const { return this->mainDingGroupId_ != nullptr;};
        void deleteMainDingGroupId() { this->mainDingGroupId_ = nullptr;};
        inline string getMainDingGroupId() const { DARABONBA_PTR_GET_DEFAULT(mainDingGroupId_, "") };
        inline List& setMainDingGroupId(string mainDingGroupId) { DARABONBA_PTR_SET_VALUE(mainDingGroupId_, mainDingGroupId) };


        // mainDingGroupName Field Functions 
        bool hasMainDingGroupName() const { return this->mainDingGroupName_ != nullptr;};
        void deleteMainDingGroupName() { this->mainDingGroupName_ = nullptr;};
        inline string getMainDingGroupName() const { DARABONBA_PTR_GET_DEFAULT(mainDingGroupName_, "") };
        inline List& setMainDingGroupName(string mainDingGroupName) { DARABONBA_PTR_SET_VALUE(mainDingGroupName_, mainDingGroupName) };


        // productName Field Functions 
        bool hasProductName() const { return this->productName_ != nullptr;};
        void deleteProductName() { this->productName_ = nullptr;};
        inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
        inline List& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


        // recordId Field Functions 
        bool hasRecordId() const { return this->recordId_ != nullptr;};
        void deleteRecordId() { this->recordId_ = nullptr;};
        inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
        inline List& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subDingDepartmentId Field Functions 
        bool hasSubDingDepartmentId() const { return this->subDingDepartmentId_ != nullptr;};
        void deleteSubDingDepartmentId() { this->subDingDepartmentId_ = nullptr;};
        inline string getSubDingDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(subDingDepartmentId_, "") };
        inline List& setSubDingDepartmentId(string subDingDepartmentId) { DARABONBA_PTR_SET_VALUE(subDingDepartmentId_, subDingDepartmentId) };


        // subDingGroupId Field Functions 
        bool hasSubDingGroupId() const { return this->subDingGroupId_ != nullptr;};
        void deleteSubDingGroupId() { this->subDingGroupId_ = nullptr;};
        inline string getSubDingGroupId() const { DARABONBA_PTR_GET_DEFAULT(subDingGroupId_, "") };
        inline List& setSubDingGroupId(string subDingGroupId) { DARABONBA_PTR_SET_VALUE(subDingGroupId_, subDingGroupId) };


        // subDingGroupName Field Functions 
        bool hasSubDingGroupName() const { return this->subDingGroupName_ != nullptr;};
        void deleteSubDingGroupName() { this->subDingGroupName_ = nullptr;};
        inline string getSubDingGroupName() const { DARABONBA_PTR_GET_DEFAULT(subDingGroupName_, "") };
        inline List& setSubDingGroupName(string subDingGroupName) { DARABONBA_PTR_SET_VALUE(subDingGroupName_, subDingGroupName) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline List& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<string> chatId_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> creatorName_ {};
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<int32_t> evaluationStar_ {};
        shared_ptr<string> important_ {};
        shared_ptr<string> mainDingDepartmentId_ {};
        shared_ptr<string> mainDingGroupId_ {};
        shared_ptr<string> mainDingGroupName_ {};
        shared_ptr<string> productName_ {};
        shared_ptr<string> recordId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> subDingDepartmentId_ {};
        shared_ptr<string> subDingGroupId_ {};
        shared_ptr<string> subDingGroupName_ {};
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->extend_ == nullptr
        && this->list_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // extend Field Functions 
      bool hasExtend() const { return this->extend_ != nullptr;};
      void deleteExtend() { this->extend_ = nullptr;};
      inline       const Darabonba::Json & getExtend() const { DARABONBA_GET(extend_) };
      Darabonba::Json & getExtend() { DARABONBA_GET(extend_) };
      inline Data& setExtend(const Darabonba::Json & extend) { DARABONBA_SET_VALUE(extend_, extend) };
      inline Data& setExtend(Darabonba::Json && extend) { DARABONBA_SET_RVALUE(extend_, extend) };


      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Data& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      Darabonba::Json extend_ {};
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int32_t> pageNum_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListYunQiTaskByUidResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListYunQiTaskByUidResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListYunQiTaskByUidResponseBody::Data) };
    inline ListYunQiTaskByUidResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListYunQiTaskByUidResponseBody::Data) };
    inline ListYunQiTaskByUidResponseBody& setData(const ListYunQiTaskByUidResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListYunQiTaskByUidResponseBody& setData(ListYunQiTaskByUidResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListYunQiTaskByUidResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListYunQiTaskByUidResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListYunQiTaskByUidResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListYunQiTaskByUidResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListYunQiTaskByUidResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CustomerService20231228
#endif
