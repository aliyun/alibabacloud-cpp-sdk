// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPGHBACONFIGRESPONSEBODYDEFAULTHBAITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPGHBACONFIGRESPONSEBODYDEFAULTHBAITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePGHbaConfigResponseBodyDefaultHbaItemsHbaItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribePGHbaConfigResponseBodyDefaultHbaItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePGHbaConfigResponseBodyDefaultHbaItems& obj) { 
      DARABONBA_PTR_TO_JSON(HbaItem, hbaItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePGHbaConfigResponseBodyDefaultHbaItems& obj) { 
      DARABONBA_PTR_FROM_JSON(HbaItem, hbaItem_);
    };
    DescribePGHbaConfigResponseBodyDefaultHbaItems() = default ;
    DescribePGHbaConfigResponseBodyDefaultHbaItems(const DescribePGHbaConfigResponseBodyDefaultHbaItems &) = default ;
    DescribePGHbaConfigResponseBodyDefaultHbaItems(DescribePGHbaConfigResponseBodyDefaultHbaItems &&) = default ;
    DescribePGHbaConfigResponseBodyDefaultHbaItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePGHbaConfigResponseBodyDefaultHbaItems() = default ;
    DescribePGHbaConfigResponseBodyDefaultHbaItems& operator=(const DescribePGHbaConfigResponseBodyDefaultHbaItems &) = default ;
    DescribePGHbaConfigResponseBodyDefaultHbaItems& operator=(DescribePGHbaConfigResponseBodyDefaultHbaItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hbaItem_ == nullptr; };
    // hbaItem Field Functions 
    bool hasHbaItem() const { return this->hbaItem_ != nullptr;};
    void deleteHbaItem() { this->hbaItem_ = nullptr;};
    inline const vector<Models::DescribePGHbaConfigResponseBodyDefaultHbaItemsHbaItem> & hbaItem() const { DARABONBA_PTR_GET_CONST(hbaItem_, vector<Models::DescribePGHbaConfigResponseBodyDefaultHbaItemsHbaItem>) };
    inline vector<Models::DescribePGHbaConfigResponseBodyDefaultHbaItemsHbaItem> hbaItem() { DARABONBA_PTR_GET(hbaItem_, vector<Models::DescribePGHbaConfigResponseBodyDefaultHbaItemsHbaItem>) };
    inline DescribePGHbaConfigResponseBodyDefaultHbaItems& setHbaItem(const vector<Models::DescribePGHbaConfigResponseBodyDefaultHbaItemsHbaItem> & hbaItem) { DARABONBA_PTR_SET_VALUE(hbaItem_, hbaItem) };
    inline DescribePGHbaConfigResponseBodyDefaultHbaItems& setHbaItem(vector<Models::DescribePGHbaConfigResponseBodyDefaultHbaItemsHbaItem> && hbaItem) { DARABONBA_PTR_SET_RVALUE(hbaItem_, hbaItem) };


  protected:
    std::shared_ptr<vector<Models::DescribePGHbaConfigResponseBodyDefaultHbaItemsHbaItem>> hbaItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
