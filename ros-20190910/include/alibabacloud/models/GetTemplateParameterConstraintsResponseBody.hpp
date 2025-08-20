// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEPARAMETERCONSTRAINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEPARAMETERCONSTRAINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTemplateParameterConstraintsResponseBodyParameterConstraints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateParameterConstraintsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateParameterConstraintsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterConstraints, parameterConstraints_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateParameterConstraintsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterConstraints, parameterConstraints_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetTemplateParameterConstraintsResponseBody() = default ;
    GetTemplateParameterConstraintsResponseBody(const GetTemplateParameterConstraintsResponseBody &) = default ;
    GetTemplateParameterConstraintsResponseBody(GetTemplateParameterConstraintsResponseBody &&) = default ;
    GetTemplateParameterConstraintsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateParameterConstraintsResponseBody() = default ;
    GetTemplateParameterConstraintsResponseBody& operator=(const GetTemplateParameterConstraintsResponseBody &) = default ;
    GetTemplateParameterConstraintsResponseBody& operator=(GetTemplateParameterConstraintsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parameterConstraints_ != nullptr
        && this->requestId_ != nullptr; };
    // parameterConstraints Field Functions 
    bool hasParameterConstraints() const { return this->parameterConstraints_ != nullptr;};
    void deleteParameterConstraints() { this->parameterConstraints_ = nullptr;};
    inline const vector<GetTemplateParameterConstraintsResponseBodyParameterConstraints> & parameterConstraints() const { DARABONBA_PTR_GET_CONST(parameterConstraints_, vector<GetTemplateParameterConstraintsResponseBodyParameterConstraints>) };
    inline vector<GetTemplateParameterConstraintsResponseBodyParameterConstraints> parameterConstraints() { DARABONBA_PTR_GET(parameterConstraints_, vector<GetTemplateParameterConstraintsResponseBodyParameterConstraints>) };
    inline GetTemplateParameterConstraintsResponseBody& setParameterConstraints(const vector<GetTemplateParameterConstraintsResponseBodyParameterConstraints> & parameterConstraints) { DARABONBA_PTR_SET_VALUE(parameterConstraints_, parameterConstraints) };
    inline GetTemplateParameterConstraintsResponseBody& setParameterConstraints(vector<GetTemplateParameterConstraintsResponseBodyParameterConstraints> && parameterConstraints) { DARABONBA_PTR_SET_RVALUE(parameterConstraints_, parameterConstraints) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTemplateParameterConstraintsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The constraints of the parameters.
    std::shared_ptr<vector<GetTemplateParameterConstraintsResponseBodyParameterConstraints>> parameterConstraints_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
