// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWorkspacesResponseBodyWorkspaces.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListWorkspacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_ANY_TO_JSON(ResourceLimits, resourceLimits_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Workspaces, workspaces_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_ANY_FROM_JSON(ResourceLimits, resourceLimits_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Workspaces, workspaces_);
    };
    ListWorkspacesResponseBody() = default ;
    ListWorkspacesResponseBody(const ListWorkspacesResponseBody &) = default ;
    ListWorkspacesResponseBody(ListWorkspacesResponseBody &&) = default ;
    ListWorkspacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspacesResponseBody() = default ;
    ListWorkspacesResponseBody& operator=(const ListWorkspacesResponseBody &) = default ;
    ListWorkspacesResponseBody& operator=(ListWorkspacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resourceLimits_ != nullptr && this->totalCount_ != nullptr && this->workspaces_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkspacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceLimits Field Functions 
    bool hasResourceLimits() const { return this->resourceLimits_ != nullptr;};
    void deleteResourceLimits() { this->resourceLimits_ = nullptr;};
    inline     const Darabonba::Json & resourceLimits() const { DARABONBA_GET(resourceLimits_) };
    Darabonba::Json & resourceLimits() { DARABONBA_GET(resourceLimits_) };
    inline ListWorkspacesResponseBody& setResourceLimits(const Darabonba::Json & resourceLimits) { DARABONBA_SET_VALUE(resourceLimits_, resourceLimits) };
    inline ListWorkspacesResponseBody& setResourceLimits(Darabonba::Json & resourceLimits) { DARABONBA_SET_RVALUE(resourceLimits_, resourceLimits) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListWorkspacesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // workspaces Field Functions 
    bool hasWorkspaces() const { return this->workspaces_ != nullptr;};
    void deleteWorkspaces() { this->workspaces_ = nullptr;};
    inline const vector<ListWorkspacesResponseBodyWorkspaces> & workspaces() const { DARABONBA_PTR_GET_CONST(workspaces_, vector<ListWorkspacesResponseBodyWorkspaces>) };
    inline vector<ListWorkspacesResponseBodyWorkspaces> workspaces() { DARABONBA_PTR_GET(workspaces_, vector<ListWorkspacesResponseBodyWorkspaces>) };
    inline ListWorkspacesResponseBody& setWorkspaces(const vector<ListWorkspacesResponseBodyWorkspaces> & workspaces) { DARABONBA_PTR_SET_VALUE(workspaces_, workspaces) };
    inline ListWorkspacesResponseBody& setWorkspaces(vector<ListWorkspacesResponseBodyWorkspaces> && workspaces) { DARABONBA_PTR_SET_RVALUE(workspaces_, workspaces) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The type and quantity of resources that can be activated in a workspace. This list is returned when the Option is set to GetResourceLimits. Valid values:
    // 
    // *   MaxCompute_share: pay-as-you-go MaxCompute
    // *   MaxCompute_isolate: subscription MaxCompute
    // *   DLC_share: pay-as-you-go DLC
    // *   PAI_Isolate: subscription PAI
    // *   PAI_share: pay-as-you-go PAI
    // *   DataWorks_isolate: subscription DataWorks
    // *   DataWorks_share: pay-as-you-go DataWorks
    Darabonba::Json resourceLimits_ = nullptr;
    // The number of workspaces that meet the query conditions.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // The list of workspace details. This list is returned when Option is set to GetWorkspaces.
    std::shared_ptr<vector<ListWorkspacesResponseBodyWorkspaces>> workspaces_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
