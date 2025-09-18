// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMMANDRESPONSEBODYTOOLINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMMANDRESPONSEBODYTOOLINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCommandResponseBodyToolInfoListToolExamples.hpp>
#include <alibabacloud/models/ListCommandResponseBodyToolInfoListToolParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class ListCommandResponseBodyToolInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCommandResponseBodyToolInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ModifyUserId, modifyUserId_);
      DARABONBA_PTR_TO_JSON(ModifyUserName, modifyUserName_);
      DARABONBA_PTR_TO_JSON(ToolExamples, toolExamples_);
      DARABONBA_PTR_TO_JSON(ToolId, toolId_);
      DARABONBA_PTR_TO_JSON(ToolName, toolName_);
      DARABONBA_PTR_TO_JSON(ToolParams, toolParams_);
    };
    friend void from_json(const Darabonba::Json& j, ListCommandResponseBodyToolInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ModifyUserId, modifyUserId_);
      DARABONBA_PTR_FROM_JSON(ModifyUserName, modifyUserName_);
      DARABONBA_PTR_FROM_JSON(ToolExamples, toolExamples_);
      DARABONBA_PTR_FROM_JSON(ToolId, toolId_);
      DARABONBA_PTR_FROM_JSON(ToolName, toolName_);
      DARABONBA_PTR_FROM_JSON(ToolParams, toolParams_);
    };
    ListCommandResponseBodyToolInfoList() = default ;
    ListCommandResponseBodyToolInfoList(const ListCommandResponseBodyToolInfoList &) = default ;
    ListCommandResponseBodyToolInfoList(ListCommandResponseBodyToolInfoList &&) = default ;
    ListCommandResponseBodyToolInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCommandResponseBodyToolInfoList() = default ;
    ListCommandResponseBodyToolInfoList& operator=(const ListCommandResponseBodyToolInfoList &) = default ;
    ListCommandResponseBodyToolInfoList& operator=(ListCommandResponseBodyToolInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->createUserId_ != nullptr && this->createUserName_ != nullptr && this->description_ != nullptr && this->domainCode_ != nullptr && this->domainName_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->modifyUserId_ != nullptr && this->modifyUserName_ != nullptr && this->toolExamples_ != nullptr
        && this->toolId_ != nullptr && this->toolName_ != nullptr && this->toolParams_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListCommandResponseBodyToolInfoList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline string createUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
    inline ListCommandResponseBodyToolInfoList& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string createUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline ListCommandResponseBodyToolInfoList& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListCommandResponseBodyToolInfoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainCode Field Functions 
    bool hasDomainCode() const { return this->domainCode_ != nullptr;};
    void deleteDomainCode() { this->domainCode_ = nullptr;};
    inline string domainCode() const { DARABONBA_PTR_GET_DEFAULT(domainCode_, "") };
    inline ListCommandResponseBodyToolInfoList& setDomainCode(string domainCode) { DARABONBA_PTR_SET_VALUE(domainCode_, domainCode) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ListCommandResponseBodyToolInfoList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListCommandResponseBodyToolInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListCommandResponseBodyToolInfoList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // modifyUserId Field Functions 
    bool hasModifyUserId() const { return this->modifyUserId_ != nullptr;};
    void deleteModifyUserId() { this->modifyUserId_ = nullptr;};
    inline string modifyUserId() const { DARABONBA_PTR_GET_DEFAULT(modifyUserId_, "") };
    inline ListCommandResponseBodyToolInfoList& setModifyUserId(string modifyUserId) { DARABONBA_PTR_SET_VALUE(modifyUserId_, modifyUserId) };


    // modifyUserName Field Functions 
    bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
    void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
    inline string modifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
    inline ListCommandResponseBodyToolInfoList& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


    // toolExamples Field Functions 
    bool hasToolExamples() const { return this->toolExamples_ != nullptr;};
    void deleteToolExamples() { this->toolExamples_ = nullptr;};
    inline const vector<Models::ListCommandResponseBodyToolInfoListToolExamples> & toolExamples() const { DARABONBA_PTR_GET_CONST(toolExamples_, vector<Models::ListCommandResponseBodyToolInfoListToolExamples>) };
    inline vector<Models::ListCommandResponseBodyToolInfoListToolExamples> toolExamples() { DARABONBA_PTR_GET(toolExamples_, vector<Models::ListCommandResponseBodyToolInfoListToolExamples>) };
    inline ListCommandResponseBodyToolInfoList& setToolExamples(const vector<Models::ListCommandResponseBodyToolInfoListToolExamples> & toolExamples) { DARABONBA_PTR_SET_VALUE(toolExamples_, toolExamples) };
    inline ListCommandResponseBodyToolInfoList& setToolExamples(vector<Models::ListCommandResponseBodyToolInfoListToolExamples> && toolExamples) { DARABONBA_PTR_SET_RVALUE(toolExamples_, toolExamples) };


    // toolId Field Functions 
    bool hasToolId() const { return this->toolId_ != nullptr;};
    void deleteToolId() { this->toolId_ = nullptr;};
    inline string toolId() const { DARABONBA_PTR_GET_DEFAULT(toolId_, "") };
    inline ListCommandResponseBodyToolInfoList& setToolId(string toolId) { DARABONBA_PTR_SET_VALUE(toolId_, toolId) };


    // toolName Field Functions 
    bool hasToolName() const { return this->toolName_ != nullptr;};
    void deleteToolName() { this->toolName_ = nullptr;};
    inline string toolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
    inline ListCommandResponseBodyToolInfoList& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


    // toolParams Field Functions 
    bool hasToolParams() const { return this->toolParams_ != nullptr;};
    void deleteToolParams() { this->toolParams_ = nullptr;};
    inline const vector<Models::ListCommandResponseBodyToolInfoListToolParams> & toolParams() const { DARABONBA_PTR_GET_CONST(toolParams_, vector<Models::ListCommandResponseBodyToolInfoListToolParams>) };
    inline vector<Models::ListCommandResponseBodyToolInfoListToolParams> toolParams() { DARABONBA_PTR_GET(toolParams_, vector<Models::ListCommandResponseBodyToolInfoListToolParams>) };
    inline ListCommandResponseBodyToolInfoList& setToolParams(const vector<Models::ListCommandResponseBodyToolInfoListToolParams> & toolParams) { DARABONBA_PTR_SET_VALUE(toolParams_, toolParams) };
    inline ListCommandResponseBodyToolInfoList& setToolParams(vector<Models::ListCommandResponseBodyToolInfoListToolParams> && toolParams) { DARABONBA_PTR_SET_RVALUE(toolParams_, toolParams) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> createUserId_ = nullptr;
    std::shared_ptr<string> createUserName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> domainCode_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> modifyUserId_ = nullptr;
    std::shared_ptr<string> modifyUserName_ = nullptr;
    std::shared_ptr<vector<Models::ListCommandResponseBodyToolInfoListToolExamples>> toolExamples_ = nullptr;
    std::shared_ptr<string> toolId_ = nullptr;
    std::shared_ptr<string> toolName_ = nullptr;
    std::shared_ptr<vector<Models::ListCommandResponseBodyToolInfoListToolParams>> toolParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
