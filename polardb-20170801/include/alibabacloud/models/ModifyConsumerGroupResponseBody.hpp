// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCONSUMERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCONSUMERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyConsumerGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyConsumerGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumerGroupId, consumerGroupId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyConsumerGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumerGroupId, consumerGroupId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyConsumerGroupResponseBody() = default ;
    ModifyConsumerGroupResponseBody(const ModifyConsumerGroupResponseBody &) = default ;
    ModifyConsumerGroupResponseBody(ModifyConsumerGroupResponseBody &&) = default ;
    ModifyConsumerGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyConsumerGroupResponseBody() = default ;
    ModifyConsumerGroupResponseBody& operator=(const ModifyConsumerGroupResponseBody &) = default ;
    ModifyConsumerGroupResponseBody& operator=(ModifyConsumerGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerGroupId_ == nullptr
        && this->requestId_ == nullptr; };
    // consumerGroupId Field Functions 
    bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
    void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
    inline string getConsumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
    inline ModifyConsumerGroupResponseBody& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyConsumerGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> consumerGroupId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
