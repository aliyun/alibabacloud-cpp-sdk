// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTRATIOSTATISTICRESPONSEBODYCLIENTONLINERATIOCURRENTITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTRATIOSTATISTICRESPONSEBODYCLIENTONLINERATIOCURRENTITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItemsItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems() = default ;
    GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems(const GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems &) = default ;
    GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems(GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems &&) = default ;
    GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems() = default ;
    GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems& operator=(const GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems &) = default ;
    GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems& operator=(GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->vendor_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItemsItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItemsItems>) };
    inline vector<Models::GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItemsItems> items() { DARABONBA_PTR_GET(items_, vector<Models::GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItemsItems>) };
    inline GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems& setItems(const vector<Models::GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItemsItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems& setItems(vector<Models::GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItemsItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int64_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0L) };
    inline GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems& setVendor(int64_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The list of current statistics on the online rate of the client by vendor.
    std::shared_ptr<vector<Models::GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItemsItems>> items_ = nullptr;
    // The type of the cloud asset. Valid values:
    // 
    // *   **0**: an asset provided by Alibaba Cloud
    // *   **1**: a third-party cloud asset
    // *   **2**: an asset in a data center
    // *   **3**, **4**, **5**, and **7**: other cloud asset
    // *   **8**: a simple application server
    std::shared_ptr<int64_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
