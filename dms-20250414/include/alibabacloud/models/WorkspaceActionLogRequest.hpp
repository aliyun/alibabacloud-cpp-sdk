// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WORKSPACEACTIONLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_WORKSPACEACTIONLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class WorkspaceActionLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WorkspaceActionLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, WorkspaceActionLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    WorkspaceActionLogRequest() = default ;
    WorkspaceActionLogRequest(const WorkspaceActionLogRequest &) = default ;
    WorkspaceActionLogRequest(WorkspaceActionLogRequest &&) = default ;
    WorkspaceActionLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WorkspaceActionLogRequest() = default ;
    WorkspaceActionLogRequest& operator=(const WorkspaceActionLogRequest &) = default ;
    WorkspaceActionLogRequest& operator=(WorkspaceActionLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && this->workspaceId_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline WorkspaceActionLogRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline WorkspaceActionLogRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The key for the session playback history.
    // 
    // This parameter is required.
    shared_ptr<string> key_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
