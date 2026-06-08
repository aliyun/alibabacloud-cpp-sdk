// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATERECOMMENDPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATERECOMMENDPARAMETERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class RecommendParameterValues : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecommendParameterValues& obj) { 
        DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_TO_JSON(RecommendValue, recommendValue_);
      };
      friend void from_json(const Darabonba::Json& j, RecommendParameterValues& obj) { 
        DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_FROM_JSON(RecommendValue, recommendValue_);
      };
      RecommendParameterValues() = default ;
      RecommendParameterValues(const RecommendParameterValues &) = default ;
      RecommendParameterValues(RecommendParameterValues &&) = default ;
      RecommendParameterValues(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecommendParameterValues() = default ;
      RecommendParameterValues& operator=(const RecommendParameterValues &) = default ;
      RecommendParameterValues& operator=(RecommendParameterValues &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->parameterKey_ == nullptr
        && this->recommendValue_ == nullptr; };
      // parameterKey Field Functions 
      bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
      void deleteParameterKey() { this->parameterKey_ = nullptr;};
      inline string getParameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
      inline RecommendParameterValues& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


      // recommendValue Field Functions 
      bool hasRecommendValue() const { return this->recommendValue_ != nullptr;};
      void deleteRecommendValue() { this->recommendValue_ = nullptr;};
      inline string getRecommendValue() const { DARABONBA_PTR_GET_DEFAULT(recommendValue_, "") };
      inline RecommendParameterValues& setRecommendValue(string recommendValue) { DARABONBA_PTR_SET_VALUE(recommendValue_, recommendValue) };


    protected:
      shared_ptr<string> parameterKey_ {};
      shared_ptr<string> recommendValue_ {};
    };

    virtual bool empty() const override { return this->recommendParameterValues_ == nullptr
        && this->requestId_ == nullptr; };
    // recommendParameterValues Field Functions 
    bool hasRecommendParameterValues() const { return this->recommendParameterValues_ != nullptr;};
    void deleteRecommendParameterValues() { this->recommendParameterValues_ = nullptr;};
    inline const vector<GetTemplateRecommendParametersResponseBody::RecommendParameterValues> & getRecommendParameterValues() const { DARABONBA_PTR_GET_CONST(recommendParameterValues_, vector<GetTemplateRecommendParametersResponseBody::RecommendParameterValues>) };
    inline vector<GetTemplateRecommendParametersResponseBody::RecommendParameterValues> getRecommendParameterValues() { DARABONBA_PTR_GET(recommendParameterValues_, vector<GetTemplateRecommendParametersResponseBody::RecommendParameterValues>) };
    inline GetTemplateRecommendParametersResponseBody& setRecommendParameterValues(const vector<GetTemplateRecommendParametersResponseBody::RecommendParameterValues> & recommendParameterValues) { DARABONBA_PTR_SET_VALUE(recommendParameterValues_, recommendParameterValues) };
    inline GetTemplateRecommendParametersResponseBody& setRecommendParameterValues(vector<GetTemplateRecommendParametersResponseBody::RecommendParameterValues> && recommendParameterValues) { DARABONBA_PTR_SET_RVALUE(recommendParameterValues_, recommendParameterValues) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTemplateRecommendParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<GetTemplateRecommendParametersResponseBody::RecommendParameterValues>> recommendParameterValues_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
