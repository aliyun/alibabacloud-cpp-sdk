// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetWorkspaceRequest() = default ;
    GetWorkspaceRequest(const GetWorkspaceRequest &) = default ;
    GetWorkspaceRequest(GetWorkspaceRequest &&) = default ;
    GetWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkspaceRequest() = default ;
    GetWorkspaceRequest& operator=(const GetWorkspaceRequest &) = default ;
    GetWorkspaceRequest& operator=(GetWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->workspaceId_ != nullptr; };
    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline GetWorkspaceRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
