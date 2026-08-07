// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOUTBOUNDCALLRESTRICTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOUTBOUNDCALLRESTRICTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class ListOutboundCallRestrictionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOutboundCallRestrictionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListOutboundCallRestrictionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListOutboundCallRestrictionsResponseBody() = default ;
    ListOutboundCallRestrictionsResponseBody(const ListOutboundCallRestrictionsResponseBody &) = default ;
    ListOutboundCallRestrictionsResponseBody(ListOutboundCallRestrictionsResponseBody &&) = default ;
    ListOutboundCallRestrictionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOutboundCallRestrictionsResponseBody() = default ;
    ListOutboundCallRestrictionsResponseBody& operator=(const ListOutboundCallRestrictionsResponseBody &) = default ;
    ListOutboundCallRestrictionsResponseBody& operator=(ListOutboundCallRestrictionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(OutboundCallRestrictions, outboundCallRestrictions_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(OutboundCallRestrictions, outboundCallRestrictions_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
      class OutboundCallRestrictions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OutboundCallRestrictions& obj) { 
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(Number, number_);
          DARABONBA_PTR_TO_JSON(Policy, policy_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(RestrictionId, restrictionId_);
        };
        friend void from_json(const Darabonba::Json& j, OutboundCallRestrictions& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(Number, number_);
          DARABONBA_PTR_FROM_JSON(Policy, policy_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(RestrictionId, restrictionId_);
        };
        OutboundCallRestrictions() = default ;
        OutboundCallRestrictions(const OutboundCallRestrictions &) = default ;
        OutboundCallRestrictions(OutboundCallRestrictions &&) = default ;
        OutboundCallRestrictions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OutboundCallRestrictions() = default ;
        OutboundCallRestrictions& operator=(const OutboundCallRestrictions &) = default ;
        OutboundCallRestrictions& operator=(OutboundCallRestrictions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->creator_ == nullptr && this->number_ == nullptr && this->policy_ == nullptr && this->remark_ == nullptr && this->restrictionId_ == nullptr; };
        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
        inline OutboundCallRestrictions& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline OutboundCallRestrictions& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // number Field Functions 
        bool hasNumber() const { return this->number_ != nullptr;};
        void deleteNumber() { this->number_ = nullptr;};
        inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
        inline OutboundCallRestrictions& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


        // policy Field Functions 
        bool hasPolicy() const { return this->policy_ != nullptr;};
        void deletePolicy() { this->policy_ = nullptr;};
        inline int32_t getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, 0) };
        inline OutboundCallRestrictions& setPolicy(int32_t policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline OutboundCallRestrictions& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // restrictionId Field Functions 
        bool hasRestrictionId() const { return this->restrictionId_ != nullptr;};
        void deleteRestrictionId() { this->restrictionId_ = nullptr;};
        inline string getRestrictionId() const { DARABONBA_PTR_GET_DEFAULT(restrictionId_, "") };
        inline OutboundCallRestrictions& setRestrictionId(string restrictionId) { DARABONBA_PTR_SET_VALUE(restrictionId_, restrictionId) };


      protected:
        // The creation time, in millisecond-level timestamp.
        shared_ptr<int64_t> createdTime_ {};
        // The creator.
        shared_ptr<string> creator_ {};
        // The phone number.
        shared_ptr<string> number_ {};
        // The policy. Valid values:
        // 0: blacklist.
        // 1: whitelist.
        shared_ptr<int32_t> policy_ {};
        // The remark.
        shared_ptr<string> remark_ {};
        // The outbound call restriction ID.
        shared_ptr<string> restrictionId_ {};
      };

      virtual bool empty() const override { return this->outboundCallRestrictions_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // outboundCallRestrictions Field Functions 
      bool hasOutboundCallRestrictions() const { return this->outboundCallRestrictions_ != nullptr;};
      void deleteOutboundCallRestrictions() { this->outboundCallRestrictions_ = nullptr;};
      inline const vector<Data::OutboundCallRestrictions> & getOutboundCallRestrictions() const { DARABONBA_PTR_GET_CONST(outboundCallRestrictions_, vector<Data::OutboundCallRestrictions>) };
      inline vector<Data::OutboundCallRestrictions> getOutboundCallRestrictions() { DARABONBA_PTR_GET(outboundCallRestrictions_, vector<Data::OutboundCallRestrictions>) };
      inline Data& setOutboundCallRestrictions(const vector<Data::OutboundCallRestrictions> & outboundCallRestrictions) { DARABONBA_PTR_SET_VALUE(outboundCallRestrictions_, outboundCallRestrictions) };
      inline Data& setOutboundCallRestrictions(vector<Data::OutboundCallRestrictions> && outboundCallRestrictions) { DARABONBA_PTR_SET_RVALUE(outboundCallRestrictions_, outboundCallRestrictions) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The data list.
      shared_ptr<vector<Data::OutboundCallRestrictions>> outboundCallRestrictions_ {};
      // The page number, starting from 1.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of records per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of records that match the conditions.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListOutboundCallRestrictionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListOutboundCallRestrictionsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListOutboundCallRestrictionsResponseBody::Data) };
    inline ListOutboundCallRestrictionsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListOutboundCallRestrictionsResponseBody::Data) };
    inline ListOutboundCallRestrictionsResponseBody& setData(const ListOutboundCallRestrictionsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListOutboundCallRestrictionsResponseBody& setData(ListOutboundCallRestrictionsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListOutboundCallRestrictionsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListOutboundCallRestrictionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline ListOutboundCallRestrictionsResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListOutboundCallRestrictionsResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOutboundCallRestrictionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListOutboundCallRestrictionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The return code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<ListOutboundCallRestrictionsResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The list of variable values in the error message.
    shared_ptr<vector<string>> params_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
