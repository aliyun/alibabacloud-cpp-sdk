// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMMANDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class ListCommandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCommandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ToolName, toolName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCommandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ToolName, toolName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListCommandRequest() = default ;
    ListCommandRequest(const ListCommandRequest &) = default ;
    ListCommandRequest(ListCommandRequest &&) = default ;
    ListCommandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCommandRequest() = default ;
    ListCommandRequest& operator=(const ListCommandRequest &) = default ;
    ListCommandRequest& operator=(ListCommandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->domainCode_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->toolName_ != nullptr && this->workspaceId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListCommandRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // domainCode Field Functions 
    bool hasDomainCode() const { return this->domainCode_ != nullptr;};
    void deleteDomainCode() { this->domainCode_ = nullptr;};
    inline string domainCode() const { DARABONBA_PTR_GET_DEFAULT(domainCode_, "") };
    inline ListCommandRequest& setDomainCode(string domainCode) { DARABONBA_PTR_SET_VALUE(domainCode_, domainCode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCommandRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCommandRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // toolName Field Functions 
    bool hasToolName() const { return this->toolName_ != nullptr;};
    void deleteToolName() { this->toolName_ = nullptr;};
    inline string toolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
    inline ListCommandRequest& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListCommandRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainCode_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> toolName_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
