// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSPACECODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSPACECODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetWorkspaceCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkspaceCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Iac, iac_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkspaceCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Iac, iac_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetWorkspaceCodeRequest() = default ;
    GetWorkspaceCodeRequest(const GetWorkspaceCodeRequest &) = default ;
    GetWorkspaceCodeRequest(GetWorkspaceCodeRequest &&) = default ;
    GetWorkspaceCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkspaceCodeRequest() = default ;
    GetWorkspaceCodeRequest& operator=(const GetWorkspaceCodeRequest &) = default ;
    GetWorkspaceCodeRequest& operator=(GetWorkspaceCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->iac_ == nullptr
        && this->path_ == nullptr && this->workspaceId_ == nullptr; };
    // iac Field Functions 
    bool hasIac() const { return this->iac_ != nullptr;};
    void deleteIac() { this->iac_ = nullptr;};
    inline string getIac() const { DARABONBA_PTR_GET_DEFAULT(iac_, "") };
    inline GetWorkspaceCodeRequest& setIac(string iac) { DARABONBA_PTR_SET_VALUE(iac_, iac) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetWorkspaceCodeRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetWorkspaceCodeRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> iac_ {};
    // This parameter is required.
    shared_ptr<string> path_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
