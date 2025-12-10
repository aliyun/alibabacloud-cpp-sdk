// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATEEXPERIMENTFOLDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MIGRATEEXPERIMENTFOLDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class MigrateExperimentFoldersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrateExperimentFoldersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(IsOwner, isOwner_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, MigrateExperimentFoldersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(IsOwner, isOwner_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    MigrateExperimentFoldersRequest() = default ;
    MigrateExperimentFoldersRequest(const MigrateExperimentFoldersRequest &) = default ;
    MigrateExperimentFoldersRequest(MigrateExperimentFoldersRequest &&) = default ;
    MigrateExperimentFoldersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrateExperimentFoldersRequest() = default ;
    MigrateExperimentFoldersRequest& operator=(const MigrateExperimentFoldersRequest &) = default ;
    MigrateExperimentFoldersRequest& operator=(MigrateExperimentFoldersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->isOwner_ == nullptr && return this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline MigrateExperimentFoldersRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // isOwner Field Functions 
    bool hasIsOwner() const { return this->isOwner_ != nullptr;};
    void deleteIsOwner() { this->isOwner_ = nullptr;};
    inline bool isOwner() const { DARABONBA_PTR_GET_DEFAULT(isOwner_, false) };
    inline MigrateExperimentFoldersRequest& setIsOwner(bool isOwner) { DARABONBA_PTR_SET_VALUE(isOwner_, isOwner) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline MigrateExperimentFoldersRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> accessibility_ = nullptr;
    std::shared_ptr<bool> isOwner_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
