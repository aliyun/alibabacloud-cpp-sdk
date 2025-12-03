// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORIESRESPONSEBODYAPIHISITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORIESRESPONSEBODYAPIHISITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiHistoriesResponseBodyApiHisItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiHistoriesResponseBodyApiHisItems& obj) { 
      DARABONBA_PTR_TO_JSON(ApiHisItem, apiHisItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiHistoriesResponseBodyApiHisItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiHisItem, apiHisItem_);
    };
    DescribeApiHistoriesResponseBodyApiHisItems() = default ;
    DescribeApiHistoriesResponseBodyApiHisItems(const DescribeApiHistoriesResponseBodyApiHisItems &) = default ;
    DescribeApiHistoriesResponseBodyApiHisItems(DescribeApiHistoriesResponseBodyApiHisItems &&) = default ;
    DescribeApiHistoriesResponseBodyApiHisItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiHistoriesResponseBodyApiHisItems() = default ;
    DescribeApiHistoriesResponseBodyApiHisItems& operator=(const DescribeApiHistoriesResponseBodyApiHisItems &) = default ;
    DescribeApiHistoriesResponseBodyApiHisItems& operator=(DescribeApiHistoriesResponseBodyApiHisItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiHisItem_ == nullptr; };
    // apiHisItem Field Functions 
    bool hasApiHisItem() const { return this->apiHisItem_ != nullptr;};
    void deleteApiHisItem() { this->apiHisItem_ = nullptr;};
    inline const vector<Models::DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem> & apiHisItem() const { DARABONBA_PTR_GET_CONST(apiHisItem_, vector<Models::DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem>) };
    inline vector<Models::DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem> apiHisItem() { DARABONBA_PTR_GET(apiHisItem_, vector<Models::DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem>) };
    inline DescribeApiHistoriesResponseBodyApiHisItems& setApiHisItem(const vector<Models::DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem> & apiHisItem) { DARABONBA_PTR_SET_VALUE(apiHisItem_, apiHisItem) };
    inline DescribeApiHistoriesResponseBodyApiHisItems& setApiHisItem(vector<Models::DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem> && apiHisItem) { DARABONBA_PTR_SET_RVALUE(apiHisItem_, apiHisItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem>> apiHisItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
