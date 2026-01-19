// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCORESECTIONRATIOLINECHARTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCORESECTIONRATIOLINECHARTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeScoreSectionRatioLineChartRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScoreSectionRatioLineChartRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(beginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(byPassEventCodes, byPassEventCodes_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(mainEventCodes, mainEventCodes_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(shuntEventCodes, shuntEventCodes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScoreSectionRatioLineChartRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(beginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(byPassEventCodes, byPassEventCodes_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(mainEventCodes, mainEventCodes_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(shuntEventCodes, shuntEventCodes_);
    };
    DescribeScoreSectionRatioLineChartRequest() = default ;
    DescribeScoreSectionRatioLineChartRequest(const DescribeScoreSectionRatioLineChartRequest &) = default ;
    DescribeScoreSectionRatioLineChartRequest(DescribeScoreSectionRatioLineChartRequest &&) = default ;
    DescribeScoreSectionRatioLineChartRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScoreSectionRatioLineChartRequest() = default ;
    DescribeScoreSectionRatioLineChartRequest& operator=(const DescribeScoreSectionRatioLineChartRequest &) = default ;
    DescribeScoreSectionRatioLineChartRequest& operator=(DescribeScoreSectionRatioLineChartRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->beginTime_ == nullptr && this->byPassEventCodes_ == nullptr && this->endTime_ == nullptr && this->mainEventCodes_ == nullptr && this->regId_ == nullptr
        && this->shuntEventCodes_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeScoreSectionRatioLineChartRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline DescribeScoreSectionRatioLineChartRequest& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // byPassEventCodes Field Functions 
    bool hasByPassEventCodes() const { return this->byPassEventCodes_ != nullptr;};
    void deleteByPassEventCodes() { this->byPassEventCodes_ = nullptr;};
    inline string getByPassEventCodes() const { DARABONBA_PTR_GET_DEFAULT(byPassEventCodes_, "") };
    inline DescribeScoreSectionRatioLineChartRequest& setByPassEventCodes(string byPassEventCodes) { DARABONBA_PTR_SET_VALUE(byPassEventCodes_, byPassEventCodes) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeScoreSectionRatioLineChartRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // mainEventCodes Field Functions 
    bool hasMainEventCodes() const { return this->mainEventCodes_ != nullptr;};
    void deleteMainEventCodes() { this->mainEventCodes_ = nullptr;};
    inline string getMainEventCodes() const { DARABONBA_PTR_GET_DEFAULT(mainEventCodes_, "") };
    inline DescribeScoreSectionRatioLineChartRequest& setMainEventCodes(string mainEventCodes) { DARABONBA_PTR_SET_VALUE(mainEventCodes_, mainEventCodes) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeScoreSectionRatioLineChartRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // shuntEventCodes Field Functions 
    bool hasShuntEventCodes() const { return this->shuntEventCodes_ != nullptr;};
    void deleteShuntEventCodes() { this->shuntEventCodes_ = nullptr;};
    inline string getShuntEventCodes() const { DARABONBA_PTR_GET_DEFAULT(shuntEventCodes_, "") };
    inline DescribeScoreSectionRatioLineChartRequest& setShuntEventCodes(string shuntEventCodes) { DARABONBA_PTR_SET_VALUE(shuntEventCodes_, shuntEventCodes) };


  protected:
    // Sets the language type for request and response messages, with a default value of **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Start time, accurate to milliseconds (ms).
    // 
    // This parameter is required.
    shared_ptr<string> beginTime_ {};
    // Bypass event code
    shared_ptr<string> byPassEventCodes_ {};
    // End time, accurate to milliseconds (ms).
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // Main event code
    shared_ptr<string> mainEventCodes_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Shunt event code
    shared_ptr<string> shuntEventCodes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
