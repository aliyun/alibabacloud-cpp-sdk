// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMANDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMANDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(ReplyMode, replyMode_);
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
      DARABONBA_PTR_FROM_JSON(ReplyMode, replyMode_);
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
    class ToolParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ToolParams& obj) { 
        DARABONBA_PTR_TO_JSON(ParamDesc, paramDesc_);
        DARABONBA_PTR_TO_JSON(ParamExample, paramExample_);
        DARABONBA_PTR_TO_JSON(ParamName, paramName_);
        DARABONBA_PTR_TO_JSON(ParamType, paramType_);
        DARABONBA_PTR_TO_JSON(Required, required_);
      };
      friend void from_json(const Darabonba::Json& j, ToolParams& obj) { 
        DARABONBA_PTR_FROM_JSON(ParamDesc, paramDesc_);
        DARABONBA_PTR_FROM_JSON(ParamExample, paramExample_);
        DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
        DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
        DARABONBA_PTR_FROM_JSON(Required, required_);
      };
      ToolParams() = default ;
      ToolParams(const ToolParams &) = default ;
      ToolParams(ToolParams &&) = default ;
      ToolParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ToolParams() = default ;
      ToolParams& operator=(const ToolParams &) = default ;
      ToolParams& operator=(ToolParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->paramDesc_ == nullptr
        && this->paramExample_ == nullptr && this->paramName_ == nullptr && this->paramType_ == nullptr && this->required_ == nullptr; };
      // paramDesc Field Functions 
      bool hasParamDesc() const { return this->paramDesc_ != nullptr;};
      void deleteParamDesc() { this->paramDesc_ = nullptr;};
      inline string getParamDesc() const { DARABONBA_PTR_GET_DEFAULT(paramDesc_, "") };
      inline ToolParams& setParamDesc(string paramDesc) { DARABONBA_PTR_SET_VALUE(paramDesc_, paramDesc) };


      // paramExample Field Functions 
      bool hasParamExample() const { return this->paramExample_ != nullptr;};
      void deleteParamExample() { this->paramExample_ = nullptr;};
      inline string getParamExample() const { DARABONBA_PTR_GET_DEFAULT(paramExample_, "") };
      inline ToolParams& setParamExample(string paramExample) { DARABONBA_PTR_SET_VALUE(paramExample_, paramExample) };


      // paramName Field Functions 
      bool hasParamName() const { return this->paramName_ != nullptr;};
      void deleteParamName() { this->paramName_ = nullptr;};
      inline string getParamName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
      inline ToolParams& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


      // paramType Field Functions 
      bool hasParamType() const { return this->paramType_ != nullptr;};
      void deleteParamType() { this->paramType_ = nullptr;};
      inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
      inline ToolParams& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


      // required Field Functions 
      bool hasRequired() const { return this->required_ != nullptr;};
      void deleteRequired() { this->required_ = nullptr;};
      inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
      inline ToolParams& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    protected:
      shared_ptr<string> paramDesc_ {};
      shared_ptr<string> paramExample_ {};
      shared_ptr<string> paramName_ {};
      shared_ptr<string> paramType_ {};
      shared_ptr<bool> required_ {};
    };

    class ToolExamples : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ToolExamples& obj) { 
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        DARABONBA_PTR_TO_JSON(Query, query_);
      };
      friend void from_json(const Darabonba::Json& j, ToolExamples& obj) { 
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(Query, query_);
      };
      ToolExamples() = default ;
      ToolExamples(const ToolExamples &) = default ;
      ToolExamples(ToolExamples &&) = default ;
      ToolExamples(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ToolExamples() = default ;
      ToolExamples& operator=(const ToolExamples &) = default ;
      ToolExamples& operator=(ToolExamples &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->parameters_ == nullptr
        && this->query_ == nullptr; };
      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const map<string, string> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
      inline map<string, string> getParameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
      inline ToolExamples& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline ToolExamples& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      // query Field Functions 
      bool hasQuery() const { return this->query_ != nullptr;};
      void deleteQuery() { this->query_ = nullptr;};
      inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
      inline ToolExamples& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    protected:
      shared_ptr<map<string, string>> parameters_ {};
      shared_ptr<string> query_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->createUserId_ == nullptr && this->createUserName_ == nullptr && this->description_ == nullptr && this->domainCode_ == nullptr && this->domainName_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->modifyUserId_ == nullptr && this->modifyUserName_ == nullptr && this->replyMode_ == nullptr
        && this->requestId_ == nullptr && this->toolExamples_ == nullptr && this->toolId_ == nullptr && this->toolName_ == nullptr && this->toolParams_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeCommandResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline string getCreateUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
    inline DescribeCommandResponseBody& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline DescribeCommandResponseBody& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCommandResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainCode Field Functions 
    bool hasDomainCode() const { return this->domainCode_ != nullptr;};
    void deleteDomainCode() { this->domainCode_ = nullptr;};
    inline string getDomainCode() const { DARABONBA_PTR_GET_DEFAULT(domainCode_, "") };
    inline DescribeCommandResponseBody& setDomainCode(string domainCode) { DARABONBA_PTR_SET_VALUE(domainCode_, domainCode) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeCommandResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeCommandResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeCommandResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // modifyUserId Field Functions 
    bool hasModifyUserId() const { return this->modifyUserId_ != nullptr;};
    void deleteModifyUserId() { this->modifyUserId_ = nullptr;};
    inline string getModifyUserId() const { DARABONBA_PTR_GET_DEFAULT(modifyUserId_, "") };
    inline DescribeCommandResponseBody& setModifyUserId(string modifyUserId) { DARABONBA_PTR_SET_VALUE(modifyUserId_, modifyUserId) };


    // modifyUserName Field Functions 
    bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
    void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
    inline string getModifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
    inline DescribeCommandResponseBody& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


    // replyMode Field Functions 
    bool hasReplyMode() const { return this->replyMode_ != nullptr;};
    void deleteReplyMode() { this->replyMode_ = nullptr;};
    inline string getReplyMode() const { DARABONBA_PTR_GET_DEFAULT(replyMode_, "") };
    inline DescribeCommandResponseBody& setReplyMode(string replyMode) { DARABONBA_PTR_SET_VALUE(replyMode_, replyMode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCommandResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // toolExamples Field Functions 
    bool hasToolExamples() const { return this->toolExamples_ != nullptr;};
    void deleteToolExamples() { this->toolExamples_ = nullptr;};
    inline const vector<DescribeCommandResponseBody::ToolExamples> & getToolExamples() const { DARABONBA_PTR_GET_CONST(toolExamples_, vector<DescribeCommandResponseBody::ToolExamples>) };
    inline vector<DescribeCommandResponseBody::ToolExamples> getToolExamples() { DARABONBA_PTR_GET(toolExamples_, vector<DescribeCommandResponseBody::ToolExamples>) };
    inline DescribeCommandResponseBody& setToolExamples(const vector<DescribeCommandResponseBody::ToolExamples> & toolExamples) { DARABONBA_PTR_SET_VALUE(toolExamples_, toolExamples) };
    inline DescribeCommandResponseBody& setToolExamples(vector<DescribeCommandResponseBody::ToolExamples> && toolExamples) { DARABONBA_PTR_SET_RVALUE(toolExamples_, toolExamples) };


    // toolId Field Functions 
    bool hasToolId() const { return this->toolId_ != nullptr;};
    void deleteToolId() { this->toolId_ = nullptr;};
    inline string getToolId() const { DARABONBA_PTR_GET_DEFAULT(toolId_, "") };
    inline DescribeCommandResponseBody& setToolId(string toolId) { DARABONBA_PTR_SET_VALUE(toolId_, toolId) };


    // toolName Field Functions 
    bool hasToolName() const { return this->toolName_ != nullptr;};
    void deleteToolName() { this->toolName_ = nullptr;};
    inline string getToolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
    inline DescribeCommandResponseBody& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


    // toolParams Field Functions 
    bool hasToolParams() const { return this->toolParams_ != nullptr;};
    void deleteToolParams() { this->toolParams_ = nullptr;};
    inline const vector<DescribeCommandResponseBody::ToolParams> & getToolParams() const { DARABONBA_PTR_GET_CONST(toolParams_, vector<DescribeCommandResponseBody::ToolParams>) };
    inline vector<DescribeCommandResponseBody::ToolParams> getToolParams() { DARABONBA_PTR_GET(toolParams_, vector<DescribeCommandResponseBody::ToolParams>) };
    inline DescribeCommandResponseBody& setToolParams(const vector<DescribeCommandResponseBody::ToolParams> & toolParams) { DARABONBA_PTR_SET_VALUE(toolParams_, toolParams) };
    inline DescribeCommandResponseBody& setToolParams(vector<DescribeCommandResponseBody::ToolParams> && toolParams) { DARABONBA_PTR_SET_RVALUE(toolParams_, toolParams) };


  protected:
    shared_ptr<string> appId_ {};
    shared_ptr<string> createUserId_ {};
    shared_ptr<string> createUserName_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> domainCode_ {};
    shared_ptr<string> domainName_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<string> modifyUserId_ {};
    shared_ptr<string> modifyUserName_ {};
    shared_ptr<string> replyMode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeCommandResponseBody::ToolExamples>> toolExamples_ {};
    shared_ptr<string> toolId_ {};
    shared_ptr<string> toolName_ {};
    shared_ptr<vector<DescribeCommandResponseBody::ToolParams>> toolParams_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
