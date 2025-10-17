// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBLINKSRESPONSEBODYDBLINKINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBLINKSRESPONSEBODYDBLINKINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBLinksResponseBodyDBLinkInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBLinksResponseBodyDBLinkInfos& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DBLinkName, DBLinkName_);
      DARABONBA_PTR_TO_JSON(SourceDBName, sourceDBName_);
      DARABONBA_PTR_TO_JSON(TargetAccount, targetAccount_);
      DARABONBA_PTR_TO_JSON(TargetDBInstanceName, targetDBInstanceName_);
      DARABONBA_PTR_TO_JSON(TargetDBName, targetDBName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBLinksResponseBodyDBLinkInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DBLinkName, DBLinkName_);
      DARABONBA_PTR_FROM_JSON(SourceDBName, sourceDBName_);
      DARABONBA_PTR_FROM_JSON(TargetAccount, targetAccount_);
      DARABONBA_PTR_FROM_JSON(TargetDBInstanceName, targetDBInstanceName_);
      DARABONBA_PTR_FROM_JSON(TargetDBName, targetDBName_);
    };
    DescribeDBLinksResponseBodyDBLinkInfos() = default ;
    DescribeDBLinksResponseBodyDBLinkInfos(const DescribeDBLinksResponseBodyDBLinkInfos &) = default ;
    DescribeDBLinksResponseBodyDBLinkInfos(DescribeDBLinksResponseBodyDBLinkInfos &&) = default ;
    DescribeDBLinksResponseBodyDBLinkInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBLinksResponseBodyDBLinkInfos() = default ;
    DescribeDBLinksResponseBodyDBLinkInfos& operator=(const DescribeDBLinksResponseBodyDBLinkInfos &) = default ;
    DescribeDBLinksResponseBodyDBLinkInfos& operator=(DescribeDBLinksResponseBodyDBLinkInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && return this->DBLinkName_ == nullptr && return this->sourceDBName_ == nullptr && return this->targetAccount_ == nullptr && return this->targetDBInstanceName_ == nullptr && return this->targetDBName_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeDBLinksResponseBodyDBLinkInfos& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // DBLinkName Field Functions 
    bool hasDBLinkName() const { return this->DBLinkName_ != nullptr;};
    void deleteDBLinkName() { this->DBLinkName_ = nullptr;};
    inline string DBLinkName() const { DARABONBA_PTR_GET_DEFAULT(DBLinkName_, "") };
    inline DescribeDBLinksResponseBodyDBLinkInfos& setDBLinkName(string DBLinkName) { DARABONBA_PTR_SET_VALUE(DBLinkName_, DBLinkName) };


    // sourceDBName Field Functions 
    bool hasSourceDBName() const { return this->sourceDBName_ != nullptr;};
    void deleteSourceDBName() { this->sourceDBName_ = nullptr;};
    inline string sourceDBName() const { DARABONBA_PTR_GET_DEFAULT(sourceDBName_, "") };
    inline DescribeDBLinksResponseBodyDBLinkInfos& setSourceDBName(string sourceDBName) { DARABONBA_PTR_SET_VALUE(sourceDBName_, sourceDBName) };


    // targetAccount Field Functions 
    bool hasTargetAccount() const { return this->targetAccount_ != nullptr;};
    void deleteTargetAccount() { this->targetAccount_ = nullptr;};
    inline string targetAccount() const { DARABONBA_PTR_GET_DEFAULT(targetAccount_, "") };
    inline DescribeDBLinksResponseBodyDBLinkInfos& setTargetAccount(string targetAccount) { DARABONBA_PTR_SET_VALUE(targetAccount_, targetAccount) };


    // targetDBInstanceName Field Functions 
    bool hasTargetDBInstanceName() const { return this->targetDBInstanceName_ != nullptr;};
    void deleteTargetDBInstanceName() { this->targetDBInstanceName_ = nullptr;};
    inline string targetDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(targetDBInstanceName_, "") };
    inline DescribeDBLinksResponseBodyDBLinkInfos& setTargetDBInstanceName(string targetDBInstanceName) { DARABONBA_PTR_SET_VALUE(targetDBInstanceName_, targetDBInstanceName) };


    // targetDBName Field Functions 
    bool hasTargetDBName() const { return this->targetDBName_ != nullptr;};
    void deleteTargetDBName() { this->targetDBName_ = nullptr;};
    inline string targetDBName() const { DARABONBA_PTR_GET_DEFAULT(targetDBName_, "") };
    inline DescribeDBLinksResponseBodyDBLinkInfos& setTargetDBName(string targetDBName) { DARABONBA_PTR_SET_VALUE(targetDBName_, targetDBName) };


  protected:
    // The ID of the source cluster that the database link connects.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // The name of the database link.
    std::shared_ptr<string> DBLinkName_ = nullptr;
    // The name of the source database of the database link.
    std::shared_ptr<string> sourceDBName_ = nullptr;
    // The account of the destination database of the database link.
    std::shared_ptr<string> targetAccount_ = nullptr;
    // The ID of the destination cluster that the database link connects.
    // 
    // > If the destination cluster is not a PolarDB for Oracle cluster, the returned value is empty.
    std::shared_ptr<string> targetDBInstanceName_ = nullptr;
    // The name of the destination database of the database link.
    std::shared_ptr<string> targetDBName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
