// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENAMESPACEVPCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENAMESPACEVPCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateNamespaceVpcRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNamespaceVpcRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NameSpaceShortId, nameSpaceShortId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNamespaceVpcRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NameSpaceShortId, nameSpaceShortId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    UpdateNamespaceVpcRequest() = default ;
    UpdateNamespaceVpcRequest(const UpdateNamespaceVpcRequest &) = default ;
    UpdateNamespaceVpcRequest(UpdateNamespaceVpcRequest &&) = default ;
    UpdateNamespaceVpcRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNamespaceVpcRequest() = default ;
    UpdateNamespaceVpcRequest& operator=(const UpdateNamespaceVpcRequest &) = default ;
    UpdateNamespaceVpcRequest& operator=(UpdateNamespaceVpcRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nameSpaceShortId_ == nullptr
        && return this->namespaceId_ == nullptr && return this->vpcId_ == nullptr; };
    // nameSpaceShortId Field Functions 
    bool hasNameSpaceShortId() const { return this->nameSpaceShortId_ != nullptr;};
    void deleteNameSpaceShortId() { this->nameSpaceShortId_ = nullptr;};
    inline string nameSpaceShortId() const { DARABONBA_PTR_GET_DEFAULT(nameSpaceShortId_, "") };
    inline UpdateNamespaceVpcRequest& setNameSpaceShortId(string nameSpaceShortId) { DARABONBA_PTR_SET_VALUE(nameSpaceShortId_, nameSpaceShortId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline UpdateNamespaceVpcRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline UpdateNamespaceVpcRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> nameSpaceShortId_ = nullptr;
    // vpc-2ze0i263cnn311nvj\\*\\*\\*\\*
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The ID of the request.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
