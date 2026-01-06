// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEGROUPINSPECTREPORTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEGROUPINSPECTREPORTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetInstanceGroupInspectReportDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceGroupInspectReportDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceGroupInspectReportDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetInstanceGroupInspectReportDetailResponseBody() = default ;
    GetInstanceGroupInspectReportDetailResponseBody(const GetInstanceGroupInspectReportDetailResponseBody &) = default ;
    GetInstanceGroupInspectReportDetailResponseBody(GetInstanceGroupInspectReportDetailResponseBody &&) = default ;
    GetInstanceGroupInspectReportDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceGroupInspectReportDetailResponseBody() = default ;
    GetInstanceGroupInspectReportDetailResponseBody& operator=(const GetInstanceGroupInspectReportDetailResponseBody &) = default ;
    GetInstanceGroupInspectReportDetailResponseBody& operator=(GetInstanceGroupInspectReportDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ReportDetail, reportDetail_);
        DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ReportDetail, reportDetail_);
        DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
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
      virtual bool empty() const override { return this->reportDetail_ == nullptr
        && this->reportId_ == nullptr; };
      // reportDetail Field Functions 
      bool hasReportDetail() const { return this->reportDetail_ != nullptr;};
      void deleteReportDetail() { this->reportDetail_ = nullptr;};
      inline string getReportDetail() const { DARABONBA_PTR_GET_DEFAULT(reportDetail_, "") };
      inline Data& setReportDetail(string reportDetail) { DARABONBA_PTR_SET_VALUE(reportDetail_, reportDetail) };


      // reportId Field Functions 
      bool hasReportId() const { return this->reportId_ != nullptr;};
      void deleteReportId() { this->reportId_ = nullptr;};
      inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
      inline Data& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    protected:
      shared_ptr<string> reportDetail_ {};
      shared_ptr<string> reportId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceGroupInspectReportDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetInstanceGroupInspectReportDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetInstanceGroupInspectReportDetailResponseBody::Data) };
    inline GetInstanceGroupInspectReportDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetInstanceGroupInspectReportDetailResponseBody::Data) };
    inline GetInstanceGroupInspectReportDetailResponseBody& setData(const GetInstanceGroupInspectReportDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInstanceGroupInspectReportDetailResponseBody& setData(GetInstanceGroupInspectReportDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstanceGroupInspectReportDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceGroupInspectReportDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetInstanceGroupInspectReportDetailResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    // ReportDetail
    shared_ptr<GetInstanceGroupInspectReportDetailResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
