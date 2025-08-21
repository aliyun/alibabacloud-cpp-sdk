// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENETWORKACLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENETWORKACLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteNetworkAclRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNetworkAclRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkAclId, networkAclId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNetworkAclRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkAclId, networkAclId_);
    };
    DeleteNetworkAclRequest() = default ;
    DeleteNetworkAclRequest(const DeleteNetworkAclRequest &) = default ;
    DeleteNetworkAclRequest(DeleteNetworkAclRequest &&) = default ;
    DeleteNetworkAclRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNetworkAclRequest() = default ;
    DeleteNetworkAclRequest& operator=(const DeleteNetworkAclRequest &) = default ;
    DeleteNetworkAclRequest& operator=(DeleteNetworkAclRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkAclId_ != nullptr; };
    // networkAclId Field Functions 
    bool hasNetworkAclId() const { return this->networkAclId_ != nullptr;};
    void deleteNetworkAclId() { this->networkAclId_ = nullptr;};
    inline string networkAclId() const { DARABONBA_PTR_GET_DEFAULT(networkAclId_, "") };
    inline DeleteNetworkAclRequest& setNetworkAclId(string networkAclId) { DARABONBA_PTR_SET_VALUE(networkAclId_, networkAclId) };


  protected:
    // The ID of the network ACL.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkAclId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
