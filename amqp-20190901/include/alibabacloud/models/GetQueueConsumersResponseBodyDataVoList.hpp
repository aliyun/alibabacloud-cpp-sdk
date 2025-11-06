// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUEUECONSUMERSRESPONSEBODYDATAVOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETQUEUECONSUMERSRESPONSEBODYDATAVOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetQueueConsumersResponseBodyDataVoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueueConsumersResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_TO_JSON(ClientAddress, clientAddress_);
      DARABONBA_PTR_TO_JSON(ConsumerTag, consumerTag_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueueConsumersResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientAddress, clientAddress_);
      DARABONBA_PTR_FROM_JSON(ConsumerTag, consumerTag_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
    };
    GetQueueConsumersResponseBodyDataVoList() = default ;
    GetQueueConsumersResponseBodyDataVoList(const GetQueueConsumersResponseBodyDataVoList &) = default ;
    GetQueueConsumersResponseBodyDataVoList(GetQueueConsumersResponseBodyDataVoList &&) = default ;
    GetQueueConsumersResponseBodyDataVoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueueConsumersResponseBodyDataVoList() = default ;
    GetQueueConsumersResponseBodyDataVoList& operator=(const GetQueueConsumersResponseBodyDataVoList &) = default ;
    GetQueueConsumersResponseBodyDataVoList& operator=(GetQueueConsumersResponseBodyDataVoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientAddress_ == nullptr
        && return this->consumerTag_ == nullptr && return this->gmtCreate_ == nullptr; };
    // clientAddress Field Functions 
    bool hasClientAddress() const { return this->clientAddress_ != nullptr;};
    void deleteClientAddress() { this->clientAddress_ = nullptr;};
    inline string clientAddress() const { DARABONBA_PTR_GET_DEFAULT(clientAddress_, "") };
    inline GetQueueConsumersResponseBodyDataVoList& setClientAddress(string clientAddress) { DARABONBA_PTR_SET_VALUE(clientAddress_, clientAddress) };


    // consumerTag Field Functions 
    bool hasConsumerTag() const { return this->consumerTag_ != nullptr;};
    void deleteConsumerTag() { this->consumerTag_ = nullptr;};
    inline string consumerTag() const { DARABONBA_PTR_GET_DEFAULT(consumerTag_, "") };
    inline GetQueueConsumersResponseBodyDataVoList& setConsumerTag(string consumerTag) { DARABONBA_PTR_SET_VALUE(consumerTag_, consumerTag) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline GetQueueConsumersResponseBodyDataVoList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


  protected:
    std::shared_ptr<string> clientAddress_ = nullptr;
    std::shared_ptr<string> consumerTag_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
