// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKACLENTRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKACLENTRYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateNetworkAclEntryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkAclEntryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkAclEntryId, networkAclEntryId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkAclEntryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkAclEntryId, networkAclEntryId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateNetworkAclEntryResponseBody() = default ;
    CreateNetworkAclEntryResponseBody(const CreateNetworkAclEntryResponseBody &) = default ;
    CreateNetworkAclEntryResponseBody(CreateNetworkAclEntryResponseBody &&) = default ;
    CreateNetworkAclEntryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkAclEntryResponseBody() = default ;
    CreateNetworkAclEntryResponseBody& operator=(const CreateNetworkAclEntryResponseBody &) = default ;
    CreateNetworkAclEntryResponseBody& operator=(CreateNetworkAclEntryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkAclEntryId_ != nullptr
        && this->requestId_ != nullptr; };
    // networkAclEntryId Field Functions 
    bool hasNetworkAclEntryId() const { return this->networkAclEntryId_ != nullptr;};
    void deleteNetworkAclEntryId() { this->networkAclEntryId_ = nullptr;};
    inline string networkAclEntryId() const { DARABONBA_PTR_GET_DEFAULT(networkAclEntryId_, "") };
    inline CreateNetworkAclEntryResponseBody& setNetworkAclEntryId(string networkAclEntryId) { DARABONBA_PTR_SET_VALUE(networkAclEntryId_, networkAclEntryId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNetworkAclEntryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the network ACL.
    std::shared_ptr<string> networkAclEntryId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
