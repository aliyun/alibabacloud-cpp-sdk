// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCESSGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCESSGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ModifyAccessGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccessGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupId, accessGroupId_);
      DARABONBA_PTR_TO_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccessGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupId, accessGroupId_);
      DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
    };
    ModifyAccessGroupRequest() = default ;
    ModifyAccessGroupRequest(const ModifyAccessGroupRequest &) = default ;
    ModifyAccessGroupRequest(ModifyAccessGroupRequest &&) = default ;
    ModifyAccessGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccessGroupRequest() = default ;
    ModifyAccessGroupRequest& operator=(const ModifyAccessGroupRequest &) = default ;
    ModifyAccessGroupRequest& operator=(ModifyAccessGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroupId_ == nullptr
        && return this->accessGroupName_ == nullptr && return this->description_ == nullptr && return this->inputRegionId_ == nullptr; };
    // accessGroupId Field Functions 
    bool hasAccessGroupId() const { return this->accessGroupId_ != nullptr;};
    void deleteAccessGroupId() { this->accessGroupId_ = nullptr;};
    inline string accessGroupId() const { DARABONBA_PTR_GET_DEFAULT(accessGroupId_, "") };
    inline ModifyAccessGroupRequest& setAccessGroupId(string accessGroupId) { DARABONBA_PTR_SET_VALUE(accessGroupId_, accessGroupId) };


    // accessGroupName Field Functions 
    bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
    void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
    inline string accessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
    inline ModifyAccessGroupRequest& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyAccessGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline ModifyAccessGroupRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> accessGroupId_ = nullptr;
    std::shared_ptr<string> accessGroupName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
