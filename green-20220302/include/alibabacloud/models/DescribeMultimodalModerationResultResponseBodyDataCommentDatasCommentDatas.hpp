// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIMODALMODERATIONRESULTRESPONSEBODYDATACOMMENTDATASCOMMENTDATAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIMODALMODERATIONRESULTRESPONSEBODYDATACOMMENTDATASCOMMENTDATAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas& obj) { 
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas& obj) { 
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas() = default ;
    DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas(const DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas &) = default ;
    DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas(DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas &&) = default ;
    DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas() = default ;
    DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas& operator=(const DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas &) = default ;
    DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas& operator=(DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->results_ == nullptr; };
    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults>) };
    inline vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults> results() { DARABONBA_PTR_GET(results_, vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults>) };
    inline DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas& setResults(const vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas& setResults(vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    std::shared_ptr<vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
