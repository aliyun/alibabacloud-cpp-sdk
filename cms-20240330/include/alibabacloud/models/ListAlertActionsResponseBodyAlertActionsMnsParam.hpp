// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODYALERTACTIONSMNSPARAM_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODYALERTACTIONSMNSPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertActionsResponseBodyAlertActionsMnsParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertActionsResponseBodyAlertActionsMnsParam& obj) { 
      DARABONBA_PTR_TO_JSON(mnsType, mnsType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertActionsResponseBodyAlertActionsMnsParam& obj) { 
      DARABONBA_PTR_FROM_JSON(mnsType, mnsType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    ListAlertActionsResponseBodyAlertActionsMnsParam() = default ;
    ListAlertActionsResponseBodyAlertActionsMnsParam(const ListAlertActionsResponseBodyAlertActionsMnsParam &) = default ;
    ListAlertActionsResponseBodyAlertActionsMnsParam(ListAlertActionsResponseBodyAlertActionsMnsParam &&) = default ;
    ListAlertActionsResponseBodyAlertActionsMnsParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertActionsResponseBodyAlertActionsMnsParam() = default ;
    ListAlertActionsResponseBodyAlertActionsMnsParam& operator=(const ListAlertActionsResponseBodyAlertActionsMnsParam &) = default ;
    ListAlertActionsResponseBodyAlertActionsMnsParam& operator=(ListAlertActionsResponseBodyAlertActionsMnsParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mnsType_ == nullptr
        && return this->name_ == nullptr && return this->regionId_ == nullptr; };
    // mnsType Field Functions 
    bool hasMnsType() const { return this->mnsType_ != nullptr;};
    void deleteMnsType() { this->mnsType_ = nullptr;};
    inline string mnsType() const { DARABONBA_PTR_GET_DEFAULT(mnsType_, "") };
    inline ListAlertActionsResponseBodyAlertActionsMnsParam& setMnsType(string mnsType) { DARABONBA_PTR_SET_VALUE(mnsType_, mnsType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAlertActionsResponseBodyAlertActionsMnsParam& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAlertActionsResponseBodyAlertActionsMnsParam& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Resource type of the Lightweight Message Queue (formerly MNS).
    std::shared_ptr<string> mnsType_ = nullptr;
    // Resource name.
    // 
    // - If the resource type is queue, the resource name is the queue name.
    // - If the resource type is topic, the resource name is the topic name.
    std::shared_ptr<string> name_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
