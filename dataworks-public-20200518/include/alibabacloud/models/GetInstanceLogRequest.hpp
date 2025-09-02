// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCELOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCELOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetInstanceLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceHistoryId, instanceHistoryId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceHistoryId, instanceHistoryId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
    };
    GetInstanceLogRequest() = default ;
    GetInstanceLogRequest(const GetInstanceLogRequest &) = default ;
    GetInstanceLogRequest(GetInstanceLogRequest &&) = default ;
    GetInstanceLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceLogRequest() = default ;
    GetInstanceLogRequest& operator=(const GetInstanceLogRequest &) = default ;
    GetInstanceLogRequest& operator=(GetInstanceLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceHistoryId_ != nullptr
        && this->instanceId_ != nullptr && this->projectEnv_ != nullptr; };
    // instanceHistoryId Field Functions 
    bool hasInstanceHistoryId() const { return this->instanceHistoryId_ != nullptr;};
    void deleteInstanceHistoryId() { this->instanceHistoryId_ = nullptr;};
    inline int64_t instanceHistoryId() const { DARABONBA_PTR_GET_DEFAULT(instanceHistoryId_, 0L) };
    inline GetInstanceLogRequest& setInstanceHistoryId(int64_t instanceHistoryId) { DARABONBA_PTR_SET_VALUE(instanceHistoryId_, instanceHistoryId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline GetInstanceLogRequest& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline GetInstanceLogRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


  protected:
    // The historical record number of the instance. You can call the ListInstanceHistory operation to query the ID.
    std::shared_ptr<int64_t> instanceHistoryId_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The environment of the workspace. Valid values: PROD and DEV.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectEnv_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
