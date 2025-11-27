// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPGHBACONFIGRESPONSEBODYRUNNINGHBAITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPGHBACONFIGRESPONSEBODYRUNNINGHBAITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribePGHbaConfigResponseBodyRunningHbaItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePGHbaConfigResponseBodyRunningHbaItems& obj) { 
      DARABONBA_PTR_TO_JSON(HbaItem, hbaItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePGHbaConfigResponseBodyRunningHbaItems& obj) { 
      DARABONBA_PTR_FROM_JSON(HbaItem, hbaItem_);
    };
    DescribePGHbaConfigResponseBodyRunningHbaItems() = default ;
    DescribePGHbaConfigResponseBodyRunningHbaItems(const DescribePGHbaConfigResponseBodyRunningHbaItems &) = default ;
    DescribePGHbaConfigResponseBodyRunningHbaItems(DescribePGHbaConfigResponseBodyRunningHbaItems &&) = default ;
    DescribePGHbaConfigResponseBodyRunningHbaItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePGHbaConfigResponseBodyRunningHbaItems() = default ;
    DescribePGHbaConfigResponseBodyRunningHbaItems& operator=(const DescribePGHbaConfigResponseBodyRunningHbaItems &) = default ;
    DescribePGHbaConfigResponseBodyRunningHbaItems& operator=(DescribePGHbaConfigResponseBodyRunningHbaItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hbaItem_ == nullptr; };
    // hbaItem Field Functions 
    bool hasHbaItem() const { return this->hbaItem_ != nullptr;};
    void deleteHbaItem() { this->hbaItem_ = nullptr;};
    inline const vector<Models::DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem> & hbaItem() const { DARABONBA_PTR_GET_CONST(hbaItem_, vector<Models::DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem>) };
    inline vector<Models::DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem> hbaItem() { DARABONBA_PTR_GET(hbaItem_, vector<Models::DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem>) };
    inline DescribePGHbaConfigResponseBodyRunningHbaItems& setHbaItem(const vector<Models::DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem> & hbaItem) { DARABONBA_PTR_SET_VALUE(hbaItem_, hbaItem) };
    inline DescribePGHbaConfigResponseBodyRunningHbaItems& setHbaItem(vector<Models::DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem> && hbaItem) { DARABONBA_PTR_SET_RVALUE(hbaItem_, hbaItem) };


  protected:
    std::shared_ptr<vector<Models::DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem>> hbaItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
