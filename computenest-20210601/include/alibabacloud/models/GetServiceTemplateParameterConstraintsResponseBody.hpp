// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICETEMPLATEPARAMETERCONSTRAINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICETEMPLATEPARAMETERCONSTRAINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceTemplateParameterConstraintsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceTemplateParameterConstraintsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FamilyConstraints, familyConstraints_);
      DARABONBA_PTR_TO_JSON(ParameterConstraints, parameterConstraints_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceTemplateParameterConstraintsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FamilyConstraints, familyConstraints_);
      DARABONBA_PTR_FROM_JSON(ParameterConstraints, parameterConstraints_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetServiceTemplateParameterConstraintsResponseBody() = default ;
    GetServiceTemplateParameterConstraintsResponseBody(const GetServiceTemplateParameterConstraintsResponseBody &) = default ;
    GetServiceTemplateParameterConstraintsResponseBody(GetServiceTemplateParameterConstraintsResponseBody &&) = default ;
    GetServiceTemplateParameterConstraintsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceTemplateParameterConstraintsResponseBody() = default ;
    GetServiceTemplateParameterConstraintsResponseBody& operator=(const GetServiceTemplateParameterConstraintsResponseBody &) = default ;
    GetServiceTemplateParameterConstraintsResponseBody& operator=(GetServiceTemplateParameterConstraintsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->familyConstraints_ != nullptr
        && this->parameterConstraints_ != nullptr && this->requestId_ != nullptr; };
    // familyConstraints Field Functions 
    bool hasFamilyConstraints() const { return this->familyConstraints_ != nullptr;};
    void deleteFamilyConstraints() { this->familyConstraints_ = nullptr;};
    inline const vector<string> & familyConstraints() const { DARABONBA_PTR_GET_CONST(familyConstraints_, vector<string>) };
    inline vector<string> familyConstraints() { DARABONBA_PTR_GET(familyConstraints_, vector<string>) };
    inline GetServiceTemplateParameterConstraintsResponseBody& setFamilyConstraints(const vector<string> & familyConstraints) { DARABONBA_PTR_SET_VALUE(familyConstraints_, familyConstraints) };
    inline GetServiceTemplateParameterConstraintsResponseBody& setFamilyConstraints(vector<string> && familyConstraints) { DARABONBA_PTR_SET_RVALUE(familyConstraints_, familyConstraints) };


    // parameterConstraints Field Functions 
    bool hasParameterConstraints() const { return this->parameterConstraints_ != nullptr;};
    void deleteParameterConstraints() { this->parameterConstraints_ = nullptr;};
    inline const vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints> & parameterConstraints() const { DARABONBA_PTR_GET_CONST(parameterConstraints_, vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints>) };
    inline vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints> parameterConstraints() { DARABONBA_PTR_GET(parameterConstraints_, vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints>) };
    inline GetServiceTemplateParameterConstraintsResponseBody& setParameterConstraints(const vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints> & parameterConstraints) { DARABONBA_PTR_SET_VALUE(parameterConstraints_, parameterConstraints) };
    inline GetServiceTemplateParameterConstraintsResponseBody& setParameterConstraints(vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints> && parameterConstraints) { DARABONBA_PTR_SET_RVALUE(parameterConstraints_, parameterConstraints) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceTemplateParameterConstraintsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The package family constraints.
    std::shared_ptr<vector<string>> familyConstraints_ = nullptr;
    // The constraints on the parameters.
    std::shared_ptr<vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints>> parameterConstraints_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
