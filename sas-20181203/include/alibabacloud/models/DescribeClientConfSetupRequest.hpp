// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTCONFSETUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTCONFSETUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClientConfSetupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientConfSetupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(StrategyTag, strategyTag_);
      DARABONBA_PTR_TO_JSON(StrategyTagValue, strategyTagValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientConfSetupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(StrategyTag, strategyTag_);
      DARABONBA_PTR_FROM_JSON(StrategyTagValue, strategyTagValue_);
    };
    DescribeClientConfSetupRequest() = default ;
    DescribeClientConfSetupRequest(const DescribeClientConfSetupRequest &) = default ;
    DescribeClientConfSetupRequest(DescribeClientConfSetupRequest &&) = default ;
    DescribeClientConfSetupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientConfSetupRequest() = default ;
    DescribeClientConfSetupRequest& operator=(const DescribeClientConfSetupRequest &) = default ;
    DescribeClientConfSetupRequest& operator=(DescribeClientConfSetupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->strategyTag_ == nullptr
        && this->strategyTagValue_ == nullptr; };
    // strategyTag Field Functions 
    bool hasStrategyTag() const { return this->strategyTag_ != nullptr;};
    void deleteStrategyTag() { this->strategyTag_ = nullptr;};
    inline string getStrategyTag() const { DARABONBA_PTR_GET_DEFAULT(strategyTag_, "") };
    inline DescribeClientConfSetupRequest& setStrategyTag(string strategyTag) { DARABONBA_PTR_SET_VALUE(strategyTag_, strategyTag) };


    // strategyTagValue Field Functions 
    bool hasStrategyTagValue() const { return this->strategyTagValue_ != nullptr;};
    void deleteStrategyTagValue() { this->strategyTagValue_ = nullptr;};
    inline string getStrategyTagValue() const { DARABONBA_PTR_GET_DEFAULT(strategyTagValue_, "") };
    inline DescribeClientConfSetupRequest& setStrategyTagValue(string strategyTagValue) { DARABONBA_PTR_SET_VALUE(strategyTagValue_, strategyTagValue) };


  protected:
    // The tag that is added to the server.
    // 
    // This parameter is required.
    shared_ptr<string> strategyTag_ {};
    // The value of the tag. Valid values:
    // 
    // *   major
    // *   advanced
    // *   basic
    // 
    // This parameter is required.
    shared_ptr<string> strategyTagValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
