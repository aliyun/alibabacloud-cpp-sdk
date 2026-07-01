// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIAGENTCONCURRENCYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIAGENTCONCURRENCYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetAIAgentConcurrencyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIAgentConcurrencyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveCount, activeCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIAgentConcurrencyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveCount, activeCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAIAgentConcurrencyResponseBody() = default ;
    GetAIAgentConcurrencyResponseBody(const GetAIAgentConcurrencyResponseBody &) = default ;
    GetAIAgentConcurrencyResponseBody(GetAIAgentConcurrencyResponseBody &&) = default ;
    GetAIAgentConcurrencyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIAgentConcurrencyResponseBody() = default ;
    GetAIAgentConcurrencyResponseBody& operator=(const GetAIAgentConcurrencyResponseBody &) = default ;
    GetAIAgentConcurrencyResponseBody& operator=(GetAIAgentConcurrencyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeCount_ == nullptr
        && this->requestId_ == nullptr; };
    // activeCount Field Functions 
    bool hasActiveCount() const { return this->activeCount_ != nullptr;};
    void deleteActiveCount() { this->activeCount_ = nullptr;};
    inline int32_t getActiveCount() const { DARABONBA_PTR_GET_DEFAULT(activeCount_, 0) };
    inline GetAIAgentConcurrencyResponseBody& setActiveCount(int32_t activeCount) { DARABONBA_PTR_SET_VALUE(activeCount_, activeCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAIAgentConcurrencyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of active concurrent calls.
    shared_ptr<int32_t> activeCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
