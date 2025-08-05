// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreatePolicyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(policyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(policyId, policyId_);
    };
    CreatePolicyResponseBodyData() = default ;
    CreatePolicyResponseBodyData(const CreatePolicyResponseBodyData &) = default ;
    CreatePolicyResponseBodyData(CreatePolicyResponseBodyData &&) = default ;
    CreatePolicyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyResponseBodyData() = default ;
    CreatePolicyResponseBodyData& operator=(const CreatePolicyResponseBodyData &) = default ;
    CreatePolicyResponseBodyData& operator=(CreatePolicyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyId_ != nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline CreatePolicyResponseBodyData& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // Policy ID
    std::shared_ptr<string> policyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
