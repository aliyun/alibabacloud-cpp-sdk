// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPMETADATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPMETADATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class QueryAppMetadataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAppMetadataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MetaIds, metaIds_);
      DARABONBA_PTR_TO_JSON(MetaType, metaType_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAppMetadataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MetaIds, metaIds_);
      DARABONBA_PTR_FROM_JSON(MetaType, metaType_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    QueryAppMetadataRequest() = default ;
    QueryAppMetadataRequest(const QueryAppMetadataRequest &) = default ;
    QueryAppMetadataRequest(QueryAppMetadataRequest &&) = default ;
    QueryAppMetadataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAppMetadataRequest() = default ;
    QueryAppMetadataRequest& operator=(const QueryAppMetadataRequest &) = default ;
    QueryAppMetadataRequest& operator=(QueryAppMetadataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metaIds_ != nullptr
        && this->metaType_ != nullptr && this->pid_ != nullptr && this->regionId_ != nullptr; };
    // metaIds Field Functions 
    bool hasMetaIds() const { return this->metaIds_ != nullptr;};
    void deleteMetaIds() { this->metaIds_ = nullptr;};
    inline string metaIds() const { DARABONBA_PTR_GET_DEFAULT(metaIds_, "") };
    inline QueryAppMetadataRequest& setMetaIds(string metaIds) { DARABONBA_PTR_SET_VALUE(metaIds_, metaIds) };


    // metaType Field Functions 
    bool hasMetaType() const { return this->metaType_ != nullptr;};
    void deleteMetaType() { this->metaType_ = nullptr;};
    inline string metaType() const { DARABONBA_PTR_GET_DEFAULT(metaType_, "") };
    inline QueryAppMetadataRequest& setMetaType(string metaType) { DARABONBA_PTR_SET_VALUE(metaType_, metaType) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline QueryAppMetadataRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryAppMetadataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The metadata IDs. Separate multiple IDs with commas (,).
    // 
    // You can obtain the exception ID on the **Exception Analysis** page of your application in the ARMS console.
    // 
    // This parameter is required.
    std::shared_ptr<string> metaIds_ = nullptr;
    // The metadata type. Valid values:
    // 
    // *   sql: obtains an SQL statement based on sqlId.
    // *   exception: obtains the exception stack based on exceptionId.
    // 
    // This parameter is required.
    std::shared_ptr<string> metaType_ = nullptr;
    // The process identifier (PID) of the application. You can obtain the PID of an application by calling the **ListTraceApps** operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> pid_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
