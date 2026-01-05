// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPAGESMARTSHORTURLLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPAGESMARTSHORTURLLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QueryPageSmartShortUrlLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPageSmartShortUrlLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPageSmartShortUrlLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryPageSmartShortUrlLogResponseBody() = default ;
    QueryPageSmartShortUrlLogResponseBody(const QueryPageSmartShortUrlLogResponseBody &) = default ;
    QueryPageSmartShortUrlLogResponseBody(QueryPageSmartShortUrlLogResponseBody &&) = default ;
    QueryPageSmartShortUrlLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPageSmartShortUrlLogResponseBody() = default ;
    QueryPageSmartShortUrlLogResponseBody& operator=(const QueryPageSmartShortUrlLogResponseBody &) = default ;
    QueryPageSmartShortUrlLogResponseBody& operator=(QueryPageSmartShortUrlLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
      };
      Model() = default ;
      Model(const Model &) = default ;
      Model(Model &&) = default ;
      Model(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Model() = default ;
      Model& operator=(const Model &) = default ;
      Model& operator=(Model &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(ClickState, clickState_);
          DARABONBA_PTR_TO_JSON(ClickTime, clickTime_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
          DARABONBA_PTR_TO_JSON(ShortName, shortName_);
          DARABONBA_PTR_TO_JSON(ShortUrl, shortUrl_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(ClickState, clickState_);
          DARABONBA_PTR_FROM_JSON(ClickTime, clickTime_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
          DARABONBA_PTR_FROM_JSON(ShortName, shortName_);
          DARABONBA_PTR_FROM_JSON(ShortUrl, shortUrl_);
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
        virtual bool empty() const override { return this->clickState_ == nullptr
        && this->clickTime_ == nullptr && this->createTime_ == nullptr && this->phoneNumber_ == nullptr && this->shortName_ == nullptr && this->shortUrl_ == nullptr; };
        // clickState Field Functions 
        bool hasClickState() const { return this->clickState_ != nullptr;};
        void deleteClickState() { this->clickState_ = nullptr;};
        inline int64_t getClickState() const { DARABONBA_PTR_GET_DEFAULT(clickState_, 0L) };
        inline List& setClickState(int64_t clickState) { DARABONBA_PTR_SET_VALUE(clickState_, clickState) };


        // clickTime Field Functions 
        bool hasClickTime() const { return this->clickTime_ != nullptr;};
        void deleteClickTime() { this->clickTime_ = nullptr;};
        inline int64_t getClickTime() const { DARABONBA_PTR_GET_DEFAULT(clickTime_, 0L) };
        inline List& setClickTime(int64_t clickTime) { DARABONBA_PTR_SET_VALUE(clickTime_, clickTime) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline List& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // phoneNumber Field Functions 
        bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
        void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
        inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
        inline List& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


        // shortName Field Functions 
        bool hasShortName() const { return this->shortName_ != nullptr;};
        void deleteShortName() { this->shortName_ = nullptr;};
        inline string getShortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
        inline List& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


        // shortUrl Field Functions 
        bool hasShortUrl() const { return this->shortUrl_ != nullptr;};
        void deleteShortUrl() { this->shortUrl_ = nullptr;};
        inline string getShortUrl() const { DARABONBA_PTR_GET_DEFAULT(shortUrl_, "") };
        inline List& setShortUrl(string shortUrl) { DARABONBA_PTR_SET_VALUE(shortUrl_, shortUrl) };


      protected:
        shared_ptr<int64_t> clickState_ {};
        shared_ptr<int64_t> clickTime_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> phoneNumber_ {};
        shared_ptr<string> shortName_ {};
        shared_ptr<string> shortUrl_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Model::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Model::List>) };
      inline vector<Model::List> getList() { DARABONBA_PTR_GET(list_, vector<Model::List>) };
      inline Model& setList(const vector<Model::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Model& setList(vector<Model::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
      inline Model& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Model& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Model& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // totalPage Field Functions 
      bool hasTotalPage() const { return this->totalPage_ != nullptr;};
      void deleteTotalPage() { this->totalPage_ = nullptr;};
      inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
      inline Model& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    protected:
      shared_ptr<vector<Model::List>> list_ {};
      shared_ptr<int64_t> pageNo_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
      shared_ptr<int64_t> totalPage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryPageSmartShortUrlLogResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryPageSmartShortUrlLogResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const QueryPageSmartShortUrlLogResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, QueryPageSmartShortUrlLogResponseBody::Model) };
    inline QueryPageSmartShortUrlLogResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, QueryPageSmartShortUrlLogResponseBody::Model) };
    inline QueryPageSmartShortUrlLogResponseBody& setModel(const QueryPageSmartShortUrlLogResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline QueryPageSmartShortUrlLogResponseBody& setModel(QueryPageSmartShortUrlLogResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPageSmartShortUrlLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryPageSmartShortUrlLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<QueryPageSmartShortUrlLogResponseBody::Model> model_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
