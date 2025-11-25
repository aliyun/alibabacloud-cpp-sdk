// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKEVENTTOPATTACKTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKEVENTTOPATTACKTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRiskEventTopAttackTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskEventTopAttackTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BuyVersion, buyVersion_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskEventTopAttackTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BuyVersion, buyVersion_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeRiskEventTopAttackTypeRequest() = default ;
    DescribeRiskEventTopAttackTypeRequest(const DescribeRiskEventTopAttackTypeRequest &) = default ;
    DescribeRiskEventTopAttackTypeRequest(DescribeRiskEventTopAttackTypeRequest &&) = default ;
    DescribeRiskEventTopAttackTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskEventTopAttackTypeRequest() = default ;
    DescribeRiskEventTopAttackTypeRequest& operator=(const DescribeRiskEventTopAttackTypeRequest &) = default ;
    DescribeRiskEventTopAttackTypeRequest& operator=(DescribeRiskEventTopAttackTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buyVersion_ == nullptr
        && return this->direction_ == nullptr && return this->endTime_ == nullptr && return this->lang_ == nullptr && return this->sourceIp_ == nullptr && return this->startTime_ == nullptr; };
    // buyVersion Field Functions 
    bool hasBuyVersion() const { return this->buyVersion_ != nullptr;};
    void deleteBuyVersion() { this->buyVersion_ = nullptr;};
    inline string buyVersion() const { DARABONBA_PTR_GET_DEFAULT(buyVersion_, "") };
    inline DescribeRiskEventTopAttackTypeRequest& setBuyVersion(string buyVersion) { DARABONBA_PTR_SET_VALUE(buyVersion_, buyVersion) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeRiskEventTopAttackTypeRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRiskEventTopAttackTypeRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeRiskEventTopAttackTypeRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeRiskEventTopAttackTypeRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRiskEventTopAttackTypeRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> buyVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> direction_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> sourceIp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
