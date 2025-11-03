// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYPROCDETAILRESPONSEBODYPROPERTYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYPROCDETAILRESPONSEBODYPROPERTYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyProcDetailResponseBodyPropertys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyProcDetailResponseBodyPropertys& obj) { 
      DARABONBA_PTR_TO_JSON(Cmdline, cmdline_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(EuidName, euidName_);
      DARABONBA_PTR_TO_JSON(FileHash, fileHash_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(IsPackage, isPackage_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(Pname, pname_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StartTimeDt, startTimeDt_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(User, user_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyProcDetailResponseBodyPropertys& obj) { 
      DARABONBA_PTR_FROM_JSON(Cmdline, cmdline_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(EuidName, euidName_);
      DARABONBA_PTR_FROM_JSON(FileHash, fileHash_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(IsPackage, isPackage_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(Pname, pname_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StartTimeDt, startTimeDt_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(User, user_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribePropertyProcDetailResponseBodyPropertys() = default ;
    DescribePropertyProcDetailResponseBodyPropertys(const DescribePropertyProcDetailResponseBodyPropertys &) = default ;
    DescribePropertyProcDetailResponseBodyPropertys(DescribePropertyProcDetailResponseBodyPropertys &&) = default ;
    DescribePropertyProcDetailResponseBodyPropertys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyProcDetailResponseBodyPropertys() = default ;
    DescribePropertyProcDetailResponseBodyPropertys& operator=(const DescribePropertyProcDetailResponseBodyPropertys &) = default ;
    DescribePropertyProcDetailResponseBodyPropertys& operator=(DescribePropertyProcDetailResponseBodyPropertys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cmdline_ == nullptr
        && return this->createTimestamp_ == nullptr && return this->euidName_ == nullptr && return this->fileHash_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr
        && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->isPackage_ == nullptr && return this->md5_ == nullptr && return this->name_ == nullptr
        && return this->path_ == nullptr && return this->pid_ == nullptr && return this->pname_ == nullptr && return this->startTime_ == nullptr && return this->startTimeDt_ == nullptr
        && return this->state_ == nullptr && return this->user_ == nullptr && return this->uuid_ == nullptr; };
    // cmdline Field Functions 
    bool hasCmdline() const { return this->cmdline_ != nullptr;};
    void deleteCmdline() { this->cmdline_ = nullptr;};
    inline string cmdline() const { DARABONBA_PTR_GET_DEFAULT(cmdline_, "") };
    inline DescribePropertyProcDetailResponseBodyPropertys& setCmdline(string cmdline) { DARABONBA_PTR_SET_VALUE(cmdline_, cmdline) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribePropertyProcDetailResponseBodyPropertys& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // euidName Field Functions 
    bool hasEuidName() const { return this->euidName_ != nullptr;};
    void deleteEuidName() { this->euidName_ = nullptr;};
    inline string euidName() const { DARABONBA_PTR_GET_DEFAULT(euidName_, "") };
    inline DescribePropertyProcDetailResponseBodyPropertys& setEuidName(string euidName) { DARABONBA_PTR_SET_VALUE(euidName_, euidName) };


    // fileHash Field Functions 
    bool hasFileHash() const { return this->fileHash_ != nullptr;};
    void deleteFileHash() { this->fileHash_ = nullptr;};
    inline string fileHash() const { DARABONBA_PTR_GET_DEFAULT(fileHash_, "") };
    inline DescribePropertyProcDetailResponseBodyPropertys& setFileHash(string fileHash) { DARABONBA_PTR_SET_VALUE(fileHash_, fileHash) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribePropertyProcDetailResponseBodyPropertys& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribePropertyProcDetailResponseBodyPropertys& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribePropertyProcDetailResponseBodyPropertys& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribePropertyProcDetailResponseBodyPropertys& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // isPackage Field Functions 
    bool hasIsPackage() const { return this->isPackage_ != nullptr;};
    void deleteIsPackage() { this->isPackage_ = nullptr;};
    inline int32_t isPackage() const { DARABONBA_PTR_GET_DEFAULT(isPackage_, 0) };
    inline DescribePropertyProcDetailResponseBodyPropertys& setIsPackage(int32_t isPackage) { DARABONBA_PTR_SET_VALUE(isPackage_, isPackage) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline DescribePropertyProcDetailResponseBodyPropertys& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePropertyProcDetailResponseBodyPropertys& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribePropertyProcDetailResponseBodyPropertys& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline DescribePropertyProcDetailResponseBodyPropertys& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // pname Field Functions 
    bool hasPname() const { return this->pname_ != nullptr;};
    void deletePname() { this->pname_ = nullptr;};
    inline string pname() const { DARABONBA_PTR_GET_DEFAULT(pname_, "") };
    inline DescribePropertyProcDetailResponseBodyPropertys& setPname(string pname) { DARABONBA_PTR_SET_VALUE(pname_, pname) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribePropertyProcDetailResponseBodyPropertys& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // startTimeDt Field Functions 
    bool hasStartTimeDt() const { return this->startTimeDt_ != nullptr;};
    void deleteStartTimeDt() { this->startTimeDt_ = nullptr;};
    inline int64_t startTimeDt() const { DARABONBA_PTR_GET_DEFAULT(startTimeDt_, 0L) };
    inline DescribePropertyProcDetailResponseBodyPropertys& setStartTimeDt(int64_t startTimeDt) { DARABONBA_PTR_SET_VALUE(startTimeDt_, startTimeDt) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribePropertyProcDetailResponseBodyPropertys& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribePropertyProcDetailResponseBodyPropertys& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribePropertyProcDetailResponseBodyPropertys& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The startup parameter of the process.
    std::shared_ptr<string> cmdline_ = nullptr;
    // The timestamp of last data collection. Unit: milliseconds.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The permission that is required to run the process.
    std::shared_ptr<string> euidName_ = nullptr;
    // Process file hash information.
    std::shared_ptr<string> fileHash_ = nullptr;
    // The ID of the server that is associated with the process.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the server that is associated with the process.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // Indicates whether the process is a package installation process. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> isPackage_ = nullptr;
    // The MD5 hash value of the process file.
    std::shared_ptr<string> md5_ = nullptr;
    // The name of the process.
    std::shared_ptr<string> name_ = nullptr;
    // The path of the process.
    std::shared_ptr<string> path_ = nullptr;
    // The ID of the process.
    std::shared_ptr<string> pid_ = nullptr;
    // The name of the parent process to which the process belongs.
    std::shared_ptr<string> pname_ = nullptr;
    // The time when the process starts.
    std::shared_ptr<string> startTime_ = nullptr;
    // The timestamp when the process starts. Unit: milliseconds.
    std::shared_ptr<int64_t> startTimeDt_ = nullptr;
    // The status of the process.
    std::shared_ptr<string> state_ = nullptr;
    // The user who runs the process.
    std::shared_ptr<string> user_ = nullptr;
    // The UUID of the server that is associated with the process.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
