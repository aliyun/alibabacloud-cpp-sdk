// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEPARAMETERCONSTRAINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEPARAMETERCONSTRAINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetTemplateParameterConstraintsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateParameterConstraintsResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(ParameterConstraints, parameterConstraints_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateParameterConstraintsResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(ParameterConstraints, parameterConstraints_);
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
    virtual bool empty() const override { return this->parameterConstraints_ == nullptr
        && return this->requestId_ == nullptr; };
    // parameterConstraints Field Functions 
    bool hasParameterConstraints() const { return this->parameterConstraints_ != nullptr;};
    void deleteParameterConstraints() { this->parameterConstraints_ = nullptr;};
    inline     const Darabonba::Json & parameterConstraints() const { DARABONBA_GET(parameterConstraints_) };
    Darabonba::Json & parameterConstraints() { DARABONBA_GET(parameterConstraints_) };
    inline GetTemplateParameterConstraintsResponseBody& setParameterConstraints(const Darabonba::Json & parameterConstraints) { DARABONBA_SET_VALUE(parameterConstraints_, parameterConstraints) };
    inline GetTemplateParameterConstraintsResponseBody& setParameterConstraints(Darabonba::Json & parameterConstraints) { DARABONBA_SET_RVALUE(parameterConstraints_, parameterConstraints) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTemplateParameterConstraintsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The constraints of the parameters.
    Darabonba::Json parameterConstraints_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
