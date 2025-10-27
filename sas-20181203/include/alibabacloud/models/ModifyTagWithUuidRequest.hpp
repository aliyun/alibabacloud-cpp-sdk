// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTAGWITHUUIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTAGWITHUUIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyTagWithUuidRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTagWithUuidRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MachineTypes, machineTypes_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTagWithUuidRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MachineTypes, machineTypes_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    ModifyTagWithUuidRequest() = default ;
    ModifyTagWithUuidRequest(const ModifyTagWithUuidRequest &) = default ;
    ModifyTagWithUuidRequest(ModifyTagWithUuidRequest &&) = default ;
    ModifyTagWithUuidRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTagWithUuidRequest() = default ;
    ModifyTagWithUuidRequest& operator=(const ModifyTagWithUuidRequest &) = default ;
    ModifyTagWithUuidRequest& operator=(ModifyTagWithUuidRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->machineTypes_ == nullptr
        && return this->tagId_ == nullptr && return this->tagList_ == nullptr && return this->target_ == nullptr && return this->uuidList_ == nullptr; };
    // machineTypes Field Functions 
    bool hasMachineTypes() const { return this->machineTypes_ != nullptr;};
    void deleteMachineTypes() { this->machineTypes_ = nullptr;};
    inline string machineTypes() const { DARABONBA_PTR_GET_DEFAULT(machineTypes_, "") };
    inline ModifyTagWithUuidRequest& setMachineTypes(string machineTypes) { DARABONBA_PTR_SET_VALUE(machineTypes_, machineTypes) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline string tagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
    inline ModifyTagWithUuidRequest& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline string tagList() const { DARABONBA_PTR_GET_DEFAULT(tagList_, "") };
    inline ModifyTagWithUuidRequest& setTagList(string tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline ModifyTagWithUuidRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline string uuidList() const { DARABONBA_PTR_GET_DEFAULT(uuidList_, "") };
    inline ModifyTagWithUuidRequest& setUuidList(string uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };


  protected:
    // The type of the asset to query. If you do not specify this parameter, the tags of all asset types are queried. Valid values:
    // 
    // *   **ecs**: server
    // *   **cloud_product**: Alibaba Cloud service
    std::shared_ptr<string> machineTypes_ = nullptr;
    // The ID of the tag that you want to manage.
    // 
    // >  You can call the [DescribeGroupedTags](~~DescribeGroupedTags~~) operation to query the IDs of tags.
    std::shared_ptr<string> tagId_ = nullptr;
    // The names of the tags that you want to manage. Separate multiple tag names with commas (,).
    // 
    // >  You can call the [DescribeGroupedTags](~~DescribeGroupedTags~~) operation to query the names of tags.
    // 
    // This parameter is required.
    std::shared_ptr<string> tagList_ = nullptr;
    // The details of the server for which you want to manage the tag. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **Target**: the UUID of the server that you want to add or remove.
    // 
    // *   **targetType**: the method by which the server is added. Valid values:
    // 
    //     *   **uuid**: by server
    //     *   **groupId**: by server group
    // 
    // *   **flag**: the operation that you want to perform on the server. Valid values:
    // 
    //     *   **del**: removes the tag from the server.
    //     *   **add**: adds the tag to the server.
    std::shared_ptr<string> target_ = nullptr;
    // The UUIDs of the servers.
    // 
    // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    std::shared_ptr<string> uuidList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
