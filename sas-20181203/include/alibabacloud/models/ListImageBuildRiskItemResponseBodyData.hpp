// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGEBUILDRISKITEMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGEBUILDRISKITEMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListImageBuildRiskItemResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageBuildRiskItemResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ItemKey, itemKey_);
      DARABONBA_PTR_TO_JSON(ItemName, itemName_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageBuildRiskItemResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemKey, itemKey_);
      DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
    };
    ListImageBuildRiskItemResponseBodyData() = default ;
    ListImageBuildRiskItemResponseBodyData(const ListImageBuildRiskItemResponseBodyData &) = default ;
    ListImageBuildRiskItemResponseBodyData(ListImageBuildRiskItemResponseBodyData &&) = default ;
    ListImageBuildRiskItemResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageBuildRiskItemResponseBodyData() = default ;
    ListImageBuildRiskItemResponseBodyData& operator=(const ListImageBuildRiskItemResponseBodyData &) = default ;
    ListImageBuildRiskItemResponseBodyData& operator=(ListImageBuildRiskItemResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->itemKey_ == nullptr
        && return this->itemName_ == nullptr; };
    // itemKey Field Functions 
    bool hasItemKey() const { return this->itemKey_ != nullptr;};
    void deleteItemKey() { this->itemKey_ = nullptr;};
    inline string itemKey() const { DARABONBA_PTR_GET_DEFAULT(itemKey_, "") };
    inline ListImageBuildRiskItemResponseBodyData& setItemKey(string itemKey) { DARABONBA_PTR_SET_VALUE(itemKey_, itemKey) };


    // itemName Field Functions 
    bool hasItemName() const { return this->itemName_ != nullptr;};
    void deleteItemName() { this->itemName_ = nullptr;};
    inline string itemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
    inline ListImageBuildRiskItemResponseBodyData& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


  protected:
    // The type key of the risky build command.
    std::shared_ptr<string> itemKey_ = nullptr;
    // The type name of the risky build command.
    std::shared_ptr<string> itemName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
