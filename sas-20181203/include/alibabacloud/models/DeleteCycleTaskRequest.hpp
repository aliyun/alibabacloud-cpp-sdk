// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECYCLETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECYCLETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteCycleTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCycleTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCycleTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
    };
    DeleteCycleTaskRequest() = default ;
    DeleteCycleTaskRequest(const DeleteCycleTaskRequest &) = default ;
    DeleteCycleTaskRequest(DeleteCycleTaskRequest &&) = default ;
    DeleteCycleTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCycleTaskRequest() = default ;
    DeleteCycleTaskRequest& operator=(const DeleteCycleTaskRequest &) = default ;
    DeleteCycleTaskRequest& operator=(DeleteCycleTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configId_ != nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline DeleteCycleTaskRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


  protected:
    // The ID of the task configuration.
    // 
    // >  You can call the [DescribeCycleTaskList](~~DescribeCycleTaskList~~) operation to query the IDs of task configurations.
    // 
    // This parameter is required.
    std::shared_ptr<string> configId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
