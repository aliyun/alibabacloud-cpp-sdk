// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACTIONPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEACTIONPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateActionPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateActionPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActionPlanId, actionPlanId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateActionPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionPlanId, actionPlanId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateActionPlanResponseBody() = default ;
    CreateActionPlanResponseBody(const CreateActionPlanResponseBody &) = default ;
    CreateActionPlanResponseBody(CreateActionPlanResponseBody &&) = default ;
    CreateActionPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateActionPlanResponseBody() = default ;
    CreateActionPlanResponseBody& operator=(const CreateActionPlanResponseBody &) = default ;
    CreateActionPlanResponseBody& operator=(CreateActionPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionPlanId_ == nullptr
        && return this->requestId_ == nullptr; };
    // actionPlanId Field Functions 
    bool hasActionPlanId() const { return this->actionPlanId_ != nullptr;};
    void deleteActionPlanId() { this->actionPlanId_ = nullptr;};
    inline string actionPlanId() const { DARABONBA_PTR_GET_DEFAULT(actionPlanId_, "") };
    inline CreateActionPlanResponseBody& setActionPlanId(string actionPlanId) { DARABONBA_PTR_SET_VALUE(actionPlanId_, actionPlanId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateActionPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the execution plan.
    std::shared_ptr<string> actionPlanId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
