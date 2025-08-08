// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBTOPOLOGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDBTOPOLOGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDBTopologyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDBTopologyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LogicDbId, logicDbId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetDBTopologyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LogicDbId, logicDbId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetDBTopologyRequest() = default ;
    GetDBTopologyRequest(const GetDBTopologyRequest &) = default ;
    GetDBTopologyRequest(GetDBTopologyRequest &&) = default ;
    GetDBTopologyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDBTopologyRequest() = default ;
    GetDBTopologyRequest& operator=(const GetDBTopologyRequest &) = default ;
    GetDBTopologyRequest& operator=(GetDBTopologyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logicDbId_ != nullptr
        && this->tid_ != nullptr; };
    // logicDbId Field Functions 
    bool hasLogicDbId() const { return this->logicDbId_ != nullptr;};
    void deleteLogicDbId() { this->logicDbId_ = nullptr;};
    inline int64_t logicDbId() const { DARABONBA_PTR_GET_DEFAULT(logicDbId_, 0L) };
    inline GetDBTopologyRequest& setLogicDbId(int64_t logicDbId) { DARABONBA_PTR_SET_VALUE(logicDbId_, logicDbId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetDBTopologyRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the logical database. You can call the [ListLogicDatabases](https://www.alibabacloud.com/help/en/data-management-service/latest/listlogicdatabases) or [SearchDatabase](https://www.alibabacloud.com/help/en/data-management-service/latest/searchdatabase) operation to query the ID of the logical database.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> logicDbId_ = nullptr;
    // The ID of the tenant.
    // 
    // > To view the tenant ID, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
