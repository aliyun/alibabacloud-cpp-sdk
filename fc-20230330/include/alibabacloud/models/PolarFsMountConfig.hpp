// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POLARFSMOUNTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_POLARFSMOUNTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class PolarFsMountConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PolarFsMountConfig& obj) { 
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(mountDir, mountDir_);
      DARABONBA_PTR_TO_JSON(remoteDir, remoteDir_);
    };
    friend void from_json(const Darabonba::Json& j, PolarFsMountConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(mountDir, mountDir_);
      DARABONBA_PTR_FROM_JSON(remoteDir, remoteDir_);
    };
    PolarFsMountConfig() = default ;
    PolarFsMountConfig(const PolarFsMountConfig &) = default ;
    PolarFsMountConfig(PolarFsMountConfig &&) = default ;
    PolarFsMountConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PolarFsMountConfig() = default ;
    PolarFsMountConfig& operator=(const PolarFsMountConfig &) = default ;
    PolarFsMountConfig& operator=(PolarFsMountConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->mountDir_ == nullptr && this->remoteDir_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline PolarFsMountConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mountDir Field Functions 
    bool hasMountDir() const { return this->mountDir_ != nullptr;};
    void deleteMountDir() { this->mountDir_ = nullptr;};
    inline string getMountDir() const { DARABONBA_PTR_GET_DEFAULT(mountDir_, "") };
    inline PolarFsMountConfig& setMountDir(string mountDir) { DARABONBA_PTR_SET_VALUE(mountDir_, mountDir) };


    // remoteDir Field Functions 
    bool hasRemoteDir() const { return this->remoteDir_ != nullptr;};
    void deleteRemoteDir() { this->remoteDir_ = nullptr;};
    inline string getRemoteDir() const { DARABONBA_PTR_GET_DEFAULT(remoteDir_, "") };
    inline PolarFsMountConfig& setRemoteDir(string remoteDir) { DARABONBA_PTR_SET_VALUE(remoteDir_, remoteDir) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> mountDir_ {};
    shared_ptr<string> remoteDir_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
