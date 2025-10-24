// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECLOUDPHONENODERESPONSEBODYNODEINFOSINSTANCEINFOS_HPP_
#define ALIBABACLOUD_MODELS_CHANGECLOUDPHONENODERESPONSEBODYNODEINFOSINSTANCEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PhoneDataVolume, phoneDataVolume_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PhoneDataVolume, phoneDataVolume_);
    };
    ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos() = default ;
    ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos(const ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos &) = default ;
    ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos(ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos &&) = default ;
    ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos() = default ;
    ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos& operator=(const ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos &) = default ;
    ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos& operator=(ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->phoneDataVolume_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // phoneDataVolume Field Functions 
    bool hasPhoneDataVolume() const { return this->phoneDataVolume_ != nullptr;};
    void deletePhoneDataVolume() { this->phoneDataVolume_ = nullptr;};
    inline int32_t phoneDataVolume() const { DARABONBA_PTR_GET_DEFAULT(phoneDataVolume_, 0) };
    inline ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos& setPhoneDataVolume(int32_t phoneDataVolume) { DARABONBA_PTR_SET_VALUE(phoneDataVolume_, phoneDataVolume) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> phoneDataVolume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
