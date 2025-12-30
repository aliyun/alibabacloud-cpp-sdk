// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGTMACCESSSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDGTMACCESSSTRATEGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddGtmAccessStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGtmAccessStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
    };
    friend void from_json(const Darabonba::Json& j, AddGtmAccessStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
    };
    AddGtmAccessStrategyResponseBody() = default ;
    AddGtmAccessStrategyResponseBody(const AddGtmAccessStrategyResponseBody &) = default ;
    AddGtmAccessStrategyResponseBody(AddGtmAccessStrategyResponseBody &&) = default ;
    AddGtmAccessStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGtmAccessStrategyResponseBody() = default ;
    AddGtmAccessStrategyResponseBody& operator=(const AddGtmAccessStrategyResponseBody &) = default ;
    AddGtmAccessStrategyResponseBody& operator=(AddGtmAccessStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->strategyId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddGtmAccessStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline AddGtmAccessStrategyResponseBody& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the access policy created.
    shared_ptr<string> strategyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
