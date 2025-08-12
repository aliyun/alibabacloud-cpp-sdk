// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPRODUCERUSAGEDATARESPONSEBODYBILLPRODUCERDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPRODUCERUSAGEDATARESPONSEBODYBILLPRODUCERDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveProducerUsageDataResponseBodyBillProducerData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveProducerUsageDataResponseBodyBillProducerData& obj) { 
      DARABONBA_PTR_TO_JSON(BillProducerDataItem, billProducerDataItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveProducerUsageDataResponseBodyBillProducerData& obj) { 
      DARABONBA_PTR_FROM_JSON(BillProducerDataItem, billProducerDataItem_);
    };
    DescribeLiveProducerUsageDataResponseBodyBillProducerData() = default ;
    DescribeLiveProducerUsageDataResponseBodyBillProducerData(const DescribeLiveProducerUsageDataResponseBodyBillProducerData &) = default ;
    DescribeLiveProducerUsageDataResponseBodyBillProducerData(DescribeLiveProducerUsageDataResponseBodyBillProducerData &&) = default ;
    DescribeLiveProducerUsageDataResponseBodyBillProducerData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveProducerUsageDataResponseBodyBillProducerData() = default ;
    DescribeLiveProducerUsageDataResponseBodyBillProducerData& operator=(const DescribeLiveProducerUsageDataResponseBodyBillProducerData &) = default ;
    DescribeLiveProducerUsageDataResponseBodyBillProducerData& operator=(DescribeLiveProducerUsageDataResponseBodyBillProducerData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billProducerDataItem_ != nullptr; };
    // billProducerDataItem Field Functions 
    bool hasBillProducerDataItem() const { return this->billProducerDataItem_ != nullptr;};
    void deleteBillProducerDataItem() { this->billProducerDataItem_ = nullptr;};
    inline const vector<Models::DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem> & billProducerDataItem() const { DARABONBA_PTR_GET_CONST(billProducerDataItem_, vector<Models::DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem>) };
    inline vector<Models::DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem> billProducerDataItem() { DARABONBA_PTR_GET(billProducerDataItem_, vector<Models::DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem>) };
    inline DescribeLiveProducerUsageDataResponseBodyBillProducerData& setBillProducerDataItem(const vector<Models::DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem> & billProducerDataItem) { DARABONBA_PTR_SET_VALUE(billProducerDataItem_, billProducerDataItem) };
    inline DescribeLiveProducerUsageDataResponseBodyBillProducerData& setBillProducerDataItem(vector<Models::DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem> && billProducerDataItem) { DARABONBA_PTR_SET_RVALUE(billProducerDataItem_, billProducerDataItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem>> billProducerDataItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
