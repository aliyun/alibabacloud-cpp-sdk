// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALIPAYURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALIPAYURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetAlipayUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlipayUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(app_id, appId_);
      DARABONBA_PTR_TO_JSON(workspace_id, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlipayUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(app_id, appId_);
      DARABONBA_PTR_FROM_JSON(workspace_id, workspaceId_);
    };
    GetAlipayUrlRequest() = default ;
    GetAlipayUrlRequest(const GetAlipayUrlRequest &) = default ;
    GetAlipayUrlRequest(GetAlipayUrlRequest &&) = default ;
    GetAlipayUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlipayUrlRequest() = default ;
    GetAlipayUrlRequest& operator=(const GetAlipayUrlRequest &) = default ;
    GetAlipayUrlRequest& operator=(GetAlipayUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->workspaceId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetAlipayUrlRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetAlipayUrlRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
