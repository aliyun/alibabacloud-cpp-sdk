// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDHCPOPTIONSSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDHCPOPTIONSSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateDhcpOptionsSetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDhcpOptionsSetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DhcpOptionsSetId, dhcpOptionsSetId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDhcpOptionsSetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSetId, dhcpOptionsSetId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    CreateDhcpOptionsSetResponseBody() = default ;
    CreateDhcpOptionsSetResponseBody(const CreateDhcpOptionsSetResponseBody &) = default ;
    CreateDhcpOptionsSetResponseBody(CreateDhcpOptionsSetResponseBody &&) = default ;
    CreateDhcpOptionsSetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDhcpOptionsSetResponseBody() = default ;
    CreateDhcpOptionsSetResponseBody& operator=(const CreateDhcpOptionsSetResponseBody &) = default ;
    CreateDhcpOptionsSetResponseBody& operator=(CreateDhcpOptionsSetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dhcpOptionsSetId_ != nullptr
        && this->requestId_ != nullptr && this->resourceGroupId_ != nullptr; };
    // dhcpOptionsSetId Field Functions 
    bool hasDhcpOptionsSetId() const { return this->dhcpOptionsSetId_ != nullptr;};
    void deleteDhcpOptionsSetId() { this->dhcpOptionsSetId_ = nullptr;};
    inline string dhcpOptionsSetId() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetId_, "") };
    inline CreateDhcpOptionsSetResponseBody& setDhcpOptionsSetId(string dhcpOptionsSetId) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetId_, dhcpOptionsSetId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDhcpOptionsSetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDhcpOptionsSetResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the DHCP options set that is created.
    std::shared_ptr<string> dhcpOptionsSetId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group to which the DHCP options set belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
