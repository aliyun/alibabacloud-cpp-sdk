// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYKNOWLEDGEBASEFAILEDSOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRYKNOWLEDGEBASEFAILEDSOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class RetryKnowledgeBaseFailedSourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryKnowledgeBaseFailedSourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, RetryKnowledgeBaseFailedSourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    RetryKnowledgeBaseFailedSourcesRequest() = default ;
    RetryKnowledgeBaseFailedSourcesRequest(const RetryKnowledgeBaseFailedSourcesRequest &) = default ;
    RetryKnowledgeBaseFailedSourcesRequest(RetryKnowledgeBaseFailedSourcesRequest &&) = default ;
    RetryKnowledgeBaseFailedSourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryKnowledgeBaseFailedSourcesRequest() = default ;
    RetryKnowledgeBaseFailedSourcesRequest& operator=(const RetryKnowledgeBaseFailedSourcesRequest &) = default ;
    RetryKnowledgeBaseFailedSourcesRequest& operator=(RetryKnowledgeBaseFailedSourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->tenantId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline RetryKnowledgeBaseFailedSourcesRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline RetryKnowledgeBaseFailedSourcesRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 企业知识库目录 ID（递归包含子目录下的失败资源）
    // 
    // This parameter is required.
    shared_ptr<string> directoryId_ {};
    // 租户ID，公共参数；winnexo-cli 通过 --tenant-id 显式传入
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
