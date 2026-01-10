// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_TO_JSON(InstanceState, instanceState_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_FROM_JSON(InstanceState, instanceState_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListInstancesRequest() = default ;
    ListInstancesRequest(const ListInstancesRequest &) = default ;
    ListInstancesRequest(ListInstancesRequest &&) = default ;
    ListInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesRequest() = default ;
    ListInstancesRequest& operator=(const ListInstancesRequest &) = default ;
    ListInstancesRequest& operator=(ListInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbType_ == nullptr
        && this->envType_ == nullptr && this->instanceSource_ == nullptr && this->instanceState_ == nullptr && this->netType_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->realLoginUserUid_ == nullptr && this->region_ == nullptr && this->searchKey_ == nullptr && this->tid_ == nullptr; };
    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline ListInstancesRequest& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListInstancesRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // instanceSource Field Functions 
    bool hasInstanceSource() const { return this->instanceSource_ != nullptr;};
    void deleteInstanceSource() { this->instanceSource_ = nullptr;};
    inline string getInstanceSource() const { DARABONBA_PTR_GET_DEFAULT(instanceSource_, "") };
    inline ListInstancesRequest& setInstanceSource(string instanceSource) { DARABONBA_PTR_SET_VALUE(instanceSource_, instanceSource) };


    // instanceState Field Functions 
    bool hasInstanceState() const { return this->instanceState_ != nullptr;};
    void deleteInstanceState() { this->instanceState_ = nullptr;};
    inline string getInstanceState() const { DARABONBA_PTR_GET_DEFAULT(instanceState_, "") };
    inline ListInstancesRequest& setInstanceState(string instanceState) { DARABONBA_PTR_SET_VALUE(instanceState_, instanceState) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline ListInstancesRequest& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // realLoginUserUid Field Functions 
    bool hasRealLoginUserUid() const { return this->realLoginUserUid_ != nullptr;};
    void deleteRealLoginUserUid() { this->realLoginUserUid_ = nullptr;};
    inline string getRealLoginUserUid() const { DARABONBA_PTR_GET_DEFAULT(realLoginUserUid_, "") };
    inline ListInstancesRequest& setRealLoginUserUid(string realLoginUserUid) { DARABONBA_PTR_SET_VALUE(realLoginUserUid_, realLoginUserUid) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListInstancesRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline ListInstancesRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListInstancesRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The type of the database. For more information about the valid values of this parameter, see [DbType parameter](https://help.aliyun.com/document_detail/198106.html).
    shared_ptr<string> dbType_ {};
    // The type of the environment to which the database instance belongs. Valid values:
    // 
    // *   **product:** production environment
    // *   **dev**: development environment
    // *   **pre**: pre-release environment
    // *   **test**: test environment
    // *   **sit**: system integration testing (SIT) environment
    // *   **uat**: user acceptance testing (UAT) environment
    // *   **pet**: stress testing environment
    // *   **stag:** staging environment
    shared_ptr<string> envType_ {};
    // The source of the database instance. Valid values:
    // 
    // *   **PUBLIC_OWN**: a self-managed database instance that is deployed on the Internet
    // *   **RDS**: an ApsaraDB RDS instance
    // *   **ECS_OWN**: a self-managed database that is deployed on an Elastic Compute Service (ECS) instance
    // *   **VPC_IDC**: a self-managed database instance that is deployed in a data center connected over a virtual private cloud (VPC)
    shared_ptr<string> instanceSource_ {};
    // The status of the database instance. Valid values:
    // 
    // *   **NORMAL**
    // *   **DISABLE**
    shared_ptr<string> instanceState_ {};
    // The network type of the database instance. Valid values:
    // 
    // *   **CLASSIC:** classic network
    // *   **VPC:** VPC
    shared_ptr<string> netType_ {};
    // The number of the page to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. The number cannot exceed 100.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> realLoginUserUid_ {};
    shared_ptr<string> region_ {};
    // The keyword that is used to search for database instances.
    shared_ptr<string> searchKey_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to obtain the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
