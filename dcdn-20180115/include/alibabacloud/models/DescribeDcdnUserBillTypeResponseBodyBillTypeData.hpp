// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERBILLTYPERESPONSEBODYBILLTYPEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERBILLTYPERESPONSEBODYBILLTYPEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserBillTypeResponseBodyBillTypeData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserBillTypeResponseBodyBillTypeData& obj) { 
      DARABONBA_PTR_TO_JSON(BillTypeDataItem, billTypeDataItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserBillTypeResponseBodyBillTypeData& obj) { 
      DARABONBA_PTR_FROM_JSON(BillTypeDataItem, billTypeDataItem_);
    };
    DescribeDcdnUserBillTypeResponseBodyBillTypeData() = default ;
    DescribeDcdnUserBillTypeResponseBodyBillTypeData(const DescribeDcdnUserBillTypeResponseBodyBillTypeData &) = default ;
    DescribeDcdnUserBillTypeResponseBodyBillTypeData(DescribeDcdnUserBillTypeResponseBodyBillTypeData &&) = default ;
    DescribeDcdnUserBillTypeResponseBodyBillTypeData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserBillTypeResponseBodyBillTypeData() = default ;
    DescribeDcdnUserBillTypeResponseBodyBillTypeData& operator=(const DescribeDcdnUserBillTypeResponseBodyBillTypeData &) = default ;
    DescribeDcdnUserBillTypeResponseBodyBillTypeData& operator=(DescribeDcdnUserBillTypeResponseBodyBillTypeData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billTypeDataItem_ != nullptr; };
    // billTypeDataItem Field Functions 
    bool hasBillTypeDataItem() const { return this->billTypeDataItem_ != nullptr;};
    void deleteBillTypeDataItem() { this->billTypeDataItem_ = nullptr;};
    inline const vector<Models::DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem> & billTypeDataItem() const { DARABONBA_PTR_GET_CONST(billTypeDataItem_, vector<Models::DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem>) };
    inline vector<Models::DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem> billTypeDataItem() { DARABONBA_PTR_GET(billTypeDataItem_, vector<Models::DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem>) };
    inline DescribeDcdnUserBillTypeResponseBodyBillTypeData& setBillTypeDataItem(const vector<Models::DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem> & billTypeDataItem) { DARABONBA_PTR_SET_VALUE(billTypeDataItem_, billTypeDataItem) };
    inline DescribeDcdnUserBillTypeResponseBodyBillTypeData& setBillTypeDataItem(vector<Models::DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem> && billTypeDataItem) { DARABONBA_PTR_SET_RVALUE(billTypeDataItem_, billTypeDataItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem>> billTypeDataItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
