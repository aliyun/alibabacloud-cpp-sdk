// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSOFTWAREDETAILRESPONSEBODYPROPERTYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSOFTWAREDETAILRESPONSEBODYPROPERTYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertySoftwareDetailResponseBodyPropertys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertySoftwareDetailResponseBodyPropertys& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(InstallTime, installTime_);
      DARABONBA_PTR_TO_JSON(InstallTimeDt, installTimeDt_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertySoftwareDetailResponseBodyPropertys& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(InstallTime, installTime_);
      DARABONBA_PTR_FROM_JSON(InstallTimeDt, installTimeDt_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribePropertySoftwareDetailResponseBodyPropertys() = default ;
    DescribePropertySoftwareDetailResponseBodyPropertys(const DescribePropertySoftwareDetailResponseBodyPropertys &) = default ;
    DescribePropertySoftwareDetailResponseBodyPropertys(DescribePropertySoftwareDetailResponseBodyPropertys &&) = default ;
    DescribePropertySoftwareDetailResponseBodyPropertys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertySoftwareDetailResponseBodyPropertys() = default ;
    DescribePropertySoftwareDetailResponseBodyPropertys& operator=(const DescribePropertySoftwareDetailResponseBodyPropertys &) = default ;
    DescribePropertySoftwareDetailResponseBodyPropertys& operator=(DescribePropertySoftwareDetailResponseBodyPropertys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTimestamp_ == nullptr
        && return this->installTime_ == nullptr && return this->installTimeDt_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr
        && return this->intranetIp_ == nullptr && return this->ip_ == nullptr && return this->name_ == nullptr && return this->path_ == nullptr && return this->uuid_ == nullptr
        && return this->version_ == nullptr; };
    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribePropertySoftwareDetailResponseBodyPropertys& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // installTime Field Functions 
    bool hasInstallTime() const { return this->installTime_ != nullptr;};
    void deleteInstallTime() { this->installTime_ = nullptr;};
    inline string installTime() const { DARABONBA_PTR_GET_DEFAULT(installTime_, "") };
    inline DescribePropertySoftwareDetailResponseBodyPropertys& setInstallTime(string installTime) { DARABONBA_PTR_SET_VALUE(installTime_, installTime) };


    // installTimeDt Field Functions 
    bool hasInstallTimeDt() const { return this->installTimeDt_ != nullptr;};
    void deleteInstallTimeDt() { this->installTimeDt_ = nullptr;};
    inline int64_t installTimeDt() const { DARABONBA_PTR_GET_DEFAULT(installTimeDt_, 0L) };
    inline DescribePropertySoftwareDetailResponseBodyPropertys& setInstallTimeDt(int64_t installTimeDt) { DARABONBA_PTR_SET_VALUE(installTimeDt_, installTimeDt) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribePropertySoftwareDetailResponseBodyPropertys& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribePropertySoftwareDetailResponseBodyPropertys& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribePropertySoftwareDetailResponseBodyPropertys& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribePropertySoftwareDetailResponseBodyPropertys& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribePropertySoftwareDetailResponseBodyPropertys& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePropertySoftwareDetailResponseBodyPropertys& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribePropertySoftwareDetailResponseBodyPropertys& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribePropertySoftwareDetailResponseBodyPropertys& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribePropertySoftwareDetailResponseBodyPropertys& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The timestamp generated when the last asset fingerprint collection is performed. Unit: milliseconds.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The time at which the software is installed.
    std::shared_ptr<string> installTime_ = nullptr;
    // The timestamp generated when the software is installed. Unit: milliseconds.
    std::shared_ptr<int64_t> installTimeDt_ = nullptr;
    // The ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The IP addresses of the server.
    std::shared_ptr<string> ip_ = nullptr;
    // The name of the software.
    std::shared_ptr<string> name_ = nullptr;
    // The installation path of the software.
    std::shared_ptr<string> path_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
    // The version of the software.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
