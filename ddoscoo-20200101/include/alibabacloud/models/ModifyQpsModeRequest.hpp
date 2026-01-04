// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYQPSMODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYQPSMODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyQpsModeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyQpsModeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyQpsModeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
    };
    ModifyQpsModeRequest() = default ;
    ModifyQpsModeRequest(const ModifyQpsModeRequest &) = default ;
    ModifyQpsModeRequest(ModifyQpsModeRequest &&) = default ;
    ModifyQpsModeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyQpsModeRequest() = default ;
    ModifyQpsModeRequest& operator=(const ModifyQpsModeRequest &) = default ;
    ModifyQpsModeRequest& operator=(ModifyQpsModeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->mode_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyQpsModeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ModifyQpsModeRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


  protected:
    // The region ID of the Anti-DDoS Pro instance.
    // 
    // >  You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all instances.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The metering method of QPS. Valid values:
    // 
    // *   **month**: monthly 95th percentile QPS.
    // *   **day**: daily 95th percentile QPS.
    // 
    // This parameter is required.
    shared_ptr<string> mode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
