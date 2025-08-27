// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAVELSTANDARDLISTQUERYRESPONSEBODYMODULEITEMSRESERVERULEDESC_HPP_
#define ALIBABACLOUD_MODELS_TRAVELSTANDARDLISTQUERYRESPONSEBODYMODULEITEMSRESERVERULEDESC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc& obj) { 
      DARABONBA_PTR_TO_JSON(data_list, dataList_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc& obj) { 
      DARABONBA_PTR_FROM_JSON(data_list, dataList_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc() = default ;
    TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc(const TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc &) = default ;
    TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc(TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc &&) = default ;
    TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc() = default ;
    TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc& operator=(const TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc &) = default ;
    TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc& operator=(TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataList_ != nullptr
        && this->title_ != nullptr && this->type_ != nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<Models::TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<Models::TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList>) };
    inline vector<Models::TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<Models::TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList>) };
    inline TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc& setDataList(const vector<Models::TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc& setDataList(vector<Models::TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline TravelStandardListQueryResponseBodyModuleItemsReserveRuleDesc& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Models::TravelStandardListQueryResponseBodyModuleItemsReserveRuleDescDataList>> dataList_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
