// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLTYPERESPONSEBODYBILLTYPEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLTYPERESPONSEBODYBILLTYPEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserBillTypeResponseBodyBillTypeData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserBillTypeResponseBodyBillTypeData& obj) { 
      DARABONBA_PTR_TO_JSON(BillTypeDataItem, billTypeDataItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserBillTypeResponseBodyBillTypeData& obj) { 
      DARABONBA_PTR_FROM_JSON(BillTypeDataItem, billTypeDataItem_);
    };
    DescribeCdnUserBillTypeResponseBodyBillTypeData() = default ;
    DescribeCdnUserBillTypeResponseBodyBillTypeData(const DescribeCdnUserBillTypeResponseBodyBillTypeData &) = default ;
    DescribeCdnUserBillTypeResponseBodyBillTypeData(DescribeCdnUserBillTypeResponseBodyBillTypeData &&) = default ;
    DescribeCdnUserBillTypeResponseBodyBillTypeData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserBillTypeResponseBodyBillTypeData() = default ;
    DescribeCdnUserBillTypeResponseBodyBillTypeData& operator=(const DescribeCdnUserBillTypeResponseBodyBillTypeData &) = default ;
    DescribeCdnUserBillTypeResponseBodyBillTypeData& operator=(DescribeCdnUserBillTypeResponseBodyBillTypeData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billTypeDataItem_ == nullptr; };
    // billTypeDataItem Field Functions 
    bool hasBillTypeDataItem() const { return this->billTypeDataItem_ != nullptr;};
    void deleteBillTypeDataItem() { this->billTypeDataItem_ = nullptr;};
    inline const vector<Models::DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem> & billTypeDataItem() const { DARABONBA_PTR_GET_CONST(billTypeDataItem_, vector<Models::DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem>) };
    inline vector<Models::DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem> billTypeDataItem() { DARABONBA_PTR_GET(billTypeDataItem_, vector<Models::DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem>) };
    inline DescribeCdnUserBillTypeResponseBodyBillTypeData& setBillTypeDataItem(const vector<Models::DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem> & billTypeDataItem) { DARABONBA_PTR_SET_VALUE(billTypeDataItem_, billTypeDataItem) };
    inline DescribeCdnUserBillTypeResponseBodyBillTypeData& setBillTypeDataItem(vector<Models::DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem> && billTypeDataItem) { DARABONBA_PTR_SET_RVALUE(billTypeDataItem_, billTypeDataItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem>> billTypeDataItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
