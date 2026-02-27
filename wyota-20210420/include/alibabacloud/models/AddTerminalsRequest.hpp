// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTERMINALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTERMINALSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class AddTerminalsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTerminalsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddTerminalParams, addTerminalParams_);
      DARABONBA_PTR_TO_JSON(MainBizType, mainBizType_);
    };
    friend void from_json(const Darabonba::Json& j, AddTerminalsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddTerminalParams, addTerminalParams_);
      DARABONBA_PTR_FROM_JSON(MainBizType, mainBizType_);
    };
    AddTerminalsRequest() = default ;
    AddTerminalsRequest(const AddTerminalsRequest &) = default ;
    AddTerminalsRequest(AddTerminalsRequest &&) = default ;
    AddTerminalsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTerminalsRequest() = default ;
    AddTerminalsRequest& operator=(const AddTerminalsRequest &) = default ;
    AddTerminalsRequest& operator=(AddTerminalsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AddTerminalParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddTerminalParams& obj) { 
        DARABONBA_PTR_TO_JSON(Alias, alias_);
        DARABONBA_PTR_TO_JSON(ClientType, clientType_);
        DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_TO_JSON(TerminalGroupId, terminalGroupId_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, AddTerminalParams& obj) { 
        DARABONBA_PTR_FROM_JSON(Alias, alias_);
        DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
        DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_FROM_JSON(TerminalGroupId, terminalGroupId_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      AddTerminalParams() = default ;
      AddTerminalParams(const AddTerminalParams &) = default ;
      AddTerminalParams(AddTerminalParams &&) = default ;
      AddTerminalParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddTerminalParams() = default ;
      AddTerminalParams& operator=(const AddTerminalParams &) = default ;
      AddTerminalParams& operator=(AddTerminalParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alias_ == nullptr
        && this->clientType_ == nullptr && this->serialNumber_ == nullptr && this->terminalGroupId_ == nullptr && this->uuid_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline AddTerminalParams& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // clientType Field Functions 
      bool hasClientType() const { return this->clientType_ != nullptr;};
      void deleteClientType() { this->clientType_ = nullptr;};
      inline int32_t getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, 0) };
      inline AddTerminalParams& setClientType(int32_t clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


      // serialNumber Field Functions 
      bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
      void deleteSerialNumber() { this->serialNumber_ = nullptr;};
      inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
      inline AddTerminalParams& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


      // terminalGroupId Field Functions 
      bool hasTerminalGroupId() const { return this->terminalGroupId_ != nullptr;};
      void deleteTerminalGroupId() { this->terminalGroupId_ = nullptr;};
      inline string getTerminalGroupId() const { DARABONBA_PTR_GET_DEFAULT(terminalGroupId_, "") };
      inline AddTerminalParams& setTerminalGroupId(string terminalGroupId) { DARABONBA_PTR_SET_VALUE(terminalGroupId_, terminalGroupId) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline AddTerminalParams& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      shared_ptr<string> alias_ {};
      shared_ptr<int32_t> clientType_ {};
      shared_ptr<string> serialNumber_ {};
      shared_ptr<string> terminalGroupId_ {};
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->addTerminalParams_ == nullptr
        && this->mainBizType_ == nullptr; };
    // addTerminalParams Field Functions 
    bool hasAddTerminalParams() const { return this->addTerminalParams_ != nullptr;};
    void deleteAddTerminalParams() { this->addTerminalParams_ = nullptr;};
    inline const vector<AddTerminalsRequest::AddTerminalParams> & getAddTerminalParams() const { DARABONBA_PTR_GET_CONST(addTerminalParams_, vector<AddTerminalsRequest::AddTerminalParams>) };
    inline vector<AddTerminalsRequest::AddTerminalParams> getAddTerminalParams() { DARABONBA_PTR_GET(addTerminalParams_, vector<AddTerminalsRequest::AddTerminalParams>) };
    inline AddTerminalsRequest& setAddTerminalParams(const vector<AddTerminalsRequest::AddTerminalParams> & addTerminalParams) { DARABONBA_PTR_SET_VALUE(addTerminalParams_, addTerminalParams) };
    inline AddTerminalsRequest& setAddTerminalParams(vector<AddTerminalsRequest::AddTerminalParams> && addTerminalParams) { DARABONBA_PTR_SET_RVALUE(addTerminalParams_, addTerminalParams) };


    // mainBizType Field Functions 
    bool hasMainBizType() const { return this->mainBizType_ != nullptr;};
    void deleteMainBizType() { this->mainBizType_ = nullptr;};
    inline string getMainBizType() const { DARABONBA_PTR_GET_DEFAULT(mainBizType_, "") };
    inline AddTerminalsRequest& setMainBizType(string mainBizType) { DARABONBA_PTR_SET_VALUE(mainBizType_, mainBizType) };


  protected:
    shared_ptr<vector<AddTerminalsRequest::AddTerminalParams>> addTerminalParams_ {};
    shared_ptr<string> mainBizType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
