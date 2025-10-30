// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDECISIONRESULTTRENDRESPONSEBODYRESULTOBJECTXAXIS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDECISIONRESULTTRENDRESPONSEBODYRESULTOBJECTXAXIS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeDecisionResultTrendResponseBodyResultObjectXaxis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDecisionResultTrendResponseBodyResultObjectXaxis& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDecisionResultTrendResponseBodyResultObjectXaxis& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    DescribeDecisionResultTrendResponseBodyResultObjectXaxis() = default ;
    DescribeDecisionResultTrendResponseBodyResultObjectXaxis(const DescribeDecisionResultTrendResponseBodyResultObjectXaxis &) = default ;
    DescribeDecisionResultTrendResponseBodyResultObjectXaxis(DescribeDecisionResultTrendResponseBodyResultObjectXaxis &&) = default ;
    DescribeDecisionResultTrendResponseBodyResultObjectXaxis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDecisionResultTrendResponseBodyResultObjectXaxis() = default ;
    DescribeDecisionResultTrendResponseBodyResultObjectXaxis& operator=(const DescribeDecisionResultTrendResponseBodyResultObjectXaxis &) = default ;
    DescribeDecisionResultTrendResponseBodyResultObjectXaxis& operator=(DescribeDecisionResultTrendResponseBodyResultObjectXaxis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<string> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<string>) };
    inline vector<string> data() { DARABONBA_PTR_GET(data_, vector<string>) };
    inline DescribeDecisionResultTrendResponseBodyResultObjectXaxis& setData(const vector<string> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDecisionResultTrendResponseBodyResultObjectXaxis& setData(vector<string> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // X-axis data structure.
    std::shared_ptr<vector<string>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
