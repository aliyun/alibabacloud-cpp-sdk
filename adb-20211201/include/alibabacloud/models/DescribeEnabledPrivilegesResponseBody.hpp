// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENABLEDPRIVILEGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENABLEDPRIVILEGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeEnabledPrivilegesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnabledPrivilegesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnabledPrivilegesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEnabledPrivilegesResponseBody() = default ;
    DescribeEnabledPrivilegesResponseBody(const DescribeEnabledPrivilegesResponseBody &) = default ;
    DescribeEnabledPrivilegesResponseBody(DescribeEnabledPrivilegesResponseBody &&) = default ;
    DescribeEnabledPrivilegesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnabledPrivilegesResponseBody() = default ;
    DescribeEnabledPrivilegesResponseBody& operator=(const DescribeEnabledPrivilegesResponseBody &) = default ;
    DescribeEnabledPrivilegesResponseBody& operator=(DescribeEnabledPrivilegesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Privileges, privileges_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Privileges, privileges_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
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
      class Privileges : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Privileges& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Key, key_);
        };
        friend void from_json(const Darabonba::Json& j, Privileges& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
        };
        Privileges() = default ;
        Privileges(const Privileges &) = default ;
        Privileges(Privileges &&) = default ;
        Privileges(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Privileges() = default ;
        Privileges& operator=(const Privileges &) = default ;
        Privileges& operator=(Privileges &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->key_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Privileges& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Privileges& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      protected:
        // The description of the permission.
        shared_ptr<string> description_ {};
        // The name of the permission.
        shared_ptr<string> key_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->privileges_ == nullptr && this->scope_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // privileges Field Functions 
      bool hasPrivileges() const { return this->privileges_ != nullptr;};
      void deletePrivileges() { this->privileges_ = nullptr;};
      inline const vector<Data::Privileges> & getPrivileges() const { DARABONBA_PTR_GET_CONST(privileges_, vector<Data::Privileges>) };
      inline vector<Data::Privileges> getPrivileges() { DARABONBA_PTR_GET(privileges_, vector<Data::Privileges>) };
      inline Data& setPrivileges(const vector<Data::Privileges> & privileges) { DARABONBA_PTR_SET_VALUE(privileges_, privileges) };
      inline Data& setPrivileges(vector<Data::Privileges> && privileges) { DARABONBA_PTR_SET_RVALUE(privileges_, privileges) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline Data& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    protected:
      // The description of the permission level.
      // 
      // This parameter is required.
      shared_ptr<string> description_ {};
      // The queried permissions.
      // 
      // This parameter is required.
      shared_ptr<vector<Data::Privileges>> privileges_ {};
      // The permission level.
      // 
      // This parameter is required.
      shared_ptr<string> scope_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeEnabledPrivilegesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeEnabledPrivilegesResponseBody::Data>) };
    inline vector<DescribeEnabledPrivilegesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeEnabledPrivilegesResponseBody::Data>) };
    inline DescribeEnabledPrivilegesResponseBody& setData(const vector<DescribeEnabledPrivilegesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeEnabledPrivilegesResponseBody& setData(vector<DescribeEnabledPrivilegesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnabledPrivilegesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried permission level and permissions.
    shared_ptr<vector<DescribeEnabledPrivilegesResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
