// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCALCULATIONJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCALCULATIONJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetCalculationJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCalculationJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ABMetricId, ABMetricId_);
      DARABONBA_PTR_TO_JSON(ABMetricName, ABMetricName_);
      DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(GmtRanTime, gmtRanTime_);
      DARABONBA_PTR_TO_JSON(JobMessage, jobMessage_);
      DARABONBA_PTR_TO_JSON(JobSource, jobSource_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetCalculationJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ABMetricId, ABMetricId_);
      DARABONBA_PTR_FROM_JSON(ABMetricName, ABMetricName_);
      DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(GmtRanTime, gmtRanTime_);
      DARABONBA_PTR_FROM_JSON(JobMessage, jobMessage_);
      DARABONBA_PTR_FROM_JSON(JobSource, jobSource_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetCalculationJobResponseBody() = default ;
    GetCalculationJobResponseBody(const GetCalculationJobResponseBody &) = default ;
    GetCalculationJobResponseBody(GetCalculationJobResponseBody &&) = default ;
    GetCalculationJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCalculationJobResponseBody() = default ;
    GetCalculationJobResponseBody& operator=(const GetCalculationJobResponseBody &) = default ;
    GetCalculationJobResponseBody& operator=(GetCalculationJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ABMetricId_ == nullptr
        && this->ABMetricName_ == nullptr && this->bizDate_ == nullptr && this->config_ == nullptr && this->gmtRanTime_ == nullptr && this->jobMessage_ == nullptr
        && this->jobSource_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // ABMetricId Field Functions 
    bool hasABMetricId() const { return this->ABMetricId_ != nullptr;};
    void deleteABMetricId() { this->ABMetricId_ = nullptr;};
    inline string getABMetricId() const { DARABONBA_PTR_GET_DEFAULT(ABMetricId_, "") };
    inline GetCalculationJobResponseBody& setABMetricId(string ABMetricId) { DARABONBA_PTR_SET_VALUE(ABMetricId_, ABMetricId) };


    // ABMetricName Field Functions 
    bool hasABMetricName() const { return this->ABMetricName_ != nullptr;};
    void deleteABMetricName() { this->ABMetricName_ = nullptr;};
    inline string getABMetricName() const { DARABONBA_PTR_GET_DEFAULT(ABMetricName_, "") };
    inline GetCalculationJobResponseBody& setABMetricName(string ABMetricName) { DARABONBA_PTR_SET_VALUE(ABMetricName_, ABMetricName) };


    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline string getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
    inline GetCalculationJobResponseBody& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline GetCalculationJobResponseBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // gmtRanTime Field Functions 
    bool hasGmtRanTime() const { return this->gmtRanTime_ != nullptr;};
    void deleteGmtRanTime() { this->gmtRanTime_ = nullptr;};
    inline string getGmtRanTime() const { DARABONBA_PTR_GET_DEFAULT(gmtRanTime_, "") };
    inline GetCalculationJobResponseBody& setGmtRanTime(string gmtRanTime) { DARABONBA_PTR_SET_VALUE(gmtRanTime_, gmtRanTime) };


    // jobMessage Field Functions 
    bool hasJobMessage() const { return this->jobMessage_ != nullptr;};
    void deleteJobMessage() { this->jobMessage_ = nullptr;};
    inline const vector<string> & getJobMessage() const { DARABONBA_PTR_GET_CONST(jobMessage_, vector<string>) };
    inline vector<string> getJobMessage() { DARABONBA_PTR_GET(jobMessage_, vector<string>) };
    inline GetCalculationJobResponseBody& setJobMessage(const vector<string> & jobMessage) { DARABONBA_PTR_SET_VALUE(jobMessage_, jobMessage) };
    inline GetCalculationJobResponseBody& setJobMessage(vector<string> && jobMessage) { DARABONBA_PTR_SET_RVALUE(jobMessage_, jobMessage) };


    // jobSource Field Functions 
    bool hasJobSource() const { return this->jobSource_ != nullptr;};
    void deleteJobSource() { this->jobSource_ = nullptr;};
    inline string getJobSource() const { DARABONBA_PTR_GET_DEFAULT(jobSource_, "") };
    inline GetCalculationJobResponseBody& setJobSource(string jobSource) { DARABONBA_PTR_SET_VALUE(jobSource_, jobSource) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCalculationJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetCalculationJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> ABMetricId_ {};
    shared_ptr<string> ABMetricName_ {};
    shared_ptr<string> bizDate_ {};
    shared_ptr<string> config_ {};
    shared_ptr<string> gmtRanTime_ {};
    shared_ptr<vector<string>> jobMessage_ {};
    shared_ptr<string> jobSource_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
