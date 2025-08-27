// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REIMAGENODESREQUESTNODES_HPP_
#define ALIBABACLOUD_MODELS_REIMAGENODESREQUESTNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ReimageNodesRequestNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReimageNodesRequestNodes& obj) { 
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(LoginPassword, loginPassword_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, ReimageNodesRequestNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(LoginPassword, loginPassword_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    ReimageNodesRequestNodes() = default ;
    ReimageNodesRequestNodes(const ReimageNodesRequestNodes &) = default ;
    ReimageNodesRequestNodes(ReimageNodesRequestNodes &&) = default ;
    ReimageNodesRequestNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReimageNodesRequestNodes() = default ;
    ReimageNodesRequestNodes& operator=(const ReimageNodesRequestNodes &) = default ;
    ReimageNodesRequestNodes& operator=(ReimageNodesRequestNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostname_ != nullptr
        && this->imageId_ != nullptr && this->loginPassword_ != nullptr && this->nodeId_ != nullptr; };
    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline ReimageNodesRequestNodes& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ReimageNodesRequestNodes& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // loginPassword Field Functions 
    bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
    void deleteLoginPassword() { this->loginPassword_ = nullptr;};
    inline string loginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
    inline ReimageNodesRequestNodes& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ReimageNodesRequestNodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // The hostname.
    std::shared_ptr<string> hostname_ = nullptr;
    // The system image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    // The logon password.
    std::shared_ptr<string> loginPassword_ = nullptr;
    // The node ID.
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
