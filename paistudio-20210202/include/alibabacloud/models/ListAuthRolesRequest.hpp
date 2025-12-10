// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHROLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHROLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class ListAuthRolesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthRolesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsGenerateToken, isGenerateToken_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthRolesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsGenerateToken, isGenerateToken_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListAuthRolesRequest() = default ;
    ListAuthRolesRequest(const ListAuthRolesRequest &) = default ;
    ListAuthRolesRequest(ListAuthRolesRequest &&) = default ;
    ListAuthRolesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthRolesRequest() = default ;
    ListAuthRolesRequest& operator=(const ListAuthRolesRequest &) = default ;
    ListAuthRolesRequest& operator=(ListAuthRolesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isGenerateToken_ == nullptr
        && return this->workspaceId_ == nullptr; };
    // isGenerateToken Field Functions 
    bool hasIsGenerateToken() const { return this->isGenerateToken_ != nullptr;};
    void deleteIsGenerateToken() { this->isGenerateToken_ = nullptr;};
    inline string isGenerateToken() const { DARABONBA_PTR_GET_DEFAULT(isGenerateToken_, "") };
    inline ListAuthRolesRequest& setIsGenerateToken(string isGenerateToken) { DARABONBA_PTR_SET_VALUE(isGenerateToken_, isGenerateToken) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListAuthRolesRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> isGenerateToken_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
