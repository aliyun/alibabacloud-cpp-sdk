// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERKNOWLEDGEBASESYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERKNOWLEDGEBASESYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class TriggerKnowledgeBaseSyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerKnowledgeBaseSyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(LinkId, linkId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerKnowledgeBaseSyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(LinkId, linkId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    TriggerKnowledgeBaseSyncRequest() = default ;
    TriggerKnowledgeBaseSyncRequest(const TriggerKnowledgeBaseSyncRequest &) = default ;
    TriggerKnowledgeBaseSyncRequest(TriggerKnowledgeBaseSyncRequest &&) = default ;
    TriggerKnowledgeBaseSyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerKnowledgeBaseSyncRequest() = default ;
    TriggerKnowledgeBaseSyncRequest& operator=(const TriggerKnowledgeBaseSyncRequest &) = default ;
    TriggerKnowledgeBaseSyncRequest& operator=(TriggerKnowledgeBaseSyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->knowledgeBaseId_ == nullptr
        && this->linkId_ == nullptr && this->regionId_ == nullptr; };
    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline TriggerKnowledgeBaseSyncRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // linkId Field Functions 
    bool hasLinkId() const { return this->linkId_ != nullptr;};
    void deleteLinkId() { this->linkId_ = nullptr;};
    inline string getLinkId() const { DARABONBA_PTR_GET_DEFAULT(linkId_, "") };
    inline TriggerKnowledgeBaseSyncRequest& setLinkId(string linkId) { DARABONBA_PTR_SET_VALUE(linkId_, linkId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline TriggerKnowledgeBaseSyncRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    shared_ptr<string> linkId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
