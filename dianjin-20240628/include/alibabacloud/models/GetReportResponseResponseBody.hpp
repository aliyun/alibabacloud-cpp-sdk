// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTRESPONSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTRESPONSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetReportResponseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReportResponseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(outRequestNo, outRequestNo_);
      DARABONBA_PTR_TO_JSON(reportUrl, reportUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetReportResponseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(outRequestNo, outRequestNo_);
      DARABONBA_PTR_FROM_JSON(reportUrl, reportUrl_);
    };
    GetReportResponseResponseBody() = default ;
    GetReportResponseResponseBody(const GetReportResponseResponseBody &) = default ;
    GetReportResponseResponseBody(GetReportResponseResponseBody &&) = default ;
    GetReportResponseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReportResponseResponseBody() = default ;
    GetReportResponseResponseBody& operator=(const GetReportResponseResponseBody &) = default ;
    GetReportResponseResponseBody& operator=(GetReportResponseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->outRequestNo_ == nullptr && this->reportUrl_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetReportResponseResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetReportResponseResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // outRequestNo Field Functions 
    bool hasOutRequestNo() const { return this->outRequestNo_ != nullptr;};
    void deleteOutRequestNo() { this->outRequestNo_ = nullptr;};
    inline string getOutRequestNo() const { DARABONBA_PTR_GET_DEFAULT(outRequestNo_, "") };
    inline GetReportResponseResponseBody& setOutRequestNo(string outRequestNo) { DARABONBA_PTR_SET_VALUE(outRequestNo_, outRequestNo) };


    // reportUrl Field Functions 
    bool hasReportUrl() const { return this->reportUrl_ != nullptr;};
    void deleteReportUrl() { this->reportUrl_ = nullptr;};
    inline string getReportUrl() const { DARABONBA_PTR_GET_DEFAULT(reportUrl_, "") };
    inline GetReportResponseResponseBody& setReportUrl(string reportUrl) { DARABONBA_PTR_SET_VALUE(reportUrl_, reportUrl) };


  protected:
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> outRequestNo_ {};
    shared_ptr<string> reportUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
