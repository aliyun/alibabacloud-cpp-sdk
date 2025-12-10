// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXPERIMENTFOLDERCHILDRENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEXPERIMENTFOLDERCHILDRENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetExperimentFolderChildrenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExperimentFolderChildrenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(OnlyFolder, onlyFolder_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetExperimentFolderChildrenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(OnlyFolder, onlyFolder_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetExperimentFolderChildrenRequest() = default ;
    GetExperimentFolderChildrenRequest(const GetExperimentFolderChildrenRequest &) = default ;
    GetExperimentFolderChildrenRequest(GetExperimentFolderChildrenRequest &&) = default ;
    GetExperimentFolderChildrenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExperimentFolderChildrenRequest() = default ;
    GetExperimentFolderChildrenRequest& operator=(const GetExperimentFolderChildrenRequest &) = default ;
    GetExperimentFolderChildrenRequest& operator=(GetExperimentFolderChildrenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->onlyFolder_ == nullptr && return this->source_ == nullptr && return this->userId_ == nullptr && return this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline GetExperimentFolderChildrenRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // onlyFolder Field Functions 
    bool hasOnlyFolder() const { return this->onlyFolder_ != nullptr;};
    void deleteOnlyFolder() { this->onlyFolder_ = nullptr;};
    inline bool onlyFolder() const { DARABONBA_PTR_GET_DEFAULT(onlyFolder_, false) };
    inline GetExperimentFolderChildrenRequest& setOnlyFolder(bool onlyFolder) { DARABONBA_PTR_SET_VALUE(onlyFolder_, onlyFolder) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetExperimentFolderChildrenRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetExperimentFolderChildrenRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetExperimentFolderChildrenRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> accessibility_ = nullptr;
    std::shared_ptr<bool> onlyFolder_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
