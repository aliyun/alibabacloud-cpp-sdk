// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTANDARDSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTANDARDSTATISTICSRESPONSEBODY_HPP_
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
  class GetStandardStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStandardStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetStandardStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetStandardStatisticsResponseBody() = default ;
    GetStandardStatisticsResponseBody(const GetStandardStatisticsResponseBody &) = default ;
    GetStandardStatisticsResponseBody(GetStandardStatisticsResponseBody &&) = default ;
    GetStandardStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStandardStatisticsResponseBody() = default ;
    GetStandardStatisticsResponseBody& operator=(const GetStandardStatisticsResponseBody &) = default ;
    GetStandardStatisticsResponseBody& operator=(GetStandardStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(StandardTypeCountList, standardTypeCountList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(StandardTypeCountList, standardTypeCountList_);
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
      class StandardTypeCountList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StandardTypeCountList& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(StandardType, standardType_);
        };
        friend void from_json(const Darabonba::Json& j, StandardTypeCountList& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(StandardType, standardType_);
        };
        StandardTypeCountList() = default ;
        StandardTypeCountList(const StandardTypeCountList &) = default ;
        StandardTypeCountList(StandardTypeCountList &&) = default ;
        StandardTypeCountList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StandardTypeCountList() = default ;
        StandardTypeCountList& operator=(const StandardTypeCountList &) = default ;
        StandardTypeCountList& operator=(StandardTypeCountList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->standardType_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline StandardTypeCountList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // standardType Field Functions 
        bool hasStandardType() const { return this->standardType_ != nullptr;};
        void deleteStandardType() { this->standardType_ = nullptr;};
        inline string getStandardType() const { DARABONBA_PTR_GET_DEFAULT(standardType_, "") };
        inline StandardTypeCountList& setStandardType(string standardType) { DARABONBA_PTR_SET_VALUE(standardType_, standardType) };


      protected:
        shared_ptr<int32_t> count_ {};
        shared_ptr<string> standardType_ {};
      };

      virtual bool empty() const override { return this->standardTypeCountList_ == nullptr
        && this->totalCount_ == nullptr; };
      // standardTypeCountList Field Functions 
      bool hasStandardTypeCountList() const { return this->standardTypeCountList_ != nullptr;};
      void deleteStandardTypeCountList() { this->standardTypeCountList_ = nullptr;};
      inline const vector<Data::StandardTypeCountList> & getStandardTypeCountList() const { DARABONBA_PTR_GET_CONST(standardTypeCountList_, vector<Data::StandardTypeCountList>) };
      inline vector<Data::StandardTypeCountList> getStandardTypeCountList() { DARABONBA_PTR_GET(standardTypeCountList_, vector<Data::StandardTypeCountList>) };
      inline Data& setStandardTypeCountList(const vector<Data::StandardTypeCountList> & standardTypeCountList) { DARABONBA_PTR_SET_VALUE(standardTypeCountList_, standardTypeCountList) };
      inline Data& setStandardTypeCountList(vector<Data::StandardTypeCountList> && standardTypeCountList) { DARABONBA_PTR_SET_RVALUE(standardTypeCountList_, standardTypeCountList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::StandardTypeCountList>> standardTypeCountList_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetStandardStatisticsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetStandardStatisticsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetStandardStatisticsResponseBody::Data) };
    inline GetStandardStatisticsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetStandardStatisticsResponseBody::Data) };
    inline GetStandardStatisticsResponseBody& setData(const GetStandardStatisticsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetStandardStatisticsResponseBody& setData(GetStandardStatisticsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetStandardStatisticsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetStandardStatisticsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStandardStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetStandardStatisticsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetStandardStatisticsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
