// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMINVENTORYKNOWLEDGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMINVENTORYKNOWLEDGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ConfirmInventoryKnowledgeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmInventoryKnowledgeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(KnowledgeType, knowledgeType_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmInventoryKnowledgeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(KnowledgeType, knowledgeType_);
    };
    ConfirmInventoryKnowledgeRequest() = default ;
    ConfirmInventoryKnowledgeRequest(const ConfirmInventoryKnowledgeRequest &) = default ;
    ConfirmInventoryKnowledgeRequest(ConfirmInventoryKnowledgeRequest &&) = default ;
    ConfirmInventoryKnowledgeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmInventoryKnowledgeRequest() = default ;
    ConfirmInventoryKnowledgeRequest& operator=(const ConfirmInventoryKnowledgeRequest &) = default ;
    ConfirmInventoryKnowledgeRequest& operator=(ConfirmInventoryKnowledgeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entityId_ == nullptr
        && this->jobId_ == nullptr && this->knowledgeType_ == nullptr; };
    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline int64_t getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
    inline ConfirmInventoryKnowledgeRequest& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline ConfirmInventoryKnowledgeRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // knowledgeType Field Functions 
    bool hasKnowledgeType() const { return this->knowledgeType_ != nullptr;};
    void deleteKnowledgeType() { this->knowledgeType_ = nullptr;};
    inline string getKnowledgeType() const { DARABONBA_PTR_GET_DEFAULT(knowledgeType_, "") };
    inline ConfirmInventoryKnowledgeRequest& setKnowledgeType(string knowledgeType) { DARABONBA_PTR_SET_VALUE(knowledgeType_, knowledgeType) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> entityId_ {};
    // This parameter is required.
    shared_ptr<int64_t> jobId_ {};
    // This parameter is required.
    shared_ptr<string> knowledgeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
