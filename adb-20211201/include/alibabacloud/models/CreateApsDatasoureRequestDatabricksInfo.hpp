// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSDATASOUREREQUESTDATABRICKSINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSDATASOUREREQUESTDATABRICKSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateApsDatasoureRequestDatabricksInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApsDatasoureRequestDatabricksInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(WorkspaceURL, workspaceURL_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApsDatasoureRequestDatabricksInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(WorkspaceURL, workspaceURL_);
    };
    CreateApsDatasoureRequestDatabricksInfo() = default ;
    CreateApsDatasoureRequestDatabricksInfo(const CreateApsDatasoureRequestDatabricksInfo &) = default ;
    CreateApsDatasoureRequestDatabricksInfo(CreateApsDatasoureRequestDatabricksInfo &&) = default ;
    CreateApsDatasoureRequestDatabricksInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApsDatasoureRequestDatabricksInfo() = default ;
    CreateApsDatasoureRequestDatabricksInfo& operator=(const CreateApsDatasoureRequestDatabricksInfo &) = default ;
    CreateApsDatasoureRequestDatabricksInfo& operator=(CreateApsDatasoureRequestDatabricksInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessToken_ != nullptr
        && this->workspaceURL_ != nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline CreateApsDatasoureRequestDatabricksInfo& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // workspaceURL Field Functions 
    bool hasWorkspaceURL() const { return this->workspaceURL_ != nullptr;};
    void deleteWorkspaceURL() { this->workspaceURL_ = nullptr;};
    inline string workspaceURL() const { DARABONBA_PTR_GET_DEFAULT(workspaceURL_, "") };
    inline CreateApsDatasoureRequestDatabricksInfo& setWorkspaceURL(string workspaceURL) { DARABONBA_PTR_SET_VALUE(workspaceURL_, workspaceURL) };


  protected:
    // The token that is used to access Databricks.
    std::shared_ptr<string> accessToken_ = nullptr;
    // The URL of the workspace.
    std::shared_ptr<string> workspaceURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
