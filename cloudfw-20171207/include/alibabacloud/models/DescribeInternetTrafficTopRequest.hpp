// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETTRAFFICTOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETTRAFFICTOPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInternetTrafficTopRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetTrafficTopRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(RuleResult, ruleResult_);
      DARABONBA_PTR_TO_JSON(RuleSource, ruleSource_);
      DARABONBA_PTR_TO_JSON(ShowCountryName, showCountryName_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(SourceCode, sourceCode_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetTrafficTopRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(RuleResult, ruleResult_);
      DARABONBA_PTR_FROM_JSON(RuleSource, ruleSource_);
      DARABONBA_PTR_FROM_JSON(ShowCountryName, showCountryName_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(SourceCode, sourceCode_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeInternetTrafficTopRequest() = default ;
    DescribeInternetTrafficTopRequest(const DescribeInternetTrafficTopRequest &) = default ;
    DescribeInternetTrafficTopRequest(DescribeInternetTrafficTopRequest &&) = default ;
    DescribeInternetTrafficTopRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetTrafficTopRequest() = default ;
    DescribeInternetTrafficTopRequest& operator=(const DescribeInternetTrafficTopRequest &) = default ;
    DescribeInternetTrafficTopRequest& operator=(DescribeInternetTrafficTopRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataType_ == nullptr
        && this->direction_ == nullptr && this->endTime_ == nullptr && this->lang_ == nullptr && this->limit_ == nullptr && this->ruleResult_ == nullptr
        && this->ruleSource_ == nullptr && this->showCountryName_ == nullptr && this->sort_ == nullptr && this->sourceCode_ == nullptr && this->sourceIp_ == nullptr
        && this->startTime_ == nullptr; };
    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DescribeInternetTrafficTopRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeInternetTrafficTopRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeInternetTrafficTopRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeInternetTrafficTopRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline string getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, "") };
    inline DescribeInternetTrafficTopRequest& setLimit(string limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // ruleResult Field Functions 
    bool hasRuleResult() const { return this->ruleResult_ != nullptr;};
    void deleteRuleResult() { this->ruleResult_ = nullptr;};
    inline string getRuleResult() const { DARABONBA_PTR_GET_DEFAULT(ruleResult_, "") };
    inline DescribeInternetTrafficTopRequest& setRuleResult(string ruleResult) { DARABONBA_PTR_SET_VALUE(ruleResult_, ruleResult) };


    // ruleSource Field Functions 
    bool hasRuleSource() const { return this->ruleSource_ != nullptr;};
    void deleteRuleSource() { this->ruleSource_ = nullptr;};
    inline string getRuleSource() const { DARABONBA_PTR_GET_DEFAULT(ruleSource_, "") };
    inline DescribeInternetTrafficTopRequest& setRuleSource(string ruleSource) { DARABONBA_PTR_SET_VALUE(ruleSource_, ruleSource) };


    // showCountryName Field Functions 
    bool hasShowCountryName() const { return this->showCountryName_ != nullptr;};
    void deleteShowCountryName() { this->showCountryName_ = nullptr;};
    inline string getShowCountryName() const { DARABONBA_PTR_GET_DEFAULT(showCountryName_, "") };
    inline DescribeInternetTrafficTopRequest& setShowCountryName(string showCountryName) { DARABONBA_PTR_SET_VALUE(showCountryName_, showCountryName) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline DescribeInternetTrafficTopRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // sourceCode Field Functions 
    bool hasSourceCode() const { return this->sourceCode_ != nullptr;};
    void deleteSourceCode() { this->sourceCode_ = nullptr;};
    inline string getSourceCode() const { DARABONBA_PTR_GET_DEFAULT(sourceCode_, "") };
    inline DescribeInternetTrafficTopRequest& setSourceCode(string sourceCode) { DARABONBA_PTR_SET_VALUE(sourceCode_, sourceCode) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeInternetTrafficTopRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeInternetTrafficTopRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // This parameter is required.
    shared_ptr<string> dataType_ {};
    shared_ptr<string> direction_ {};
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> limit_ {};
    shared_ptr<string> ruleResult_ {};
    shared_ptr<string> ruleSource_ {};
    shared_ptr<string> showCountryName_ {};
    shared_ptr<string> sort_ {};
    // This parameter is required.
    shared_ptr<string> sourceCode_ {};
    shared_ptr<string> sourceIp_ {};
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
