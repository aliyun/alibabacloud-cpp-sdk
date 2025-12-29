// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTAGLISTPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTAGLISTPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class QueryTagListPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTagListPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTagListPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryTagListPageResponseBody() = default ;
    QueryTagListPageResponseBody(const QueryTagListPageResponseBody &) = default ;
    QueryTagListPageResponseBody(QueryTagListPageResponseBody &&) = default ;
    QueryTagListPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTagListPageResponseBody() = default ;
    QueryTagListPageResponseBody& operator=(const QueryTagListPageResponseBody &) = default ;
    QueryTagListPageResponseBody& operator=(QueryTagListPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Records, records_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Records, records_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
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
      class Records : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Records& obj) { 
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(DocAddress, docAddress_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IndustryId, industryId_);
          DARABONBA_PTR_TO_JSON(IndustryName, industryName_);
          DARABONBA_PTR_TO_JSON(Introduction, introduction_);
          DARABONBA_PTR_TO_JSON(IsOpen, isOpen_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SaleStatusStr, saleStatusStr_);
          DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
          DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
        };
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(DocAddress, docAddress_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IndustryId, industryId_);
          DARABONBA_PTR_FROM_JSON(IndustryName, industryName_);
          DARABONBA_PTR_FROM_JSON(Introduction, introduction_);
          DARABONBA_PTR_FROM_JSON(IsOpen, isOpen_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SaleStatusStr, saleStatusStr_);
          DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
          DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
        };
        Records() = default ;
        Records(const Records &) = default ;
        Records(Records &&) = default ;
        Records(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Records() = default ;
        Records& operator=(const Records &) = default ;
        Records& operator=(Records &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiName_ == nullptr
        && this->code_ == nullptr && this->docAddress_ == nullptr && this->id_ == nullptr && this->industryId_ == nullptr && this->industryName_ == nullptr
        && this->introduction_ == nullptr && this->isOpen_ == nullptr && this->name_ == nullptr && this->saleStatusStr_ == nullptr && this->sceneId_ == nullptr
        && this->sceneName_ == nullptr; };
        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline Records& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Records& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // docAddress Field Functions 
        bool hasDocAddress() const { return this->docAddress_ != nullptr;};
        void deleteDocAddress() { this->docAddress_ = nullptr;};
        inline string getDocAddress() const { DARABONBA_PTR_GET_DEFAULT(docAddress_, "") };
        inline Records& setDocAddress(string docAddress) { DARABONBA_PTR_SET_VALUE(docAddress_, docAddress) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Records& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // industryId Field Functions 
        bool hasIndustryId() const { return this->industryId_ != nullptr;};
        void deleteIndustryId() { this->industryId_ = nullptr;};
        inline int64_t getIndustryId() const { DARABONBA_PTR_GET_DEFAULT(industryId_, 0L) };
        inline Records& setIndustryId(int64_t industryId) { DARABONBA_PTR_SET_VALUE(industryId_, industryId) };


        // industryName Field Functions 
        bool hasIndustryName() const { return this->industryName_ != nullptr;};
        void deleteIndustryName() { this->industryName_ = nullptr;};
        inline string getIndustryName() const { DARABONBA_PTR_GET_DEFAULT(industryName_, "") };
        inline Records& setIndustryName(string industryName) { DARABONBA_PTR_SET_VALUE(industryName_, industryName) };


        // introduction Field Functions 
        bool hasIntroduction() const { return this->introduction_ != nullptr;};
        void deleteIntroduction() { this->introduction_ = nullptr;};
        inline string getIntroduction() const { DARABONBA_PTR_GET_DEFAULT(introduction_, "") };
        inline Records& setIntroduction(string introduction) { DARABONBA_PTR_SET_VALUE(introduction_, introduction) };


        // isOpen Field Functions 
        bool hasIsOpen() const { return this->isOpen_ != nullptr;};
        void deleteIsOpen() { this->isOpen_ = nullptr;};
        inline int64_t getIsOpen() const { DARABONBA_PTR_GET_DEFAULT(isOpen_, 0L) };
        inline Records& setIsOpen(int64_t isOpen) { DARABONBA_PTR_SET_VALUE(isOpen_, isOpen) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Records& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // saleStatusStr Field Functions 
        bool hasSaleStatusStr() const { return this->saleStatusStr_ != nullptr;};
        void deleteSaleStatusStr() { this->saleStatusStr_ = nullptr;};
        inline string getSaleStatusStr() const { DARABONBA_PTR_GET_DEFAULT(saleStatusStr_, "") };
        inline Records& setSaleStatusStr(string saleStatusStr) { DARABONBA_PTR_SET_VALUE(saleStatusStr_, saleStatusStr) };


        // sceneId Field Functions 
        bool hasSceneId() const { return this->sceneId_ != nullptr;};
        void deleteSceneId() { this->sceneId_ = nullptr;};
        inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
        inline Records& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


        // sceneName Field Functions 
        bool hasSceneName() const { return this->sceneName_ != nullptr;};
        void deleteSceneName() { this->sceneName_ = nullptr;};
        inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
        inline Records& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


      protected:
        // The API operation that is called by the frontend.
        shared_ptr<string> apiName_ {};
        // Code
        shared_ptr<string> code_ {};
        // The URL for the API documentation.
        shared_ptr<string> docAddress_ {};
        // The tag ID.
        shared_ptr<int64_t> id_ {};
        // The industry ID.
        shared_ptr<int64_t> industryId_ {};
        // The industry name.
        shared_ptr<string> industryName_ {};
        // The tag description.
        shared_ptr<string> introduction_ {};
        // Indicates whether the number is activated.
        shared_ptr<int64_t> isOpen_ {};
        // The tag name.
        shared_ptr<string> name_ {};
        // *   0: The number is hidden.
        // *   1: The number is public.
        shared_ptr<string> saleStatusStr_ {};
        // The scene ID.
        shared_ptr<int64_t> sceneId_ {};
        // The scene name.
        shared_ptr<string> sceneName_ {};
      };

      virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->records_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
      inline Data& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const vector<Data::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<Data::Records>) };
      inline vector<Data::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<Data::Records>) };
      inline Data& setRecords(const vector<Data::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline Data& setRecords(vector<Data::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // totalPage Field Functions 
      bool hasTotalPage() const { return this->totalPage_ != nullptr;};
      void deleteTotalPage() { this->totalPage_ = nullptr;};
      inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
      inline Data& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    protected:
      // The page number.
      shared_ptr<int64_t> pageNo_ {};
      // The number of entries per page.
      shared_ptr<int64_t> pageSize_ {};
      // The retruned data.
      shared_ptr<vector<Data::Records>> records_ {};
      // The total number of returned entries.
      shared_ptr<int64_t> totalCount_ {};
      // The total number of returned pages.
      shared_ptr<int64_t> totalPage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryTagListPageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryTagListPageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryTagListPageResponseBody::Data) };
    inline QueryTagListPageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryTagListPageResponseBody::Data) };
    inline QueryTagListPageResponseBody& setData(const QueryTagListPageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryTagListPageResponseBody& setData(QueryTagListPageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryTagListPageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTagListPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryTagListPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. **OK** indicates that the request is successful.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<QueryTagListPageResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
