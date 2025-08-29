// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEABMETRICGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEABMETRICGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateABMetricGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateABMetricGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ABMetricIds, ABMetricIds_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Realtime, realtime_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateABMetricGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ABMetricIds, ABMetricIds_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Realtime, realtime_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    CreateABMetricGroupRequest() = default ;
    CreateABMetricGroupRequest(const CreateABMetricGroupRequest &) = default ;
    CreateABMetricGroupRequest(CreateABMetricGroupRequest &&) = default ;
    CreateABMetricGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateABMetricGroupRequest() = default ;
    CreateABMetricGroupRequest& operator=(const CreateABMetricGroupRequest &) = default ;
    CreateABMetricGroupRequest& operator=(CreateABMetricGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ABMetricIds_ != nullptr
        && this->description_ != nullptr && this->instanceId_ != nullptr && this->name_ != nullptr && this->realtime_ != nullptr && this->sceneId_ != nullptr; };
    // ABMetricIds Field Functions 
    bool hasABMetricIds() const { return this->ABMetricIds_ != nullptr;};
    void deleteABMetricIds() { this->ABMetricIds_ = nullptr;};
    inline string ABMetricIds() const { DARABONBA_PTR_GET_DEFAULT(ABMetricIds_, "") };
    inline CreateABMetricGroupRequest& setABMetricIds(string ABMetricIds) { DARABONBA_PTR_SET_VALUE(ABMetricIds_, ABMetricIds) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateABMetricGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateABMetricGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateABMetricGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // realtime Field Functions 
    bool hasRealtime() const { return this->realtime_ != nullptr;};
    void deleteRealtime() { this->realtime_ = nullptr;};
    inline bool realtime() const { DARABONBA_PTR_GET_DEFAULT(realtime_, false) };
    inline CreateABMetricGroupRequest& setRealtime(bool realtime) { DARABONBA_PTR_SET_VALUE(realtime_, realtime) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline CreateABMetricGroupRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> ABMetricIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> realtime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
