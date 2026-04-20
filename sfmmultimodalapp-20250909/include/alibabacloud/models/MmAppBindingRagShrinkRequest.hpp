// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MMAPPBINDINGRAGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MMAPPBINDINGRAGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class MmAppBindingRagShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MmAppBindingRagShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseCodeList, knowledgeBaseCodeListShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, MmAppBindingRagShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseCodeList, knowledgeBaseCodeListShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    MmAppBindingRagShrinkRequest() = default ;
    MmAppBindingRagShrinkRequest(const MmAppBindingRagShrinkRequest &) = default ;
    MmAppBindingRagShrinkRequest(MmAppBindingRagShrinkRequest &&) = default ;
    MmAppBindingRagShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MmAppBindingRagShrinkRequest() = default ;
    MmAppBindingRagShrinkRequest& operator=(const MmAppBindingRagShrinkRequest &) = default ;
    MmAppBindingRagShrinkRequest& operator=(MmAppBindingRagShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->knowledgeBaseCodeListShrink_ == nullptr && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline MmAppBindingRagShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // knowledgeBaseCodeListShrink Field Functions 
    bool hasKnowledgeBaseCodeListShrink() const { return this->knowledgeBaseCodeListShrink_ != nullptr;};
    void deleteKnowledgeBaseCodeListShrink() { this->knowledgeBaseCodeListShrink_ = nullptr;};
    inline string getKnowledgeBaseCodeListShrink() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseCodeListShrink_, "") };
    inline MmAppBindingRagShrinkRequest& setKnowledgeBaseCodeListShrink(string knowledgeBaseCodeListShrink) { DARABONBA_PTR_SET_VALUE(knowledgeBaseCodeListShrink_, knowledgeBaseCodeListShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline MmAppBindingRagShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<string> knowledgeBaseCodeListShrink_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
