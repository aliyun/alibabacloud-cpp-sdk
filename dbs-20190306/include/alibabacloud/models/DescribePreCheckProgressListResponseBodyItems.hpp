// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKPROGRESSLISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKPROGRESSLISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribePreCheckProgressListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckProgressListResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(PreCheckProgressDetail, preCheckProgressDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreCheckProgressListResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(PreCheckProgressDetail, preCheckProgressDetail_);
    };
    DescribePreCheckProgressListResponseBodyItems() = default ;
    DescribePreCheckProgressListResponseBodyItems(const DescribePreCheckProgressListResponseBodyItems &) = default ;
    DescribePreCheckProgressListResponseBodyItems(DescribePreCheckProgressListResponseBodyItems &&) = default ;
    DescribePreCheckProgressListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckProgressListResponseBodyItems() = default ;
    DescribePreCheckProgressListResponseBodyItems& operator=(const DescribePreCheckProgressListResponseBodyItems &) = default ;
    DescribePreCheckProgressListResponseBodyItems& operator=(DescribePreCheckProgressListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->preCheckProgressDetail_ == nullptr; };
    // preCheckProgressDetail Field Functions 
    bool hasPreCheckProgressDetail() const { return this->preCheckProgressDetail_ != nullptr;};
    void deletePreCheckProgressDetail() { this->preCheckProgressDetail_ = nullptr;};
    inline const vector<Models::DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail> & preCheckProgressDetail() const { DARABONBA_PTR_GET_CONST(preCheckProgressDetail_, vector<Models::DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail>) };
    inline vector<Models::DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail> preCheckProgressDetail() { DARABONBA_PTR_GET(preCheckProgressDetail_, vector<Models::DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail>) };
    inline DescribePreCheckProgressListResponseBodyItems& setPreCheckProgressDetail(const vector<Models::DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail> & preCheckProgressDetail) { DARABONBA_PTR_SET_VALUE(preCheckProgressDetail_, preCheckProgressDetail) };
    inline DescribePreCheckProgressListResponseBodyItems& setPreCheckProgressDetail(vector<Models::DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail> && preCheckProgressDetail) { DARABONBA_PTR_SET_RVALUE(preCheckProgressDetail_, preCheckProgressDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail>> preCheckProgressDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
