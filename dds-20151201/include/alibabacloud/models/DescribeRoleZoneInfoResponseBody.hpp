// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROLEZONEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROLEZONEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeRoleZoneInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRoleZoneInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ZoneInfos, zoneInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRoleZoneInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ZoneInfos, zoneInfos_);
    };
    DescribeRoleZoneInfoResponseBody() = default ;
    DescribeRoleZoneInfoResponseBody(const DescribeRoleZoneInfoResponseBody &) = default ;
    DescribeRoleZoneInfoResponseBody(DescribeRoleZoneInfoResponseBody &&) = default ;
    DescribeRoleZoneInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRoleZoneInfoResponseBody() = default ;
    DescribeRoleZoneInfoResponseBody& operator=(const DescribeRoleZoneInfoResponseBody &) = default ;
    DescribeRoleZoneInfoResponseBody& operator=(DescribeRoleZoneInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ZoneInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ZoneInfos& obj) { 
        DARABONBA_PTR_TO_JSON(ZoneInfo, zoneInfo_);
      };
      friend void from_json(const Darabonba::Json& j, ZoneInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(ZoneInfo, zoneInfo_);
      };
      ZoneInfos() = default ;
      ZoneInfos(const ZoneInfos &) = default ;
      ZoneInfos(ZoneInfos &&) = default ;
      ZoneInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ZoneInfos() = default ;
      ZoneInfos& operator=(const ZoneInfos &) = default ;
      ZoneInfos& operator=(ZoneInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ZoneInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ZoneInfo& obj) { 
          DARABONBA_PTR_TO_JSON(InsName, insName_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
          DARABONBA_PTR_TO_JSON(RoleId, roleId_);
          DARABONBA_PTR_TO_JSON(RoleType, roleType_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, ZoneInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(InsName, insName_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
          DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
          DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        ZoneInfo() = default ;
        ZoneInfo(const ZoneInfo &) = default ;
        ZoneInfo(ZoneInfo &&) = default ;
        ZoneInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ZoneInfo() = default ;
        ZoneInfo& operator=(const ZoneInfo &) = default ;
        ZoneInfo& operator=(ZoneInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->insName_ == nullptr
        && this->nodeType_ == nullptr && this->roleId_ == nullptr && this->roleType_ == nullptr && this->zoneId_ == nullptr; };
        // insName Field Functions 
        bool hasInsName() const { return this->insName_ != nullptr;};
        void deleteInsName() { this->insName_ = nullptr;};
        inline string getInsName() const { DARABONBA_PTR_GET_DEFAULT(insName_, "") };
        inline ZoneInfo& setInsName(string insName) { DARABONBA_PTR_SET_VALUE(insName_, insName) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline ZoneInfo& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // roleId Field Functions 
        bool hasRoleId() const { return this->roleId_ != nullptr;};
        void deleteRoleId() { this->roleId_ = nullptr;};
        inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
        inline ZoneInfo& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


        // roleType Field Functions 
        bool hasRoleType() const { return this->roleType_ != nullptr;};
        void deleteRoleType() { this->roleType_ = nullptr;};
        inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
        inline ZoneInfo& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline ZoneInfo& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The ID of the node.
        shared_ptr<string> insName_ {};
        // The type of the node. Valid values:
        // 
        // *   **normal**
        // *   **configServer**
        // *   **shard**
        // *   **mongos**
        // 
        // > Valid value for replica set instances: **normal**. Valid values for sharded cluster instances: **configServer**, **shard**, and **mongos**.
        shared_ptr<string> nodeType_ {};
        // The role ID.
        shared_ptr<string> roleId_ {};
        // The role of the node. Valid values:
        // 
        // *   **Primary**
        // *   **Secondary**
        // *   **Hidden**
        shared_ptr<string> roleType_ {};
        // The zone ID of the node.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->zoneInfo_ == nullptr; };
      // zoneInfo Field Functions 
      bool hasZoneInfo() const { return this->zoneInfo_ != nullptr;};
      void deleteZoneInfo() { this->zoneInfo_ = nullptr;};
      inline const vector<ZoneInfos::ZoneInfo> & getZoneInfo() const { DARABONBA_PTR_GET_CONST(zoneInfo_, vector<ZoneInfos::ZoneInfo>) };
      inline vector<ZoneInfos::ZoneInfo> getZoneInfo() { DARABONBA_PTR_GET(zoneInfo_, vector<ZoneInfos::ZoneInfo>) };
      inline ZoneInfos& setZoneInfo(const vector<ZoneInfos::ZoneInfo> & zoneInfo) { DARABONBA_PTR_SET_VALUE(zoneInfo_, zoneInfo) };
      inline ZoneInfos& setZoneInfo(vector<ZoneInfos::ZoneInfo> && zoneInfo) { DARABONBA_PTR_SET_RVALUE(zoneInfo_, zoneInfo) };


    protected:
      shared_ptr<vector<ZoneInfos::ZoneInfo>> zoneInfo_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->zoneInfos_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRoleZoneInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // zoneInfos Field Functions 
    bool hasZoneInfos() const { return this->zoneInfos_ != nullptr;};
    void deleteZoneInfos() { this->zoneInfos_ = nullptr;};
    inline const DescribeRoleZoneInfoResponseBody::ZoneInfos & getZoneInfos() const { DARABONBA_PTR_GET_CONST(zoneInfos_, DescribeRoleZoneInfoResponseBody::ZoneInfos) };
    inline DescribeRoleZoneInfoResponseBody::ZoneInfos getZoneInfos() { DARABONBA_PTR_GET(zoneInfos_, DescribeRoleZoneInfoResponseBody::ZoneInfos) };
    inline DescribeRoleZoneInfoResponseBody& setZoneInfos(const DescribeRoleZoneInfoResponseBody::ZoneInfos & zoneInfos) { DARABONBA_PTR_SET_VALUE(zoneInfos_, zoneInfos) };
    inline DescribeRoleZoneInfoResponseBody& setZoneInfos(DescribeRoleZoneInfoResponseBody::ZoneInfos && zoneInfos) { DARABONBA_PTR_SET_RVALUE(zoneInfos_, zoneInfos) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information of nodes in the zone.
    shared_ptr<DescribeRoleZoneInfoResponseBody::ZoneInfos> zoneInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
