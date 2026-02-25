// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPARAMETERSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPARAMETERSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class CreateParameterSetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateParameterSetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(parameterSetId, parameterSetId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateParameterSetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(parameterSetId, parameterSetId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateParameterSetResponseBody() = default ;
    CreateParameterSetResponseBody(const CreateParameterSetResponseBody &) = default ;
    CreateParameterSetResponseBody(CreateParameterSetResponseBody &&) = default ;
    CreateParameterSetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateParameterSetResponseBody() = default ;
    CreateParameterSetResponseBody& operator=(const CreateParameterSetResponseBody &) = default ;
    CreateParameterSetResponseBody& operator=(CreateParameterSetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameterSetId_ == nullptr
        && this->requestId_ == nullptr; };
    // parameterSetId Field Functions 
    bool hasParameterSetId() const { return this->parameterSetId_ != nullptr;};
    void deleteParameterSetId() { this->parameterSetId_ = nullptr;};
    inline string getParameterSetId() const { DARABONBA_PTR_GET_DEFAULT(parameterSetId_, "") };
    inline CreateParameterSetResponseBody& setParameterSetId(string parameterSetId) { DARABONBA_PTR_SET_VALUE(parameterSetId_, parameterSetId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateParameterSetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> parameterSetId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
