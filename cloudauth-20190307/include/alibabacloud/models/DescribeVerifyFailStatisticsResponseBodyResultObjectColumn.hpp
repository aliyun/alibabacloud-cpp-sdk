// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYFAILSTATISTICSRESPONSEBODYRESULTOBJECTCOLUMN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYFAILSTATISTICSRESPONSEBODYRESULTOBJECTCOLUMN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyFailStatisticsResponseBodyResultObjectColumn : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyFailStatisticsResponseBodyResultObjectColumn& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyFailStatisticsResponseBodyResultObjectColumn& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVerifyFailStatisticsResponseBodyResultObjectColumn() = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObjectColumn(const DescribeVerifyFailStatisticsResponseBodyResultObjectColumn &) = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObjectColumn(DescribeVerifyFailStatisticsResponseBodyResultObjectColumn &&) = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObjectColumn(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyFailStatisticsResponseBodyResultObjectColumn() = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObjectColumn& operator=(const DescribeVerifyFailStatisticsResponseBodyResultObjectColumn &) = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObjectColumn& operator=(DescribeVerifyFailStatisticsResponseBodyResultObjectColumn &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems>) };
    inline vector<Models::DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems> items() { DARABONBA_PTR_GET(items_, vector<Models::DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems>) };
    inline DescribeVerifyFailStatisticsResponseBodyResultObjectColumn& setItems(const vector<Models::DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeVerifyFailStatisticsResponseBodyResultObjectColumn& setItems(vector<Models::DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeVerifyFailStatisticsResponseBodyResultObjectColumn& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Column information.
    std::shared_ptr<vector<Models::DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems>> items_ = nullptr;
    // Total count.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
