// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTRATEGYTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTRATEGYTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeStrategyTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStrategyTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStrategyTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeStrategyTargetRequest() = default ;
    DescribeStrategyTargetRequest(const DescribeStrategyTargetRequest &) = default ;
    DescribeStrategyTargetRequest(DescribeStrategyTargetRequest &&) = default ;
    DescribeStrategyTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStrategyTargetRequest() = default ;
    DescribeStrategyTargetRequest& operator=(const DescribeStrategyTargetRequest &) = default ;
    DescribeStrategyTargetRequest& operator=(DescribeStrategyTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->sourceIp_ == nullptr && this->type_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeStrategyTargetRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeStrategyTargetRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeStrategyTargetRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the baseline check policy.
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The type of the policy. Set the value to hc_strategy, which indicates baseline check policies.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
