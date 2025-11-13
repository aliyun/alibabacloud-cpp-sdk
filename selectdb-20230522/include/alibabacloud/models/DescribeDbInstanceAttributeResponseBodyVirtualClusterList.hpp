// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYVIRTUALCLUSTERLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYVIRTUALCLUSTERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeDBInstanceAttributeResponseBodyVirtualClusterList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBodyVirtualClusterList& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveClusterId, activeClusterId_);
      DARABONBA_PTR_TO_JSON(ActiveClusterName, activeClusterName_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_TO_JSON(DbClusterName, dbClusterName_);
      DARABONBA_PTR_TO_JSON(StandbyClusterId, standbyClusterId_);
      DARABONBA_PTR_TO_JSON(StandbyClusterName, standbyClusterName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBodyVirtualClusterList& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveClusterId, activeClusterId_);
      DARABONBA_PTR_FROM_JSON(ActiveClusterName, activeClusterName_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_FROM_JSON(DbClusterName, dbClusterName_);
      DARABONBA_PTR_FROM_JSON(StandbyClusterId, standbyClusterId_);
      DARABONBA_PTR_FROM_JSON(StandbyClusterName, standbyClusterName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDBInstanceAttributeResponseBodyVirtualClusterList() = default ;
    DescribeDBInstanceAttributeResponseBodyVirtualClusterList(const DescribeDBInstanceAttributeResponseBodyVirtualClusterList &) = default ;
    DescribeDBInstanceAttributeResponseBodyVirtualClusterList(DescribeDBInstanceAttributeResponseBodyVirtualClusterList &&) = default ;
    DescribeDBInstanceAttributeResponseBodyVirtualClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBodyVirtualClusterList() = default ;
    DescribeDBInstanceAttributeResponseBodyVirtualClusterList& operator=(const DescribeDBInstanceAttributeResponseBodyVirtualClusterList &) = default ;
    DescribeDBInstanceAttributeResponseBodyVirtualClusterList& operator=(DescribeDBInstanceAttributeResponseBodyVirtualClusterList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeClusterId_ == nullptr
        && return this->activeClusterName_ == nullptr && return this->createdTime_ == nullptr && return this->dbClusterId_ == nullptr && return this->dbClusterName_ == nullptr && return this->standbyClusterId_ == nullptr
        && return this->standbyClusterName_ == nullptr && return this->status_ == nullptr; };
    // activeClusterId Field Functions 
    bool hasActiveClusterId() const { return this->activeClusterId_ != nullptr;};
    void deleteActiveClusterId() { this->activeClusterId_ = nullptr;};
    inline string activeClusterId() const { DARABONBA_PTR_GET_DEFAULT(activeClusterId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyVirtualClusterList& setActiveClusterId(string activeClusterId) { DARABONBA_PTR_SET_VALUE(activeClusterId_, activeClusterId) };


    // activeClusterName Field Functions 
    bool hasActiveClusterName() const { return this->activeClusterName_ != nullptr;};
    void deleteActiveClusterName() { this->activeClusterName_ = nullptr;};
    inline string activeClusterName() const { DARABONBA_PTR_GET_DEFAULT(activeClusterName_, "") };
    inline DescribeDBInstanceAttributeResponseBodyVirtualClusterList& setActiveClusterName(string activeClusterName) { DARABONBA_PTR_SET_VALUE(activeClusterName_, activeClusterName) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeDBInstanceAttributeResponseBodyVirtualClusterList& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // dbClusterId Field Functions 
    bool hasDbClusterId() const { return this->dbClusterId_ != nullptr;};
    void deleteDbClusterId() { this->dbClusterId_ = nullptr;};
    inline string dbClusterId() const { DARABONBA_PTR_GET_DEFAULT(dbClusterId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyVirtualClusterList& setDbClusterId(string dbClusterId) { DARABONBA_PTR_SET_VALUE(dbClusterId_, dbClusterId) };


    // dbClusterName Field Functions 
    bool hasDbClusterName() const { return this->dbClusterName_ != nullptr;};
    void deleteDbClusterName() { this->dbClusterName_ = nullptr;};
    inline string dbClusterName() const { DARABONBA_PTR_GET_DEFAULT(dbClusterName_, "") };
    inline DescribeDBInstanceAttributeResponseBodyVirtualClusterList& setDbClusterName(string dbClusterName) { DARABONBA_PTR_SET_VALUE(dbClusterName_, dbClusterName) };


    // standbyClusterId Field Functions 
    bool hasStandbyClusterId() const { return this->standbyClusterId_ != nullptr;};
    void deleteStandbyClusterId() { this->standbyClusterId_ = nullptr;};
    inline string standbyClusterId() const { DARABONBA_PTR_GET_DEFAULT(standbyClusterId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyVirtualClusterList& setStandbyClusterId(string standbyClusterId) { DARABONBA_PTR_SET_VALUE(standbyClusterId_, standbyClusterId) };


    // standbyClusterName Field Functions 
    bool hasStandbyClusterName() const { return this->standbyClusterName_ != nullptr;};
    void deleteStandbyClusterName() { this->standbyClusterName_ = nullptr;};
    inline string standbyClusterName() const { DARABONBA_PTR_GET_DEFAULT(standbyClusterName_, "") };
    inline DescribeDBInstanceAttributeResponseBodyVirtualClusterList& setStandbyClusterName(string standbyClusterName) { DARABONBA_PTR_SET_VALUE(standbyClusterName_, standbyClusterName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDBInstanceAttributeResponseBodyVirtualClusterList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> activeClusterId_ = nullptr;
    std::shared_ptr<string> activeClusterName_ = nullptr;
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> dbClusterId_ = nullptr;
    std::shared_ptr<string> dbClusterName_ = nullptr;
    std::shared_ptr<string> standbyClusterId_ = nullptr;
    std::shared_ptr<string> standbyClusterName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
