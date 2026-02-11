// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCENARIORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCENARIORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class ListScenarioResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScenarioResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ArmsScenarios, armsScenarios_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListScenarioResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ArmsScenarios, armsScenarios_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListScenarioResponseBody() = default ;
    ListScenarioResponseBody(const ListScenarioResponseBody &) = default ;
    ListScenarioResponseBody(ListScenarioResponseBody &&) = default ;
    ListScenarioResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScenarioResponseBody() = default ;
    ListScenarioResponseBody& operator=(const ListScenarioResponseBody &) = default ;
    ListScenarioResponseBody& operator=(ListScenarioResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ArmsScenarios : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ArmsScenarios& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Extensions, extensions_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Sign, sign_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, ArmsScenarios& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Extensions, extensions_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Sign, sign_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      ArmsScenarios() = default ;
      ArmsScenarios(const ArmsScenarios &) = default ;
      ArmsScenarios(ArmsScenarios &&) = default ;
      ArmsScenarios(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ArmsScenarios() = default ;
      ArmsScenarios& operator=(const ArmsScenarios &) = default ;
      ArmsScenarios& operator=(ArmsScenarios &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->createTime_ == nullptr && this->extensions_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr
        && this->sign_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline ArmsScenarios& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ArmsScenarios& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // extensions Field Functions 
      bool hasExtensions() const { return this->extensions_ != nullptr;};
      void deleteExtensions() { this->extensions_ = nullptr;};
      inline string getExtensions() const { DARABONBA_PTR_GET_DEFAULT(extensions_, "") };
      inline ArmsScenarios& setExtensions(string extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ArmsScenarios& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ArmsScenarios& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ArmsScenarios& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // sign Field Functions 
      bool hasSign() const { return this->sign_ != nullptr;};
      void deleteSign() { this->sign_ = nullptr;};
      inline string getSign() const { DARABONBA_PTR_GET_DEFAULT(sign_, "") };
      inline ArmsScenarios& setSign(string sign) { DARABONBA_PTR_SET_VALUE(sign_, sign) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline ArmsScenarios& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline ArmsScenarios& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> extensions_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> sign_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->armsScenarios_ == nullptr
        && this->requestId_ == nullptr; };
    // armsScenarios Field Functions 
    bool hasArmsScenarios() const { return this->armsScenarios_ != nullptr;};
    void deleteArmsScenarios() { this->armsScenarios_ = nullptr;};
    inline const vector<ListScenarioResponseBody::ArmsScenarios> & getArmsScenarios() const { DARABONBA_PTR_GET_CONST(armsScenarios_, vector<ListScenarioResponseBody::ArmsScenarios>) };
    inline vector<ListScenarioResponseBody::ArmsScenarios> getArmsScenarios() { DARABONBA_PTR_GET(armsScenarios_, vector<ListScenarioResponseBody::ArmsScenarios>) };
    inline ListScenarioResponseBody& setArmsScenarios(const vector<ListScenarioResponseBody::ArmsScenarios> & armsScenarios) { DARABONBA_PTR_SET_VALUE(armsScenarios_, armsScenarios) };
    inline ListScenarioResponseBody& setArmsScenarios(vector<ListScenarioResponseBody::ArmsScenarios> && armsScenarios) { DARABONBA_PTR_SET_RVALUE(armsScenarios_, armsScenarios) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScenarioResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListScenarioResponseBody::ArmsScenarios>> armsScenarios_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
