// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUECONSUMERSRESPONSEBODYDATACONSUMERS_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUECONSUMERSRESPONSEBODYDATACONSUMERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListQueueConsumersResponseBodyDataConsumers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueueConsumersResponseBodyDataConsumers& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumerTag, consumerTag_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueueConsumersResponseBodyDataConsumers& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumerTag, consumerTag_);
    };
    ListQueueConsumersResponseBodyDataConsumers() = default ;
    ListQueueConsumersResponseBodyDataConsumers(const ListQueueConsumersResponseBodyDataConsumers &) = default ;
    ListQueueConsumersResponseBodyDataConsumers(ListQueueConsumersResponseBodyDataConsumers &&) = default ;
    ListQueueConsumersResponseBodyDataConsumers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueueConsumersResponseBodyDataConsumers() = default ;
    ListQueueConsumersResponseBodyDataConsumers& operator=(const ListQueueConsumersResponseBodyDataConsumers &) = default ;
    ListQueueConsumersResponseBodyDataConsumers& operator=(ListQueueConsumersResponseBodyDataConsumers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consumerTag_ != nullptr; };
    // consumerTag Field Functions 
    bool hasConsumerTag() const { return this->consumerTag_ != nullptr;};
    void deleteConsumerTag() { this->consumerTag_ = nullptr;};
    inline string consumerTag() const { DARABONBA_PTR_GET_DEFAULT(consumerTag_, "") };
    inline ListQueueConsumersResponseBodyDataConsumers& setConsumerTag(string consumerTag) { DARABONBA_PTR_SET_VALUE(consumerTag_, consumerTag) };


  protected:
    // The consumer tag.
    std::shared_ptr<string> consumerTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
