// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGUSERGROUPQUERYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DSGUSERGROUPQUERYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgUserGroupQueryListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgUserGroupQueryListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(PageData, pageData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DsgUserGroupQueryListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(PageData, pageData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DsgUserGroupQueryListResponseBody() = default ;
    DsgUserGroupQueryListResponseBody(const DsgUserGroupQueryListResponseBody &) = default ;
    DsgUserGroupQueryListResponseBody(DsgUserGroupQueryListResponseBody &&) = default ;
    DsgUserGroupQueryListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgUserGroupQueryListResponseBody() = default ;
    DsgUserGroupQueryListResponseBody& operator=(const DsgUserGroupQueryListResponseBody &) = default ;
    DsgUserGroupQueryListResponseBody& operator=(DsgUserGroupQueryListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageData& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageData& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageData() = default ;
      PageData(const PageData &) = default ;
      PageData(PageData &&) = default ;
      PageData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageData() = default ;
      PageData& operator=(const PageData &) = default ;
      PageData& operator=(PageData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(Accounts, accounts_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(mcAggregationInfo, mcAggregationInfo_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(mcAggregationInfo, mcAggregationInfo_);
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
        virtual bool empty() const override { return this->accounts_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr
        && this->mcAggregationInfo_ == nullptr; };
        // accounts Field Functions 
        bool hasAccounts() const { return this->accounts_ != nullptr;};
        void deleteAccounts() { this->accounts_ = nullptr;};
        inline const vector<string> & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<string>) };
        inline vector<string> getAccounts() { DARABONBA_PTR_GET(accounts_, vector<string>) };
        inline Data& setAccounts(const vector<string> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
        inline Data& setAccounts(vector<string> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Data& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // mcAggregationInfo Field Functions 
        bool hasMcAggregationInfo() const { return this->mcAggregationInfo_ != nullptr;};
        void deleteMcAggregationInfo() { this->mcAggregationInfo_ = nullptr;};
        inline string getMcAggregationInfo() const { DARABONBA_PTR_GET_DEFAULT(mcAggregationInfo_, "") };
        inline Data& setMcAggregationInfo(string mcAggregationInfo) { DARABONBA_PTR_SET_VALUE(mcAggregationInfo_, mcAggregationInfo) };


      protected:
        // The usernames in the user group.
        shared_ptr<vector<string>> accounts_ {};
        // The time when the user group was created.
        shared_ptr<string> gmtCreate_ {};
        // The time when the user group was modified.
        shared_ptr<string> gmtModified_ {};
        // The user group ID.
        shared_ptr<int64_t> id_ {};
        // The name of the user group.
        shared_ptr<string> name_ {};
        // The owner of the user group.
        shared_ptr<string> owner_ {};
        shared_ptr<string> mcAggregationInfo_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<PageData::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<PageData::Data>) };
      inline vector<PageData::Data> getData() { DARABONBA_PTR_GET(data_, vector<PageData::Data>) };
      inline PageData& setData(const vector<PageData::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline PageData& setData(vector<PageData::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PageData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The user groups.
      shared_ptr<vector<PageData::Data>> data_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page. Maximum value: 100.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of user groups returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->pageData_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DsgUserGroupQueryListResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DsgUserGroupQueryListResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DsgUserGroupQueryListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // pageData Field Functions 
    bool hasPageData() const { return this->pageData_ != nullptr;};
    void deletePageData() { this->pageData_ = nullptr;};
    inline const DsgUserGroupQueryListResponseBody::PageData & getPageData() const { DARABONBA_PTR_GET_CONST(pageData_, DsgUserGroupQueryListResponseBody::PageData) };
    inline DsgUserGroupQueryListResponseBody::PageData getPageData() { DARABONBA_PTR_GET(pageData_, DsgUserGroupQueryListResponseBody::PageData) };
    inline DsgUserGroupQueryListResponseBody& setPageData(const DsgUserGroupQueryListResponseBody::PageData & pageData) { DARABONBA_PTR_SET_VALUE(pageData_, pageData) };
    inline DsgUserGroupQueryListResponseBody& setPageData(DsgUserGroupQueryListResponseBody::PageData && pageData) { DARABONBA_PTR_SET_RVALUE(pageData_, pageData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DsgUserGroupQueryListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DsgUserGroupQueryListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The pagination information.
    shared_ptr<DsgUserGroupQueryListResponseBody::PageData> pageData_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
