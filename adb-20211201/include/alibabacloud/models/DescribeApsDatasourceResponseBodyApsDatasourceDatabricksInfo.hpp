// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSDATASOURCERESPONSEBODYAPSDATASOURCEDATABRICKSINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSDATASOURCERESPONSEBODYAPSDATASOURCEDATABRICKSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(workspaceURL, workspaceURL_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(workspaceURL, workspaceURL_);
    };
    DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo() = default ;
    DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo(const DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo &) = default ;
    DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo(DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo &&) = default ;
    DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo() = default ;
    DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo& operator=(const DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo &) = default ;
    DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo& operator=(DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo &&) = default ;
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
    inline DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // workspaceURL Field Functions 
    bool hasWorkspaceURL() const { return this->workspaceURL_ != nullptr;};
    void deleteWorkspaceURL() { this->workspaceURL_ = nullptr;};
    inline string workspaceURL() const { DARABONBA_PTR_GET_DEFAULT(workspaceURL_, "") };
    inline DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo& setWorkspaceURL(string workspaceURL) { DARABONBA_PTR_SET_VALUE(workspaceURL_, workspaceURL) };


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
