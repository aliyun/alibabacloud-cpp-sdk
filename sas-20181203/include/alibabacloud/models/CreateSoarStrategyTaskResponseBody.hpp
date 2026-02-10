// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESOARSTRATEGYTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESOARSTRATEGYTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateSoarStrategyTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSoarStrategyTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StrategyTaskId, strategyTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSoarStrategyTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StrategyTaskId, strategyTaskId_);
    };
    CreateSoarStrategyTaskResponseBody() = default ;
    CreateSoarStrategyTaskResponseBody(const CreateSoarStrategyTaskResponseBody &) = default ;
    CreateSoarStrategyTaskResponseBody(CreateSoarStrategyTaskResponseBody &&) = default ;
    CreateSoarStrategyTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSoarStrategyTaskResponseBody() = default ;
    CreateSoarStrategyTaskResponseBody& operator=(const CreateSoarStrategyTaskResponseBody &) = default ;
    CreateSoarStrategyTaskResponseBody& operator=(CreateSoarStrategyTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->strategyTaskId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSoarStrategyTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategyTaskId Field Functions 
    bool hasStrategyTaskId() const { return this->strategyTaskId_ != nullptr;};
    void deleteStrategyTaskId() { this->strategyTaskId_ = nullptr;};
    inline int64_t getStrategyTaskId() const { DARABONBA_PTR_GET_DEFAULT(strategyTaskId_, 0L) };
    inline CreateSoarStrategyTaskResponseBody& setStrategyTaskId(int64_t strategyTaskId) { DARABONBA_PTR_SET_VALUE(strategyTaskId_, strategyTaskId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the policy task.
    shared_ptr<int64_t> strategyTaskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
