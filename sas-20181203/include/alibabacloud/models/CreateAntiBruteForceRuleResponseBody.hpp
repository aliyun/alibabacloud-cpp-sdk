// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANTIBRUTEFORCERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEANTIBRUTEFORCERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAntiBruteForceRuleResponseBodyCreateAntiBruteForceRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateAntiBruteForceRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAntiBruteForceRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateAntiBruteForceRule, createAntiBruteForceRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAntiBruteForceRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateAntiBruteForceRule, createAntiBruteForceRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAntiBruteForceRuleResponseBody() = default ;
    CreateAntiBruteForceRuleResponseBody(const CreateAntiBruteForceRuleResponseBody &) = default ;
    CreateAntiBruteForceRuleResponseBody(CreateAntiBruteForceRuleResponseBody &&) = default ;
    CreateAntiBruteForceRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAntiBruteForceRuleResponseBody() = default ;
    CreateAntiBruteForceRuleResponseBody& operator=(const CreateAntiBruteForceRuleResponseBody &) = default ;
    CreateAntiBruteForceRuleResponseBody& operator=(CreateAntiBruteForceRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createAntiBruteForceRule_ == nullptr
        && return this->requestId_ == nullptr; };
    // createAntiBruteForceRule Field Functions 
    bool hasCreateAntiBruteForceRule() const { return this->createAntiBruteForceRule_ != nullptr;};
    void deleteCreateAntiBruteForceRule() { this->createAntiBruteForceRule_ = nullptr;};
    inline const CreateAntiBruteForceRuleResponseBodyCreateAntiBruteForceRule & createAntiBruteForceRule() const { DARABONBA_PTR_GET_CONST(createAntiBruteForceRule_, CreateAntiBruteForceRuleResponseBodyCreateAntiBruteForceRule) };
    inline CreateAntiBruteForceRuleResponseBodyCreateAntiBruteForceRule createAntiBruteForceRule() { DARABONBA_PTR_GET(createAntiBruteForceRule_, CreateAntiBruteForceRuleResponseBodyCreateAntiBruteForceRule) };
    inline CreateAntiBruteForceRuleResponseBody& setCreateAntiBruteForceRule(const CreateAntiBruteForceRuleResponseBodyCreateAntiBruteForceRule & createAntiBruteForceRule) { DARABONBA_PTR_SET_VALUE(createAntiBruteForceRule_, createAntiBruteForceRule) };
    inline CreateAntiBruteForceRuleResponseBody& setCreateAntiBruteForceRule(CreateAntiBruteForceRuleResponseBodyCreateAntiBruteForceRule && createAntiBruteForceRule) { DARABONBA_PTR_SET_RVALUE(createAntiBruteForceRule_, createAntiBruteForceRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAntiBruteForceRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the defense rule.
    std::shared_ptr<CreateAntiBruteForceRuleResponseBodyCreateAntiBruteForceRule> createAntiBruteForceRule_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
