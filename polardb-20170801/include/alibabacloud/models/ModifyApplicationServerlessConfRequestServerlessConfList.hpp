// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPLICATIONSERVERLESSCONFREQUESTSERVERLESSCONFLIST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPLICATIONSERVERLESSCONFREQUESTSERVERLESSCONFLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyApplicationServerlessConfRequestServerlessConfList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApplicationServerlessConfRequestServerlessConfList& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
      DARABONBA_PTR_TO_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_TO_JSON(ScaleMin, scaleMin_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApplicationServerlessConfRequestServerlessConfList& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
      DARABONBA_PTR_FROM_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_FROM_JSON(ScaleMin, scaleMin_);
    };
    ModifyApplicationServerlessConfRequestServerlessConfList() = default ;
    ModifyApplicationServerlessConfRequestServerlessConfList(const ModifyApplicationServerlessConfRequestServerlessConfList &) = default ;
    ModifyApplicationServerlessConfRequestServerlessConfList(ModifyApplicationServerlessConfRequestServerlessConfList &&) = default ;
    ModifyApplicationServerlessConfRequestServerlessConfList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApplicationServerlessConfRequestServerlessConfList() = default ;
    ModifyApplicationServerlessConfRequestServerlessConfList& operator=(const ModifyApplicationServerlessConfRequestServerlessConfList &) = default ;
    ModifyApplicationServerlessConfRequestServerlessConfList& operator=(ModifyApplicationServerlessConfRequestServerlessConfList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentType_ == nullptr
        && return this->scaleMax_ == nullptr && return this->scaleMin_ == nullptr; };
    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline string componentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
    inline ModifyApplicationServerlessConfRequestServerlessConfList& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // scaleMax Field Functions 
    bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
    void deleteScaleMax() { this->scaleMax_ = nullptr;};
    inline string scaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, "") };
    inline ModifyApplicationServerlessConfRequestServerlessConfList& setScaleMax(string scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


    // scaleMin Field Functions 
    bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
    void deleteScaleMin() { this->scaleMin_ = nullptr;};
    inline string scaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, "") };
    inline ModifyApplicationServerlessConfRequestServerlessConfList& setScaleMin(string scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


  protected:
    std::shared_ptr<string> componentType_ = nullptr;
    std::shared_ptr<string> scaleMax_ = nullptr;
    std::shared_ptr<string> scaleMin_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
