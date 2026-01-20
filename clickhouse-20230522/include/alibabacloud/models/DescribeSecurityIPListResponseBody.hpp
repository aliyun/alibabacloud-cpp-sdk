// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYIPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYIPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeSecurityIPListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityIPListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityIPListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
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
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceID, DBInstanceID_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(GroupItems, groupItems_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(GroupItems, groupItems_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GroupItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GroupItems& obj) { 
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(GroupTag, groupTag_);
          DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
          DARABONBA_PTR_TO_JSON(SecurityIPType, securityIPType_);
          DARABONBA_PTR_TO_JSON(WhitelistNetType, whitelistNetType_);
        };
        friend void from_json(const Darabonba::Json& j, GroupItems& obj) { 
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(GroupTag, groupTag_);
          DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
          DARABONBA_PTR_FROM_JSON(SecurityIPType, securityIPType_);
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
        virtual bool empty() const override { return this->groupName_ == nullptr
        && this->groupTag_ == nullptr && this->securityIPList_ == nullptr && this->securityIPType_ == nullptr && this->whitelistNetType_ == nullptr; };
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


        // securityIPType Field Functions 
        bool hasSecurityIPType() const { return this->securityIPType_ != nullptr;};
        void deleteSecurityIPType() { this->securityIPType_ = nullptr;};
        inline string getSecurityIPType() const { DARABONBA_PTR_GET_DEFAULT(securityIPType_, "") };
        inline GroupItems& setSecurityIPType(string securityIPType) { DARABONBA_PTR_SET_VALUE(securityIPType_, securityIPType) };


        // whitelistNetType Field Functions 
        bool hasWhitelistNetType() const { return this->whitelistNetType_ != nullptr;};
        void deleteWhitelistNetType() { this->whitelistNetType_ = nullptr;};
        inline string getWhitelistNetType() const { DARABONBA_PTR_GET_DEFAULT(whitelistNetType_, "") };
        inline GroupItems& setWhitelistNetType(string whitelistNetType) { DARABONBA_PTR_SET_VALUE(whitelistNetType_, whitelistNetType) };


      protected:
        // The name of the whitelist.
        shared_ptr<string> groupName_ {};
        // The tag of the whitelist.
        shared_ptr<string> groupTag_ {};
        // The IP addresses and CIDR blocks in the whitelist.
        shared_ptr<string> securityIPList_ {};
        // The IP address type.
        shared_ptr<string> securityIPType_ {};
        // The network type of the whitelist.
        shared_ptr<string> whitelistNetType_ {};
      };

      virtual bool empty() const override { return this->DBInstanceID_ == nullptr
        && this->DBInstanceName_ == nullptr && this->groupItems_ == nullptr; };
      // DBInstanceID Field Functions 
      bool hasDBInstanceID() const { return this->DBInstanceID_ != nullptr;};
      void deleteDBInstanceID() { this->DBInstanceID_ = nullptr;};
      inline int32_t getDBInstanceID() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceID_, 0) };
      inline Data& setDBInstanceID(int32_t DBInstanceID) { DARABONBA_PTR_SET_VALUE(DBInstanceID_, DBInstanceID) };


      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline Data& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      // groupItems Field Functions 
      bool hasGroupItems() const { return this->groupItems_ != nullptr;};
      void deleteGroupItems() { this->groupItems_ = nullptr;};
      inline const vector<Data::GroupItems> & getGroupItems() const { DARABONBA_PTR_GET_CONST(groupItems_, vector<Data::GroupItems>) };
      inline vector<Data::GroupItems> getGroupItems() { DARABONBA_PTR_GET(groupItems_, vector<Data::GroupItems>) };
      inline Data& setGroupItems(const vector<Data::GroupItems> & groupItems) { DARABONBA_PTR_SET_VALUE(groupItems_, groupItems) };
      inline Data& setGroupItems(vector<Data::GroupItems> && groupItems) { DARABONBA_PTR_SET_RVALUE(groupItems_, groupItems) };


    protected:
      // The cluster ID.
      shared_ptr<int32_t> DBInstanceID_ {};
      // The cluster name.
      shared_ptr<string> DBInstanceName_ {};
      // The details about the whitelists.
      shared_ptr<vector<Data::GroupItems>> groupItems_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSecurityIPListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSecurityIPListResponseBody::Data) };
    inline DescribeSecurityIPListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSecurityIPListResponseBody::Data) };
    inline DescribeSecurityIPListResponseBody& setData(const DescribeSecurityIPListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSecurityIPListResponseBody& setData(DescribeSecurityIPListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityIPListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<DescribeSecurityIPListResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
