// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLIVESTREAMWATERMARKRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDLIVESTREAMWATERMARKRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddLiveStreamWatermarkRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLiveStreamWatermarkRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, AddLiveStreamWatermarkRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    AddLiveStreamWatermarkRuleResponseBody() = default ;
    AddLiveStreamWatermarkRuleResponseBody(const AddLiveStreamWatermarkRuleResponseBody &) = default ;
    AddLiveStreamWatermarkRuleResponseBody(AddLiveStreamWatermarkRuleResponseBody &&) = default ;
    AddLiveStreamWatermarkRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLiveStreamWatermarkRuleResponseBody() = default ;
    AddLiveStreamWatermarkRuleResponseBody& operator=(const AddLiveStreamWatermarkRuleResponseBody &) = default ;
    AddLiveStreamWatermarkRuleResponseBody& operator=(AddLiveStreamWatermarkRuleResponseBody &&) = default ;
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
    inline AddLiveStreamWatermarkRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline AddLiveStreamWatermarkRuleResponseBody& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the watermark rule.
    std::shared_ptr<string> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
