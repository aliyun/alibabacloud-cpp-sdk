// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEYIKEPRODUCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEYIKEPRODUCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateYikeProductionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateYikeProductionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateYikeProductionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateYikeProductionRequest() = default ;
    CreateYikeProductionRequest(const CreateYikeProductionRequest &) = default ;
    CreateYikeProductionRequest(CreateYikeProductionRequest &&) = default ;
    CreateYikeProductionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateYikeProductionRequest() = default ;
    CreateYikeProductionRequest& operator=(const CreateYikeProductionRequest &) = default ;
    CreateYikeProductionRequest& operator=(CreateYikeProductionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->title_ == nullptr
        && this->workspaceId_ == nullptr; };
    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateYikeProductionRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateYikeProductionRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> title_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
