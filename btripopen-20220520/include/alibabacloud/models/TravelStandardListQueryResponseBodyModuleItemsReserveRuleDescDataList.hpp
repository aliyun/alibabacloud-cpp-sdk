// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAVELSTANDARDLISTQUERYRESPONSEBODYMODULEITEMSRESERVERULEDESCDATALIST_HPP_
#define ALIBABACLOUD_MODELS_TRAVELSTANDARDLISTQUERYRESPONSEBODYMODULEITEMSRESERVERULEDESCDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList() = default ;
    TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList(const TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList &) = default ;
    TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList(TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList &&) = default ;
    TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList() = default ;
    TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList& operator=(const TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList &) = default ;
    TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList& operator=(TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
