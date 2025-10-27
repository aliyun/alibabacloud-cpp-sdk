// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILEPROTECTRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILEPROTECTRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateFileProtectRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileProtectRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileProtectRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    CreateFileProtectRuleResponseBody() = default ;
    CreateFileProtectRuleResponseBody(const CreateFileProtectRuleResponseBody &) = default ;
    CreateFileProtectRuleResponseBody(CreateFileProtectRuleResponseBody &&) = default ;
    CreateFileProtectRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileProtectRuleResponseBody() = default ;
    CreateFileProtectRuleResponseBody& operator=(const CreateFileProtectRuleResponseBody &) = default ;
    CreateFileProtectRuleResponseBody& operator=(CreateFileProtectRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->ruleId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFileProtectRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline CreateFileProtectRuleResponseBody& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
