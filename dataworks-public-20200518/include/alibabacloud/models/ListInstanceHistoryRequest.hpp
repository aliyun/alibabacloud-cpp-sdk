// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListInstanceHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
    };
    ListInstanceHistoryRequest() = default ;
    ListInstanceHistoryRequest(const ListInstanceHistoryRequest &) = default ;
    ListInstanceHistoryRequest(ListInstanceHistoryRequest &&) = default ;
    ListInstanceHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceHistoryRequest() = default ;
    ListInstanceHistoryRequest& operator=(const ListInstanceHistoryRequest &) = default ;
    ListInstanceHistoryRequest& operator=(ListInstanceHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->projectEnv_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline ListInstanceHistoryRequest& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline ListInstanceHistoryRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


  protected:
    // The instance ID. You can call the ListInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The environment of the workspace. Valid values: PROD and DEV. By default, data of instances in the production environment is queried.
    std::shared_ptr<string> projectEnv_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
