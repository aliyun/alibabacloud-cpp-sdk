// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERLOGCOUNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERLOGCOUNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DescribeUserLogCountResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserLogCountResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Counts, counts_);
      DARABONBA_PTR_TO_JSON(Dates, dates_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserLogCountResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Counts, counts_);
      DARABONBA_PTR_FROM_JSON(Dates, dates_);
    };
    DescribeUserLogCountResponseBodyData() = default ;
    DescribeUserLogCountResponseBodyData(const DescribeUserLogCountResponseBodyData &) = default ;
    DescribeUserLogCountResponseBodyData(DescribeUserLogCountResponseBodyData &&) = default ;
    DescribeUserLogCountResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserLogCountResponseBodyData() = default ;
    DescribeUserLogCountResponseBodyData& operator=(const DescribeUserLogCountResponseBodyData &) = default ;
    DescribeUserLogCountResponseBodyData& operator=(DescribeUserLogCountResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->counts_ == nullptr
        && return this->dates_ == nullptr; };
    // counts Field Functions 
    bool hasCounts() const { return this->counts_ != nullptr;};
    void deleteCounts() { this->counts_ = nullptr;};
    inline const vector<int64_t> & counts() const { DARABONBA_PTR_GET_CONST(counts_, vector<int64_t>) };
    inline vector<int64_t> counts() { DARABONBA_PTR_GET(counts_, vector<int64_t>) };
    inline DescribeUserLogCountResponseBodyData& setCounts(const vector<int64_t> & counts) { DARABONBA_PTR_SET_VALUE(counts_, counts) };
    inline DescribeUserLogCountResponseBodyData& setCounts(vector<int64_t> && counts) { DARABONBA_PTR_SET_RVALUE(counts_, counts) };


    // dates Field Functions 
    bool hasDates() const { return this->dates_ != nullptr;};
    void deleteDates() { this->dates_ = nullptr;};
    inline const vector<string> & dates() const { DARABONBA_PTR_GET_CONST(dates_, vector<string>) };
    inline vector<string> dates() { DARABONBA_PTR_GET(dates_, vector<string>) };
    inline DescribeUserLogCountResponseBodyData& setDates(const vector<string> & dates) { DARABONBA_PTR_SET_VALUE(dates_, dates) };
    inline DescribeUserLogCountResponseBodyData& setDates(vector<string> && dates) { DARABONBA_PTR_SET_RVALUE(dates_, dates) };


  protected:
    std::shared_ptr<vector<int64_t>> counts_ = nullptr;
    std::shared_ptr<vector<string>> dates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
