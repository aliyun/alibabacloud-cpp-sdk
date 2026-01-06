// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYIPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYIPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeSecurityIPListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityIPListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(GroupItems, groupItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityIPListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(GroupItems, groupItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSecurityIPListResponseBody() = default ;
    DescribeSecurityIPListResponseBody(const DescribeSecurityIPListResponseBody &) = default ;
    DescribeSecurityIPListResponseBody(DescribeSecurityIPListResponseBody &&) = default ;
    DescribeSecurityIPListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityIPListResponseBody() = default ;
    DescribeSecurityIPListResponseBody& operator=(const DescribeSecurityIPListResponseBody &) = default ;
    DescribeSecurityIPListResponseBody& operator=(DescribeSecurityIPListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GroupItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupItems& obj) { 
        DARABONBA_PTR_TO_JSON(AecurityIPType, aecurityIPType_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(GroupTag, groupTag_);
        DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
        DARABONBA_PTR_TO_JSON(WhitelistNetType, whitelistNetType_);
      };
      friend void from_json(const Darabonba::Json& j, GroupItems& obj) { 
        DARABONBA_PTR_FROM_JSON(AecurityIPType, aecurityIPType_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(GroupTag, groupTag_);
        DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
        DARABONBA_PTR_FROM_JSON(WhitelistNetType, whitelistNetType_);
      };
      GroupItems() = default ;
      GroupItems(const GroupItems &) = default ;
      GroupItems(GroupItems &&) = default ;
      GroupItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupItems() = default ;
      GroupItems& operator=(const GroupItems &) = default ;
      GroupItems& operator=(GroupItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aecurityIPType_ == nullptr
        && this->groupName_ == nullptr && this->groupTag_ == nullptr && this->securityIPList_ == nullptr && this->whitelistNetType_ == nullptr; };
      // aecurityIPType Field Functions 
      bool hasAecurityIPType() const { return this->aecurityIPType_ != nullptr;};
      void deleteAecurityIPType() { this->aecurityIPType_ = nullptr;};
      inline string getAecurityIPType() const { DARABONBA_PTR_GET_DEFAULT(aecurityIPType_, "") };
      inline GroupItems& setAecurityIPType(string aecurityIPType) { DARABONBA_PTR_SET_VALUE(aecurityIPType_, aecurityIPType) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline GroupItems& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // groupTag Field Functions 
      bool hasGroupTag() const { return this->groupTag_ != nullptr;};
      void deleteGroupTag() { this->groupTag_ = nullptr;};
      inline string getGroupTag() const { DARABONBA_PTR_GET_DEFAULT(groupTag_, "") };
      inline GroupItems& setGroupTag(string groupTag) { DARABONBA_PTR_SET_VALUE(groupTag_, groupTag) };


      // securityIPList Field Functions 
      bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
      void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
      inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
      inline GroupItems& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


      // whitelistNetType Field Functions 
      bool hasWhitelistNetType() const { return this->whitelistNetType_ != nullptr;};
      void deleteWhitelistNetType() { this->whitelistNetType_ = nullptr;};
      inline string getWhitelistNetType() const { DARABONBA_PTR_GET_DEFAULT(whitelistNetType_, "") };
      inline GroupItems& setWhitelistNetType(string whitelistNetType) { DARABONBA_PTR_SET_VALUE(whitelistNetType_, whitelistNetType) };


    protected:
      // The IP address type. Valid values:
      // 
      // *   ipv4
      // *   ipv6 (not supported)
      shared_ptr<string> aecurityIPType_ {};
      // The name of the whitelist.
      shared_ptr<string> groupName_ {};
      // The tag of the whitelist.
      shared_ptr<string> groupTag_ {};
      // The IP addresses in the whitelist. Multiple IP addresses are separated by commas (,).
      shared_ptr<string> securityIPList_ {};
      // The network type of the whitelist.
      shared_ptr<string> whitelistNetType_ {};
    };

    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->groupItems_ == nullptr && this->requestId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeSecurityIPListResponseBody& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // groupItems Field Functions 
    bool hasGroupItems() const { return this->groupItems_ != nullptr;};
    void deleteGroupItems() { this->groupItems_ = nullptr;};
    inline const vector<DescribeSecurityIPListResponseBody::GroupItems> & getGroupItems() const { DARABONBA_PTR_GET_CONST(groupItems_, vector<DescribeSecurityIPListResponseBody::GroupItems>) };
    inline vector<DescribeSecurityIPListResponseBody::GroupItems> getGroupItems() { DARABONBA_PTR_GET(groupItems_, vector<DescribeSecurityIPListResponseBody::GroupItems>) };
    inline DescribeSecurityIPListResponseBody& setGroupItems(const vector<DescribeSecurityIPListResponseBody::GroupItems> & groupItems) { DARABONBA_PTR_SET_VALUE(groupItems_, groupItems) };
    inline DescribeSecurityIPListResponseBody& setGroupItems(vector<DescribeSecurityIPListResponseBody::GroupItems> && groupItems) { DARABONBA_PTR_SET_RVALUE(groupItems_, groupItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityIPListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceName_ {};
    // The details about each IP address whitelist returned.
    shared_ptr<vector<DescribeSecurityIPListResponseBody::GroupItems>> groupItems_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
