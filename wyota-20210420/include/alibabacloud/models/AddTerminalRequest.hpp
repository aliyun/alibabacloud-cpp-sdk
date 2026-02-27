// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTERMINALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTERMINALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class AddTerminalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTerminalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(MainBizType, mainBizType_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(TerminalGroupId, terminalGroupId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, AddTerminalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(MainBizType, mainBizType_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(TerminalGroupId, terminalGroupId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    AddTerminalRequest() = default ;
    AddTerminalRequest(const AddTerminalRequest &) = default ;
    AddTerminalRequest(AddTerminalRequest &&) = default ;
    AddTerminalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTerminalRequest() = default ;
    AddTerminalRequest& operator=(const AddTerminalRequest &) = default ;
    AddTerminalRequest& operator=(AddTerminalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->clientType_ == nullptr && this->mainBizType_ == nullptr && this->serialNumber_ == nullptr && this->terminalGroupId_ == nullptr && this->uuid_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline AddTerminalRequest& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline string getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
    inline AddTerminalRequest& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // mainBizType Field Functions 
    bool hasMainBizType() const { return this->mainBizType_ != nullptr;};
    void deleteMainBizType() { this->mainBizType_ = nullptr;};
    inline string getMainBizType() const { DARABONBA_PTR_GET_DEFAULT(mainBizType_, "") };
    inline AddTerminalRequest& setMainBizType(string mainBizType) { DARABONBA_PTR_SET_VALUE(mainBizType_, mainBizType) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline AddTerminalRequest& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // terminalGroupId Field Functions 
    bool hasTerminalGroupId() const { return this->terminalGroupId_ != nullptr;};
    void deleteTerminalGroupId() { this->terminalGroupId_ = nullptr;};
    inline string getTerminalGroupId() const { DARABONBA_PTR_GET_DEFAULT(terminalGroupId_, "") };
    inline AddTerminalRequest& setTerminalGroupId(string terminalGroupId) { DARABONBA_PTR_SET_VALUE(terminalGroupId_, terminalGroupId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline AddTerminalRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<string> alias_ {};
    shared_ptr<string> clientType_ {};
    shared_ptr<string> mainBizType_ {};
    shared_ptr<string> serialNumber_ {};
    shared_ptr<string> terminalGroupId_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
