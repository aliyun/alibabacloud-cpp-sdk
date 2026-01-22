// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYIPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeSecurityIpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityIpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityIpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSecurityIpsResponseBody() = default ;
    DescribeSecurityIpsResponseBody(const DescribeSecurityIpsResponseBody &) = default ;
    DescribeSecurityIpsResponseBody(DescribeSecurityIpsResponseBody &&) = default ;
    DescribeSecurityIpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityIpsResponseBody() = default ;
    DescribeSecurityIpsResponseBody& operator=(const DescribeSecurityIpsResponseBody &) = default ;
    DescribeSecurityIpsResponseBody& operator=(DescribeSecurityIpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(GroupItems, groupItems_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
          DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
        };
        friend void from_json(const Darabonba::Json& j, GroupItems& obj) { 
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
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
        && this->securityIPList_ == nullptr; };
        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline GroupItems& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // securityIPList Field Functions 
        bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
        void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
        inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
        inline GroupItems& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


      protected:
        shared_ptr<string> groupName_ {};
        shared_ptr<string> securityIPList_ {};
      };

      virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->groupItems_ == nullptr; };
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
      shared_ptr<string> DBInstanceName_ {};
      shared_ptr<vector<Data::GroupItems>> groupItems_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSecurityIpsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSecurityIpsResponseBody::Data) };
    inline DescribeSecurityIpsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSecurityIpsResponseBody::Data) };
    inline DescribeSecurityIpsResponseBody& setData(const DescribeSecurityIpsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSecurityIpsResponseBody& setData(DescribeSecurityIpsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSecurityIpsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityIpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSecurityIpsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeSecurityIpsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
