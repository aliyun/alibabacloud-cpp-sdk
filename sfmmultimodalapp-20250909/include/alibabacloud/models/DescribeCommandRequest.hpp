// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMANDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class DescribeCommandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_TO_JSON(ToolId, toolId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_FROM_JSON(ToolId, toolId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DescribeCommandRequest() = default ;
    DescribeCommandRequest(const DescribeCommandRequest &) = default ;
    DescribeCommandRequest(DescribeCommandRequest &&) = default ;
    DescribeCommandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommandRequest() = default ;
    DescribeCommandRequest& operator=(const DescribeCommandRequest &) = default ;
    DescribeCommandRequest& operator=(DescribeCommandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->domainCode_ != nullptr && this->toolId_ != nullptr && this->workspaceId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeCommandRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // domainCode Field Functions 
    bool hasDomainCode() const { return this->domainCode_ != nullptr;};
    void deleteDomainCode() { this->domainCode_ = nullptr;};
    inline string domainCode() const { DARABONBA_PTR_GET_DEFAULT(domainCode_, "") };
    inline DescribeCommandRequest& setDomainCode(string domainCode) { DARABONBA_PTR_SET_VALUE(domainCode_, domainCode) };


    // toolId Field Functions 
    bool hasToolId() const { return this->toolId_ != nullptr;};
    void deleteToolId() { this->toolId_ = nullptr;};
    inline string toolId() const { DARABONBA_PTR_GET_DEFAULT(toolId_, "") };
    inline DescribeCommandRequest& setToolId(string toolId) { DARABONBA_PTR_SET_VALUE(toolId_, toolId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DescribeCommandRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> toolId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
