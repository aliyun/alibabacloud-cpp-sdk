// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKACLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKACLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateNetworkAclResponseBodyNetworkAclAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateNetworkAclResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkAclResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkAclAttribute, networkAclAttribute_);
      DARABONBA_PTR_TO_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkAclResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkAclAttribute, networkAclAttribute_);
      DARABONBA_PTR_FROM_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateNetworkAclResponseBody() = default ;
    CreateNetworkAclResponseBody(const CreateNetworkAclResponseBody &) = default ;
    CreateNetworkAclResponseBody(CreateNetworkAclResponseBody &&) = default ;
    CreateNetworkAclResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkAclResponseBody() = default ;
    CreateNetworkAclResponseBody& operator=(const CreateNetworkAclResponseBody &) = default ;
    CreateNetworkAclResponseBody& operator=(CreateNetworkAclResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkAclAttribute_ != nullptr
        && this->networkAclId_ != nullptr && this->requestId_ != nullptr; };
    // networkAclAttribute Field Functions 
    bool hasNetworkAclAttribute() const { return this->networkAclAttribute_ != nullptr;};
    void deleteNetworkAclAttribute() { this->networkAclAttribute_ = nullptr;};
    inline const CreateNetworkAclResponseBodyNetworkAclAttribute & networkAclAttribute() const { DARABONBA_PTR_GET_CONST(networkAclAttribute_, CreateNetworkAclResponseBodyNetworkAclAttribute) };
    inline CreateNetworkAclResponseBodyNetworkAclAttribute networkAclAttribute() { DARABONBA_PTR_GET(networkAclAttribute_, CreateNetworkAclResponseBodyNetworkAclAttribute) };
    inline CreateNetworkAclResponseBody& setNetworkAclAttribute(const CreateNetworkAclResponseBodyNetworkAclAttribute & networkAclAttribute) { DARABONBA_PTR_SET_VALUE(networkAclAttribute_, networkAclAttribute) };
    inline CreateNetworkAclResponseBody& setNetworkAclAttribute(CreateNetworkAclResponseBodyNetworkAclAttribute && networkAclAttribute) { DARABONBA_PTR_SET_RVALUE(networkAclAttribute_, networkAclAttribute) };


    // networkAclId Field Functions 
    bool hasNetworkAclId() const { return this->networkAclId_ != nullptr;};
    void deleteNetworkAclId() { this->networkAclId_ = nullptr;};
    inline string networkAclId() const { DARABONBA_PTR_GET_DEFAULT(networkAclId_, "") };
    inline CreateNetworkAclResponseBody& setNetworkAclId(string networkAclId) { DARABONBA_PTR_SET_VALUE(networkAclId_, networkAclId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNetworkAclResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The attributes of the network ACL.
    std::shared_ptr<CreateNetworkAclResponseBodyNetworkAclAttribute> networkAclAttribute_ = nullptr;
    // The ID of the network ACL.
    std::shared_ptr<string> networkAclId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
