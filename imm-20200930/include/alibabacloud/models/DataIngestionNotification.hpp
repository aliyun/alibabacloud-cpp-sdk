// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAINGESTIONNOTIFICATION_HPP_
#define ALIBABACLOUD_MODELS_DATAINGESTIONNOTIFICATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MNS.hpp>
#include <alibabacloud/models/RocketMQ.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DataIngestionNotification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataIngestionNotification& obj) { 
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(MNS, MNS_);
      DARABONBA_PTR_TO_JSON(RocketMQ, rocketMQ_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, DataIngestionNotification& obj) { 
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(MNS, MNS_);
      DARABONBA_PTR_FROM_JSON(RocketMQ, rocketMQ_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    DataIngestionNotification() = default ;
    DataIngestionNotification(const DataIngestionNotification &) = default ;
    DataIngestionNotification(DataIngestionNotification &&) = default ;
    DataIngestionNotification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataIngestionNotification() = default ;
    DataIngestionNotification& operator=(const DataIngestionNotification &) = default ;
    DataIngestionNotification& operator=(DataIngestionNotification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endpoint_ != nullptr
        && this->MNS_ != nullptr && this->rocketMQ_ != nullptr && this->topic_ != nullptr; };
    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline DataIngestionNotification& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // MNS Field Functions 
    bool hasMNS() const { return this->MNS_ != nullptr;};
    void deleteMNS() { this->MNS_ = nullptr;};
    inline const Models::MNS & MNS() const { DARABONBA_PTR_GET_CONST(MNS_, Models::MNS) };
    inline Models::MNS MNS() { DARABONBA_PTR_GET(MNS_, Models::MNS) };
    inline DataIngestionNotification& setMNS(const Models::MNS & MNS) { DARABONBA_PTR_SET_VALUE(MNS_, MNS) };
    inline DataIngestionNotification& setMNS(Models::MNS && MNS) { DARABONBA_PTR_SET_RVALUE(MNS_, MNS) };


    // rocketMQ Field Functions 
    bool hasRocketMQ() const { return this->rocketMQ_ != nullptr;};
    void deleteRocketMQ() { this->rocketMQ_ = nullptr;};
    inline const Models::RocketMQ & rocketMQ() const { DARABONBA_PTR_GET_CONST(rocketMQ_, Models::RocketMQ) };
    inline Models::RocketMQ rocketMQ() { DARABONBA_PTR_GET(rocketMQ_, Models::RocketMQ) };
    inline DataIngestionNotification& setRocketMQ(const Models::RocketMQ & rocketMQ) { DARABONBA_PTR_SET_VALUE(rocketMQ_, rocketMQ) };
    inline DataIngestionNotification& setRocketMQ(Models::RocketMQ && rocketMQ) { DARABONBA_PTR_SET_RVALUE(rocketMQ_, rocketMQ) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline DataIngestionNotification& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<Models::MNS> MNS_ = nullptr;
    std::shared_ptr<Models::RocketMQ> rocketMQ_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
