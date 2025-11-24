// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESWIMLANEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESWIMLANEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class CreateSwimLaneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSwimLaneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(LabelSelectorKey, labelSelectorKey_);
      DARABONBA_PTR_TO_JSON(LabelSelectorValue, labelSelectorValue_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_TO_JSON(ServicesList, servicesList_);
      DARABONBA_PTR_TO_JSON(SwimLaneName, swimLaneName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSwimLaneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(LabelSelectorKey, labelSelectorKey_);
      DARABONBA_PTR_FROM_JSON(LabelSelectorValue, labelSelectorValue_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_FROM_JSON(ServicesList, servicesList_);
      DARABONBA_PTR_FROM_JSON(SwimLaneName, swimLaneName_);
    };
    CreateSwimLaneRequest() = default ;
    CreateSwimLaneRequest(const CreateSwimLaneRequest &) = default ;
    CreateSwimLaneRequest(CreateSwimLaneRequest &&) = default ;
    CreateSwimLaneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSwimLaneRequest() = default ;
    CreateSwimLaneRequest& operator=(const CreateSwimLaneRequest &) = default ;
    CreateSwimLaneRequest& operator=(CreateSwimLaneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && return this->labelSelectorKey_ == nullptr && return this->labelSelectorValue_ == nullptr && return this->serviceMeshId_ == nullptr && return this->servicesList_ == nullptr && return this->swimLaneName_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateSwimLaneRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // labelSelectorKey Field Functions 
    bool hasLabelSelectorKey() const { return this->labelSelectorKey_ != nullptr;};
    void deleteLabelSelectorKey() { this->labelSelectorKey_ = nullptr;};
    inline string labelSelectorKey() const { DARABONBA_PTR_GET_DEFAULT(labelSelectorKey_, "") };
    inline CreateSwimLaneRequest& setLabelSelectorKey(string labelSelectorKey) { DARABONBA_PTR_SET_VALUE(labelSelectorKey_, labelSelectorKey) };


    // labelSelectorValue Field Functions 
    bool hasLabelSelectorValue() const { return this->labelSelectorValue_ != nullptr;};
    void deleteLabelSelectorValue() { this->labelSelectorValue_ = nullptr;};
    inline string labelSelectorValue() const { DARABONBA_PTR_GET_DEFAULT(labelSelectorValue_, "") };
    inline CreateSwimLaneRequest& setLabelSelectorValue(string labelSelectorValue) { DARABONBA_PTR_SET_VALUE(labelSelectorValue_, labelSelectorValue) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline CreateSwimLaneRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


    // servicesList Field Functions 
    bool hasServicesList() const { return this->servicesList_ != nullptr;};
    void deleteServicesList() { this->servicesList_ = nullptr;};
    inline string servicesList() const { DARABONBA_PTR_GET_DEFAULT(servicesList_, "") };
    inline CreateSwimLaneRequest& setServicesList(string servicesList) { DARABONBA_PTR_SET_VALUE(servicesList_, servicesList) };


    // swimLaneName Field Functions 
    bool hasSwimLaneName() const { return this->swimLaneName_ != nullptr;};
    void deleteSwimLaneName() { this->swimLaneName_ = nullptr;};
    inline string swimLaneName() const { DARABONBA_PTR_GET_DEFAULT(swimLaneName_, "") };
    inline CreateSwimLaneRequest& setSwimLaneName(string swimLaneName) { DARABONBA_PTR_SET_VALUE(swimLaneName_, swimLaneName) };


  protected:
    // The name of the lane group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The label key of the associated service workload. Set the value to `ASM_TRAFFIC_TAG`.
    std::shared_ptr<string> labelSelectorKey_ = nullptr;
    // The label value of the associated service workload.``
    std::shared_ptr<string> labelSelectorValue_ = nullptr;
    // The ID of the Service Mesh (ASM) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
    // The list of services associated with the lane. The value is a JSON array. The format of a single service is `$Cluster name/$Cluster ID/$Namespace/$Service name`.
    std::shared_ptr<string> servicesList_ = nullptr;
    // The name of the lane.
    std::shared_ptr<string> swimLaneName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
