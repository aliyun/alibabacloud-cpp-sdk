// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVOICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVOICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class ListVoiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVoiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVoiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListVoiceRequest() = default ;
    ListVoiceRequest(const ListVoiceRequest &) = default ;
    ListVoiceRequest(ListVoiceRequest &&) = default ;
    ListVoiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVoiceRequest() = default ;
    ListVoiceRequest& operator=(const ListVoiceRequest &) = default ;
    ListVoiceRequest& operator=(ListVoiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelId_ == nullptr
        && this->workspaceId_ == nullptr; };
    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline ListVoiceRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListVoiceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> modelId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
