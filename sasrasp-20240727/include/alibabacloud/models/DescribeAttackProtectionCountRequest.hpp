// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATTACKPROTECTIONCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATTACKPROTECTIONCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SasRasp20240727
{
namespace Models
{
  class DescribeAttackProtectionCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAttackProtectionCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentType, agentType_);
      DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_TO_JSON(StartTimestamp, startTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAttackProtectionCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
      DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_FROM_JSON(StartTimestamp, startTimestamp_);
    };
    DescribeAttackProtectionCountRequest() = default ;
    DescribeAttackProtectionCountRequest(const DescribeAttackProtectionCountRequest &) = default ;
    DescribeAttackProtectionCountRequest(DescribeAttackProtectionCountRequest &&) = default ;
    DescribeAttackProtectionCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAttackProtectionCountRequest() = default ;
    DescribeAttackProtectionCountRequest& operator=(const DescribeAttackProtectionCountRequest &) = default ;
    DescribeAttackProtectionCountRequest& operator=(DescribeAttackProtectionCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentType_ == nullptr
        && return this->endTimestamp_ == nullptr && return this->startTimestamp_ == nullptr; };
    // agentType Field Functions 
    bool hasAgentType() const { return this->agentType_ != nullptr;};
    void deleteAgentType() { this->agentType_ = nullptr;};
    inline string agentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
    inline DescribeAttackProtectionCountRequest& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline int32_t endTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, 0) };
    inline DescribeAttackProtectionCountRequest& setEndTimestamp(int32_t endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // startTimestamp Field Functions 
    bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
    void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
    inline int32_t startTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, 0) };
    inline DescribeAttackProtectionCountRequest& setStartTimestamp(int32_t startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


  protected:
    std::shared_ptr<string> agentType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> endTimestamp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> startTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SasRasp20240727
#endif
