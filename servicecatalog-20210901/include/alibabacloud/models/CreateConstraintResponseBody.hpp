// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONSTRAINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECONSTRAINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class CreateConstraintResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConstraintResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConstraintId, constraintId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConstraintResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConstraintId, constraintId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateConstraintResponseBody() = default ;
    CreateConstraintResponseBody(const CreateConstraintResponseBody &) = default ;
    CreateConstraintResponseBody(CreateConstraintResponseBody &&) = default ;
    CreateConstraintResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConstraintResponseBody() = default ;
    CreateConstraintResponseBody& operator=(const CreateConstraintResponseBody &) = default ;
    CreateConstraintResponseBody& operator=(CreateConstraintResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->constraintId_ == nullptr
        && this->requestId_ == nullptr; };
    // constraintId Field Functions 
    bool hasConstraintId() const { return this->constraintId_ != nullptr;};
    void deleteConstraintId() { this->constraintId_ = nullptr;};
    inline string getConstraintId() const { DARABONBA_PTR_GET_DEFAULT(constraintId_, "") };
    inline CreateConstraintResponseBody& setConstraintId(string constraintId) { DARABONBA_PTR_SET_VALUE(constraintId_, constraintId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateConstraintResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the constraint.
    shared_ptr<string> constraintId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
