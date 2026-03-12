// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNTIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRUNTIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class GetRuntimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuntimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuntimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetRuntimeRequest() = default ;
    GetRuntimeRequest(const GetRuntimeRequest &) = default ;
    GetRuntimeRequest(GetRuntimeRequest &&) = default ;
    GetRuntimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuntimeRequest() = default ;
    GetRuntimeRequest& operator=(const GetRuntimeRequest &) = default ;
    GetRuntimeRequest& operator=(GetRuntimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workspaceId_ == nullptr; };
    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetRuntimeRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
