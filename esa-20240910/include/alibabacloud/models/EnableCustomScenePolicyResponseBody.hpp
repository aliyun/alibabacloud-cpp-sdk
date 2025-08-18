// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLECUSTOMSCENEPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENABLECUSTOMSCENEPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class EnableCustomScenePolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableCustomScenePolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableCustomScenePolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EnableCustomScenePolicyResponseBody() = default ;
    EnableCustomScenePolicyResponseBody(const EnableCustomScenePolicyResponseBody &) = default ;
    EnableCustomScenePolicyResponseBody(EnableCustomScenePolicyResponseBody &&) = default ;
    EnableCustomScenePolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableCustomScenePolicyResponseBody() = default ;
    EnableCustomScenePolicyResponseBody& operator=(const EnableCustomScenePolicyResponseBody &) = default ;
    EnableCustomScenePolicyResponseBody& operator=(EnableCustomScenePolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyId_ != nullptr
        && this->requestId_ != nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline EnableCustomScenePolicyResponseBody& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnableCustomScenePolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The policy ID.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
