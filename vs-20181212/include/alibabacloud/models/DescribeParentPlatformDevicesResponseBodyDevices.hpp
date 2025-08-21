// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARENTPLATFORMDEVICESRESPONSEBODYDEVICES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARENTPLATFORMDEVICESRESPONSEBODYDEVICES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeParentPlatformDevicesResponseBodyDevices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParentPlatformDevicesResponseBodyDevices& obj) { 
      DARABONBA_PTR_TO_JSON(GbId, gbId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParentPlatformDevicesResponseBodyDevices& obj) { 
      DARABONBA_PTR_FROM_JSON(GbId, gbId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
    };
    DescribeParentPlatformDevicesResponseBodyDevices() = default ;
    DescribeParentPlatformDevicesResponseBodyDevices(const DescribeParentPlatformDevicesResponseBodyDevices &) = default ;
    DescribeParentPlatformDevicesResponseBodyDevices(DescribeParentPlatformDevicesResponseBodyDevices &&) = default ;
    DescribeParentPlatformDevicesResponseBodyDevices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParentPlatformDevicesResponseBodyDevices() = default ;
    DescribeParentPlatformDevicesResponseBodyDevices& operator=(const DescribeParentPlatformDevicesResponseBodyDevices &) = default ;
    DescribeParentPlatformDevicesResponseBodyDevices& operator=(DescribeParentPlatformDevicesResponseBodyDevices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gbId_ != nullptr
        && this->groupId_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->parentId_ != nullptr; };
    // gbId Field Functions 
    bool hasGbId() const { return this->gbId_ != nullptr;};
    void deleteGbId() { this->gbId_ = nullptr;};
    inline string gbId() const { DARABONBA_PTR_GET_DEFAULT(gbId_, "") };
    inline DescribeParentPlatformDevicesResponseBodyDevices& setGbId(string gbId) { DARABONBA_PTR_SET_VALUE(gbId_, gbId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeParentPlatformDevicesResponseBodyDevices& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeParentPlatformDevicesResponseBodyDevices& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeParentPlatformDevicesResponseBodyDevices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline DescribeParentPlatformDevicesResponseBodyDevices& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


  protected:
    std::shared_ptr<string> gbId_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> parentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
