// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRELATEDWORKSPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRELATEDWORKSPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRelatedWorkspacesResponseBodyWorkspaces.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetRelatedWorkspacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRelatedWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
      DARABONBA_PTR_TO_JSON(workspaces, workspaces_);
    };
    friend void from_json(const Darabonba::Json& j, GetRelatedWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
      DARABONBA_PTR_FROM_JSON(workspaces, workspaces_);
    };
    GetRelatedWorkspacesResponseBody() = default ;
    GetRelatedWorkspacesResponseBody(const GetRelatedWorkspacesResponseBody &) = default ;
    GetRelatedWorkspacesResponseBody(GetRelatedWorkspacesResponseBody &&) = default ;
    GetRelatedWorkspacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRelatedWorkspacesResponseBody() = default ;
    GetRelatedWorkspacesResponseBody& operator=(const GetRelatedWorkspacesResponseBody &) = default ;
    GetRelatedWorkspacesResponseBody& operator=(GetRelatedWorkspacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->vendorRequestId_ == nullptr && return this->vendorType_ == nullptr && return this->workspaces_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRelatedWorkspacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetRelatedWorkspacesResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetRelatedWorkspacesResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


    // workspaces Field Functions 
    bool hasWorkspaces() const { return this->workspaces_ != nullptr;};
    void deleteWorkspaces() { this->workspaces_ = nullptr;};
    inline const vector<GetRelatedWorkspacesResponseBodyWorkspaces> & workspaces() const { DARABONBA_PTR_GET_CONST(workspaces_, vector<GetRelatedWorkspacesResponseBodyWorkspaces>) };
    inline vector<GetRelatedWorkspacesResponseBodyWorkspaces> workspaces() { DARABONBA_PTR_GET(workspaces_, vector<GetRelatedWorkspacesResponseBodyWorkspaces>) };
    inline GetRelatedWorkspacesResponseBody& setWorkspaces(const vector<GetRelatedWorkspacesResponseBodyWorkspaces> & workspaces) { DARABONBA_PTR_SET_VALUE(workspaces_, workspaces) };
    inline GetRelatedWorkspacesResponseBody& setWorkspaces(vector<GetRelatedWorkspacesResponseBodyWorkspaces> && workspaces) { DARABONBA_PTR_SET_RVALUE(workspaces_, workspaces) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
    std::shared_ptr<vector<GetRelatedWorkspacesResponseBodyWorkspaces>> workspaces_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
