// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEAPPLICATIONREQUESTCONTAINERWEBDEFENSEAPPLICATIONDTOS_HPP_
#define ALIBABACLOUD_MODELS_OPERATEAPPLICATIONREQUESTCONTAINERWEBDEFENSEAPPLICATIONDTOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperateApplicationRequestContainerWebDefenseApplicationDTOS : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateApplicationRequestContainerWebDefenseApplicationDTOS& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Flag, flag_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, OperateApplicationRequestContainerWebDefenseApplicationDTOS& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Flag, flag_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    OperateApplicationRequestContainerWebDefenseApplicationDTOS() = default ;
    OperateApplicationRequestContainerWebDefenseApplicationDTOS(const OperateApplicationRequestContainerWebDefenseApplicationDTOS &) = default ;
    OperateApplicationRequestContainerWebDefenseApplicationDTOS(OperateApplicationRequestContainerWebDefenseApplicationDTOS &&) = default ;
    OperateApplicationRequestContainerWebDefenseApplicationDTOS(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateApplicationRequestContainerWebDefenseApplicationDTOS() = default ;
    OperateApplicationRequestContainerWebDefenseApplicationDTOS& operator=(const OperateApplicationRequestContainerWebDefenseApplicationDTOS &) = default ;
    OperateApplicationRequestContainerWebDefenseApplicationDTOS& operator=(OperateApplicationRequestContainerWebDefenseApplicationDTOS &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->flag_ != nullptr && this->id_ != nullptr && this->tag_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline OperateApplicationRequestContainerWebDefenseApplicationDTOS& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // flag Field Functions 
    bool hasFlag() const { return this->flag_ != nullptr;};
    void deleteFlag() { this->flag_ = nullptr;};
    inline string flag() const { DARABONBA_PTR_GET_DEFAULT(flag_, "") };
    inline OperateApplicationRequestContainerWebDefenseApplicationDTOS& setFlag(string flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline OperateApplicationRequestContainerWebDefenseApplicationDTOS& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline OperateApplicationRequestContainerWebDefenseApplicationDTOS& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The ID of the cluster to which the container belongs.
    // 
    // >  You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Specifies whether to apply the configuration to the asset. Valid values:
    // 
    // *   **add**: applied
    // *   **del**: not applied
    // 
    // This parameter is required.
    std::shared_ptr<string> flag_ = nullptr;
    // The application ID. If the application is newly added, you do not need to specify this parameter.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The value of the application tag.
    // 
    // This parameter is required.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
