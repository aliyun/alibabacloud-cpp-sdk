// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMANDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMANDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCommandResponseBodyToolExamples.hpp>
#include <alibabacloud/models/DescribeCommandResponseBodyToolParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class DescribeCommandResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommandResponseBody& obj) { 
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
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ToolExamples, toolExamples_);
      DARABONBA_PTR_TO_JSON(ToolId, toolId_);
      DARABONBA_PTR_TO_JSON(ToolName, toolName_);
      DARABONBA_PTR_TO_JSON(ToolParams, toolParams_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommandResponseBody& obj) { 
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
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ToolExamples, toolExamples_);
      DARABONBA_PTR_FROM_JSON(ToolId, toolId_);
      DARABONBA_PTR_FROM_JSON(ToolName, toolName_);
      DARABONBA_PTR_FROM_JSON(ToolParams, toolParams_);
    };
    DescribeCommandResponseBody() = default ;
    DescribeCommandResponseBody(const DescribeCommandResponseBody &) = default ;
    DescribeCommandResponseBody(DescribeCommandResponseBody &&) = default ;
    DescribeCommandResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommandResponseBody() = default ;
    DescribeCommandResponseBody& operator=(const DescribeCommandResponseBody &) = default ;
    DescribeCommandResponseBody& operator=(DescribeCommandResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->createUserId_ != nullptr && this->createUserName_ != nullptr && this->description_ != nullptr && this->domainCode_ != nullptr && this->domainName_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->modifyUserId_ != nullptr && this->modifyUserName_ != nullptr && this->requestId_ != nullptr
        && this->toolExamples_ != nullptr && this->toolId_ != nullptr && this->toolName_ != nullptr && this->toolParams_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeCommandResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline string createUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
    inline DescribeCommandResponseBody& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string createUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline DescribeCommandResponseBody& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCommandResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainCode Field Functions 
    bool hasDomainCode() const { return this->domainCode_ != nullptr;};
    void deleteDomainCode() { this->domainCode_ = nullptr;};
    inline string domainCode() const { DARABONBA_PTR_GET_DEFAULT(domainCode_, "") };
    inline DescribeCommandResponseBody& setDomainCode(string domainCode) { DARABONBA_PTR_SET_VALUE(domainCode_, domainCode) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeCommandResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeCommandResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeCommandResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // modifyUserId Field Functions 
    bool hasModifyUserId() const { return this->modifyUserId_ != nullptr;};
    void deleteModifyUserId() { this->modifyUserId_ = nullptr;};
    inline string modifyUserId() const { DARABONBA_PTR_GET_DEFAULT(modifyUserId_, "") };
    inline DescribeCommandResponseBody& setModifyUserId(string modifyUserId) { DARABONBA_PTR_SET_VALUE(modifyUserId_, modifyUserId) };


    // modifyUserName Field Functions 
    bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
    void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
    inline string modifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
    inline DescribeCommandResponseBody& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCommandResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // toolExamples Field Functions 
    bool hasToolExamples() const { return this->toolExamples_ != nullptr;};
    void deleteToolExamples() { this->toolExamples_ = nullptr;};
    inline const vector<DescribeCommandResponseBodyToolExamples> & toolExamples() const { DARABONBA_PTR_GET_CONST(toolExamples_, vector<DescribeCommandResponseBodyToolExamples>) };
    inline vector<DescribeCommandResponseBodyToolExamples> toolExamples() { DARABONBA_PTR_GET(toolExamples_, vector<DescribeCommandResponseBodyToolExamples>) };
    inline DescribeCommandResponseBody& setToolExamples(const vector<DescribeCommandResponseBodyToolExamples> & toolExamples) { DARABONBA_PTR_SET_VALUE(toolExamples_, toolExamples) };
    inline DescribeCommandResponseBody& setToolExamples(vector<DescribeCommandResponseBodyToolExamples> && toolExamples) { DARABONBA_PTR_SET_RVALUE(toolExamples_, toolExamples) };


    // toolId Field Functions 
    bool hasToolId() const { return this->toolId_ != nullptr;};
    void deleteToolId() { this->toolId_ = nullptr;};
    inline string toolId() const { DARABONBA_PTR_GET_DEFAULT(toolId_, "") };
    inline DescribeCommandResponseBody& setToolId(string toolId) { DARABONBA_PTR_SET_VALUE(toolId_, toolId) };


    // toolName Field Functions 
    bool hasToolName() const { return this->toolName_ != nullptr;};
    void deleteToolName() { this->toolName_ = nullptr;};
    inline string toolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
    inline DescribeCommandResponseBody& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


    // toolParams Field Functions 
    bool hasToolParams() const { return this->toolParams_ != nullptr;};
    void deleteToolParams() { this->toolParams_ = nullptr;};
    inline const vector<DescribeCommandResponseBodyToolParams> & toolParams() const { DARABONBA_PTR_GET_CONST(toolParams_, vector<DescribeCommandResponseBodyToolParams>) };
    inline vector<DescribeCommandResponseBodyToolParams> toolParams() { DARABONBA_PTR_GET(toolParams_, vector<DescribeCommandResponseBodyToolParams>) };
    inline DescribeCommandResponseBody& setToolParams(const vector<DescribeCommandResponseBodyToolParams> & toolParams) { DARABONBA_PTR_SET_VALUE(toolParams_, toolParams) };
    inline DescribeCommandResponseBody& setToolParams(vector<DescribeCommandResponseBodyToolParams> && toolParams) { DARABONBA_PTR_SET_RVALUE(toolParams_, toolParams) };


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
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeCommandResponseBodyToolExamples>> toolExamples_ = nullptr;
    std::shared_ptr<string> toolId_ = nullptr;
    std::shared_ptr<string> toolName_ = nullptr;
    std::shared_ptr<vector<DescribeCommandResponseBodyToolParams>> toolParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
