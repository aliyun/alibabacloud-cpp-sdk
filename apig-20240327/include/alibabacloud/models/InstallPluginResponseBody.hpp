// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLPLUGINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSTALLPLUGINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class InstallPluginResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallPluginResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InstallPluginResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    InstallPluginResponseBody() = default ;
    InstallPluginResponseBody(const InstallPluginResponseBody &) = default ;
    InstallPluginResponseBody(InstallPluginResponseBody &&) = default ;
    InstallPluginResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallPluginResponseBody() = default ;
    InstallPluginResponseBody& operator=(const InstallPluginResponseBody &) = default ;
    InstallPluginResponseBody& operator=(InstallPluginResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(installPluginResults, installPluginResults_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(installPluginResults, installPluginResults_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstallPluginResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstallPluginResults& obj) { 
          DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(pluginId, pluginId_);
        };
        friend void from_json(const Darabonba::Json& j, InstallPluginResults& obj) { 
          DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(pluginId, pluginId_);
        };
        InstallPluginResults() = default ;
        InstallPluginResults(const InstallPluginResults &) = default ;
        InstallPluginResults(InstallPluginResults &&) = default ;
        InstallPluginResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstallPluginResults() = default ;
        InstallPluginResults& operator=(const InstallPluginResults &) = default ;
        InstallPluginResults& operator=(InstallPluginResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->pluginId_ == nullptr; };
        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
        inline InstallPluginResults& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // pluginId Field Functions 
        bool hasPluginId() const { return this->pluginId_ != nullptr;};
        void deletePluginId() { this->pluginId_ = nullptr;};
        inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
        inline InstallPluginResults& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


      protected:
        // The gateway ID.
        shared_ptr<string> gatewayId_ {};
        // The plug-in ID.
        shared_ptr<string> pluginId_ {};
      };

      virtual bool empty() const override { return this->installPluginResults_ == nullptr; };
      // installPluginResults Field Functions 
      bool hasInstallPluginResults() const { return this->installPluginResults_ != nullptr;};
      void deleteInstallPluginResults() { this->installPluginResults_ = nullptr;};
      inline const vector<Data::InstallPluginResults> & getInstallPluginResults() const { DARABONBA_PTR_GET_CONST(installPluginResults_, vector<Data::InstallPluginResults>) };
      inline vector<Data::InstallPluginResults> getInstallPluginResults() { DARABONBA_PTR_GET(installPluginResults_, vector<Data::InstallPluginResults>) };
      inline Data& setInstallPluginResults(const vector<Data::InstallPluginResults> & installPluginResults) { DARABONBA_PTR_SET_VALUE(installPluginResults_, installPluginResults) };
      inline Data& setInstallPluginResults(vector<Data::InstallPluginResults> && installPluginResults) { DARABONBA_PTR_SET_RVALUE(installPluginResults_, installPluginResults) };


    protected:
      // The installation result.
      shared_ptr<vector<Data::InstallPluginResults>> installPluginResults_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InstallPluginResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const InstallPluginResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, InstallPluginResponseBody::Data) };
    inline InstallPluginResponseBody::Data getData() { DARABONBA_PTR_GET(data_, InstallPluginResponseBody::Data) };
    inline InstallPluginResponseBody& setData(const InstallPluginResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline InstallPluginResponseBody& setData(InstallPluginResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InstallPluginResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InstallPluginResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The response payload.
    shared_ptr<InstallPluginResponseBody::Data> data_ {};
    // The status message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
