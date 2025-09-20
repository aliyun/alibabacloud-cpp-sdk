// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFICATION_HPP_
#define ALIBABACLOUD_MODELS_NOTIFICATION_HPP_
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
  class Notification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Notification& obj) { 
      DARABONBA_PTR_TO_JSON(ExtendedMessageURI, extendedMessageURI_);
      DARABONBA_PTR_TO_JSON(MNS, MNS_);
      DARABONBA_PTR_TO_JSON(RocketMQ, rocketMQ_);
    };
    friend void from_json(const Darabonba::Json& j, Notification& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtendedMessageURI, extendedMessageURI_);
      DARABONBA_PTR_FROM_JSON(MNS, MNS_);
      DARABONBA_PTR_FROM_JSON(RocketMQ, rocketMQ_);
    };
    Notification() = default ;
    Notification(const Notification &) = default ;
    Notification(Notification &&) = default ;
    Notification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Notification() = default ;
    Notification& operator=(const Notification &) = default ;
    Notification& operator=(Notification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extendedMessageURI_ != nullptr
        && this->MNS_ != nullptr && this->rocketMQ_ != nullptr; };
    // extendedMessageURI Field Functions 
    bool hasExtendedMessageURI() const { return this->extendedMessageURI_ != nullptr;};
    void deleteExtendedMessageURI() { this->extendedMessageURI_ = nullptr;};
    inline string extendedMessageURI() const { DARABONBA_PTR_GET_DEFAULT(extendedMessageURI_, "") };
    inline Notification& setExtendedMessageURI(string extendedMessageURI) { DARABONBA_PTR_SET_VALUE(extendedMessageURI_, extendedMessageURI) };


    // MNS Field Functions 
    bool hasMNS() const { return this->MNS_ != nullptr;};
    void deleteMNS() { this->MNS_ = nullptr;};
    inline const MNS & MNS() const { DARABONBA_PTR_GET_CONST(MNS_, MNS) };
    inline MNS MNS() { DARABONBA_PTR_GET(MNS_, MNS) };
    inline Notification& setMNS(const MNS & MNS) { DARABONBA_PTR_SET_VALUE(MNS_, MNS) };
    inline Notification& setMNS(MNS && MNS) { DARABONBA_PTR_SET_RVALUE(MNS_, MNS) };


    // rocketMQ Field Functions 
    bool hasRocketMQ() const { return this->rocketMQ_ != nullptr;};
    void deleteRocketMQ() { this->rocketMQ_ = nullptr;};
    inline const RocketMQ & rocketMQ() const { DARABONBA_PTR_GET_CONST(rocketMQ_, RocketMQ) };
    inline RocketMQ rocketMQ() { DARABONBA_PTR_GET(rocketMQ_, RocketMQ) };
    inline Notification& setRocketMQ(const RocketMQ & rocketMQ) { DARABONBA_PTR_SET_VALUE(rocketMQ_, rocketMQ) };
    inline Notification& setRocketMQ(RocketMQ && rocketMQ) { DARABONBA_PTR_SET_RVALUE(rocketMQ_, rocketMQ) };


  protected:
    std::shared_ptr<string> extendedMessageURI_ = nullptr;
    std::shared_ptr<MNS> MNS_ = nullptr;
    std::shared_ptr<RocketMQ> rocketMQ_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
