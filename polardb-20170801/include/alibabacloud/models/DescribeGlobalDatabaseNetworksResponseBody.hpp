// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATABASENETWORKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATABASENETWORKSRESPONSEBODY_HPP_
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
  class DescribeGlobalDatabaseNetworksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDatabaseNetworksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDatabaseNetworksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeGlobalDatabaseNetworksResponseBody() = default ;
    DescribeGlobalDatabaseNetworksResponseBody(const DescribeGlobalDatabaseNetworksResponseBody &) = default ;
    DescribeGlobalDatabaseNetworksResponseBody(DescribeGlobalDatabaseNetworksResponseBody &&) = default ;
    DescribeGlobalDatabaseNetworksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDatabaseNetworksResponseBody() = default ;
    DescribeGlobalDatabaseNetworksResponseBody& operator=(const DescribeGlobalDatabaseNetworksResponseBody &) = default ;
    DescribeGlobalDatabaseNetworksResponseBody& operator=(DescribeGlobalDatabaseNetworksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DBClusters, DBClusters_);
        DARABONBA_PTR_TO_JSON(DBType, DBType_);
        DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
        DARABONBA_PTR_TO_JSON(GDNDescription, GDNDescription_);
        DARABONBA_PTR_TO_JSON(GDNId, GDNId_);
        DARABONBA_PTR_TO_JSON(GDNStatus, GDNStatus_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DBClusters, DBClusters_);
        DARABONBA_PTR_FROM_JSON(DBType, DBType_);
        DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
        DARABONBA_PTR_FROM_JSON(GDNDescription, GDNDescription_);
        DARABONBA_PTR_FROM_JSON(GDNId, GDNId_);
        DARABONBA_PTR_FROM_JSON(GDNStatus, GDNStatus_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
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
      class Labels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Labels& obj) { 
          DARABONBA_PTR_TO_JSON(GDNVersion, GDNVersion_);
        };
        friend void from_json(const Darabonba::Json& j, Labels& obj) { 
          DARABONBA_PTR_FROM_JSON(GDNVersion, GDNVersion_);
        };
        Labels() = default ;
        Labels(const Labels &) = default ;
        Labels(Labels &&) = default ;
        Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Labels() = default ;
        Labels& operator=(const Labels &) = default ;
        Labels& operator=(Labels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->GDNVersion_ == nullptr; };
        // GDNVersion Field Functions 
        bool hasGDNVersion() const { return this->GDNVersion_ != nullptr;};
        void deleteGDNVersion() { this->GDNVersion_ = nullptr;};
        inline string getGDNVersion() const { DARABONBA_PTR_GET_DEFAULT(GDNVersion_, "") };
        inline Labels& setGDNVersion(string GDNVersion) { DARABONBA_PTR_SET_VALUE(GDNVersion_, GDNVersion) };


      protected:
        shared_ptr<string> GDNVersion_ {};
      };

      class DBClusters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBClusters& obj) { 
          DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Role, role_);
        };
        friend void from_json(const Darabonba::Json& j, DBClusters& obj) { 
          DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
        };
        DBClusters() = default ;
        DBClusters(const DBClusters &) = default ;
        DBClusters(DBClusters &&) = default ;
        DBClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBClusters() = default ;
        DBClusters& operator=(const DBClusters &) = default ;
        DBClusters& operator=(DBClusters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->regionId_ == nullptr && this->role_ == nullptr; };
        // DBClusterId Field Functions 
        bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
        void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
        inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
        inline DBClusters& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DBClusters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline DBClusters& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      protected:
        // The ID of the cluster.
        shared_ptr<string> DBClusterId_ {};
        // The region ID of the cluster.
        shared_ptr<string> regionId_ {};
        // The role of the cluster. Valid values:
        // 
        // *   **Primary**: the primary cluster
        // *   **standby**: the secondary cluster
        // 
        // > A GDN consists of one primary cluster and up to four secondary clusters. For more information, see [GDN](https://help.aliyun.com/document_detail/160381.html).
        shared_ptr<string> role_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->DBClusters_ == nullptr && this->DBType_ == nullptr && this->DBVersion_ == nullptr && this->GDNDescription_ == nullptr && this->GDNId_ == nullptr
        && this->GDNStatus_ == nullptr && this->labels_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Items& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // DBClusters Field Functions 
      bool hasDBClusters() const { return this->DBClusters_ != nullptr;};
      void deleteDBClusters() { this->DBClusters_ = nullptr;};
      inline const vector<Items::DBClusters> & getDBClusters() const { DARABONBA_PTR_GET_CONST(DBClusters_, vector<Items::DBClusters>) };
      inline vector<Items::DBClusters> getDBClusters() { DARABONBA_PTR_GET(DBClusters_, vector<Items::DBClusters>) };
      inline Items& setDBClusters(const vector<Items::DBClusters> & dBClusters) { DARABONBA_PTR_SET_VALUE(DBClusters_, dBClusters) };
      inline Items& setDBClusters(vector<Items::DBClusters> && dBClusters) { DARABONBA_PTR_SET_RVALUE(DBClusters_, dBClusters) };


      // DBType Field Functions 
      bool hasDBType() const { return this->DBType_ != nullptr;};
      void deleteDBType() { this->DBType_ = nullptr;};
      inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
      inline Items& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


      // DBVersion Field Functions 
      bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
      void deleteDBVersion() { this->DBVersion_ = nullptr;};
      inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
      inline Items& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


      // GDNDescription Field Functions 
      bool hasGDNDescription() const { return this->GDNDescription_ != nullptr;};
      void deleteGDNDescription() { this->GDNDescription_ = nullptr;};
      inline string getGDNDescription() const { DARABONBA_PTR_GET_DEFAULT(GDNDescription_, "") };
      inline Items& setGDNDescription(string GDNDescription) { DARABONBA_PTR_SET_VALUE(GDNDescription_, GDNDescription) };


      // GDNId Field Functions 
      bool hasGDNId() const { return this->GDNId_ != nullptr;};
      void deleteGDNId() { this->GDNId_ = nullptr;};
      inline string getGDNId() const { DARABONBA_PTR_GET_DEFAULT(GDNId_, "") };
      inline Items& setGDNId(string GDNId) { DARABONBA_PTR_SET_VALUE(GDNId_, GDNId) };


      // GDNStatus Field Functions 
      bool hasGDNStatus() const { return this->GDNStatus_ != nullptr;};
      void deleteGDNStatus() { this->GDNStatus_ = nullptr;};
      inline string getGDNStatus() const { DARABONBA_PTR_GET_DEFAULT(GDNStatus_, "") };
      inline Items& setGDNStatus(string GDNStatus) { DARABONBA_PTR_SET_VALUE(GDNStatus_, GDNStatus) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const Items::Labels & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, Items::Labels) };
      inline Items::Labels getLabels() { DARABONBA_PTR_GET(labels_, Items::Labels) };
      inline Items& setLabels(const Items::Labels & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Items& setLabels(Items::Labels && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    protected:
      // The time when the GDN was created. The time is in the `YYYY-MM-DDThh:mm:ssZ` format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // Details about clusters in the GDN.
      shared_ptr<vector<Items::DBClusters>> DBClusters_ {};
      // The type of the database engine. Only **MySQL** is supported.
      shared_ptr<string> DBType_ {};
      // The version of the database engine. Only the **8.0** version is supported.
      shared_ptr<string> DBVersion_ {};
      // The description of the GDN. The description must meet the following requirements:
      // 
      // *   It cannot start with `http://` or `https://`.
      // *   It must start with a letter.
      // *   It can contain letters, digits, underscores (_), and hyphens (-).
      // *   It must be 2 to 126 characters in length.
      shared_ptr<string> GDNDescription_ {};
      // The ID of the GDN.
      shared_ptr<string> GDNId_ {};
      // The status of the GDN. Valid values:
      // 
      // *   **Creating**: The GDN is being created.
      // *   **active**: The GDN is running.
      // *   **deleting**: The GDN is being deleted.
      // *   **locked**: The GDN is locked. If the GDN is locked, you cannot perform operations on clusters in the GDN.
      // *   **removing_member**: The secondary cluster is being removed from the GDN.
      shared_ptr<string> GDNStatus_ {};
      shared_ptr<Items::Labels> labels_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeGlobalDatabaseNetworksResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeGlobalDatabaseNetworksResponseBody::Items>) };
    inline vector<DescribeGlobalDatabaseNetworksResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeGlobalDatabaseNetworksResponseBody::Items>) };
    inline DescribeGlobalDatabaseNetworksResponseBody& setItems(const vector<DescribeGlobalDatabaseNetworksResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeGlobalDatabaseNetworksResponseBody& setItems(vector<DescribeGlobalDatabaseNetworksResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGlobalDatabaseNetworksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeGlobalDatabaseNetworksResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGlobalDatabaseNetworksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeGlobalDatabaseNetworksResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // Details about the GDNs.
    shared_ptr<vector<DescribeGlobalDatabaseNetworksResponseBody::Items>> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
