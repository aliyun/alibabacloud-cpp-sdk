// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEAUTORESOURCEOPTIMIZERULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEAUTORESOURCEOPTIMIZERULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DisableAutoResourceOptimizeRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableAutoResourceOptimizeRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, DisableAutoResourceOptimizeRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
    };
    DisableAutoResourceOptimizeRulesRequest() = default ;
    DisableAutoResourceOptimizeRulesRequest(const DisableAutoResourceOptimizeRulesRequest &) = default ;
    DisableAutoResourceOptimizeRulesRequest(DisableAutoResourceOptimizeRulesRequest &&) = default ;
    DisableAutoResourceOptimizeRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableAutoResourceOptimizeRulesRequest() = default ;
    DisableAutoResourceOptimizeRulesRequest& operator=(const DisableAutoResourceOptimizeRulesRequest &) = default ;
    DisableAutoResourceOptimizeRulesRequest& operator=(DisableAutoResourceOptimizeRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleContext_ == nullptr
        && this->instanceIds_ == nullptr; };
    // consoleContext Field Functions 
    bool hasConsoleContext() const { return this->consoleContext_ != nullptr;};
    void deleteConsoleContext() { this->consoleContext_ = nullptr;};
    inline string getConsoleContext() const { DARABONBA_PTR_GET_DEFAULT(consoleContext_, "") };
    inline DisableAutoResourceOptimizeRulesRequest& setConsoleContext(string consoleContext) { DARABONBA_PTR_SET_VALUE(consoleContext_, consoleContext) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline DisableAutoResourceOptimizeRulesRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


  protected:
    // The reserved parameter.
    shared_ptr<string> consoleContext_ {};
    // The database instance ID.
    // 
    // >  Set this parameter to a JSON array that consists of multiple instance IDs. Separate instance IDs with commas (,). Example: `[\\"Instance ID1\\", \\"Instance ID2\\"]`.
    // 
    // This parameter is required.
    shared_ptr<string> instanceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
