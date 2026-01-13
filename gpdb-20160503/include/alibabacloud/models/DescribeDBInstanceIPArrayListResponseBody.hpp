// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEIPARRAYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEIPARRAYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceIPArrayListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceIPArrayListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceIPArrayListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceIPArrayListResponseBody() = default ;
    DescribeDBInstanceIPArrayListResponseBody(const DescribeDBInstanceIPArrayListResponseBody &) = default ;
    DescribeDBInstanceIPArrayListResponseBody(DescribeDBInstanceIPArrayListResponseBody &&) = default ;
    DescribeDBInstanceIPArrayListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceIPArrayListResponseBody() = default ;
    DescribeDBInstanceIPArrayListResponseBody& operator=(const DescribeDBInstanceIPArrayListResponseBody &) = default ;
    DescribeDBInstanceIPArrayListResponseBody& operator=(DescribeDBInstanceIPArrayListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceIPArray, DBInstanceIPArray_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceIPArray, DBInstanceIPArray_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBInstanceIPArray : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBInstanceIPArray& obj) { 
          DARABONBA_PTR_TO_JSON(DBInstanceIPArrayAttribute, DBInstanceIPArrayAttribute_);
          DARABONBA_PTR_TO_JSON(DBInstanceIPArrayName, DBInstanceIPArrayName_);
          DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstanceIPArray& obj) { 
          DARABONBA_PTR_FROM_JSON(DBInstanceIPArrayAttribute, DBInstanceIPArrayAttribute_);
          DARABONBA_PTR_FROM_JSON(DBInstanceIPArrayName, DBInstanceIPArrayName_);
          DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
        };
        DBInstanceIPArray() = default ;
        DBInstanceIPArray(const DBInstanceIPArray &) = default ;
        DBInstanceIPArray(DBInstanceIPArray &&) = default ;
        DBInstanceIPArray(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBInstanceIPArray() = default ;
        DBInstanceIPArray& operator=(const DBInstanceIPArray &) = default ;
        DBInstanceIPArray& operator=(DBInstanceIPArray &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->DBInstanceIPArrayAttribute_ == nullptr
        && this->DBInstanceIPArrayName_ == nullptr && this->securityIPList_ == nullptr; };
        // DBInstanceIPArrayAttribute Field Functions 
        bool hasDBInstanceIPArrayAttribute() const { return this->DBInstanceIPArrayAttribute_ != nullptr;};
        void deleteDBInstanceIPArrayAttribute() { this->DBInstanceIPArrayAttribute_ = nullptr;};
        inline string getDBInstanceIPArrayAttribute() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceIPArrayAttribute_, "") };
        inline DBInstanceIPArray& setDBInstanceIPArrayAttribute(string DBInstanceIPArrayAttribute) { DARABONBA_PTR_SET_VALUE(DBInstanceIPArrayAttribute_, DBInstanceIPArrayAttribute) };


        // DBInstanceIPArrayName Field Functions 
        bool hasDBInstanceIPArrayName() const { return this->DBInstanceIPArrayName_ != nullptr;};
        void deleteDBInstanceIPArrayName() { this->DBInstanceIPArrayName_ = nullptr;};
        inline string getDBInstanceIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceIPArrayName_, "") };
        inline DBInstanceIPArray& setDBInstanceIPArrayName(string DBInstanceIPArrayName) { DARABONBA_PTR_SET_VALUE(DBInstanceIPArrayName_, DBInstanceIPArrayName) };


        // securityIPList Field Functions 
        bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
        void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
        inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
        inline DBInstanceIPArray& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


      protected:
        // The attribute of the IP address whitelist. By default, this parameter is empty. A whitelist with the `hidden` attribute is not displayed in the console.
        shared_ptr<string> DBInstanceIPArrayAttribute_ {};
        // The name of the IP address whitelist.
        shared_ptr<string> DBInstanceIPArrayName_ {};
        // The IP addresses listed in the whitelist. Up to 1,000 IP addresses are contained in a whitelist and separated by commas (,). The IP addresses must use one of the following formats:
        // 
        // *   0.0.0.0/0
        // *   10.23.12.24. This is a standard IP address.
        // *   10.23.12.24/24. This is a CIDR block. The value `/24` indicates that the prefix of the CIDR block is 24-bit long. You can replace 24 with a value in the range of `1 to 32`.
        shared_ptr<string> securityIPList_ {};
      };

      virtual bool empty() const override { return this->DBInstanceIPArray_ == nullptr; };
      // DBInstanceIPArray Field Functions 
      bool hasDBInstanceIPArray() const { return this->DBInstanceIPArray_ != nullptr;};
      void deleteDBInstanceIPArray() { this->DBInstanceIPArray_ = nullptr;};
      inline const vector<Items::DBInstanceIPArray> & getDBInstanceIPArray() const { DARABONBA_PTR_GET_CONST(DBInstanceIPArray_, vector<Items::DBInstanceIPArray>) };
      inline vector<Items::DBInstanceIPArray> getDBInstanceIPArray() { DARABONBA_PTR_GET(DBInstanceIPArray_, vector<Items::DBInstanceIPArray>) };
      inline Items& setDBInstanceIPArray(const vector<Items::DBInstanceIPArray> & dBInstanceIPArray) { DARABONBA_PTR_SET_VALUE(DBInstanceIPArray_, dBInstanceIPArray) };
      inline Items& setDBInstanceIPArray(vector<Items::DBInstanceIPArray> && dBInstanceIPArray) { DARABONBA_PTR_SET_RVALUE(DBInstanceIPArray_, dBInstanceIPArray) };


    protected:
      shared_ptr<vector<Items::DBInstanceIPArray>> DBInstanceIPArray_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeDBInstanceIPArrayListResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeDBInstanceIPArrayListResponseBody::Items) };
    inline DescribeDBInstanceIPArrayListResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeDBInstanceIPArrayListResponseBody::Items) };
    inline DescribeDBInstanceIPArrayListResponseBody& setItems(const DescribeDBInstanceIPArrayListResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBInstanceIPArrayListResponseBody& setItems(DescribeDBInstanceIPArrayListResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceIPArrayListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried IP address whitelists.
    shared_ptr<DescribeDBInstanceIPArrayListResponseBody::Items> items_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
