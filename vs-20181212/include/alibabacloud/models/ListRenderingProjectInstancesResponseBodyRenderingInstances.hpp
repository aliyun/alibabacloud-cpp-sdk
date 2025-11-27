// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRENDERINGPROJECTINSTANCESRESPONSEBODYRENDERINGINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTRENDERINGPROJECTINSTANCESRESPONSEBODYRENDERINGINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRenderingProjectInstancesResponseBodyRenderingInstancesStateInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListRenderingProjectInstancesResponseBodyRenderingInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRenderingProjectInstancesResponseBodyRenderingInstances& obj) { 
      DARABONBA_PTR_TO_JSON(AssociationTime, associationTime_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_TO_JSON(StateInfo, stateInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListRenderingProjectInstancesResponseBodyRenderingInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociationTime, associationTime_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_FROM_JSON(StateInfo, stateInfo_);
    };
    ListRenderingProjectInstancesResponseBodyRenderingInstances() = default ;
    ListRenderingProjectInstancesResponseBodyRenderingInstances(const ListRenderingProjectInstancesResponseBodyRenderingInstances &) = default ;
    ListRenderingProjectInstancesResponseBodyRenderingInstances(ListRenderingProjectInstancesResponseBodyRenderingInstances &&) = default ;
    ListRenderingProjectInstancesResponseBodyRenderingInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRenderingProjectInstancesResponseBodyRenderingInstances() = default ;
    ListRenderingProjectInstancesResponseBodyRenderingInstances& operator=(const ListRenderingProjectInstancesResponseBodyRenderingInstances &) = default ;
    ListRenderingProjectInstancesResponseBodyRenderingInstances& operator=(ListRenderingProjectInstancesResponseBodyRenderingInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associationTime_ == nullptr
        && return this->renderingInstanceId_ == nullptr && return this->stateInfo_ == nullptr; };
    // associationTime Field Functions 
    bool hasAssociationTime() const { return this->associationTime_ != nullptr;};
    void deleteAssociationTime() { this->associationTime_ = nullptr;};
    inline string associationTime() const { DARABONBA_PTR_GET_DEFAULT(associationTime_, "") };
    inline ListRenderingProjectInstancesResponseBodyRenderingInstances& setAssociationTime(string associationTime) { DARABONBA_PTR_SET_VALUE(associationTime_, associationTime) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline ListRenderingProjectInstancesResponseBodyRenderingInstances& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // stateInfo Field Functions 
    bool hasStateInfo() const { return this->stateInfo_ != nullptr;};
    void deleteStateInfo() { this->stateInfo_ = nullptr;};
    inline const Models::ListRenderingProjectInstancesResponseBodyRenderingInstancesStateInfo & stateInfo() const { DARABONBA_PTR_GET_CONST(stateInfo_, Models::ListRenderingProjectInstancesResponseBodyRenderingInstancesStateInfo) };
    inline Models::ListRenderingProjectInstancesResponseBodyRenderingInstancesStateInfo stateInfo() { DARABONBA_PTR_GET(stateInfo_, Models::ListRenderingProjectInstancesResponseBodyRenderingInstancesStateInfo) };
    inline ListRenderingProjectInstancesResponseBodyRenderingInstances& setStateInfo(const Models::ListRenderingProjectInstancesResponseBodyRenderingInstancesStateInfo & stateInfo) { DARABONBA_PTR_SET_VALUE(stateInfo_, stateInfo) };
    inline ListRenderingProjectInstancesResponseBodyRenderingInstances& setStateInfo(Models::ListRenderingProjectInstancesResponseBodyRenderingInstancesStateInfo && stateInfo) { DARABONBA_PTR_SET_RVALUE(stateInfo_, stateInfo) };


  protected:
    std::shared_ptr<string> associationTime_ = nullptr;
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
    std::shared_ptr<Models::ListRenderingProjectInstancesResponseBodyRenderingInstancesStateInfo> stateInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
