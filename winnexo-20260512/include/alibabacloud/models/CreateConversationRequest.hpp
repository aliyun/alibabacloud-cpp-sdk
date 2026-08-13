// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONVERSATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONVERSATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateConversationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConversationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(objectId, objectId_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConversationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(objectId, objectId_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CreateConversationRequest() = default ;
    CreateConversationRequest(const CreateConversationRequest &) = default ;
    CreateConversationRequest(CreateConversationRequest &&) = default ;
    CreateConversationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConversationRequest() = default ;
    CreateConversationRequest& operator=(const CreateConversationRequest &) = default ;
    CreateConversationRequest& operator=(CreateConversationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metadata_ == nullptr
        && this->objectId_ == nullptr && this->operatingObjectName_ == nullptr && this->tenantId_ == nullptr; };
    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline string getMetadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
    inline CreateConversationRequest& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline CreateConversationRequest& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline const vector<Darabonba::Json> & getOperatingObjectName() const { DARABONBA_PTR_GET_CONST(operatingObjectName_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getOperatingObjectName() { DARABONBA_PTR_GET(operatingObjectName_, vector<Darabonba::Json>) };
    inline CreateConversationRequest& setOperatingObjectName(const vector<Darabonba::Json> & operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };
    inline CreateConversationRequest& setOperatingObjectName(vector<Darabonba::Json> && operatingObjectName) { DARABONBA_PTR_SET_RVALUE(operatingObjectName_, operatingObjectName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateConversationRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 会话元数据，可含 model 等透传字段（model 需为合法抽象模型名，否则回退默认）
    shared_ptr<string> metadata_ {};
    // 关联业务对象ID
    shared_ptr<string> objectId_ {};
    // operatingObjectName
    shared_ptr<vector<Darabonba::Json>> operatingObjectName_ {};
    // 租户ID，公共参数，缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
