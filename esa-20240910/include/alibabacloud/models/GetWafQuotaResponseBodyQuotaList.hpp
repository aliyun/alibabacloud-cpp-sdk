// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAFQUOTARESPONSEBODYQUOTALIST_HPP_
#define ALIBABACLOUD_MODELS_GETWAFQUOTARESPONSEBODYQUOTALIST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/QuotaListItemsValue.hpp>
#include <alibabacloud/models/WafQuotaInteger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetWafQuotaResponseBodyQuotaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWafQuotaResponseBodyQuotaList& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(NumberItemsPerList, numberItemsPerList_);
      DARABONBA_PTR_TO_JSON(NumberItemsTotal, numberItemsTotal_);
      DARABONBA_PTR_TO_JSON(NumberTotal, numberTotal_);
    };
    friend void from_json(const Darabonba::Json& j, GetWafQuotaResponseBodyQuotaList& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(NumberItemsPerList, numberItemsPerList_);
      DARABONBA_PTR_FROM_JSON(NumberItemsTotal, numberItemsTotal_);
      DARABONBA_PTR_FROM_JSON(NumberTotal, numberTotal_);
    };
    GetWafQuotaResponseBodyQuotaList() = default ;
    GetWafQuotaResponseBodyQuotaList(const GetWafQuotaResponseBodyQuotaList &) = default ;
    GetWafQuotaResponseBodyQuotaList(GetWafQuotaResponseBodyQuotaList &&) = default ;
    GetWafQuotaResponseBodyQuotaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWafQuotaResponseBodyQuotaList() = default ;
    GetWafQuotaResponseBodyQuotaList& operator=(const GetWafQuotaResponseBodyQuotaList &) = default ;
    GetWafQuotaResponseBodyQuotaList& operator=(GetWafQuotaResponseBodyQuotaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr
        && this->items_ != nullptr && this->numberItemsPerList_ != nullptr && this->numberItemsTotal_ != nullptr && this->numberTotal_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetWafQuotaResponseBodyQuotaList& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const map<string, Models::QuotaListItemsValue> & items() const { DARABONBA_PTR_GET_CONST(items_, map<string, Models::QuotaListItemsValue>) };
    inline map<string, Models::QuotaListItemsValue> items() { DARABONBA_PTR_GET(items_, map<string, Models::QuotaListItemsValue>) };
    inline GetWafQuotaResponseBodyQuotaList& setItems(const map<string, Models::QuotaListItemsValue> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetWafQuotaResponseBodyQuotaList& setItems(map<string, Models::QuotaListItemsValue> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // numberItemsPerList Field Functions 
    bool hasNumberItemsPerList() const { return this->numberItemsPerList_ != nullptr;};
    void deleteNumberItemsPerList() { this->numberItemsPerList_ = nullptr;};
    inline const Models::WafQuotaInteger & numberItemsPerList() const { DARABONBA_PTR_GET_CONST(numberItemsPerList_, Models::WafQuotaInteger) };
    inline Models::WafQuotaInteger numberItemsPerList() { DARABONBA_PTR_GET(numberItemsPerList_, Models::WafQuotaInteger) };
    inline GetWafQuotaResponseBodyQuotaList& setNumberItemsPerList(const Models::WafQuotaInteger & numberItemsPerList) { DARABONBA_PTR_SET_VALUE(numberItemsPerList_, numberItemsPerList) };
    inline GetWafQuotaResponseBodyQuotaList& setNumberItemsPerList(Models::WafQuotaInteger && numberItemsPerList) { DARABONBA_PTR_SET_RVALUE(numberItemsPerList_, numberItemsPerList) };


    // numberItemsTotal Field Functions 
    bool hasNumberItemsTotal() const { return this->numberItemsTotal_ != nullptr;};
    void deleteNumberItemsTotal() { this->numberItemsTotal_ = nullptr;};
    inline const Models::WafQuotaInteger & numberItemsTotal() const { DARABONBA_PTR_GET_CONST(numberItemsTotal_, Models::WafQuotaInteger) };
    inline Models::WafQuotaInteger numberItemsTotal() { DARABONBA_PTR_GET(numberItemsTotal_, Models::WafQuotaInteger) };
    inline GetWafQuotaResponseBodyQuotaList& setNumberItemsTotal(const Models::WafQuotaInteger & numberItemsTotal) { DARABONBA_PTR_SET_VALUE(numberItemsTotal_, numberItemsTotal) };
    inline GetWafQuotaResponseBodyQuotaList& setNumberItemsTotal(Models::WafQuotaInteger && numberItemsTotal) { DARABONBA_PTR_SET_RVALUE(numberItemsTotal_, numberItemsTotal) };


    // numberTotal Field Functions 
    bool hasNumberTotal() const { return this->numberTotal_ != nullptr;};
    void deleteNumberTotal() { this->numberTotal_ = nullptr;};
    inline const Models::WafQuotaInteger & numberTotal() const { DARABONBA_PTR_GET_CONST(numberTotal_, Models::WafQuotaInteger) };
    inline Models::WafQuotaInteger numberTotal() { DARABONBA_PTR_GET(numberTotal_, Models::WafQuotaInteger) };
    inline GetWafQuotaResponseBodyQuotaList& setNumberTotal(const Models::WafQuotaInteger & numberTotal) { DARABONBA_PTR_SET_VALUE(numberTotal_, numberTotal) };
    inline GetWafQuotaResponseBodyQuotaList& setNumberTotal(Models::WafQuotaInteger && numberTotal) { DARABONBA_PTR_SET_RVALUE(numberTotal_, numberTotal) };


  protected:
    // Indicates whether the custom list is enabled.
    std::shared_ptr<bool> enable_ = nullptr;
    // An object containing quota information for each type of item in the custom list.
    std::shared_ptr<map<string, Models::QuotaListItemsValue>> items_ = nullptr;
    // The number quota allowed per custom list.
    std::shared_ptr<Models::WafQuotaInteger> numberItemsPerList_ = nullptr;
    // The total number quota allowed for items in all custom lists.
    std::shared_ptr<Models::WafQuotaInteger> numberItemsTotal_ = nullptr;
    // The total number quota allowed for custom lists.
    std::shared_ptr<Models::WafQuotaInteger> numberTotal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
