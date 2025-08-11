// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCUBEOPTIMIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCUBEOPTIMIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryCubeOptimizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCubeOptimizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCubeOptimizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    QueryCubeOptimizationRequest() = default ;
    QueryCubeOptimizationRequest(const QueryCubeOptimizationRequest &) = default ;
    QueryCubeOptimizationRequest(QueryCubeOptimizationRequest &&) = default ;
    QueryCubeOptimizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCubeOptimizationRequest() = default ;
    QueryCubeOptimizationRequest& operator=(const QueryCubeOptimizationRequest &) = default ;
    QueryCubeOptimizationRequest& operator=(QueryCubeOptimizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->workspaceId_ != nullptr; };
    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryCubeOptimizationRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
