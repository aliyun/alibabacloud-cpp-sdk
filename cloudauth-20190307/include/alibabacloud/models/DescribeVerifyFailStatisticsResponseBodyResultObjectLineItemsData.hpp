// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYFAILSTATISTICSRESPONSEBODYRESULTOBJECTLINEITEMSDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYFAILSTATISTICSRESPONSEBODYRESULTOBJECTLINEITEMSDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Date, date_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Date, date_);
    };
    DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData() = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData(const DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData &) = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData(DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData &&) = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData() = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData& operator=(const DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData &) = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData& operator=(DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->count_ == nullptr && return this->date_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


  protected:
    // Error code.
    std::shared_ptr<string> code_ = nullptr;
    // Count.
    std::shared_ptr<int64_t> count_ = nullptr;
    // Date.
    std::shared_ptr<string> date_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
