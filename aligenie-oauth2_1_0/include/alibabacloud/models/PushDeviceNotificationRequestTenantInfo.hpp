// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHDEVICENOTIFICATIONREQUESTTENANTINFO_HPP_
#define ALIBABACLOUD_MODELS_PUSHDEVICENOTIFICATIONREQUESTTENANTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{
namespace Models
{
  class PushDeviceNotificationRequestTenantInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushDeviceNotificationRequestTenantInfo& obj) { 
      DARABONBA_PTR_TO_JSON(SubjectId, subjectId_);
    };
    friend void from_json(const Darabonba::Json& j, PushDeviceNotificationRequestTenantInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(SubjectId, subjectId_);
    };
    PushDeviceNotificationRequestTenantInfo() = default ;
    PushDeviceNotificationRequestTenantInfo(const PushDeviceNotificationRequestTenantInfo &) = default ;
    PushDeviceNotificationRequestTenantInfo(PushDeviceNotificationRequestTenantInfo &&) = default ;
    PushDeviceNotificationRequestTenantInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushDeviceNotificationRequestTenantInfo() = default ;
    PushDeviceNotificationRequestTenantInfo& operator=(const PushDeviceNotificationRequestTenantInfo &) = default ;
    PushDeviceNotificationRequestTenantInfo& operator=(PushDeviceNotificationRequestTenantInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->subjectId_ != nullptr; };
    // subjectId Field Functions 
    bool hasSubjectId() const { return this->subjectId_ != nullptr;};
    void deleteSubjectId() { this->subjectId_ = nullptr;};
    inline string subjectId() const { DARABONBA_PTR_GET_DEFAULT(subjectId_, "") };
    inline PushDeviceNotificationRequestTenantInfo& setSubjectId(string subjectId) { DARABONBA_PTR_SET_VALUE(subjectId_, subjectId) };


  protected:
    std::shared_ptr<string> subjectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0
#endif
