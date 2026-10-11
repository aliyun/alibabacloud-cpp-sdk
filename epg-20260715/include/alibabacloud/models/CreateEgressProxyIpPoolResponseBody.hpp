// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEGRESSPROXYIPPOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEGRESSPROXYIPPOOLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class CreateEgressProxyIpPoolResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEgressProxyIpPoolResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEgressProxyIpPoolResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateEgressProxyIpPoolResponseBody() = default ;
    CreateEgressProxyIpPoolResponseBody(const CreateEgressProxyIpPoolResponseBody &) = default ;
    CreateEgressProxyIpPoolResponseBody(CreateEgressProxyIpPoolResponseBody &&) = default ;
    CreateEgressProxyIpPoolResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEgressProxyIpPoolResponseBody() = default ;
    CreateEgressProxyIpPoolResponseBody& operator=(const CreateEgressProxyIpPoolResponseBody &) = default ;
    CreateEgressProxyIpPoolResponseBody& operator=(CreateEgressProxyIpPoolResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->egressProxyIpPoolId_ == nullptr
        && this->requestId_ == nullptr; };
    // egressProxyIpPoolId Field Functions 
    bool hasEgressProxyIpPoolId() const { return this->egressProxyIpPoolId_ != nullptr;};
    void deleteEgressProxyIpPoolId() { this->egressProxyIpPoolId_ = nullptr;};
    inline string getEgressProxyIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyIpPoolId_, "") };
    inline CreateEgressProxyIpPoolResponseBody& setEgressProxyIpPoolId(string egressProxyIpPoolId) { DARABONBA_PTR_SET_VALUE(egressProxyIpPoolId_, egressProxyIpPoolId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateEgressProxyIpPoolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> egressProxyIpPoolId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
