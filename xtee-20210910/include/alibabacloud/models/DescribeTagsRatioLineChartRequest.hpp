// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSRATIOLINECHARTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSRATIOLINECHARTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeTagsRatioLineChartRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsRatioLineChartRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(beginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(byPassEventCodes, byPassEventCodes_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(mainEventCodes, mainEventCodes_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(shuntEventCodes, shuntEventCodes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsRatioLineChartRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(beginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(byPassEventCodes, byPassEventCodes_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(mainEventCodes, mainEventCodes_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(shuntEventCodes, shuntEventCodes_);
    };
    DescribeTagsRatioLineChartRequest() = default ;
    DescribeTagsRatioLineChartRequest(const DescribeTagsRatioLineChartRequest &) = default ;
    DescribeTagsRatioLineChartRequest(DescribeTagsRatioLineChartRequest &&) = default ;
    DescribeTagsRatioLineChartRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsRatioLineChartRequest() = default ;
    DescribeTagsRatioLineChartRequest& operator=(const DescribeTagsRatioLineChartRequest &) = default ;
    DescribeTagsRatioLineChartRequest& operator=(DescribeTagsRatioLineChartRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->beginTime_ == nullptr && return this->byPassEventCodes_ == nullptr && return this->endTime_ == nullptr && return this->mainEventCodes_ == nullptr && return this->regId_ == nullptr
        && return this->shuntEventCodes_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeTagsRatioLineChartRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline DescribeTagsRatioLineChartRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // byPassEventCodes Field Functions 
    bool hasByPassEventCodes() const { return this->byPassEventCodes_ != nullptr;};
    void deleteByPassEventCodes() { this->byPassEventCodes_ = nullptr;};
    inline string byPassEventCodes() const { DARABONBA_PTR_GET_DEFAULT(byPassEventCodes_, "") };
    inline DescribeTagsRatioLineChartRequest& setByPassEventCodes(string byPassEventCodes) { DARABONBA_PTR_SET_VALUE(byPassEventCodes_, byPassEventCodes) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeTagsRatioLineChartRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // mainEventCodes Field Functions 
    bool hasMainEventCodes() const { return this->mainEventCodes_ != nullptr;};
    void deleteMainEventCodes() { this->mainEventCodes_ = nullptr;};
    inline string mainEventCodes() const { DARABONBA_PTR_GET_DEFAULT(mainEventCodes_, "") };
    inline DescribeTagsRatioLineChartRequest& setMainEventCodes(string mainEventCodes) { DARABONBA_PTR_SET_VALUE(mainEventCodes_, mainEventCodes) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeTagsRatioLineChartRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // shuntEventCodes Field Functions 
    bool hasShuntEventCodes() const { return this->shuntEventCodes_ != nullptr;};
    void deleteShuntEventCodes() { this->shuntEventCodes_ = nullptr;};
    inline string shuntEventCodes() const { DARABONBA_PTR_GET_DEFAULT(shuntEventCodes_, "") };
    inline DescribeTagsRatioLineChartRequest& setShuntEventCodes(string shuntEventCodes) { DARABONBA_PTR_SET_VALUE(shuntEventCodes_, shuntEventCodes) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Start time, accurate to milliseconds (ms).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    // Bypass event code
    std::shared_ptr<string> byPassEventCodes_ = nullptr;
    // End time, accurate to milliseconds (ms).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // Main event code
    std::shared_ptr<string> mainEventCodes_ = nullptr;
    // Region code
    // 
    // This parameter is required.
    std::shared_ptr<string> regId_ = nullptr;
    // Shunt event code
    std::shared_ptr<string> shuntEventCodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
