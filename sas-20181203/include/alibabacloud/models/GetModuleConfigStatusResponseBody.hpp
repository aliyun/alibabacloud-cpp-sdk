// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODULECONFIGSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMODULECONFIGSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetModuleConfigStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModuleConfigStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetModuleConfigStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetModuleConfigStatusResponseBody() = default ;
    GetModuleConfigStatusResponseBody(const GetModuleConfigStatusResponseBody &) = default ;
    GetModuleConfigStatusResponseBody(GetModuleConfigStatusResponseBody &&) = default ;
    GetModuleConfigStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModuleConfigStatusResponseBody() = default ;
    GetModuleConfigStatusResponseBody& operator=(const GetModuleConfigStatusResponseBody &) = default ;
    GetModuleConfigStatusResponseBody& operator=(GetModuleConfigStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ModuleConfigResults, moduleConfigResults_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ModuleConfigResults, moduleConfigResults_);
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
      class ModuleConfigResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModuleConfigResults& obj) { 
          DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
          DARABONBA_PTR_TO_JSON(Pass, pass_);
        };
        friend void from_json(const Darabonba::Json& j, ModuleConfigResults& obj) { 
          DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
          DARABONBA_PTR_FROM_JSON(Pass, pass_);
        };
        ModuleConfigResults() = default ;
        ModuleConfigResults(const ModuleConfigResults &) = default ;
        ModuleConfigResults(ModuleConfigResults &&) = default ;
        ModuleConfigResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModuleConfigResults() = default ;
        ModuleConfigResults& operator=(const ModuleConfigResults &) = default ;
        ModuleConfigResults& operator=(ModuleConfigResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->moduleName_ == nullptr
        && this->pass_ == nullptr; };
        // moduleName Field Functions 
        bool hasModuleName() const { return this->moduleName_ != nullptr;};
        void deleteModuleName() { this->moduleName_ = nullptr;};
        inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
        inline ModuleConfigResults& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


        // pass Field Functions 
        bool hasPass() const { return this->pass_ != nullptr;};
        void deletePass() { this->pass_ = nullptr;};
        inline bool getPass() const { DARABONBA_PTR_GET_DEFAULT(pass_, false) };
        inline ModuleConfigResults& setPass(bool pass) { DARABONBA_PTR_SET_VALUE(pass_, pass) };


      protected:
        // The name of the check item. Valid values:
        // 
        // *   **Ransom**: The anti-ransomware policy is enabled.
        // *   **WebLock**: The web tamper proofing feature is enabled.
        // *   **Rasp**: Applications are added to the application protection feature.
        // *   **Image**: The container images that can be scanned are specified.
        // *   **Virus**: The periodic virus scan policy is enabled.
        shared_ptr<string> moduleName_ {};
        // Indicates whether the service module passed the status check. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> pass_ {};
      };

      virtual bool empty() const override { return this->moduleConfigResults_ == nullptr; };
      // moduleConfigResults Field Functions 
      bool hasModuleConfigResults() const { return this->moduleConfigResults_ != nullptr;};
      void deleteModuleConfigResults() { this->moduleConfigResults_ = nullptr;};
      inline const vector<Data::ModuleConfigResults> & getModuleConfigResults() const { DARABONBA_PTR_GET_CONST(moduleConfigResults_, vector<Data::ModuleConfigResults>) };
      inline vector<Data::ModuleConfigResults> getModuleConfigResults() { DARABONBA_PTR_GET(moduleConfigResults_, vector<Data::ModuleConfigResults>) };
      inline Data& setModuleConfigResults(const vector<Data::ModuleConfigResults> & moduleConfigResults) { DARABONBA_PTR_SET_VALUE(moduleConfigResults_, moduleConfigResults) };
      inline Data& setModuleConfigResults(vector<Data::ModuleConfigResults> && moduleConfigResults) { DARABONBA_PTR_SET_RVALUE(moduleConfigResults_, moduleConfigResults) };


    protected:
      // The check results of the service modules.
      shared_ptr<vector<Data::ModuleConfigResults>> moduleConfigResults_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetModuleConfigStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetModuleConfigStatusResponseBody::Data) };
    inline GetModuleConfigStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetModuleConfigStatusResponseBody::Data) };
    inline GetModuleConfigStatusResponseBody& setData(const GetModuleConfigStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetModuleConfigStatusResponseBody& setData(GetModuleConfigStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetModuleConfigStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<GetModuleConfigStatusResponseBody::Data> data_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
