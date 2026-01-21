// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSiteMonitorQuotaResponseBody() = default ;
    DescribeSiteMonitorQuotaResponseBody(const DescribeSiteMonitorQuotaResponseBody &) = default ;
    DescribeSiteMonitorQuotaResponseBody(DescribeSiteMonitorQuotaResponseBody &&) = default ;
    DescribeSiteMonitorQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorQuotaResponseBody() = default ;
    DescribeSiteMonitorQuotaResponseBody& operator=(const DescribeSiteMonitorQuotaResponseBody &) = default ;
    DescribeSiteMonitorQuotaResponseBody& operator=(DescribeSiteMonitorQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(SecondMonitor, secondMonitor_);
        DARABONBA_PTR_TO_JSON(SiteMonitorIdcQuota, siteMonitorIdcQuota_);
        DARABONBA_PTR_TO_JSON(SiteMonitorOperatorQuotaQuota, siteMonitorOperatorQuotaQuota_);
        DARABONBA_PTR_TO_JSON(SiteMonitorQuotaTaskUsed, siteMonitorQuotaTaskUsed_);
        DARABONBA_PTR_TO_JSON(SiteMonitorTaskQuota, siteMonitorTaskQuota_);
        DARABONBA_PTR_TO_JSON(SiteMonitorVersion, siteMonitorVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(SecondMonitor, secondMonitor_);
        DARABONBA_PTR_FROM_JSON(SiteMonitorIdcQuota, siteMonitorIdcQuota_);
        DARABONBA_PTR_FROM_JSON(SiteMonitorOperatorQuotaQuota, siteMonitorOperatorQuotaQuota_);
        DARABONBA_PTR_FROM_JSON(SiteMonitorQuotaTaskUsed, siteMonitorQuotaTaskUsed_);
        DARABONBA_PTR_FROM_JSON(SiteMonitorTaskQuota, siteMonitorTaskQuota_);
        DARABONBA_PTR_FROM_JSON(SiteMonitorVersion, siteMonitorVersion_);
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
      virtual bool empty() const override { return this->secondMonitor_ == nullptr
        && this->siteMonitorIdcQuota_ == nullptr && this->siteMonitorOperatorQuotaQuota_ == nullptr && this->siteMonitorQuotaTaskUsed_ == nullptr && this->siteMonitorTaskQuota_ == nullptr && this->siteMonitorVersion_ == nullptr; };
      // secondMonitor Field Functions 
      bool hasSecondMonitor() const { return this->secondMonitor_ != nullptr;};
      void deleteSecondMonitor() { this->secondMonitor_ = nullptr;};
      inline bool getSecondMonitor() const { DARABONBA_PTR_GET_DEFAULT(secondMonitor_, false) };
      inline Data& setSecondMonitor(bool secondMonitor) { DARABONBA_PTR_SET_VALUE(secondMonitor_, secondMonitor) };


      // siteMonitorIdcQuota Field Functions 
      bool hasSiteMonitorIdcQuota() const { return this->siteMonitorIdcQuota_ != nullptr;};
      void deleteSiteMonitorIdcQuota() { this->siteMonitorIdcQuota_ = nullptr;};
      inline int32_t getSiteMonitorIdcQuota() const { DARABONBA_PTR_GET_DEFAULT(siteMonitorIdcQuota_, 0) };
      inline Data& setSiteMonitorIdcQuota(int32_t siteMonitorIdcQuota) { DARABONBA_PTR_SET_VALUE(siteMonitorIdcQuota_, siteMonitorIdcQuota) };


      // siteMonitorOperatorQuotaQuota Field Functions 
      bool hasSiteMonitorOperatorQuotaQuota() const { return this->siteMonitorOperatorQuotaQuota_ != nullptr;};
      void deleteSiteMonitorOperatorQuotaQuota() { this->siteMonitorOperatorQuotaQuota_ = nullptr;};
      inline int32_t getSiteMonitorOperatorQuotaQuota() const { DARABONBA_PTR_GET_DEFAULT(siteMonitorOperatorQuotaQuota_, 0) };
      inline Data& setSiteMonitorOperatorQuotaQuota(int32_t siteMonitorOperatorQuotaQuota) { DARABONBA_PTR_SET_VALUE(siteMonitorOperatorQuotaQuota_, siteMonitorOperatorQuotaQuota) };


      // siteMonitorQuotaTaskUsed Field Functions 
      bool hasSiteMonitorQuotaTaskUsed() const { return this->siteMonitorQuotaTaskUsed_ != nullptr;};
      void deleteSiteMonitorQuotaTaskUsed() { this->siteMonitorQuotaTaskUsed_ = nullptr;};
      inline int32_t getSiteMonitorQuotaTaskUsed() const { DARABONBA_PTR_GET_DEFAULT(siteMonitorQuotaTaskUsed_, 0) };
      inline Data& setSiteMonitorQuotaTaskUsed(int32_t siteMonitorQuotaTaskUsed) { DARABONBA_PTR_SET_VALUE(siteMonitorQuotaTaskUsed_, siteMonitorQuotaTaskUsed) };


      // siteMonitorTaskQuota Field Functions 
      bool hasSiteMonitorTaskQuota() const { return this->siteMonitorTaskQuota_ != nullptr;};
      void deleteSiteMonitorTaskQuota() { this->siteMonitorTaskQuota_ = nullptr;};
      inline int32_t getSiteMonitorTaskQuota() const { DARABONBA_PTR_GET_DEFAULT(siteMonitorTaskQuota_, 0) };
      inline Data& setSiteMonitorTaskQuota(int32_t siteMonitorTaskQuota) { DARABONBA_PTR_SET_VALUE(siteMonitorTaskQuota_, siteMonitorTaskQuota) };


      // siteMonitorVersion Field Functions 
      bool hasSiteMonitorVersion() const { return this->siteMonitorVersion_ != nullptr;};
      void deleteSiteMonitorVersion() { this->siteMonitorVersion_ = nullptr;};
      inline string getSiteMonitorVersion() const { DARABONBA_PTR_GET_DEFAULT(siteMonitorVersion_, "") };
      inline Data& setSiteMonitorVersion(string siteMonitorVersion) { DARABONBA_PTR_SET_VALUE(siteMonitorVersion_, siteMonitorVersion) };


    protected:
      // Indicates whether second-level monitoring is enabled. Valid values:
      // 
      // *   true: Second-level monitoring is enabled.
      // *   false: Second-level monitoring is disabled.
      shared_ptr<bool> secondMonitor_ {};
      // The quota of detection points that are provided by Alibaba Cloud. Five detection points are provided for free.
      shared_ptr<int32_t> siteMonitorIdcQuota_ {};
      // The quota of detection points that are not provided by Alibaba Cloud. Default value: 0.
      shared_ptr<int32_t> siteMonitorOperatorQuotaQuota_ {};
      // The used quota of site monitoring tasks.
      shared_ptr<int32_t> siteMonitorQuotaTaskUsed_ {};
      // The quota of site monitoring tasks.
      shared_ptr<int32_t> siteMonitorTaskQuota_ {};
      // The version of site monitoring. Valid values:
      // 
      // *   V1
      // *   V2
      shared_ptr<string> siteMonitorVersion_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSiteMonitorQuotaResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSiteMonitorQuotaResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSiteMonitorQuotaResponseBody::Data) };
    inline DescribeSiteMonitorQuotaResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSiteMonitorQuotaResponseBody::Data) };
    inline DescribeSiteMonitorQuotaResponseBody& setData(const DescribeSiteMonitorQuotaResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSiteMonitorQuotaResponseBody& setData(DescribeSiteMonitorQuotaResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSiteMonitorQuotaResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSiteMonitorQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSiteMonitorQuotaResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The responses code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The quota.
    shared_ptr<DescribeSiteMonitorQuotaResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
