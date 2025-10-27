// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLENTITYRESPONSEBODYENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLENTITYRESPONSEBODYENTITYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAllEntityResponseBodyEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllEntityResponseBodyEntityList& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllEntityResponseBodyEntityList& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeAllEntityResponseBodyEntityList() = default ;
    DescribeAllEntityResponseBodyEntityList(const DescribeAllEntityResponseBodyEntityList &) = default ;
    DescribeAllEntityResponseBodyEntityList(DescribeAllEntityResponseBodyEntityList &&) = default ;
    DescribeAllEntityResponseBodyEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllEntityResponseBodyEntityList() = default ;
    DescribeAllEntityResponseBodyEntityList& operator=(const DescribeAllEntityResponseBodyEntityList &) = default ;
    DescribeAllEntityResponseBodyEntityList& operator=(DescribeAllEntityResponseBodyEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->ip_ == nullptr && return this->os_ == nullptr
        && return this->uuid_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int32_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
    inline DescribeAllEntityResponseBodyEntityList& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeAllEntityResponseBodyEntityList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeAllEntityResponseBodyEntityList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeAllEntityResponseBodyEntityList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeAllEntityResponseBodyEntityList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeAllEntityResponseBodyEntityList& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeAllEntityResponseBodyEntityList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the asset group.
    std::shared_ptr<int32_t> groupId_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The IP address of the server.
    std::shared_ptr<string> ip_ = nullptr;
    // The operating system of the server. Valid values:
    // 
    // *   **linux**
    // *   **windows**
    std::shared_ptr<string> os_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
