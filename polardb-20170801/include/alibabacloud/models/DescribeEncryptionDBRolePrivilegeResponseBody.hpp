// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENCRYPTIONDBROLEPRIVILEGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENCRYPTIONDBROLEPRIVILEGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeEncryptionDBRolePrivilegeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEncryptionDBRolePrivilegeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEncryptionDBRolePrivilegeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeEncryptionDBRolePrivilegeResponseBody() = default ;
    DescribeEncryptionDBRolePrivilegeResponseBody(const DescribeEncryptionDBRolePrivilegeResponseBody &) = default ;
    DescribeEncryptionDBRolePrivilegeResponseBody(DescribeEncryptionDBRolePrivilegeResponseBody &&) = default ;
    DescribeEncryptionDBRolePrivilegeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEncryptionDBRolePrivilegeResponseBody() = default ;
    DescribeEncryptionDBRolePrivilegeResponseBody& operator=(const DescribeEncryptionDBRolePrivilegeResponseBody &) = default ;
    DescribeEncryptionDBRolePrivilegeResponseBody& operator=(DescribeEncryptionDBRolePrivilegeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RolePrivilegeList, rolePrivilegeList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RolePrivilegeList, rolePrivilegeList_);
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
      class RolePrivilegeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RolePrivilegeList& obj) { 
          DARABONBA_PTR_TO_JSON(Encryption, encryption_);
          DARABONBA_PTR_TO_JSON(Negation, negation_);
          DARABONBA_PTR_TO_JSON(NotEncryption, notEncryption_);
          DARABONBA_PTR_TO_JSON(RolePrivilegeName, rolePrivilegeName_);
        };
        friend void from_json(const Darabonba::Json& j, RolePrivilegeList& obj) { 
          DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
          DARABONBA_PTR_FROM_JSON(Negation, negation_);
          DARABONBA_PTR_FROM_JSON(NotEncryption, notEncryption_);
          DARABONBA_PTR_FROM_JSON(RolePrivilegeName, rolePrivilegeName_);
        };
        RolePrivilegeList() = default ;
        RolePrivilegeList(const RolePrivilegeList &) = default ;
        RolePrivilegeList(RolePrivilegeList &&) = default ;
        RolePrivilegeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RolePrivilegeList() = default ;
        RolePrivilegeList& operator=(const RolePrivilegeList &) = default ;
        RolePrivilegeList& operator=(RolePrivilegeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->encryption_ == nullptr
        && this->negation_ == nullptr && this->notEncryption_ == nullptr && this->rolePrivilegeName_ == nullptr; };
        // encryption Field Functions 
        bool hasEncryption() const { return this->encryption_ != nullptr;};
        void deleteEncryption() { this->encryption_ = nullptr;};
        inline string getEncryption() const { DARABONBA_PTR_GET_DEFAULT(encryption_, "") };
        inline RolePrivilegeList& setEncryption(string encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };


        // negation Field Functions 
        bool hasNegation() const { return this->negation_ != nullptr;};
        void deleteNegation() { this->negation_ = nullptr;};
        inline string getNegation() const { DARABONBA_PTR_GET_DEFAULT(negation_, "") };
        inline RolePrivilegeList& setNegation(string negation) { DARABONBA_PTR_SET_VALUE(negation_, negation) };


        // notEncryption Field Functions 
        bool hasNotEncryption() const { return this->notEncryption_ != nullptr;};
        void deleteNotEncryption() { this->notEncryption_ = nullptr;};
        inline string getNotEncryption() const { DARABONBA_PTR_GET_DEFAULT(notEncryption_, "") };
        inline RolePrivilegeList& setNotEncryption(string notEncryption) { DARABONBA_PTR_SET_VALUE(notEncryption_, notEncryption) };


        // rolePrivilegeName Field Functions 
        bool hasRolePrivilegeName() const { return this->rolePrivilegeName_ != nullptr;};
        void deleteRolePrivilegeName() { this->rolePrivilegeName_ = nullptr;};
        inline string getRolePrivilegeName() const { DARABONBA_PTR_GET_DEFAULT(rolePrivilegeName_, "") };
        inline RolePrivilegeList& setRolePrivilegeName(string rolePrivilegeName) { DARABONBA_PTR_SET_VALUE(rolePrivilegeName_, rolePrivilegeName) };


      protected:
        shared_ptr<string> encryption_ {};
        shared_ptr<string> negation_ {};
        shared_ptr<string> notEncryption_ {};
        shared_ptr<string> rolePrivilegeName_ {};
      };

      virtual bool empty() const override { return this->rolePrivilegeList_ == nullptr; };
      // rolePrivilegeList Field Functions 
      bool hasRolePrivilegeList() const { return this->rolePrivilegeList_ != nullptr;};
      void deleteRolePrivilegeList() { this->rolePrivilegeList_ = nullptr;};
      inline const vector<Data::RolePrivilegeList> & getRolePrivilegeList() const { DARABONBA_PTR_GET_CONST(rolePrivilegeList_, vector<Data::RolePrivilegeList>) };
      inline vector<Data::RolePrivilegeList> getRolePrivilegeList() { DARABONBA_PTR_GET(rolePrivilegeList_, vector<Data::RolePrivilegeList>) };
      inline Data& setRolePrivilegeList(const vector<Data::RolePrivilegeList> & rolePrivilegeList) { DARABONBA_PTR_SET_VALUE(rolePrivilegeList_, rolePrivilegeList) };
      inline Data& setRolePrivilegeList(vector<Data::RolePrivilegeList> && rolePrivilegeList) { DARABONBA_PTR_SET_RVALUE(rolePrivilegeList_, rolePrivilegeList) };


    protected:
      shared_ptr<vector<Data::RolePrivilegeList>> rolePrivilegeList_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeEncryptionDBRolePrivilegeResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeEncryptionDBRolePrivilegeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeEncryptionDBRolePrivilegeResponseBody::Data) };
    inline DescribeEncryptionDBRolePrivilegeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeEncryptionDBRolePrivilegeResponseBody::Data) };
    inline DescribeEncryptionDBRolePrivilegeResponseBody& setData(const DescribeEncryptionDBRolePrivilegeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeEncryptionDBRolePrivilegeResponseBody& setData(DescribeEncryptionDBRolePrivilegeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeEncryptionDBRolePrivilegeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEncryptionDBRolePrivilegeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeEncryptionDBRolePrivilegeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<DescribeEncryptionDBRolePrivilegeResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
