// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READREVISIONHISTORYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_READREVISIONHISTORYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Notifications20241225
{
namespace Models
{
  class ReadRevisionHistoryListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadRevisionHistoryListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ReadRevisionHistoryListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ReadRevisionHistoryListResponseBody() = default ;
    ReadRevisionHistoryListResponseBody(const ReadRevisionHistoryListResponseBody &) = default ;
    ReadRevisionHistoryListResponseBody(ReadRevisionHistoryListResponseBody &&) = default ;
    ReadRevisionHistoryListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadRevisionHistoryListResponseBody() = default ;
    ReadRevisionHistoryListResponseBody& operator=(const ReadRevisionHistoryListResponseBody &) = default ;
    ReadRevisionHistoryListResponseBody& operator=(ReadRevisionHistoryListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(Rows, rows_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(Rows, rows_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class Rows : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rows& obj) { 
          DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
          DARABONBA_PTR_TO_JSON(CategoryCode, categoryCode_);
          DARABONBA_PTR_TO_JSON(ChannelGroupCode, channelGroupCode_);
          DARABONBA_PTR_TO_JSON(NewValue, newValue_);
          DARABONBA_PTR_TO_JSON(OperationItemCode, operationItemCode_);
          DARABONBA_PTR_TO_JSON(OperationItemName, operationItemName_);
          DARABONBA_PTR_TO_JSON(OperationTimestamp, operationTimestamp_);
          DARABONBA_PTR_TO_JSON(OperatorIp, operatorIp_);
          DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
          DARABONBA_PTR_TO_JSON(OperatorUid, operatorUid_);
          DARABONBA_PTR_TO_JSON(OriginalValue, originalValue_);
          DARABONBA_PTR_TO_JSON(PageSpec, pageSpec_);
          DARABONBA_PTR_TO_JSON(Remarks, remarks_);
        };
        friend void from_json(const Darabonba::Json& j, Rows& obj) { 
          DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
          DARABONBA_PTR_FROM_JSON(CategoryCode, categoryCode_);
          DARABONBA_PTR_FROM_JSON(ChannelGroupCode, channelGroupCode_);
          DARABONBA_PTR_FROM_JSON(NewValue, newValue_);
          DARABONBA_PTR_FROM_JSON(OperationItemCode, operationItemCode_);
          DARABONBA_PTR_FROM_JSON(OperationItemName, operationItemName_);
          DARABONBA_PTR_FROM_JSON(OperationTimestamp, operationTimestamp_);
          DARABONBA_PTR_FROM_JSON(OperatorIp, operatorIp_);
          DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
          DARABONBA_PTR_FROM_JSON(OperatorUid, operatorUid_);
          DARABONBA_PTR_FROM_JSON(OriginalValue, originalValue_);
          DARABONBA_PTR_FROM_JSON(PageSpec, pageSpec_);
          DARABONBA_PTR_FROM_JSON(Remarks, remarks_);
        };
        Rows() = default ;
        Rows(const Rows &) = default ;
        Rows(Rows &&) = default ;
        Rows(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rows() = default ;
        Rows& operator=(const Rows &) = default ;
        Rows& operator=(Rows &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PageSpec : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PageSpec& obj) { 
            DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
            DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
          };
          friend void from_json(const Darabonba::Json& j, PageSpec& obj) { 
            DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
            DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
          };
          PageSpec() = default ;
          PageSpec(const PageSpec &) = default ;
          PageSpec(PageSpec &&) = default ;
          PageSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PageSpec() = default ;
          PageSpec& operator=(const PageSpec &) = default ;
          PageSpec& operator=(PageSpec &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr; };
          // maxResults Field Functions 
          bool hasMaxResults() const { return this->maxResults_ != nullptr;};
          void deleteMaxResults() { this->maxResults_ = nullptr;};
          inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
          inline PageSpec& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


          // nextToken Field Functions 
          bool hasNextToken() const { return this->nextToken_ != nullptr;};
          void deleteNextToken() { this->nextToken_ = nullptr;};
          inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
          inline PageSpec& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


        protected:
          // The maximum number of entries.
          shared_ptr<int32_t> maxResults_ {};
          // The token for the next page of data.
          shared_ptr<string> nextToken_ {};
        };

        virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->categoryCode_ == nullptr && this->channelGroupCode_ == nullptr && this->newValue_ == nullptr && this->operationItemCode_ == nullptr && this->operationItemName_ == nullptr
        && this->operationTimestamp_ == nullptr && this->operatorIp_ == nullptr && this->operatorName_ == nullptr && this->operatorUid_ == nullptr && this->originalValue_ == nullptr
        && this->pageSpec_ == nullptr && this->remarks_ == nullptr; };
        // aliUid Field Functions 
        bool hasAliUid() const { return this->aliUid_ != nullptr;};
        void deleteAliUid() { this->aliUid_ = nullptr;};
        inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
        inline Rows& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


        // categoryCode Field Functions 
        bool hasCategoryCode() const { return this->categoryCode_ != nullptr;};
        void deleteCategoryCode() { this->categoryCode_ = nullptr;};
        inline string getCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(categoryCode_, "") };
        inline Rows& setCategoryCode(string categoryCode) { DARABONBA_PTR_SET_VALUE(categoryCode_, categoryCode) };


        // channelGroupCode Field Functions 
        bool hasChannelGroupCode() const { return this->channelGroupCode_ != nullptr;};
        void deleteChannelGroupCode() { this->channelGroupCode_ = nullptr;};
        inline string getChannelGroupCode() const { DARABONBA_PTR_GET_DEFAULT(channelGroupCode_, "") };
        inline Rows& setChannelGroupCode(string channelGroupCode) { DARABONBA_PTR_SET_VALUE(channelGroupCode_, channelGroupCode) };


        // newValue Field Functions 
        bool hasNewValue() const { return this->newValue_ != nullptr;};
        void deleteNewValue() { this->newValue_ = nullptr;};
        inline string getNewValue() const { DARABONBA_PTR_GET_DEFAULT(newValue_, "") };
        inline Rows& setNewValue(string newValue) { DARABONBA_PTR_SET_VALUE(newValue_, newValue) };


        // operationItemCode Field Functions 
        bool hasOperationItemCode() const { return this->operationItemCode_ != nullptr;};
        void deleteOperationItemCode() { this->operationItemCode_ = nullptr;};
        inline string getOperationItemCode() const { DARABONBA_PTR_GET_DEFAULT(operationItemCode_, "") };
        inline Rows& setOperationItemCode(string operationItemCode) { DARABONBA_PTR_SET_VALUE(operationItemCode_, operationItemCode) };


        // operationItemName Field Functions 
        bool hasOperationItemName() const { return this->operationItemName_ != nullptr;};
        void deleteOperationItemName() { this->operationItemName_ = nullptr;};
        inline string getOperationItemName() const { DARABONBA_PTR_GET_DEFAULT(operationItemName_, "") };
        inline Rows& setOperationItemName(string operationItemName) { DARABONBA_PTR_SET_VALUE(operationItemName_, operationItemName) };


        // operationTimestamp Field Functions 
        bool hasOperationTimestamp() const { return this->operationTimestamp_ != nullptr;};
        void deleteOperationTimestamp() { this->operationTimestamp_ = nullptr;};
        inline int64_t getOperationTimestamp() const { DARABONBA_PTR_GET_DEFAULT(operationTimestamp_, 0L) };
        inline Rows& setOperationTimestamp(int64_t operationTimestamp) { DARABONBA_PTR_SET_VALUE(operationTimestamp_, operationTimestamp) };


        // operatorIp Field Functions 
        bool hasOperatorIp() const { return this->operatorIp_ != nullptr;};
        void deleteOperatorIp() { this->operatorIp_ = nullptr;};
        inline string getOperatorIp() const { DARABONBA_PTR_GET_DEFAULT(operatorIp_, "") };
        inline Rows& setOperatorIp(string operatorIp) { DARABONBA_PTR_SET_VALUE(operatorIp_, operatorIp) };


        // operatorName Field Functions 
        bool hasOperatorName() const { return this->operatorName_ != nullptr;};
        void deleteOperatorName() { this->operatorName_ = nullptr;};
        inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
        inline Rows& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


        // operatorUid Field Functions 
        bool hasOperatorUid() const { return this->operatorUid_ != nullptr;};
        void deleteOperatorUid() { this->operatorUid_ = nullptr;};
        inline int64_t getOperatorUid() const { DARABONBA_PTR_GET_DEFAULT(operatorUid_, 0L) };
        inline Rows& setOperatorUid(int64_t operatorUid) { DARABONBA_PTR_SET_VALUE(operatorUid_, operatorUid) };


        // originalValue Field Functions 
        bool hasOriginalValue() const { return this->originalValue_ != nullptr;};
        void deleteOriginalValue() { this->originalValue_ = nullptr;};
        inline string getOriginalValue() const { DARABONBA_PTR_GET_DEFAULT(originalValue_, "") };
        inline Rows& setOriginalValue(string originalValue) { DARABONBA_PTR_SET_VALUE(originalValue_, originalValue) };


        // pageSpec Field Functions 
        bool hasPageSpec() const { return this->pageSpec_ != nullptr;};
        void deletePageSpec() { this->pageSpec_ = nullptr;};
        inline const Rows::PageSpec & getPageSpec() const { DARABONBA_PTR_GET_CONST(pageSpec_, Rows::PageSpec) };
        inline Rows::PageSpec getPageSpec() { DARABONBA_PTR_GET(pageSpec_, Rows::PageSpec) };
        inline Rows& setPageSpec(const Rows::PageSpec & pageSpec) { DARABONBA_PTR_SET_VALUE(pageSpec_, pageSpec) };
        inline Rows& setPageSpec(Rows::PageSpec && pageSpec) { DARABONBA_PTR_SET_RVALUE(pageSpec_, pageSpec) };


        // remarks Field Functions 
        bool hasRemarks() const { return this->remarks_ != nullptr;};
        void deleteRemarks() { this->remarks_ = nullptr;};
        inline string getRemarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
        inline Rows& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


      protected:
        // The Alibaba Cloud account ID.
        shared_ptr<int64_t> aliUid_ {};
        // The event type code.
        shared_ptr<string> categoryCode_ {};
        // The channel group.
        shared_ptr<string> channelGroupCode_ {};
        // The modified value.
        shared_ptr<string> newValue_ {};
        // The revision item code. Valid values:
        shared_ptr<string> operationItemCode_ {};
        // The revision item name.
        shared_ptr<string> operationItemName_ {};
        // The timestamp.
        shared_ptr<int64_t> operationTimestamp_ {};
        // The IP address of the operator.
        shared_ptr<string> operatorIp_ {};
        // The name of the operator.
        shared_ptr<string> operatorName_ {};
        // The UID of the operator.
        shared_ptr<int64_t> operatorUid_ {};
        // The original value.
        shared_ptr<string> originalValue_ {};
        // The pagination information.
        shared_ptr<Rows::PageSpec> pageSpec_ {};
        // The remarks.
        shared_ptr<string> remarks_ {};
      };

      virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->rows_ == nullptr && this->totalCount_ == nullptr; };
      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // rows Field Functions 
      bool hasRows() const { return this->rows_ != nullptr;};
      void deleteRows() { this->rows_ = nullptr;};
      inline const vector<Data::Rows> & getRows() const { DARABONBA_PTR_GET_CONST(rows_, vector<Data::Rows>) };
      inline vector<Data::Rows> getRows() { DARABONBA_PTR_GET(rows_, vector<Data::Rows>) };
      inline Data& setRows(const vector<Data::Rows> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
      inline Data& setRows(vector<Data::Rows> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The maximum number of entries.
      shared_ptr<int32_t> maxResults_ {};
      // The token for the next page of data.
      shared_ptr<string> nextToken_ {};
      // A single row of returned data.
      shared_ptr<vector<Data::Rows>> rows_ {};
      // The total number of messages in the category.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ReadRevisionHistoryListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ReadRevisionHistoryListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ReadRevisionHistoryListResponseBody::Data) };
    inline ReadRevisionHistoryListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ReadRevisionHistoryListResponseBody::Data) };
    inline ReadRevisionHistoryListResponseBody& setData(const ReadRevisionHistoryListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ReadRevisionHistoryListResponseBody& setData(ReadRevisionHistoryListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline ReadRevisionHistoryListResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ReadRevisionHistoryListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReadRevisionHistoryListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ReadRevisionHistoryListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned by the system. For more information, see error codes.
    shared_ptr<string> code_ {};
    // The execution result.
    shared_ptr<ReadRevisionHistoryListResponseBody::Data> data_ {};
    // The description.
    shared_ptr<int32_t> httpCode_ {};
    // The message returned when the call failed.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - true: The call was successful.
    // - false: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Notifications20241225
#endif
