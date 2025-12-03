// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCESSGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCESSGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class CreateAccessGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccessGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccessGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
    };
    CreateAccessGroupRequest() = default ;
    CreateAccessGroupRequest(const CreateAccessGroupRequest &) = default ;
    CreateAccessGroupRequest(CreateAccessGroupRequest &&) = default ;
    CreateAccessGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccessGroupRequest() = default ;
    CreateAccessGroupRequest& operator=(const CreateAccessGroupRequest &) = default ;
    CreateAccessGroupRequest& operator=(CreateAccessGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroupName_ == nullptr
        && return this->description_ == nullptr && return this->inputRegionId_ == nullptr && return this->networkType_ == nullptr; };
    // accessGroupName Field Functions 
    bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
    void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
    inline string accessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
    inline CreateAccessGroupRequest& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAccessGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline CreateAccessGroupRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateAccessGroupRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> accessGroupName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> networkType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
