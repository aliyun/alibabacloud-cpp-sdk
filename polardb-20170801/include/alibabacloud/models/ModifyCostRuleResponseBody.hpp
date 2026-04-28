// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOSTRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOSTRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyCostRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCostRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CostRuleId, costRuleId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCostRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CostRuleId, costRuleId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyCostRuleResponseBody() = default ;
    ModifyCostRuleResponseBody(const ModifyCostRuleResponseBody &) = default ;
    ModifyCostRuleResponseBody(ModifyCostRuleResponseBody &&) = default ;
    ModifyCostRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCostRuleResponseBody() = default ;
    ModifyCostRuleResponseBody& operator=(const ModifyCostRuleResponseBody &) = default ;
    ModifyCostRuleResponseBody& operator=(ModifyCostRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->costRuleId_ == nullptr
        && this->requestId_ == nullptr; };
    // costRuleId Field Functions 
    bool hasCostRuleId() const { return this->costRuleId_ != nullptr;};
    void deleteCostRuleId() { this->costRuleId_ = nullptr;};
    inline string getCostRuleId() const { DARABONBA_PTR_GET_DEFAULT(costRuleId_, "") };
    inline ModifyCostRuleResponseBody& setCostRuleId(string costRuleId) { DARABONBA_PTR_SET_VALUE(costRuleId_, costRuleId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyCostRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> costRuleId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
