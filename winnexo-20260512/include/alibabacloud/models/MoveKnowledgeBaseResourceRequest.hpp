// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVEKNOWLEDGEBASERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOVEKNOWLEDGEBASERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class MoveKnowledgeBaseResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveKnowledgeBaseResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(knowledgeId, knowledgeId_);
      DARABONBA_PTR_TO_JSON(sourceDirectoryId, sourceDirectoryId_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(targetDirectoryId, targetDirectoryId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, MoveKnowledgeBaseResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(knowledgeId, knowledgeId_);
      DARABONBA_PTR_FROM_JSON(sourceDirectoryId, sourceDirectoryId_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(targetDirectoryId, targetDirectoryId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    MoveKnowledgeBaseResourceRequest() = default ;
    MoveKnowledgeBaseResourceRequest(const MoveKnowledgeBaseResourceRequest &) = default ;
    MoveKnowledgeBaseResourceRequest(MoveKnowledgeBaseResourceRequest &&) = default ;
    MoveKnowledgeBaseResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveKnowledgeBaseResourceRequest() = default ;
    MoveKnowledgeBaseResourceRequest& operator=(const MoveKnowledgeBaseResourceRequest &) = default ;
    MoveKnowledgeBaseResourceRequest& operator=(MoveKnowledgeBaseResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->knowledgeId_ == nullptr
        && this->sourceDirectoryId_ == nullptr && this->sourceId_ == nullptr && this->targetDirectoryId_ == nullptr && this->tenantId_ == nullptr; };
    // knowledgeId Field Functions 
    bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
    void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
    inline string getKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, "") };
    inline MoveKnowledgeBaseResourceRequest& setKnowledgeId(string knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


    // sourceDirectoryId Field Functions 
    bool hasSourceDirectoryId() const { return this->sourceDirectoryId_ != nullptr;};
    void deleteSourceDirectoryId() { this->sourceDirectoryId_ = nullptr;};
    inline string getSourceDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(sourceDirectoryId_, "") };
    inline MoveKnowledgeBaseResourceRequest& setSourceDirectoryId(string sourceDirectoryId) { DARABONBA_PTR_SET_VALUE(sourceDirectoryId_, sourceDirectoryId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline MoveKnowledgeBaseResourceRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // targetDirectoryId Field Functions 
    bool hasTargetDirectoryId() const { return this->targetDirectoryId_ != nullptr;};
    void deleteTargetDirectoryId() { this->targetDirectoryId_ = nullptr;};
    inline string getTargetDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(targetDirectoryId_, "") };
    inline MoveKnowledgeBaseResourceRequest& setTargetDirectoryId(string targetDirectoryId) { DARABONBA_PTR_SET_VALUE(targetDirectoryId_, targetDirectoryId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline MoveKnowledgeBaseResourceRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 目标知识库 ID
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeId_ {};
    // 源目录 ID（资源当前所在的企业知识库目录）
    // 
    // This parameter is required.
    shared_ptr<string> sourceDirectoryId_ {};
    // 待移动的资源 ID
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
    // 目标目录 ID（资源即将移动到的企业知识库目录）
    // 
    // This parameter is required.
    shared_ptr<string> targetDirectoryId_ {};
    // 租户ID，公共参数；winnexo-cli 通过 --tenant-id 显式传入
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
