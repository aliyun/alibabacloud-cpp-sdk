// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPAMSCOPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPAMSCOPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class CreateIpamScopeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpamScopeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IpamScopeId, ipamScopeId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpamScopeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IpamScopeId, ipamScopeId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateIpamScopeResponseBody() = default ;
    CreateIpamScopeResponseBody(const CreateIpamScopeResponseBody &) = default ;
    CreateIpamScopeResponseBody(CreateIpamScopeResponseBody &&) = default ;
    CreateIpamScopeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpamScopeResponseBody() = default ;
    CreateIpamScopeResponseBody& operator=(const CreateIpamScopeResponseBody &) = default ;
    CreateIpamScopeResponseBody& operator=(CreateIpamScopeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipamScopeId_ == nullptr
        && return this->requestId_ == nullptr; };
    // ipamScopeId Field Functions 
    bool hasIpamScopeId() const { return this->ipamScopeId_ != nullptr;};
    void deleteIpamScopeId() { this->ipamScopeId_ = nullptr;};
    inline string ipamScopeId() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeId_, "") };
    inline CreateIpamScopeResponseBody& setIpamScopeId(string ipamScopeId) { DARABONBA_PTR_SET_VALUE(ipamScopeId_, ipamScopeId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIpamScopeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the IPAM scope.
    std::shared_ptr<string> ipamScopeId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
