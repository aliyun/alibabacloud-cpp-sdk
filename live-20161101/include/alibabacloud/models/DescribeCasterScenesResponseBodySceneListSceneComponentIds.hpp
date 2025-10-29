// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSCENESRESPONSEBODYSCENELISTSCENECOMPONENTIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSCENESRESPONSEBODYSCENELISTSCENECOMPONENTIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterScenesResponseBodySceneListSceneComponentIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterScenesResponseBodySceneListSceneComponentIds& obj) { 
      DARABONBA_PTR_TO_JSON(componentId, componentId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterScenesResponseBodySceneListSceneComponentIds& obj) { 
      DARABONBA_PTR_FROM_JSON(componentId, componentId_);
    };
    DescribeCasterScenesResponseBodySceneListSceneComponentIds() = default ;
    DescribeCasterScenesResponseBodySceneListSceneComponentIds(const DescribeCasterScenesResponseBodySceneListSceneComponentIds &) = default ;
    DescribeCasterScenesResponseBodySceneListSceneComponentIds(DescribeCasterScenesResponseBodySceneListSceneComponentIds &&) = default ;
    DescribeCasterScenesResponseBodySceneListSceneComponentIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterScenesResponseBodySceneListSceneComponentIds() = default ;
    DescribeCasterScenesResponseBodySceneListSceneComponentIds& operator=(const DescribeCasterScenesResponseBodySceneListSceneComponentIds &) = default ;
    DescribeCasterScenesResponseBodySceneListSceneComponentIds& operator=(DescribeCasterScenesResponseBodySceneListSceneComponentIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentId_ == nullptr; };
    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline const vector<string> & componentId() const { DARABONBA_PTR_GET_CONST(componentId_, vector<string>) };
    inline vector<string> componentId() { DARABONBA_PTR_GET(componentId_, vector<string>) };
    inline DescribeCasterScenesResponseBodySceneListSceneComponentIds& setComponentId(const vector<string> & componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };
    inline DescribeCasterScenesResponseBodySceneListSceneComponentIds& setComponentId(vector<string> && componentId) { DARABONBA_PTR_SET_RVALUE(componentId_, componentId) };


  protected:
    std::shared_ptr<vector<string>> componentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
