// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeHighRiskPieChartRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHighRiskPieChartRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(beginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(eventCodes, eventCodes_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHighRiskPieChartRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(beginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(eventCodes, eventCodes_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DescribeHighRiskPieChartRequest() = default ;
    DescribeHighRiskPieChartRequest(const DescribeHighRiskPieChartRequest &) = default ;
    DescribeHighRiskPieChartRequest(DescribeHighRiskPieChartRequest &&) = default ;
    DescribeHighRiskPieChartRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHighRiskPieChartRequest() = default ;
    DescribeHighRiskPieChartRequest& operator=(const DescribeHighRiskPieChartRequest &) = default ;
    DescribeHighRiskPieChartRequest& operator=(DescribeHighRiskPieChartRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->beginTime_ == nullptr && this->endTime_ == nullptr && this->eventCodes_ == nullptr && this->regId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeHighRiskPieChartRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline DescribeHighRiskPieChartRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeHighRiskPieChartRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventCodes Field Functions 
    bool hasEventCodes() const { return this->eventCodes_ != nullptr;};
    void deleteEventCodes() { this->eventCodes_ = nullptr;};
    inline string getEventCodes() const { DARABONBA_PTR_GET_DEFAULT(eventCodes_, "") };
    inline DescribeHighRiskPieChartRequest& setEventCodes(string eventCodes) { DARABONBA_PTR_SET_VALUE(eventCodes_, eventCodes) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeHighRiskPieChartRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Sets the language type for requests and received messages. Default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Start time, accurate to milliseconds (ms).
    // 
    // This parameter is required.
    shared_ptr<int64_t> beginTime_ {};
    // End time, accurate to milliseconds (ms).
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // Event code.
    shared_ptr<string> eventCodes_ {};
    // Region code
    shared_ptr<string> regId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
