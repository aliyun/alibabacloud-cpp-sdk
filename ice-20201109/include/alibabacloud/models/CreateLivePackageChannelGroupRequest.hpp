// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVEPACKAGECHANNELGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVEPACKAGECHANNELGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateLivePackageChannelGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLivePackageChannelGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLivePackageChannelGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    CreateLivePackageChannelGroupRequest() = default ;
    CreateLivePackageChannelGroupRequest(const CreateLivePackageChannelGroupRequest &) = default ;
    CreateLivePackageChannelGroupRequest(CreateLivePackageChannelGroupRequest &&) = default ;
    CreateLivePackageChannelGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLivePackageChannelGroupRequest() = default ;
    CreateLivePackageChannelGroupRequest& operator=(const CreateLivePackageChannelGroupRequest &) = default ;
    CreateLivePackageChannelGroupRequest& operator=(CreateLivePackageChannelGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->description_ != nullptr && this->groupName_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateLivePackageChannelGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateLivePackageChannelGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateLivePackageChannelGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The channel group description. It can be up to 1,000 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The channel group name. It can contain letters, digits, hyphens (-), and underscores (_). The name must be 1 to 200 characters in length. Format: [A-Za-z0-9_-]+
    // 
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
