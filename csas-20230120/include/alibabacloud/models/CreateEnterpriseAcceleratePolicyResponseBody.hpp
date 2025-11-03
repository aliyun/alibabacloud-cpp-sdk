// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENTERPRISEACCELERATEPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEENTERPRISEACCELERATEPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateEnterpriseAcceleratePolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnterpriseAcceleratePolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EapId, eapId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnterpriseAcceleratePolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EapId, eapId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateEnterpriseAcceleratePolicyResponseBody() = default ;
    CreateEnterpriseAcceleratePolicyResponseBody(const CreateEnterpriseAcceleratePolicyResponseBody &) = default ;
    CreateEnterpriseAcceleratePolicyResponseBody(CreateEnterpriseAcceleratePolicyResponseBody &&) = default ;
    CreateEnterpriseAcceleratePolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnterpriseAcceleratePolicyResponseBody() = default ;
    CreateEnterpriseAcceleratePolicyResponseBody& operator=(const CreateEnterpriseAcceleratePolicyResponseBody &) = default ;
    CreateEnterpriseAcceleratePolicyResponseBody& operator=(CreateEnterpriseAcceleratePolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eapId_ == nullptr
        && return this->requestId_ == nullptr; };
    // eapId Field Functions 
    bool hasEapId() const { return this->eapId_ != nullptr;};
    void deleteEapId() { this->eapId_ = nullptr;};
    inline string eapId() const { DARABONBA_PTR_GET_DEFAULT(eapId_, "") };
    inline CreateEnterpriseAcceleratePolicyResponseBody& setEapId(string eapId) { DARABONBA_PTR_SET_VALUE(eapId_, eapId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateEnterpriseAcceleratePolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> eapId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
