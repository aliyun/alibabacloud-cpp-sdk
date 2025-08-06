// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDROIDINSTANCEGROUPRESPONSEBODYINSTANCEGROUPINFOS_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDROIDINSTANCEGROUPRESPONSEBODYINSTANCEGROUPINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceGroupId, instanceGroupId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceGroupId, instanceGroupId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
    };
    CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos() = default ;
    CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos(const CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos &) = default ;
    CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos(CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos &&) = default ;
    CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos() = default ;
    CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos& operator=(const CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos &) = default ;
    CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos& operator=(CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceGroupId_ != nullptr
        && this->instanceIds_ != nullptr; };
    // instanceGroupId Field Functions 
    bool hasInstanceGroupId() const { return this->instanceGroupId_ != nullptr;};
    void deleteInstanceGroupId() { this->instanceGroupId_ = nullptr;};
    inline string instanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupId_, "") };
    inline CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos& setInstanceGroupId(string instanceGroupId) { DARABONBA_PTR_SET_VALUE(instanceGroupId_, instanceGroupId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


  protected:
    // The ID of the instance group.
    std::shared_ptr<string> instanceGroupId_ = nullptr;
    // The IDs of the instances.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
