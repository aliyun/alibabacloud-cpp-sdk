// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIMODALMODERATIONRESULTRESPONSEBODYDATAMAINDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIMODALMODERATIONRESULTRESPONSEBODYDATAMAINDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMultimodalModerationResultResponseBodyDataMainDataResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeMultimodalModerationResultResponseBodyDataMainData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultimodalModerationResultResponseBodyDataMainData& obj) { 
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultimodalModerationResultResponseBodyDataMainData& obj) { 
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    DescribeMultimodalModerationResultResponseBodyDataMainData() = default ;
    DescribeMultimodalModerationResultResponseBodyDataMainData(const DescribeMultimodalModerationResultResponseBodyDataMainData &) = default ;
    DescribeMultimodalModerationResultResponseBodyDataMainData(DescribeMultimodalModerationResultResponseBodyDataMainData &&) = default ;
    DescribeMultimodalModerationResultResponseBodyDataMainData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultimodalModerationResultResponseBodyDataMainData() = default ;
    DescribeMultimodalModerationResultResponseBodyDataMainData& operator=(const DescribeMultimodalModerationResultResponseBodyDataMainData &) = default ;
    DescribeMultimodalModerationResultResponseBodyDataMainData& operator=(DescribeMultimodalModerationResultResponseBodyDataMainData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->results_ == nullptr; };
    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::DescribeMultimodalModerationResultResponseBodyDataMainDataResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::DescribeMultimodalModerationResultResponseBodyDataMainDataResults>) };
    inline vector<Models::DescribeMultimodalModerationResultResponseBodyDataMainDataResults> results() { DARABONBA_PTR_GET(results_, vector<Models::DescribeMultimodalModerationResultResponseBodyDataMainDataResults>) };
    inline DescribeMultimodalModerationResultResponseBodyDataMainData& setResults(const vector<Models::DescribeMultimodalModerationResultResponseBodyDataMainDataResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline DescribeMultimodalModerationResultResponseBodyDataMainData& setResults(vector<Models::DescribeMultimodalModerationResultResponseBodyDataMainDataResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    std::shared_ptr<vector<Models::DescribeMultimodalModerationResultResponseBodyDataMainDataResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
