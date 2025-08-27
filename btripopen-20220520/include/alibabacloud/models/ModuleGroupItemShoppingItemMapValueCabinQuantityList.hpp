// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEGROUPITEMSHOPPINGITEMMAPVALUECABINQUANTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_MODULEGROUPITEMSHOPPINGITEMMAPVALUECABINQUANTITYLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModuleGroupItemShoppingItemMapValueCabinQuantityListSegmentPosition.hpp>
#include <alibabacloud/models/ModuleGroupItemShoppingItemMapValueCabinQuantityListCabin.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleGroupItemShoppingItemMapValueCabinQuantityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleGroupItemShoppingItemMapValueCabinQuantityList& obj) { 
      DARABONBA_PTR_TO_JSON(segment_position, segmentPosition_);
      DARABONBA_PTR_TO_JSON(cabin, cabin_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleGroupItemShoppingItemMapValueCabinQuantityList& obj) { 
      DARABONBA_PTR_FROM_JSON(segment_position, segmentPosition_);
      DARABONBA_PTR_FROM_JSON(cabin, cabin_);
    };
    ModuleGroupItemShoppingItemMapValueCabinQuantityList() = default ;
    ModuleGroupItemShoppingItemMapValueCabinQuantityList(const ModuleGroupItemShoppingItemMapValueCabinQuantityList &) = default ;
    ModuleGroupItemShoppingItemMapValueCabinQuantityList(ModuleGroupItemShoppingItemMapValueCabinQuantityList &&) = default ;
    ModuleGroupItemShoppingItemMapValueCabinQuantityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleGroupItemShoppingItemMapValueCabinQuantityList() = default ;
    ModuleGroupItemShoppingItemMapValueCabinQuantityList& operator=(const ModuleGroupItemShoppingItemMapValueCabinQuantityList &) = default ;
    ModuleGroupItemShoppingItemMapValueCabinQuantityList& operator=(ModuleGroupItemShoppingItemMapValueCabinQuantityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->segmentPosition_ != nullptr
        && this->cabin_ != nullptr; };
    // segmentPosition Field Functions 
    bool hasSegmentPosition() const { return this->segmentPosition_ != nullptr;};
    void deleteSegmentPosition() { this->segmentPosition_ = nullptr;};
    inline const Models::ModuleGroupItemShoppingItemMapValueCabinQuantityListSegmentPosition & segmentPosition() const { DARABONBA_PTR_GET_CONST(segmentPosition_, Models::ModuleGroupItemShoppingItemMapValueCabinQuantityListSegmentPosition) };
    inline Models::ModuleGroupItemShoppingItemMapValueCabinQuantityListSegmentPosition segmentPosition() { DARABONBA_PTR_GET(segmentPosition_, Models::ModuleGroupItemShoppingItemMapValueCabinQuantityListSegmentPosition) };
    inline ModuleGroupItemShoppingItemMapValueCabinQuantityList& setSegmentPosition(const Models::ModuleGroupItemShoppingItemMapValueCabinQuantityListSegmentPosition & segmentPosition) { DARABONBA_PTR_SET_VALUE(segmentPosition_, segmentPosition) };
    inline ModuleGroupItemShoppingItemMapValueCabinQuantityList& setSegmentPosition(Models::ModuleGroupItemShoppingItemMapValueCabinQuantityListSegmentPosition && segmentPosition) { DARABONBA_PTR_SET_RVALUE(segmentPosition_, segmentPosition) };


    // cabin Field Functions 
    bool hasCabin() const { return this->cabin_ != nullptr;};
    void deleteCabin() { this->cabin_ = nullptr;};
    inline const Models::ModuleGroupItemShoppingItemMapValueCabinQuantityListCabin & cabin() const { DARABONBA_PTR_GET_CONST(cabin_, Models::ModuleGroupItemShoppingItemMapValueCabinQuantityListCabin) };
    inline Models::ModuleGroupItemShoppingItemMapValueCabinQuantityListCabin cabin() { DARABONBA_PTR_GET(cabin_, Models::ModuleGroupItemShoppingItemMapValueCabinQuantityListCabin) };
    inline ModuleGroupItemShoppingItemMapValueCabinQuantityList& setCabin(const Models::ModuleGroupItemShoppingItemMapValueCabinQuantityListCabin & cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };
    inline ModuleGroupItemShoppingItemMapValueCabinQuantityList& setCabin(Models::ModuleGroupItemShoppingItemMapValueCabinQuantityListCabin && cabin) { DARABONBA_PTR_SET_RVALUE(cabin_, cabin) };


  protected:
    std::shared_ptr<Models::ModuleGroupItemShoppingItemMapValueCabinQuantityListSegmentPosition> segmentPosition_ = nullptr;
    std::shared_ptr<Models::ModuleGroupItemShoppingItemMapValueCabinQuantityListCabin> cabin_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
