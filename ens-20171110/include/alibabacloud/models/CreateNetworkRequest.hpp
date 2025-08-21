// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateNetworkRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateNetworkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(NetworkName, networkName_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(NetworkName, networkName_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateNetworkRequest() = default ;
    CreateNetworkRequest(const CreateNetworkRequest &) = default ;
    CreateNetworkRequest(CreateNetworkRequest &&) = default ;
    CreateNetworkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkRequest() = default ;
    CreateNetworkRequest& operator=(const CreateNetworkRequest &) = default ;
    CreateNetworkRequest& operator=(CreateNetworkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidrBlock_ != nullptr
        && this->description_ != nullptr && this->ensRegionId_ != nullptr && this->networkName_ != nullptr && this->tag_ != nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline CreateNetworkRequest& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateNetworkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline CreateNetworkRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // networkName Field Functions 
    bool hasNetworkName() const { return this->networkName_ != nullptr;};
    void deleteNetworkName() { this->networkName_ = nullptr;};
    inline string networkName() const { DARABONBA_PTR_GET_DEFAULT(networkName_, "") };
    inline CreateNetworkRequest& setNetworkName(string networkName) { DARABONBA_PTR_SET_VALUE(networkName_, networkName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateNetworkRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateNetworkRequestTag>) };
    inline vector<CreateNetworkRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateNetworkRequestTag>) };
    inline CreateNetworkRequest& setTag(const vector<CreateNetworkRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateNetworkRequest& setTag(vector<CreateNetworkRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The CIDR block of the network. You can use one of the following CIDR blocks or their subnets as the CIDR block of the network:
    // 
    // *   10.0.0.0/8 (default)
    // *   172.16.0.0/12
    // *   192.168.0.0/16
    // 
    // This parameter is required.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // The description of the network.
    // 
    // The description must be 2 to 256 characters in length. It must start with a letter but cannot start with http:// or https://.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the edge node.
    // 
    // This parameter is required.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The name of the network. The name must meet the following requirements:
    // 
    // *   The name must be 2 to 128 characters in length.
    // *   The name must start with a letter but cannot start with http:// or https://.
    // *   The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> networkName_ = nullptr;
    // The resource tags.
    std::shared_ptr<vector<CreateNetworkRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
