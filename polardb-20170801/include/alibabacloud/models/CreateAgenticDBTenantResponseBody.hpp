// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTICDBTENANTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTICDBTENANTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateAgenticDBTenantResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgenticDBTenantResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TenantName, tenantName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgenticDBTenantResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TenantName, tenantName_);
    };
    CreateAgenticDBTenantResponseBody() = default ;
    CreateAgenticDBTenantResponseBody(const CreateAgenticDBTenantResponseBody &) = default ;
    CreateAgenticDBTenantResponseBody(CreateAgenticDBTenantResponseBody &&) = default ;
    CreateAgenticDBTenantResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgenticDBTenantResponseBody() = default ;
    CreateAgenticDBTenantResponseBody& operator=(const CreateAgenticDBTenantResponseBody &) = default ;
    CreateAgenticDBTenantResponseBody& operator=(CreateAgenticDBTenantResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->DBClusterId_ == nullptr && this->requestId_ == nullptr && this->tenantId_ == nullptr && this->tenantName_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CreateAgenticDBTenantResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateAgenticDBTenantResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAgenticDBTenantResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateAgenticDBTenantResponseBody& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // tenantName Field Functions 
    bool hasTenantName() const { return this->tenantName_ != nullptr;};
    void deleteTenantName() { this->tenantName_ = nullptr;};
    inline string getTenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
    inline CreateAgenticDBTenantResponseBody& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


  protected:
    // The creation time.
    shared_ptr<string> createTime_ {};
    // The AgenticDB cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
    // The tenant name.
    shared_ptr<string> tenantName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
