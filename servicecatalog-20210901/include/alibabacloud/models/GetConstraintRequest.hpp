// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSTRAINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONSTRAINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class GetConstraintRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConstraintRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConstraintId, constraintId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConstraintRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConstraintId, constraintId_);
    };
    GetConstraintRequest() = default ;
    GetConstraintRequest(const GetConstraintRequest &) = default ;
    GetConstraintRequest(GetConstraintRequest &&) = default ;
    GetConstraintRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConstraintRequest() = default ;
    GetConstraintRequest& operator=(const GetConstraintRequest &) = default ;
    GetConstraintRequest& operator=(GetConstraintRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->constraintId_ == nullptr; };
    // constraintId Field Functions 
    bool hasConstraintId() const { return this->constraintId_ != nullptr;};
    void deleteConstraintId() { this->constraintId_ = nullptr;};
    inline string getConstraintId() const { DARABONBA_PTR_GET_DEFAULT(constraintId_, "") };
    inline GetConstraintRequest& setConstraintId(string constraintId) { DARABONBA_PTR_SET_VALUE(constraintId_, constraintId) };


  protected:
    // The ID of the constraint.
    // 
    // This parameter is required.
    shared_ptr<string> constraintId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
