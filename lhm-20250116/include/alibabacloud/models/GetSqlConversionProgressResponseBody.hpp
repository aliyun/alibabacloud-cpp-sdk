// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLCONVERSIONPROGRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSQLCONVERSIONPROGRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetSqlConversionProgressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSqlConversionProgressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSqlConversionProgressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetSqlConversionProgressResponseBody() = default ;
    GetSqlConversionProgressResponseBody(const GetSqlConversionProgressResponseBody &) = default ;
    GetSqlConversionProgressResponseBody(GetSqlConversionProgressResponseBody &&) = default ;
    GetSqlConversionProgressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSqlConversionProgressResponseBody() = default ;
    GetSqlConversionProgressResponseBody& operator=(const GetSqlConversionProgressResponseBody &) = default ;
    GetSqlConversionProgressResponseBody& operator=(GetSqlConversionProgressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(fail, fail_);
        DARABONBA_PTR_TO_JSON(finish, finish_);
        DARABONBA_PTR_TO_JSON(percent, percent_);
        DARABONBA_PTR_TO_JSON(running, running_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(fail, fail_);
        DARABONBA_PTR_FROM_JSON(finish, finish_);
        DARABONBA_PTR_FROM_JSON(percent, percent_);
        DARABONBA_PTR_FROM_JSON(running, running_);
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
      virtual bool empty() const override { return this->fail_ == nullptr
        && this->finish_ == nullptr && this->percent_ == nullptr && this->running_ == nullptr && this->total_ == nullptr; };
      // fail Field Functions 
      bool hasFail() const { return this->fail_ != nullptr;};
      void deleteFail() { this->fail_ = nullptr;};
      inline int64_t getFail() const { DARABONBA_PTR_GET_DEFAULT(fail_, 0L) };
      inline Data& setFail(int64_t fail) { DARABONBA_PTR_SET_VALUE(fail_, fail) };


      // finish Field Functions 
      bool hasFinish() const { return this->finish_ != nullptr;};
      void deleteFinish() { this->finish_ = nullptr;};
      inline int64_t getFinish() const { DARABONBA_PTR_GET_DEFAULT(finish_, 0L) };
      inline Data& setFinish(int64_t finish) { DARABONBA_PTR_SET_VALUE(finish_, finish) };


      // percent Field Functions 
      bool hasPercent() const { return this->percent_ != nullptr;};
      void deletePercent() { this->percent_ = nullptr;};
      inline double getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0.0) };
      inline Data& setPercent(double percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


      // running Field Functions 
      bool hasRunning() const { return this->running_ != nullptr;};
      void deleteRunning() { this->running_ = nullptr;};
      inline int64_t getRunning() const { DARABONBA_PTR_GET_DEFAULT(running_, 0L) };
      inline Data& setRunning(int64_t running) { DARABONBA_PTR_SET_VALUE(running_, running) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The number of failed scripts.
      shared_ptr<int64_t> fail_ {};
      // The number of completed scripts.
      shared_ptr<int64_t> finish_ {};
      // The completion percentage.
      shared_ptr<double> percent_ {};
      // The number of scripts being converted.
      shared_ptr<int64_t> running_ {};
      // The total number of scripts.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSqlConversionProgressResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSqlConversionProgressResponseBody::Data) };
    inline GetSqlConversionProgressResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSqlConversionProgressResponseBody::Data) };
    inline GetSqlConversionProgressResponseBody& setData(const GetSqlConversionProgressResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSqlConversionProgressResponseBody& setData(GetSqlConversionProgressResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetSqlConversionProgressResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetSqlConversionProgressResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSqlConversionProgressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSqlConversionProgressResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data body returned by the operation. For the field structure, see the child field descriptions.
    shared_ptr<GetSqlConversionProgressResponseBody::Data> data_ {};
    // The error code. An empty string is returned if the call is successful.
    shared_ptr<string> errCode_ {};
    // The error message. An empty string is returned if the call is successful.
    shared_ptr<string> errMessage_ {};
    // The request ID, which is used to locate and troubleshoot issues with this call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // - true: The call is successful.
    // - false: The call failed. Check errCode and errMessage for troubleshooting.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
