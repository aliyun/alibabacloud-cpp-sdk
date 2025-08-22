// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCENARIORESPONSEBODYARMSSCENARIOS_HPP_
#define ALIBABACLOUD_MODELS_LISTSCENARIORESPONSEBODYARMSSCENARIOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListScenarioResponseBodyArmsScenarios : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScenarioResponseBodyArmsScenarios& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListScenarioResponseBodyArmsScenarios& obj) { 
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
    ListScenarioResponseBodyArmsScenarios() = default ;
    ListScenarioResponseBodyArmsScenarios(const ListScenarioResponseBodyArmsScenarios &) = default ;
    ListScenarioResponseBodyArmsScenarios(ListScenarioResponseBodyArmsScenarios &&) = default ;
    ListScenarioResponseBodyArmsScenarios(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScenarioResponseBodyArmsScenarios() = default ;
    ListScenarioResponseBodyArmsScenarios& operator=(const ListScenarioResponseBodyArmsScenarios &) = default ;
    ListScenarioResponseBodyArmsScenarios& operator=(ListScenarioResponseBodyArmsScenarios &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->createTime_ != nullptr && this->extensions_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->regionId_ != nullptr
        && this->sign_ != nullptr && this->updateTime_ != nullptr && this->userId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListScenarioResponseBodyArmsScenarios& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListScenarioResponseBodyArmsScenarios& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // extensions Field Functions 
    bool hasExtensions() const { return this->extensions_ != nullptr;};
    void deleteExtensions() { this->extensions_ = nullptr;};
    inline string extensions() const { DARABONBA_PTR_GET_DEFAULT(extensions_, "") };
    inline ListScenarioResponseBodyArmsScenarios& setExtensions(string extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListScenarioResponseBodyArmsScenarios& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListScenarioResponseBodyArmsScenarios& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListScenarioResponseBodyArmsScenarios& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sign Field Functions 
    bool hasSign() const { return this->sign_ != nullptr;};
    void deleteSign() { this->sign_ = nullptr;};
    inline string sign() const { DARABONBA_PTR_GET_DEFAULT(sign_, "") };
    inline ListScenarioResponseBodyArmsScenarios& setSign(string sign) { DARABONBA_PTR_SET_VALUE(sign_, sign) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListScenarioResponseBodyArmsScenarios& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListScenarioResponseBodyArmsScenarios& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The time when the business monitoring job was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The extended information. The value is a JSON string.
    std::shared_ptr<string> extensions_ = nullptr;
    // The ID of the business monitoring job.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the business monitoring job.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The code of the business monitoring job.
    std::shared_ptr<string> sign_ = nullptr;
    // The time when the business monitoring job was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
