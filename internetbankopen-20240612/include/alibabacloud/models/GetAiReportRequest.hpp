// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAIREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace InternetBankOpen20240612
{
namespace Models
{
  class GetAiReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(callId, callId_);
      DARABONBA_PTR_TO_JSON(reportId, reportId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(callId, callId_);
      DARABONBA_PTR_FROM_JSON(reportId, reportId_);
    };
    GetAiReportRequest() = default ;
    GetAiReportRequest(const GetAiReportRequest &) = default ;
    GetAiReportRequest(GetAiReportRequest &&) = default ;
    GetAiReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiReportRequest() = default ;
    GetAiReportRequest& operator=(const GetAiReportRequest &) = default ;
    GetAiReportRequest& operator=(GetAiReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callId_ == nullptr
        && this->reportId_ == nullptr; };
    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline GetAiReportRequest& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline GetAiReportRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


  protected:
    shared_ptr<string> callId_ {};
    shared_ptr<string> reportId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace InternetBankOpen20240612
#endif
