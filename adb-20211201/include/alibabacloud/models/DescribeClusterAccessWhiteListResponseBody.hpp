// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERACCESSWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERACCESSWHITELISTRESPONSEBODY_HPP_
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
  class DescribeClusterAccessWhiteListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterAccessWhiteListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterAccessWhiteListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterAccessWhiteListResponseBody() = default ;
    DescribeClusterAccessWhiteListResponseBody(const DescribeClusterAccessWhiteListResponseBody &) = default ;
    DescribeClusterAccessWhiteListResponseBody(DescribeClusterAccessWhiteListResponseBody &&) = default ;
    DescribeClusterAccessWhiteListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterAccessWhiteListResponseBody() = default ;
    DescribeClusterAccessWhiteListResponseBody& operator=(const DescribeClusterAccessWhiteListResponseBody &) = default ;
    DescribeClusterAccessWhiteListResponseBody& operator=(DescribeClusterAccessWhiteListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(IPArray, IPArray_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(IPArray, IPArray_);
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
      class IPArray : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IPArray& obj) { 
          DARABONBA_PTR_TO_JSON(DBClusterIPArrayAttribute, DBClusterIPArrayAttribute_);
          DARABONBA_PTR_TO_JSON(DBClusterIPArrayName, DBClusterIPArrayName_);
          DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
        };
        friend void from_json(const Darabonba::Json& j, IPArray& obj) { 
          DARABONBA_PTR_FROM_JSON(DBClusterIPArrayAttribute, DBClusterIPArrayAttribute_);
          DARABONBA_PTR_FROM_JSON(DBClusterIPArrayName, DBClusterIPArrayName_);
          DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
        };
        IPArray() = default ;
        IPArray(const IPArray &) = default ;
        IPArray(IPArray &&) = default ;
        IPArray(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IPArray() = default ;
        IPArray& operator=(const IPArray &) = default ;
        IPArray& operator=(IPArray &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->DBClusterIPArrayAttribute_ == nullptr
        && this->DBClusterIPArrayName_ == nullptr && this->securityIPList_ == nullptr; };
        // DBClusterIPArrayAttribute Field Functions 
        bool hasDBClusterIPArrayAttribute() const { return this->DBClusterIPArrayAttribute_ != nullptr;};
        void deleteDBClusterIPArrayAttribute() { this->DBClusterIPArrayAttribute_ = nullptr;};
        inline string getDBClusterIPArrayAttribute() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIPArrayAttribute_, "") };
        inline IPArray& setDBClusterIPArrayAttribute(string DBClusterIPArrayAttribute) { DARABONBA_PTR_SET_VALUE(DBClusterIPArrayAttribute_, DBClusterIPArrayAttribute) };


        // DBClusterIPArrayName Field Functions 
        bool hasDBClusterIPArrayName() const { return this->DBClusterIPArrayName_ != nullptr;};
        void deleteDBClusterIPArrayName() { this->DBClusterIPArrayName_ = nullptr;};
        inline string getDBClusterIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIPArrayName_, "") };
        inline IPArray& setDBClusterIPArrayName(string DBClusterIPArrayName) { DARABONBA_PTR_SET_VALUE(DBClusterIPArrayName_, DBClusterIPArrayName) };


        // securityIPList Field Functions 
        bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
        void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
        inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
        inline IPArray& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


      protected:
        // The attribute of the IP address whitelist.
        // 
        // >  The IP address whitelists that have the **hidden** attribute are not displayed in the console. These IP address whitelists are used to access services such as Data Transmission Service (DTS) and PolarDB.
        shared_ptr<string> DBClusterIPArrayAttribute_ {};
        // The name of the IP address whitelist.
        // 
        // Each cluster supports up to 50 IP address whitelists.
        shared_ptr<string> DBClusterIPArrayName_ {};
        // The IP addresses in the IP address whitelist. Up to 500 IP addresses can be returned. Multiple IP addresses are separated by commas (,).
        shared_ptr<string> securityIPList_ {};
      };

      virtual bool empty() const override { return this->IPArray_ == nullptr; };
      // IPArray Field Functions 
      bool hasIPArray() const { return this->IPArray_ != nullptr;};
      void deleteIPArray() { this->IPArray_ = nullptr;};
      inline const vector<Items::IPArray> & getIPArray() const { DARABONBA_PTR_GET_CONST(IPArray_, vector<Items::IPArray>) };
      inline vector<Items::IPArray> getIPArray() { DARABONBA_PTR_GET(IPArray_, vector<Items::IPArray>) };
      inline Items& setIPArray(const vector<Items::IPArray> & iPArray) { DARABONBA_PTR_SET_VALUE(IPArray_, iPArray) };
      inline Items& setIPArray(vector<Items::IPArray> && iPArray) { DARABONBA_PTR_SET_RVALUE(IPArray_, iPArray) };


    protected:
      shared_ptr<vector<Items::IPArray>> IPArray_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeClusterAccessWhiteListResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeClusterAccessWhiteListResponseBody::Items) };
    inline DescribeClusterAccessWhiteListResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeClusterAccessWhiteListResponseBody::Items) };
    inline DescribeClusterAccessWhiteListResponseBody& setItems(const DescribeClusterAccessWhiteListResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeClusterAccessWhiteListResponseBody& setItems(DescribeClusterAccessWhiteListResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterAccessWhiteListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried IP address whitelists.
    shared_ptr<DescribeClusterAccessWhiteListResponseBody::Items> items_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
