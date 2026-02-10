// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLENTITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAllEntityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllEntityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EntityList, entityList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllEntityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityList, entityList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAllEntityResponseBody() = default ;
    DescribeAllEntityResponseBody(const DescribeAllEntityResponseBody &) = default ;
    DescribeAllEntityResponseBody(DescribeAllEntityResponseBody &&) = default ;
    DescribeAllEntityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllEntityResponseBody() = default ;
    DescribeAllEntityResponseBody& operator=(const DescribeAllEntityResponseBody &) = default ;
    DescribeAllEntityResponseBody& operator=(DescribeAllEntityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EntityList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EntityList& obj) { 
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Os, os_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, EntityList& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Os, os_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      EntityList() = default ;
      EntityList(const EntityList &) = default ;
      EntityList(EntityList &&) = default ;
      EntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EntityList() = default ;
      EntityList& operator=(const EntityList &) = default ;
      EntityList& operator=(EntityList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupId_ == nullptr
        && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->ip_ == nullptr && this->os_ == nullptr
        && this->uuid_ == nullptr; };
      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int32_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
      inline EntityList& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline EntityList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline EntityList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline EntityList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline EntityList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline EntityList& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline EntityList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The ID of the asset group.
      shared_ptr<int32_t> groupId_ {};
      // The name of the server.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server.
      shared_ptr<string> intranetIp_ {};
      // The IP address of the server.
      shared_ptr<string> ip_ {};
      // The operating system of the server. Valid values:
      // 
      // *   **linux**
      // *   **windows**
      shared_ptr<string> os_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->entityList_ == nullptr
        && this->requestId_ == nullptr; };
    // entityList Field Functions 
    bool hasEntityList() const { return this->entityList_ != nullptr;};
    void deleteEntityList() { this->entityList_ = nullptr;};
    inline const vector<DescribeAllEntityResponseBody::EntityList> & getEntityList() const { DARABONBA_PTR_GET_CONST(entityList_, vector<DescribeAllEntityResponseBody::EntityList>) };
    inline vector<DescribeAllEntityResponseBody::EntityList> getEntityList() { DARABONBA_PTR_GET(entityList_, vector<DescribeAllEntityResponseBody::EntityList>) };
    inline DescribeAllEntityResponseBody& setEntityList(const vector<DescribeAllEntityResponseBody::EntityList> & entityList) { DARABONBA_PTR_SET_VALUE(entityList_, entityList) };
    inline DescribeAllEntityResponseBody& setEntityList(vector<DescribeAllEntityResponseBody::EntityList> && entityList) { DARABONBA_PTR_SET_RVALUE(entityList_, entityList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAllEntityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of servers.
    shared_ptr<vector<DescribeAllEntityResponseBody::EntityList>> entityList_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
