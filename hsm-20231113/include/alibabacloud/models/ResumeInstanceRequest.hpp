// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESUMEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class ResumeInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResumeInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ResumeInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ResumeInstanceRequest() = default ;
    ResumeInstanceRequest(const ResumeInstanceRequest &) = default ;
    ResumeInstanceRequest(ResumeInstanceRequest &&) = default ;
    ResumeInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResumeInstanceRequest() = default ;
    ResumeInstanceRequest& operator=(const ResumeInstanceRequest &) = default ;
    ResumeInstanceRequest& operator=(ResumeInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ResumeInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The ID of the HSM.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
