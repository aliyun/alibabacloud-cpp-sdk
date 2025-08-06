// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WORKSPACEIDNAME_HPP_
#define ALIBABACLOUD_MODELS_WORKSPACEIDNAME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class WorkspaceIdName : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WorkspaceIdName& obj) { 
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, WorkspaceIdName& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    WorkspaceIdName() = default ;
    WorkspaceIdName(const WorkspaceIdName &) = default ;
    WorkspaceIdName(WorkspaceIdName &&) = default ;
    WorkspaceIdName(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WorkspaceIdName() = default ;
    WorkspaceIdName& operator=(const WorkspaceIdName &) = default ;
    WorkspaceIdName& operator=(WorkspaceIdName &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->workspaceId_ != nullptr; };
    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline WorkspaceIdName& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
