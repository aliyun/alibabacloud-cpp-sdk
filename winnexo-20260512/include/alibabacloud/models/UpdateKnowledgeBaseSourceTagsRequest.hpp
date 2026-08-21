// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASESOURCETAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASESOURCETAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateKnowledgeBaseSourceTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKnowledgeBaseSourceTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(sourceTags, sourceTags_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKnowledgeBaseSourceTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(sourceTags, sourceTags_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    UpdateKnowledgeBaseSourceTagsRequest() = default ;
    UpdateKnowledgeBaseSourceTagsRequest(const UpdateKnowledgeBaseSourceTagsRequest &) = default ;
    UpdateKnowledgeBaseSourceTagsRequest(UpdateKnowledgeBaseSourceTagsRequest &&) = default ;
    UpdateKnowledgeBaseSourceTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKnowledgeBaseSourceTagsRequest() = default ;
    UpdateKnowledgeBaseSourceTagsRequest& operator=(const UpdateKnowledgeBaseSourceTagsRequest &) = default ;
    UpdateKnowledgeBaseSourceTagsRequest& operator=(UpdateKnowledgeBaseSourceTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceId_ == nullptr
        && this->sourceTags_ == nullptr && this->tenantId_ == nullptr; };
    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline UpdateKnowledgeBaseSourceTagsRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceTags Field Functions 
    bool hasSourceTags() const { return this->sourceTags_ != nullptr;};
    void deleteSourceTags() { this->sourceTags_ = nullptr;};
    inline string getSourceTags() const { DARABONBA_PTR_GET_DEFAULT(sourceTags_, "") };
    inline UpdateKnowledgeBaseSourceTagsRequest& setSourceTags(string sourceTags) { DARABONBA_PTR_SET_VALUE(sourceTags_, sourceTags) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateKnowledgeBaseSourceTagsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The unique identifier on the business system side, that is, the business ID.
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
    // The resource tags. This is an optional parameter that accepts a JSON string list, such as ["tagA","tagB"].
    shared_ptr<string> sourceTags_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
