// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYATTACHMENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYATTACHMENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreatePolicyAttachmentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyAttachmentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(policyAttachmentId, policyAttachmentId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyAttachmentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(policyAttachmentId, policyAttachmentId_);
    };
    CreatePolicyAttachmentResponseBodyData() = default ;
    CreatePolicyAttachmentResponseBodyData(const CreatePolicyAttachmentResponseBodyData &) = default ;
    CreatePolicyAttachmentResponseBodyData(CreatePolicyAttachmentResponseBodyData &&) = default ;
    CreatePolicyAttachmentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyAttachmentResponseBodyData() = default ;
    CreatePolicyAttachmentResponseBodyData& operator=(const CreatePolicyAttachmentResponseBodyData &) = default ;
    CreatePolicyAttachmentResponseBodyData& operator=(CreatePolicyAttachmentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyAttachmentId_ == nullptr; };
    // policyAttachmentId Field Functions 
    bool hasPolicyAttachmentId() const { return this->policyAttachmentId_ != nullptr;};
    void deletePolicyAttachmentId() { this->policyAttachmentId_ = nullptr;};
    inline string policyAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(policyAttachmentId_, "") };
    inline CreatePolicyAttachmentResponseBodyData& setPolicyAttachmentId(string policyAttachmentId) { DARABONBA_PTR_SET_VALUE(policyAttachmentId_, policyAttachmentId) };


  protected:
    // Policy Mount ID
    std::shared_ptr<string> policyAttachmentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
