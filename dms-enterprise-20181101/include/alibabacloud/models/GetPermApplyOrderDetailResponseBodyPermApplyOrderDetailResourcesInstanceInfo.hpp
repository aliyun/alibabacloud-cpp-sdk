// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMAPPLYORDERDETAILRESPONSEBODYPERMAPPLYORDERDETAILRESOURCESINSTANCEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETPERMAPPLYORDERDETAILRESPONSEBODYPERMAPPLYORDERDETAILRESOURCESINSTANCEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(DbaId, dbaId_);
      DARABONBA_PTR_TO_JSON(DbaNickName, dbaNickName_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerIds, ownerIds_);
      DARABONBA_PTR_TO_JSON(OwnerNickName, ownerNickName_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(DbaId, dbaId_);
      DARABONBA_PTR_FROM_JSON(DbaNickName, dbaNickName_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerIds, ownerIds_);
      DARABONBA_PTR_FROM_JSON(OwnerNickName, ownerNickName_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
    };
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo() = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo(const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo &) = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo(GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo &&) = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo() = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo& operator=(const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo &) = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo& operator=(GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbType_ == nullptr
        && return this->dbaId_ == nullptr && return this->dbaNickName_ == nullptr && return this->envType_ == nullptr && return this->host_ == nullptr && return this->instanceId_ == nullptr
        && return this->ownerIds_ == nullptr && return this->ownerNickName_ == nullptr && return this->port_ == nullptr && return this->searchName_ == nullptr; };
    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // dbaId Field Functions 
    bool hasDbaId() const { return this->dbaId_ != nullptr;};
    void deleteDbaId() { this->dbaId_ = nullptr;};
    inline int64_t dbaId() const { DARABONBA_PTR_GET_DEFAULT(dbaId_, 0L) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo& setDbaId(int64_t dbaId) { DARABONBA_PTR_SET_VALUE(dbaId_, dbaId) };


    // dbaNickName Field Functions 
    bool hasDbaNickName() const { return this->dbaNickName_ != nullptr;};
    void deleteDbaNickName() { this->dbaNickName_ = nullptr;};
    inline string dbaNickName() const { DARABONBA_PTR_GET_DEFAULT(dbaNickName_, "") };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo& setDbaNickName(string dbaNickName) { DARABONBA_PTR_SET_VALUE(dbaNickName_, dbaNickName) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerIds Field Functions 
    bool hasOwnerIds() const { return this->ownerIds_ != nullptr;};
    void deleteOwnerIds() { this->ownerIds_ = nullptr;};
    inline const vector<int64_t> & ownerIds() const { DARABONBA_PTR_GET_CONST(ownerIds_, vector<int64_t>) };
    inline vector<int64_t> ownerIds() { DARABONBA_PTR_GET(ownerIds_, vector<int64_t>) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo& setOwnerIds(const vector<int64_t> & ownerIds) { DARABONBA_PTR_SET_VALUE(ownerIds_, ownerIds) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo& setOwnerIds(vector<int64_t> && ownerIds) { DARABONBA_PTR_SET_RVALUE(ownerIds_, ownerIds) };


    // ownerNickName Field Functions 
    bool hasOwnerNickName() const { return this->ownerNickName_ != nullptr;};
    void deleteOwnerNickName() { this->ownerNickName_ = nullptr;};
    inline const vector<string> & ownerNickName() const { DARABONBA_PTR_GET_CONST(ownerNickName_, vector<string>) };
    inline vector<string> ownerNickName() { DARABONBA_PTR_GET(ownerNickName_, vector<string>) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo& setOwnerNickName(const vector<string> & ownerNickName) { DARABONBA_PTR_SET_VALUE(ownerNickName_, ownerNickName) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo& setOwnerNickName(vector<string> && ownerNickName) { DARABONBA_PTR_SET_RVALUE(ownerNickName_, ownerNickName) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int64_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


  protected:
    // The type of the database engine.
    std::shared_ptr<string> dbType_ = nullptr;
    // The ID of the database administrator (DBA) of the instance.
    std::shared_ptr<int64_t> dbaId_ = nullptr;
    // The nickname of the DBA of the instance.
    std::shared_ptr<string> dbaNickName_ = nullptr;
    // The type of the environment to which the instance belongs. For more information, see [Change the environment type of an instance](https://help.aliyun.com/document_detail/163309.html).
    std::shared_ptr<string> envType_ = nullptr;
    // The endpoint of the instance.
    std::shared_ptr<string> host_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IDs of the owners of the instance.
    std::shared_ptr<vector<int64_t>> ownerIds_ = nullptr;
    // The nicknames of the owners of the instance.
    std::shared_ptr<vector<string>> ownerNickName_ = nullptr;
    // The port that is used to connect to the instance.
    std::shared_ptr<int64_t> port_ = nullptr;
    // The name that is used to search for the instance.
    std::shared_ptr<string> searchName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
