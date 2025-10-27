// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHYBRIDPROXYPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHYBRIDPROXYPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyHybridProxyPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHybridProxyPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Messgae, messgae_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHybridProxyPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Messgae, messgae_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyHybridProxyPolicyResponseBody() = default ;
    ModifyHybridProxyPolicyResponseBody(const ModifyHybridProxyPolicyResponseBody &) = default ;
    ModifyHybridProxyPolicyResponseBody(ModifyHybridProxyPolicyResponseBody &&) = default ;
    ModifyHybridProxyPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHybridProxyPolicyResponseBody() = default ;
    ModifyHybridProxyPolicyResponseBody& operator=(const ModifyHybridProxyPolicyResponseBody &) = default ;
    ModifyHybridProxyPolicyResponseBody& operator=(ModifyHybridProxyPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messgae_ == nullptr
        && return this->requestId_ == nullptr; };
    // messgae Field Functions 
    bool hasMessgae() const { return this->messgae_ != nullptr;};
    void deleteMessgae() { this->messgae_ = nullptr;};
    inline string messgae() const { DARABONBA_PTR_GET_DEFAULT(messgae_, "") };
    inline ModifyHybridProxyPolicyResponseBody& setMessgae(string messgae) { DARABONBA_PTR_SET_VALUE(messgae_, messgae) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyHybridProxyPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The message of the request.
    std::shared_ptr<string> messgae_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
