// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALGORITHMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEALGORITHMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class CreateAlgorithmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlgorithmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlgorithmDescription, algorithmDescription_);
      DARABONBA_PTR_TO_JSON(AlgorithmName, algorithmName_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlgorithmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgorithmDescription, algorithmDescription_);
      DARABONBA_PTR_FROM_JSON(AlgorithmName, algorithmName_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateAlgorithmRequest() = default ;
    CreateAlgorithmRequest(const CreateAlgorithmRequest &) = default ;
    CreateAlgorithmRequest(CreateAlgorithmRequest &&) = default ;
    CreateAlgorithmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlgorithmRequest() = default ;
    CreateAlgorithmRequest& operator=(const CreateAlgorithmRequest &) = default ;
    CreateAlgorithmRequest& operator=(CreateAlgorithmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithmDescription_ == nullptr
        && return this->algorithmName_ == nullptr && return this->displayName_ == nullptr && return this->workspaceId_ == nullptr; };
    // algorithmDescription Field Functions 
    bool hasAlgorithmDescription() const { return this->algorithmDescription_ != nullptr;};
    void deleteAlgorithmDescription() { this->algorithmDescription_ = nullptr;};
    inline string algorithmDescription() const { DARABONBA_PTR_GET_DEFAULT(algorithmDescription_, "") };
    inline CreateAlgorithmRequest& setAlgorithmDescription(string algorithmDescription) { DARABONBA_PTR_SET_VALUE(algorithmDescription_, algorithmDescription) };


    // algorithmName Field Functions 
    bool hasAlgorithmName() const { return this->algorithmName_ != nullptr;};
    void deleteAlgorithmName() { this->algorithmName_ = nullptr;};
    inline string algorithmName() const { DARABONBA_PTR_GET_DEFAULT(algorithmName_, "") };
    inline CreateAlgorithmRequest& setAlgorithmName(string algorithmName) { DARABONBA_PTR_SET_VALUE(algorithmName_, algorithmName) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateAlgorithmRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateAlgorithmRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> algorithmDescription_ = nullptr;
    std::shared_ptr<string> algorithmName_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
