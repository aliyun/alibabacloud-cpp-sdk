// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPPTTEMPLATESELECTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPPTTEMPLATESELECTORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetPptTemplateSelectorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPptTemplateSelectorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPptTemplateSelectorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetPptTemplateSelectorRequest() = default ;
    GetPptTemplateSelectorRequest(const GetPptTemplateSelectorRequest &) = default ;
    GetPptTemplateSelectorRequest(GetPptTemplateSelectorRequest &&) = default ;
    GetPptTemplateSelectorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPptTemplateSelectorRequest() = default ;
    GetPptTemplateSelectorRequest& operator=(const GetPptTemplateSelectorRequest &) = default ;
    GetPptTemplateSelectorRequest& operator=(GetPptTemplateSelectorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workspaceId_ == nullptr; };
    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetPptTemplateSelectorRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
