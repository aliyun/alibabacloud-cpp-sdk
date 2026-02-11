// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDISPATCHRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDISPATCHRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class CreateDispatchRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDispatchRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DispatchRuleId, dispatchRuleId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDispatchRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DispatchRuleId, dispatchRuleId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDispatchRuleResponseBody() = default ;
    CreateDispatchRuleResponseBody(const CreateDispatchRuleResponseBody &) = default ;
    CreateDispatchRuleResponseBody(CreateDispatchRuleResponseBody &&) = default ;
    CreateDispatchRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDispatchRuleResponseBody() = default ;
    CreateDispatchRuleResponseBody& operator=(const CreateDispatchRuleResponseBody &) = default ;
    CreateDispatchRuleResponseBody& operator=(CreateDispatchRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dispatchRuleId_ == nullptr
        && this->requestId_ == nullptr; };
    // dispatchRuleId Field Functions 
    bool hasDispatchRuleId() const { return this->dispatchRuleId_ != nullptr;};
    void deleteDispatchRuleId() { this->dispatchRuleId_ = nullptr;};
    inline int64_t getDispatchRuleId() const { DARABONBA_PTR_GET_DEFAULT(dispatchRuleId_, 0L) };
    inline CreateDispatchRuleResponseBody& setDispatchRuleId(int64_t dispatchRuleId) { DARABONBA_PTR_SET_VALUE(dispatchRuleId_, dispatchRuleId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDispatchRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int64_t> dispatchRuleId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
