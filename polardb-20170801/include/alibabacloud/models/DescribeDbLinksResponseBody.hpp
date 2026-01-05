// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBLINKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBLINKSRESPONSEBODY_HPP_
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
  class DescribeDBLinksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBLinksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DBLinkInfos, DBLinkInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBLinksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DBLinkInfos, DBLinkInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBLinksResponseBody() = default ;
    DescribeDBLinksResponseBody(const DescribeDBLinksResponseBody &) = default ;
    DescribeDBLinksResponseBody(DescribeDBLinksResponseBody &&) = default ;
    DescribeDBLinksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBLinksResponseBody() = default ;
    DescribeDBLinksResponseBody& operator=(const DescribeDBLinksResponseBody &) = default ;
    DescribeDBLinksResponseBody& operator=(DescribeDBLinksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBLinkInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBLinkInfos& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(DBLinkName, DBLinkName_);
        DARABONBA_PTR_TO_JSON(SourceDBName, sourceDBName_);
        DARABONBA_PTR_TO_JSON(TargetAccount, targetAccount_);
        DARABONBA_PTR_TO_JSON(TargetDBInstanceName, targetDBInstanceName_);
        DARABONBA_PTR_TO_JSON(TargetDBName, targetDBName_);
      };
      friend void from_json(const Darabonba::Json& j, DBLinkInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(DBLinkName, DBLinkName_);
        DARABONBA_PTR_FROM_JSON(SourceDBName, sourceDBName_);
        DARABONBA_PTR_FROM_JSON(TargetAccount, targetAccount_);
        DARABONBA_PTR_FROM_JSON(TargetDBInstanceName, targetDBInstanceName_);
        DARABONBA_PTR_FROM_JSON(TargetDBName, targetDBName_);
      };
      DBLinkInfos() = default ;
      DBLinkInfos(const DBLinkInfos &) = default ;
      DBLinkInfos(DBLinkInfos &&) = default ;
      DBLinkInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBLinkInfos() = default ;
      DBLinkInfos& operator=(const DBLinkInfos &) = default ;
      DBLinkInfos& operator=(DBLinkInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->DBLinkName_ == nullptr && this->sourceDBName_ == nullptr && this->targetAccount_ == nullptr && this->targetDBInstanceName_ == nullptr && this->targetDBName_ == nullptr; };
      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline DBLinkInfos& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      // DBLinkName Field Functions 
      bool hasDBLinkName() const { return this->DBLinkName_ != nullptr;};
      void deleteDBLinkName() { this->DBLinkName_ = nullptr;};
      inline string getDBLinkName() const { DARABONBA_PTR_GET_DEFAULT(DBLinkName_, "") };
      inline DBLinkInfos& setDBLinkName(string DBLinkName) { DARABONBA_PTR_SET_VALUE(DBLinkName_, DBLinkName) };


      // sourceDBName Field Functions 
      bool hasSourceDBName() const { return this->sourceDBName_ != nullptr;};
      void deleteSourceDBName() { this->sourceDBName_ = nullptr;};
      inline string getSourceDBName() const { DARABONBA_PTR_GET_DEFAULT(sourceDBName_, "") };
      inline DBLinkInfos& setSourceDBName(string sourceDBName) { DARABONBA_PTR_SET_VALUE(sourceDBName_, sourceDBName) };


      // targetAccount Field Functions 
      bool hasTargetAccount() const { return this->targetAccount_ != nullptr;};
      void deleteTargetAccount() { this->targetAccount_ = nullptr;};
      inline string getTargetAccount() const { DARABONBA_PTR_GET_DEFAULT(targetAccount_, "") };
      inline DBLinkInfos& setTargetAccount(string targetAccount) { DARABONBA_PTR_SET_VALUE(targetAccount_, targetAccount) };


      // targetDBInstanceName Field Functions 
      bool hasTargetDBInstanceName() const { return this->targetDBInstanceName_ != nullptr;};
      void deleteTargetDBInstanceName() { this->targetDBInstanceName_ = nullptr;};
      inline string getTargetDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(targetDBInstanceName_, "") };
      inline DBLinkInfos& setTargetDBInstanceName(string targetDBInstanceName) { DARABONBA_PTR_SET_VALUE(targetDBInstanceName_, targetDBInstanceName) };


      // targetDBName Field Functions 
      bool hasTargetDBName() const { return this->targetDBName_ != nullptr;};
      void deleteTargetDBName() { this->targetDBName_ = nullptr;};
      inline string getTargetDBName() const { DARABONBA_PTR_GET_DEFAULT(targetDBName_, "") };
      inline DBLinkInfos& setTargetDBName(string targetDBName) { DARABONBA_PTR_SET_VALUE(targetDBName_, targetDBName) };


    protected:
      // The ID of the source cluster that the database link connects.
      shared_ptr<string> DBInstanceName_ {};
      // The name of the database link.
      shared_ptr<string> DBLinkName_ {};
      // The name of the source database of the database link.
      shared_ptr<string> sourceDBName_ {};
      // The account of the destination database of the database link.
      shared_ptr<string> targetAccount_ {};
      // The ID of the destination cluster that the database link connects.
      // 
      // > If the destination cluster is not a PolarDB for Oracle cluster, the returned value is empty.
      shared_ptr<string> targetDBInstanceName_ {};
      // The name of the destination database of the database link.
      shared_ptr<string> targetDBName_ {};
    };

    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->DBLinkInfos_ == nullptr && this->requestId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeDBLinksResponseBody& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // DBLinkInfos Field Functions 
    bool hasDBLinkInfos() const { return this->DBLinkInfos_ != nullptr;};
    void deleteDBLinkInfos() { this->DBLinkInfos_ = nullptr;};
    inline const vector<DescribeDBLinksResponseBody::DBLinkInfos> & getDBLinkInfos() const { DARABONBA_PTR_GET_CONST(DBLinkInfos_, vector<DescribeDBLinksResponseBody::DBLinkInfos>) };
    inline vector<DescribeDBLinksResponseBody::DBLinkInfos> getDBLinkInfos() { DARABONBA_PTR_GET(DBLinkInfos_, vector<DescribeDBLinksResponseBody::DBLinkInfos>) };
    inline DescribeDBLinksResponseBody& setDBLinkInfos(const vector<DescribeDBLinksResponseBody::DBLinkInfos> & dBLinkInfos) { DARABONBA_PTR_SET_VALUE(DBLinkInfos_, dBLinkInfos) };
    inline DescribeDBLinksResponseBody& setDBLinkInfos(vector<DescribeDBLinksResponseBody::DBLinkInfos> && dBLinkInfos) { DARABONBA_PTR_SET_RVALUE(DBLinkInfos_, dBLinkInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBLinksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the cluster.
    shared_ptr<string> DBInstanceName_ {};
    // Details about the database links.
    shared_ptr<vector<DescribeDBLinksResponseBody::DBLinkInfos>> DBLinkInfos_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
