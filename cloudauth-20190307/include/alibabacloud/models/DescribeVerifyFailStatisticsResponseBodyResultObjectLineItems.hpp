// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYFAILSTATISTICSRESPONSEBODYRESULTOBJECTLINEITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYFAILSTATISTICSRESPONSEBODYRESULTOBJECTLINEITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyFailStatisticsResponseBodyResultObjectLineItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyFailStatisticsResponseBodyResultObjectLineItems& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyFailStatisticsResponseBodyResultObjectLineItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    DescribeVerifyFailStatisticsResponseBodyResultObjectLineItems() = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObjectLineItems(const DescribeVerifyFailStatisticsResponseBodyResultObjectLineItems &) = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObjectLineItems(DescribeVerifyFailStatisticsResponseBodyResultObjectLineItems &&) = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObjectLineItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyFailStatisticsResponseBodyResultObjectLineItems() = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObjectLineItems& operator=(const DescribeVerifyFailStatisticsResponseBodyResultObjectLineItems &) = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObjectLineItems& operator=(DescribeVerifyFailStatisticsResponseBodyResultObjectLineItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeVerifyFailStatisticsResponseBodyResultObjectLineItems& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData>) };
    inline vector<Models::DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData> data() { DARABONBA_PTR_GET(data_, vector<Models::DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData>) };
    inline DescribeVerifyFailStatisticsResponseBodyResultObjectLineItems& setData(const vector<Models::DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeVerifyFailStatisticsResponseBodyResultObjectLineItems& setData(vector<Models::DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // Error code.
    std::shared_ptr<string> code_ = nullptr;
    // Returned quantity data.
    std::shared_ptr<vector<Models::DescribeVerifyFailStatisticsResponseBodyResultObjectLineItemsData>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
