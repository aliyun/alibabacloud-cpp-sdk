// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListAppConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAppConfigsResponseBody() = default ;
    ListAppConfigsResponseBody(const ListAppConfigsResponseBody &) = default ;
    ListAppConfigsResponseBody(ListAppConfigsResponseBody &&) = default ;
    ListAppConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppConfigsResponseBody() = default ;
    ListAppConfigsResponseBody& operator=(const ListAppConfigsResponseBody &) = default ;
    ListAppConfigsResponseBody& operator=(ListAppConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(Classify, classify_);
        DARABONBA_ANY_TO_JSON(CustomConfig, customConfig_);
        DARABONBA_PTR_TO_JSON(DeployStatus, deployStatus_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_ANY_TO_JSON(Option, option_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(Classify, classify_);
        DARABONBA_ANY_FROM_JSON(CustomConfig, customConfig_);
        DARABONBA_PTR_FROM_JSON(DeployStatus, deployStatus_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_ANY_FROM_JSON(Option, option_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
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
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->classify_ == nullptr && this->customConfig_ == nullptr && this->deployStatus_ == nullptr && this->gmtModified_ == nullptr && this->name_ == nullptr
        && this->option_ == nullptr && this->resourceType_ == nullptr && this->type_ == nullptr && this->version_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // classify Field Functions 
      bool hasClassify() const { return this->classify_ != nullptr;};
      void deleteClassify() { this->classify_ = nullptr;};
      inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
      inline Data& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


      // customConfig Field Functions 
      bool hasCustomConfig() const { return this->customConfig_ != nullptr;};
      void deleteCustomConfig() { this->customConfig_ = nullptr;};
      inline       const Darabonba::Json & getCustomConfig() const { DARABONBA_GET(customConfig_) };
      Darabonba::Json & getCustomConfig() { DARABONBA_GET(customConfig_) };
      inline Data& setCustomConfig(const Darabonba::Json & customConfig) { DARABONBA_SET_VALUE(customConfig_, customConfig) };
      inline Data& setCustomConfig(Darabonba::Json && customConfig) { DARABONBA_SET_RVALUE(customConfig_, customConfig) };


      // deployStatus Field Functions 
      bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
      void deleteDeployStatus() { this->deployStatus_ = nullptr;};
      inline string getDeployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
      inline Data& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // option Field Functions 
      bool hasOption() const { return this->option_ != nullptr;};
      void deleteOption() { this->option_ = nullptr;};
      inline       const Darabonba::Json & getOption() const { DARABONBA_GET(option_) };
      Darabonba::Json & getOption() { DARABONBA_GET(option_) };
      inline Data& setOption(const Darabonba::Json & option) { DARABONBA_SET_VALUE(option_, option) };
      inline Data& setOption(Darabonba::Json && option) { DARABONBA_SET_RVALUE(option_, option) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Data& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline Data& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // App ID。
      shared_ptr<string> appId_ {};
      // The classification.
      shared_ptr<string> classify_ {};
      // The configuration details.
      Darabonba::Json customConfig_ {};
      // The publish status.
      shared_ptr<string> deployStatus_ {};
      // The last modification time.
      shared_ptr<string> gmtModified_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The preset options.
      Darabonba::Json option_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
      // The type.
      shared_ptr<string> type_ {};
      // The version number.
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAppConfigsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAppConfigsResponseBody::Data>) };
    inline vector<ListAppConfigsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAppConfigsResponseBody::Data>) };
    inline ListAppConfigsResponseBody& setData(const vector<ListAppConfigsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAppConfigsResponseBody& setData(vector<ListAppConfigsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<vector<ListAppConfigsResponseBody::Data>> data_ {};
    // The ID assigned by the backend to uniquely identify a request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
