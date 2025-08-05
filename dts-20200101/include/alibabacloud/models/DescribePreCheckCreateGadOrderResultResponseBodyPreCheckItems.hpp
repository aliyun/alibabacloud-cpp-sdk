// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKCREATEGADORDERRESULTRESPONSEBODYPRECHECKITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKCREATEGADORDERRESULTRESPONSEBODYPRECHECKITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems& obj) { 
      DARABONBA_PTR_TO_JSON(PreCheckItems, preCheckItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems& obj) { 
      DARABONBA_PTR_FROM_JSON(PreCheckItems, preCheckItems_);
    };
    DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems() = default ;
    DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems(const DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems &) = default ;
    DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems(DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems &&) = default ;
    DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems() = default ;
    DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems& operator=(const DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems &) = default ;
    DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems& operator=(DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->preCheckItems_ != nullptr; };
    // preCheckItems Field Functions 
    bool hasPreCheckItems() const { return this->preCheckItems_ != nullptr;};
    void deletePreCheckItems() { this->preCheckItems_ = nullptr;};
    inline const vector<Models::DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems> & preCheckItems() const { DARABONBA_PTR_GET_CONST(preCheckItems_, vector<Models::DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems>) };
    inline vector<Models::DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems> preCheckItems() { DARABONBA_PTR_GET(preCheckItems_, vector<Models::DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems>) };
    inline DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems& setPreCheckItems(const vector<Models::DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems> & preCheckItems) { DARABONBA_PTR_SET_VALUE(preCheckItems_, preCheckItems) };
    inline DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems& setPreCheckItems(vector<Models::DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems> && preCheckItems) { DARABONBA_PTR_SET_RVALUE(preCheckItems_, preCheckItems) };


  protected:
    std::shared_ptr<vector<Models::DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems>> preCheckItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
