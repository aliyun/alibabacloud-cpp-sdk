// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIMODALMODERATIONRESULTRESPONSEBODYDATACOMMENTDATAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIMODALMODERATIONRESULTRESPONSEBODYDATACOMMENTDATAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas.hpp>
#include <alibabacloud/models/DescribeMultimodalModerationResultResponseBodyDataCommentDatasResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeMultimodalModerationResultResponseBodyDataCommentDatas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultimodalModerationResultResponseBodyDataCommentDatas& obj) { 
      DARABONBA_PTR_TO_JSON(CommentDatas, commentDatas_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultimodalModerationResultResponseBodyDataCommentDatas& obj) { 
      DARABONBA_PTR_FROM_JSON(CommentDatas, commentDatas_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    DescribeMultimodalModerationResultResponseBodyDataCommentDatas() = default ;
    DescribeMultimodalModerationResultResponseBodyDataCommentDatas(const DescribeMultimodalModerationResultResponseBodyDataCommentDatas &) = default ;
    DescribeMultimodalModerationResultResponseBodyDataCommentDatas(DescribeMultimodalModerationResultResponseBodyDataCommentDatas &&) = default ;
    DescribeMultimodalModerationResultResponseBodyDataCommentDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultimodalModerationResultResponseBodyDataCommentDatas() = default ;
    DescribeMultimodalModerationResultResponseBodyDataCommentDatas& operator=(const DescribeMultimodalModerationResultResponseBodyDataCommentDatas &) = default ;
    DescribeMultimodalModerationResultResponseBodyDataCommentDatas& operator=(DescribeMultimodalModerationResultResponseBodyDataCommentDatas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commentDatas_ != nullptr
        && this->results_ != nullptr; };
    // commentDatas Field Functions 
    bool hasCommentDatas() const { return this->commentDatas_ != nullptr;};
    void deleteCommentDatas() { this->commentDatas_ = nullptr;};
    inline const vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas> & commentDatas() const { DARABONBA_PTR_GET_CONST(commentDatas_, vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas>) };
    inline vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas> commentDatas() { DARABONBA_PTR_GET(commentDatas_, vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas>) };
    inline DescribeMultimodalModerationResultResponseBodyDataCommentDatas& setCommentDatas(const vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas> & commentDatas) { DARABONBA_PTR_SET_VALUE(commentDatas_, commentDatas) };
    inline DescribeMultimodalModerationResultResponseBodyDataCommentDatas& setCommentDatas(vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas> && commentDatas) { DARABONBA_PTR_SET_RVALUE(commentDatas_, commentDatas) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatasResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatasResults>) };
    inline vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatasResults> results() { DARABONBA_PTR_GET(results_, vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatasResults>) };
    inline DescribeMultimodalModerationResultResponseBodyDataCommentDatas& setResults(const vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatasResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline DescribeMultimodalModerationResultResponseBodyDataCommentDatas& setResults(vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatasResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    std::shared_ptr<vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatas>> commentDatas_ = nullptr;
    std::shared_ptr<vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatasResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
