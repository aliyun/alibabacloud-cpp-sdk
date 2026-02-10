// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODULECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODULECONFIGRESPONSEBODY_HPP_
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
  class DescribeModuleConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModuleConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(ModuleConfigList, moduleConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModuleConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(ModuleConfigList, moduleConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeModuleConfigResponseBody() = default ;
    DescribeModuleConfigResponseBody(const DescribeModuleConfigResponseBody &) = default ;
    DescribeModuleConfigResponseBody(DescribeModuleConfigResponseBody &&) = default ;
    DescribeModuleConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModuleConfigResponseBody() = default ;
    DescribeModuleConfigResponseBody& operator=(const DescribeModuleConfigResponseBody &) = default ;
    DescribeModuleConfigResponseBody& operator=(DescribeModuleConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModuleConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModuleConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigName, configName_);
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
      };
      friend void from_json(const Darabonba::Json& j, ModuleConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigName, configName_);
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
      };
      ModuleConfigList() = default ;
      ModuleConfigList(const ModuleConfigList &) = default ;
      ModuleConfigList(ModuleConfigList &&) = default ;
      ModuleConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModuleConfigList() = default ;
      ModuleConfigList& operator=(const ModuleConfigList &) = default ;
      ModuleConfigList& operator=(ModuleConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->groupId_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->ip_ == nullptr && this->region_ == nullptr && this->uuid_ == nullptr; };
        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline int32_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
        inline Items& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Items& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline Items& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline Items& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline Items& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline Items& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      protected:
        // The ID of the server group.
        shared_ptr<int32_t> groupId_ {};
        // The ID of the server.
        shared_ptr<string> instanceId_ {};
        // The name of the server.
        shared_ptr<string> instanceName_ {};
        // The IP address of the server.
        shared_ptr<string> ip_ {};
        // The region in which the server resides.
        shared_ptr<string> region_ {};
        // The UUID of the server.
        shared_ptr<string> uuid_ {};
      };

      virtual bool empty() const override { return this->configName_ == nullptr
        && this->items_ == nullptr && this->moduleName_ == nullptr; };
      // configName Field Functions 
      bool hasConfigName() const { return this->configName_ != nullptr;};
      void deleteConfigName() { this->configName_ = nullptr;};
      inline string getConfigName() const { DARABONBA_PTR_GET_DEFAULT(configName_, "") };
      inline ModuleConfigList& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<ModuleConfigList::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ModuleConfigList::Items>) };
      inline vector<ModuleConfigList::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ModuleConfigList::Items>) };
      inline ModuleConfigList& setItems(const vector<ModuleConfigList::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline ModuleConfigList& setItems(vector<ModuleConfigList::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // moduleName Field Functions 
      bool hasModuleName() const { return this->moduleName_ != nullptr;};
      void deleteModuleName() { this->moduleName_ = nullptr;};
      inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
      inline ModuleConfigList& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    protected:
      // The name of the configuration.
      shared_ptr<string> configName_ {};
      // An array that consists of the configuration items.
      shared_ptr<vector<ModuleConfigList::Items>> items_ {};
      // The name of the module.
      shared_ptr<string> moduleName_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->httpStatusCode_ == nullptr && this->moduleConfigList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeModuleConfigResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeModuleConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // moduleConfigList Field Functions 
    bool hasModuleConfigList() const { return this->moduleConfigList_ != nullptr;};
    void deleteModuleConfigList() { this->moduleConfigList_ = nullptr;};
    inline const vector<DescribeModuleConfigResponseBody::ModuleConfigList> & getModuleConfigList() const { DARABONBA_PTR_GET_CONST(moduleConfigList_, vector<DescribeModuleConfigResponseBody::ModuleConfigList>) };
    inline vector<DescribeModuleConfigResponseBody::ModuleConfigList> getModuleConfigList() { DARABONBA_PTR_GET(moduleConfigList_, vector<DescribeModuleConfigResponseBody::ModuleConfigList>) };
    inline DescribeModuleConfigResponseBody& setModuleConfigList(const vector<DescribeModuleConfigResponseBody::ModuleConfigList> & moduleConfigList) { DARABONBA_PTR_SET_VALUE(moduleConfigList_, moduleConfigList) };
    inline DescribeModuleConfigResponseBody& setModuleConfigList(vector<DescribeModuleConfigResponseBody::ModuleConfigList> && moduleConfigList) { DARABONBA_PTR_SET_RVALUE(moduleConfigList_, moduleConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeModuleConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeModuleConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The number of configurations for the module.
    shared_ptr<int32_t> count_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // An array that consists of the configurations of the module.
    shared_ptr<vector<DescribeModuleConfigResponseBody::ModuleConfigList>> moduleConfigList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
