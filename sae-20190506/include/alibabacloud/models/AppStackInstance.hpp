// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPSTACKINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_APPSTACKINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class AppStackInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppStackInstance& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, AppStackInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    AppStackInstance() = default ;
    AppStackInstance(const AppStackInstance &) = default ;
    AppStackInstance(AppStackInstance &&) = default ;
    AppStackInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppStackInstance() = default ;
    AppStackInstance& operator=(const AppStackInstance &) = default ;
    AppStackInstance& operator=(AppStackInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Parameters() = default ;
      Parameters(const Parameters &) = default ;
      Parameters(Parameters &&) = default ;
      Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameters() = default ;
      Parameters& operator=(const Parameters &) = default ;
      Parameters& operator=(Parameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Parameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Parameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> value_ {};
    };

    class Endpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      };
      friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(Address, address_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      };
      Endpoints() = default ;
      Endpoints(const Endpoints &) = default ;
      Endpoints(Endpoints &&) = default ;
      Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Endpoints() = default ;
      Endpoints& operator=(const Endpoints &) = default ;
      Endpoints& operator=(Endpoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->address_ == nullptr
        && this->name_ == nullptr && this->protocol_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline Endpoints& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Endpoints& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Endpoints& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    protected:
      shared_ptr<string> address_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> protocol_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->endpoints_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->parameters_ == nullptr && this->stackId_ == nullptr
        && this->status_ == nullptr && this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline AppStackInstance& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<AppStackInstance::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<AppStackInstance::Endpoints>) };
    inline vector<AppStackInstance::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<AppStackInstance::Endpoints>) };
    inline AppStackInstance& setEndpoints(const vector<AppStackInstance::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline AppStackInstance& setEndpoints(vector<AppStackInstance::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AppStackInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline AppStackInstance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<AppStackInstance::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<AppStackInstance::Parameters>) };
    inline vector<AppStackInstance::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<AppStackInstance::Parameters>) };
    inline AppStackInstance& setParameters(const vector<AppStackInstance::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline AppStackInstance& setParameters(vector<AppStackInstance::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline AppStackInstance& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AppStackInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline AppStackInstance& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    shared_ptr<int64_t> createTime_ {};
    shared_ptr<vector<AppStackInstance::Endpoints>> endpoints_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> instanceName_ {};
    shared_ptr<vector<AppStackInstance::Parameters>> parameters_ {};
    shared_ptr<string> stackId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<int64_t> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
