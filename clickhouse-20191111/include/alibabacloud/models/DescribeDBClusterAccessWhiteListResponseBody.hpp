// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClusterAccessWhiteListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAccessWhiteListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterAccessWhiteList, DBClusterAccessWhiteList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAccessWhiteListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterAccessWhiteList, DBClusterAccessWhiteList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterAccessWhiteListResponseBody() = default ;
    DescribeDBClusterAccessWhiteListResponseBody(const DescribeDBClusterAccessWhiteListResponseBody &) = default ;
    DescribeDBClusterAccessWhiteListResponseBody(DescribeDBClusterAccessWhiteListResponseBody &&) = default ;
    DescribeDBClusterAccessWhiteListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAccessWhiteListResponseBody() = default ;
    DescribeDBClusterAccessWhiteListResponseBody& operator=(const DescribeDBClusterAccessWhiteListResponseBody &) = default ;
    DescribeDBClusterAccessWhiteListResponseBody& operator=(DescribeDBClusterAccessWhiteListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBClusterAccessWhiteList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBClusterAccessWhiteList& obj) { 
        DARABONBA_PTR_TO_JSON(IPArray, IPArray_);
      };
      friend void from_json(const Darabonba::Json& j, DBClusterAccessWhiteList& obj) { 
        DARABONBA_PTR_FROM_JSON(IPArray, IPArray_);
      };
      DBClusterAccessWhiteList() = default ;
      DBClusterAccessWhiteList(const DBClusterAccessWhiteList &) = default ;
      DBClusterAccessWhiteList(DBClusterAccessWhiteList &&) = default ;
      DBClusterAccessWhiteList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBClusterAccessWhiteList() = default ;
      DBClusterAccessWhiteList& operator=(const DBClusterAccessWhiteList &) = default ;
      DBClusterAccessWhiteList& operator=(DBClusterAccessWhiteList &&) = default ;
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
        shared_ptr<string> DBClusterIPArrayAttribute_ {};
        // The name of the IP address whitelist.
        shared_ptr<string> DBClusterIPArrayName_ {};
        // The IP addresses in the IP address whitelist.
        shared_ptr<string> securityIPList_ {};
      };

      virtual bool empty() const override { return this->IPArray_ == nullptr; };
      // IPArray Field Functions 
      bool hasIPArray() const { return this->IPArray_ != nullptr;};
      void deleteIPArray() { this->IPArray_ = nullptr;};
      inline const vector<DBClusterAccessWhiteList::IPArray> & getIPArray() const { DARABONBA_PTR_GET_CONST(IPArray_, vector<DBClusterAccessWhiteList::IPArray>) };
      inline vector<DBClusterAccessWhiteList::IPArray> getIPArray() { DARABONBA_PTR_GET(IPArray_, vector<DBClusterAccessWhiteList::IPArray>) };
      inline DBClusterAccessWhiteList& setIPArray(const vector<DBClusterAccessWhiteList::IPArray> & iPArray) { DARABONBA_PTR_SET_VALUE(IPArray_, iPArray) };
      inline DBClusterAccessWhiteList& setIPArray(vector<DBClusterAccessWhiteList::IPArray> && iPArray) { DARABONBA_PTR_SET_RVALUE(IPArray_, iPArray) };


    protected:
      shared_ptr<vector<DBClusterAccessWhiteList::IPArray>> IPArray_ {};
    };

    virtual bool empty() const override { return this->DBClusterAccessWhiteList_ == nullptr
        && this->requestId_ == nullptr; };
    // DBClusterAccessWhiteList Field Functions 
    bool hasDBClusterAccessWhiteList() const { return this->DBClusterAccessWhiteList_ != nullptr;};
    void deleteDBClusterAccessWhiteList() { this->DBClusterAccessWhiteList_ = nullptr;};
    inline const DescribeDBClusterAccessWhiteListResponseBody::DBClusterAccessWhiteList & getDBClusterAccessWhiteList() const { DARABONBA_PTR_GET_CONST(DBClusterAccessWhiteList_, DescribeDBClusterAccessWhiteListResponseBody::DBClusterAccessWhiteList) };
    inline DescribeDBClusterAccessWhiteListResponseBody::DBClusterAccessWhiteList getDBClusterAccessWhiteList() { DARABONBA_PTR_GET(DBClusterAccessWhiteList_, DescribeDBClusterAccessWhiteListResponseBody::DBClusterAccessWhiteList) };
    inline DescribeDBClusterAccessWhiteListResponseBody& setDBClusterAccessWhiteList(const DescribeDBClusterAccessWhiteListResponseBody::DBClusterAccessWhiteList & dBClusterAccessWhiteList) { DARABONBA_PTR_SET_VALUE(DBClusterAccessWhiteList_, dBClusterAccessWhiteList) };
    inline DescribeDBClusterAccessWhiteListResponseBody& setDBClusterAccessWhiteList(DescribeDBClusterAccessWhiteListResponseBody::DBClusterAccessWhiteList && dBClusterAccessWhiteList) { DARABONBA_PTR_SET_RVALUE(DBClusterAccessWhiteList_, dBClusterAccessWhiteList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterAccessWhiteListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the IP address whitelist.
    shared_ptr<DescribeDBClusterAccessWhiteListResponseBody::DBClusterAccessWhiteList> DBClusterAccessWhiteList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
