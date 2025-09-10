// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateServiceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Develop, develop_);
      DARABONBA_PTR_TO_JSON(Labels, labelsShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Develop, develop_);
      DARABONBA_PTR_FROM_JSON(Labels, labelsShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateServiceShrinkRequest() = default ;
    CreateServiceShrinkRequest(const CreateServiceShrinkRequest &) = default ;
    CreateServiceShrinkRequest(CreateServiceShrinkRequest &&) = default ;
    CreateServiceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceShrinkRequest() = default ;
    CreateServiceShrinkRequest& operator=(const CreateServiceShrinkRequest &) = default ;
    CreateServiceShrinkRequest& operator=(CreateServiceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->develop_ != nullptr
        && this->labelsShrink_ != nullptr && this->workspaceId_ != nullptr && this->body_ != nullptr; };
    // develop Field Functions 
    bool hasDevelop() const { return this->develop_ != nullptr;};
    void deleteDevelop() { this->develop_ = nullptr;};
    inline string develop() const { DARABONBA_PTR_GET_DEFAULT(develop_, "") };
    inline CreateServiceShrinkRequest& setDevelop(string develop) { DARABONBA_PTR_SET_VALUE(develop_, develop) };


    // labelsShrink Field Functions 
    bool hasLabelsShrink() const { return this->labelsShrink_ != nullptr;};
    void deleteLabelsShrink() { this->labelsShrink_ = nullptr;};
    inline string labelsShrink() const { DARABONBA_PTR_GET_DEFAULT(labelsShrink_, "") };
    inline CreateServiceShrinkRequest& setLabelsShrink(string labelsShrink) { DARABONBA_PTR_SET_VALUE(labelsShrink_, labelsShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateServiceShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline CreateServiceShrinkRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


  protected:
    // Specifies whether to enter development mode.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> develop_ = nullptr;
    // The custom label.
    std::shared_ptr<string> labelsShrink_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // The request body. For more information about the key request parameters, see **Table 1. Request body parameters** and **Table 2. Metadata parameters**. For more information about all related parameters, see [Parameters of model services](https://help.aliyun.com/document_detail/450525.html).
    std::shared_ptr<string> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
