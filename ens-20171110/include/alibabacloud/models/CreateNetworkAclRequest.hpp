// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKACLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKACLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateNetworkAclRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkAclRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NetworkAclName, networkAclName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkAclRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NetworkAclName, networkAclName_);
    };
    CreateNetworkAclRequest() = default ;
    CreateNetworkAclRequest(const CreateNetworkAclRequest &) = default ;
    CreateNetworkAclRequest(CreateNetworkAclRequest &&) = default ;
    CreateNetworkAclRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkAclRequest() = default ;
    CreateNetworkAclRequest& operator=(const CreateNetworkAclRequest &) = default ;
    CreateNetworkAclRequest& operator=(CreateNetworkAclRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->networkAclName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateNetworkAclRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // networkAclName Field Functions 
    bool hasNetworkAclName() const { return this->networkAclName_ != nullptr;};
    void deleteNetworkAclName() { this->networkAclName_ = nullptr;};
    inline string getNetworkAclName() const { DARABONBA_PTR_GET_DEFAULT(networkAclName_, "") };
    inline CreateNetworkAclRequest& setNetworkAclName(string networkAclName) { DARABONBA_PTR_SET_VALUE(networkAclName_, networkAclName) };


  protected:
    // The description of the network ACL.
    // 
    // The description must be 1 to 256 characters in length and cannot start with http:// or https://.
    shared_ptr<string> description_ {};
    // Enter a name for the network ACL.
    // 
    // The name must be 1 to 128 characters in length and cannot start with http:// or https://.
    shared_ptr<string> networkAclName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
