// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENETWORKACLENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENETWORKACLENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteNetworkAclEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNetworkAclEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkAclEntryId, networkAclEntryId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNetworkAclEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkAclEntryId, networkAclEntryId_);
    };
    DeleteNetworkAclEntryRequest() = default ;
    DeleteNetworkAclEntryRequest(const DeleteNetworkAclEntryRequest &) = default ;
    DeleteNetworkAclEntryRequest(DeleteNetworkAclEntryRequest &&) = default ;
    DeleteNetworkAclEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNetworkAclEntryRequest() = default ;
    DeleteNetworkAclEntryRequest& operator=(const DeleteNetworkAclEntryRequest &) = default ;
    DeleteNetworkAclEntryRequest& operator=(DeleteNetworkAclEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkAclEntryId_ == nullptr; };
    // networkAclEntryId Field Functions 
    bool hasNetworkAclEntryId() const { return this->networkAclEntryId_ != nullptr;};
    void deleteNetworkAclEntryId() { this->networkAclEntryId_ = nullptr;};
    inline string getNetworkAclEntryId() const { DARABONBA_PTR_GET_DEFAULT(networkAclEntryId_, "") };
    inline DeleteNetworkAclEntryRequest& setNetworkAclEntryId(string networkAclEntryId) { DARABONBA_PTR_SET_VALUE(networkAclEntryId_, networkAclEntryId) };


  protected:
    // The ID of the network ACL for which you want to delete a rule.
    shared_ptr<string> networkAclEntryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
