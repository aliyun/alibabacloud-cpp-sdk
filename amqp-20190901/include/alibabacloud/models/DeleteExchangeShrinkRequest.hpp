// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEXCHANGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEXCHANGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class DeleteExchangeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteExchangeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Collina, collina_);
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(ExchangeName, exchangeName_);
      DARABONBA_PTR_TO_JSON(ExchangeNames, exchangeNamesShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UmidToken, umidToken_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteExchangeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Collina, collina_);
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(ExchangeName, exchangeName_);
      DARABONBA_PTR_FROM_JSON(ExchangeNames, exchangeNamesShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UmidToken, umidToken_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    DeleteExchangeShrinkRequest() = default ;
    DeleteExchangeShrinkRequest(const DeleteExchangeShrinkRequest &) = default ;
    DeleteExchangeShrinkRequest(DeleteExchangeShrinkRequest &&) = default ;
    DeleteExchangeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteExchangeShrinkRequest() = default ;
    DeleteExchangeShrinkRequest& operator=(const DeleteExchangeShrinkRequest &) = default ;
    DeleteExchangeShrinkRequest& operator=(DeleteExchangeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collina_ == nullptr
        && this->consoleSessionId_ == nullptr && this->exchangeName_ == nullptr && this->exchangeNamesShrink_ == nullptr && this->instanceId_ == nullptr && this->umidToken_ == nullptr
        && this->vhostName_ == nullptr; };
    // collina Field Functions 
    bool hasCollina() const { return this->collina_ != nullptr;};
    void deleteCollina() { this->collina_ = nullptr;};
    inline string getCollina() const { DARABONBA_PTR_GET_DEFAULT(collina_, "") };
    inline DeleteExchangeShrinkRequest& setCollina(string collina) { DARABONBA_PTR_SET_VALUE(collina_, collina) };


    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string getConsoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline DeleteExchangeShrinkRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // exchangeName Field Functions 
    bool hasExchangeName() const { return this->exchangeName_ != nullptr;};
    void deleteExchangeName() { this->exchangeName_ = nullptr;};
    inline string getExchangeName() const { DARABONBA_PTR_GET_DEFAULT(exchangeName_, "") };
    inline DeleteExchangeShrinkRequest& setExchangeName(string exchangeName) { DARABONBA_PTR_SET_VALUE(exchangeName_, exchangeName) };


    // exchangeNamesShrink Field Functions 
    bool hasExchangeNamesShrink() const { return this->exchangeNamesShrink_ != nullptr;};
    void deleteExchangeNamesShrink() { this->exchangeNamesShrink_ = nullptr;};
    inline string getExchangeNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(exchangeNamesShrink_, "") };
    inline DeleteExchangeShrinkRequest& setExchangeNamesShrink(string exchangeNamesShrink) { DARABONBA_PTR_SET_VALUE(exchangeNamesShrink_, exchangeNamesShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteExchangeShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // umidToken Field Functions 
    bool hasUmidToken() const { return this->umidToken_ != nullptr;};
    void deleteUmidToken() { this->umidToken_ = nullptr;};
    inline string getUmidToken() const { DARABONBA_PTR_GET_DEFAULT(umidToken_, "") };
    inline DeleteExchangeShrinkRequest& setUmidToken(string umidToken) { DARABONBA_PTR_SET_VALUE(umidToken_, umidToken) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string getVhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline DeleteExchangeShrinkRequest& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    shared_ptr<string> collina_ {};
    shared_ptr<string> consoleSessionId_ {};
    shared_ptr<string> exchangeName_ {};
    shared_ptr<string> exchangeNamesShrink_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> umidToken_ {};
    // This parameter is required.
    shared_ptr<string> vhostName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
