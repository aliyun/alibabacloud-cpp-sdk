// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATABASENETWORKSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATABASENETWORKSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters.hpp>
#include <alibabacloud/models/DescribeGlobalDatabaseNetworksResponseBodyItemsLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeGlobalDatabaseNetworksResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDatabaseNetworksResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBClusters, DBClusters_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(GDNDescription, GDNDescription_);
      DARABONBA_PTR_TO_JSON(GDNId, GDNId_);
      DARABONBA_PTR_TO_JSON(GDNStatus, GDNStatus_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDatabaseNetworksResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBClusters, DBClusters_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(GDNDescription, GDNDescription_);
      DARABONBA_PTR_FROM_JSON(GDNId, GDNId_);
      DARABONBA_PTR_FROM_JSON(GDNStatus, GDNStatus_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
    };
    DescribeGlobalDatabaseNetworksResponseBodyItems() = default ;
    DescribeGlobalDatabaseNetworksResponseBodyItems(const DescribeGlobalDatabaseNetworksResponseBodyItems &) = default ;
    DescribeGlobalDatabaseNetworksResponseBodyItems(DescribeGlobalDatabaseNetworksResponseBodyItems &&) = default ;
    DescribeGlobalDatabaseNetworksResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDatabaseNetworksResponseBodyItems() = default ;
    DescribeGlobalDatabaseNetworksResponseBodyItems& operator=(const DescribeGlobalDatabaseNetworksResponseBodyItems &) = default ;
    DescribeGlobalDatabaseNetworksResponseBodyItems& operator=(DescribeGlobalDatabaseNetworksResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->DBClusters_ != nullptr && this->DBType_ != nullptr && this->DBVersion_ != nullptr && this->GDNDescription_ != nullptr && this->GDNId_ != nullptr
        && this->GDNStatus_ != nullptr && this->labels_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeGlobalDatabaseNetworksResponseBodyItems& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBClusters Field Functions 
    bool hasDBClusters() const { return this->DBClusters_ != nullptr;};
    void deleteDBClusters() { this->DBClusters_ = nullptr;};
    inline const vector<Models::DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters> & DBClusters() const { DARABONBA_PTR_GET_CONST(DBClusters_, vector<Models::DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters>) };
    inline vector<Models::DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters> DBClusters() { DARABONBA_PTR_GET(DBClusters_, vector<Models::DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters>) };
    inline DescribeGlobalDatabaseNetworksResponseBodyItems& setDBClusters(const vector<Models::DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters> & DBClusters) { DARABONBA_PTR_SET_VALUE(DBClusters_, DBClusters) };
    inline DescribeGlobalDatabaseNetworksResponseBodyItems& setDBClusters(vector<Models::DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters> && DBClusters) { DARABONBA_PTR_SET_RVALUE(DBClusters_, DBClusters) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeGlobalDatabaseNetworksResponseBodyItems& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeGlobalDatabaseNetworksResponseBodyItems& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // GDNDescription Field Functions 
    bool hasGDNDescription() const { return this->GDNDescription_ != nullptr;};
    void deleteGDNDescription() { this->GDNDescription_ = nullptr;};
    inline string GDNDescription() const { DARABONBA_PTR_GET_DEFAULT(GDNDescription_, "") };
    inline DescribeGlobalDatabaseNetworksResponseBodyItems& setGDNDescription(string GDNDescription) { DARABONBA_PTR_SET_VALUE(GDNDescription_, GDNDescription) };


    // GDNId Field Functions 
    bool hasGDNId() const { return this->GDNId_ != nullptr;};
    void deleteGDNId() { this->GDNId_ = nullptr;};
    inline string GDNId() const { DARABONBA_PTR_GET_DEFAULT(GDNId_, "") };
    inline DescribeGlobalDatabaseNetworksResponseBodyItems& setGDNId(string GDNId) { DARABONBA_PTR_SET_VALUE(GDNId_, GDNId) };


    // GDNStatus Field Functions 
    bool hasGDNStatus() const { return this->GDNStatus_ != nullptr;};
    void deleteGDNStatus() { this->GDNStatus_ = nullptr;};
    inline string GDNStatus() const { DARABONBA_PTR_GET_DEFAULT(GDNStatus_, "") };
    inline DescribeGlobalDatabaseNetworksResponseBodyItems& setGDNStatus(string GDNStatus) { DARABONBA_PTR_SET_VALUE(GDNStatus_, GDNStatus) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const Models::DescribeGlobalDatabaseNetworksResponseBodyItemsLabels & labels() const { DARABONBA_PTR_GET_CONST(labels_, Models::DescribeGlobalDatabaseNetworksResponseBodyItemsLabels) };
    inline Models::DescribeGlobalDatabaseNetworksResponseBodyItemsLabels labels() { DARABONBA_PTR_GET(labels_, Models::DescribeGlobalDatabaseNetworksResponseBodyItemsLabels) };
    inline DescribeGlobalDatabaseNetworksResponseBodyItems& setLabels(const Models::DescribeGlobalDatabaseNetworksResponseBodyItemsLabels & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline DescribeGlobalDatabaseNetworksResponseBodyItems& setLabels(Models::DescribeGlobalDatabaseNetworksResponseBodyItemsLabels && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


  protected:
    // The time when the GDN was created. The time is in the `YYYY-MM-DDThh:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // Details about clusters in the GDN.
    std::shared_ptr<vector<Models::DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters>> DBClusters_ = nullptr;
    // The type of the database engine. Only **MySQL** is supported.
    std::shared_ptr<string> DBType_ = nullptr;
    // The version of the database engine. Only the **8.0** version is supported.
    std::shared_ptr<string> DBVersion_ = nullptr;
    // The description of the GDN. The description must meet the following requirements:
    // 
    // *   It cannot start with `http://` or `https://`.
    // *   It must start with a letter.
    // *   It can contain letters, digits, underscores (_), and hyphens (-).
    // *   It must be 2 to 126 characters in length.
    std::shared_ptr<string> GDNDescription_ = nullptr;
    // The ID of the GDN.
    std::shared_ptr<string> GDNId_ = nullptr;
    // The status of the GDN. Valid values:
    // 
    // *   **Creating**: The GDN is being created.
    // *   **active**: The GDN is running.
    // *   **deleting**: The GDN is being deleted.
    // *   **locked**: The GDN is locked. If the GDN is locked, you cannot perform operations on clusters in the GDN.
    // *   **removing_member**: The secondary cluster is being removed from the GDN.
    std::shared_ptr<string> GDNStatus_ = nullptr;
    std::shared_ptr<Models::DescribeGlobalDatabaseNetworksResponseBodyItemsLabels> labels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
