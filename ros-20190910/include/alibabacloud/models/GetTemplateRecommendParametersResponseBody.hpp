// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATERECOMMENDPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATERECOMMENDPARAMETERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTemplateRecommendParametersResponseBodyRecommendParameterValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateRecommendParametersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateRecommendParametersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecommendParameterValues, recommendParameterValues_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateRecommendParametersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecommendParameterValues, recommendParameterValues_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetTemplateRecommendParametersResponseBody() = default ;
    GetTemplateRecommendParametersResponseBody(const GetTemplateRecommendParametersResponseBody &) = default ;
    GetTemplateRecommendParametersResponseBody(GetTemplateRecommendParametersResponseBody &&) = default ;
    GetTemplateRecommendParametersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateRecommendParametersResponseBody() = default ;
    GetTemplateRecommendParametersResponseBody& operator=(const GetTemplateRecommendParametersResponseBody &) = default ;
    GetTemplateRecommendParametersResponseBody& operator=(GetTemplateRecommendParametersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->recommendParameterValues_ != nullptr
        && this->requestId_ != nullptr; };
    // recommendParameterValues Field Functions 
    bool hasRecommendParameterValues() const { return this->recommendParameterValues_ != nullptr;};
    void deleteRecommendParameterValues() { this->recommendParameterValues_ = nullptr;};
    inline const vector<GetTemplateRecommendParametersResponseBodyRecommendParameterValues> & recommendParameterValues() const { DARABONBA_PTR_GET_CONST(recommendParameterValues_, vector<GetTemplateRecommendParametersResponseBodyRecommendParameterValues>) };
    inline vector<GetTemplateRecommendParametersResponseBodyRecommendParameterValues> recommendParameterValues() { DARABONBA_PTR_GET(recommendParameterValues_, vector<GetTemplateRecommendParametersResponseBodyRecommendParameterValues>) };
    inline GetTemplateRecommendParametersResponseBody& setRecommendParameterValues(const vector<GetTemplateRecommendParametersResponseBodyRecommendParameterValues> & recommendParameterValues) { DARABONBA_PTR_SET_VALUE(recommendParameterValues_, recommendParameterValues) };
    inline GetTemplateRecommendParametersResponseBody& setRecommendParameterValues(vector<GetTemplateRecommendParametersResponseBodyRecommendParameterValues> && recommendParameterValues) { DARABONBA_PTR_SET_RVALUE(recommendParameterValues_, recommendParameterValues) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTemplateRecommendParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetTemplateRecommendParametersResponseBodyRecommendParameterValues>> recommendParameterValues_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
