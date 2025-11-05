// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFCTRIGGERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFCTRIGGERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeFCTriggerResponseBodyFCTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeFCTriggerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFCTriggerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FCTrigger, FCTrigger_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFCTriggerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FCTrigger, FCTrigger_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFCTriggerResponseBody() = default ;
    DescribeFCTriggerResponseBody(const DescribeFCTriggerResponseBody &) = default ;
    DescribeFCTriggerResponseBody(DescribeFCTriggerResponseBody &&) = default ;
    DescribeFCTriggerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFCTriggerResponseBody() = default ;
    DescribeFCTriggerResponseBody& operator=(const DescribeFCTriggerResponseBody &) = default ;
    DescribeFCTriggerResponseBody& operator=(DescribeFCTriggerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->FCTrigger_ == nullptr
        && return this->requestId_ == nullptr; };
    // FCTrigger Field Functions 
    bool hasFCTrigger() const { return this->FCTrigger_ != nullptr;};
    void deleteFCTrigger() { this->FCTrigger_ = nullptr;};
    inline const DescribeFCTriggerResponseBodyFCTrigger & FCTrigger() const { DARABONBA_PTR_GET_CONST(FCTrigger_, DescribeFCTriggerResponseBodyFCTrigger) };
    inline DescribeFCTriggerResponseBodyFCTrigger FCTrigger() { DARABONBA_PTR_GET(FCTrigger_, DescribeFCTriggerResponseBodyFCTrigger) };
    inline DescribeFCTriggerResponseBody& setFCTrigger(const DescribeFCTriggerResponseBodyFCTrigger & FCTrigger) { DARABONBA_PTR_SET_VALUE(FCTrigger_, FCTrigger) };
    inline DescribeFCTriggerResponseBody& setFCTrigger(DescribeFCTriggerResponseBodyFCTrigger && FCTrigger) { DARABONBA_PTR_SET_RVALUE(FCTrigger_, FCTrigger) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFCTriggerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Function Compute trigger that you want to query.
    std::shared_ptr<DescribeFCTriggerResponseBodyFCTrigger> FCTrigger_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
