// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class AddFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_TO_JSON(LeaseId, leaseId_);
      DARABONBA_PTR_TO_JSON(OriginalFileUrl, originalFileUrl_);
      DARABONBA_PTR_TO_JSON(Parser, parser_);
      DARABONBA_PTR_TO_JSON(ParserConfig, parserConfig_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, AddFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_FROM_JSON(LeaseId, leaseId_);
      DARABONBA_PTR_FROM_JSON(OriginalFileUrl, originalFileUrl_);
      DARABONBA_PTR_FROM_JSON(Parser, parser_);
      DARABONBA_PTR_FROM_JSON(ParserConfig, parserConfig_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    AddFileRequest() = default ;
    AddFileRequest(const AddFileRequest &) = default ;
    AddFileRequest(AddFileRequest &&) = default ;
    AddFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFileRequest() = default ;
    AddFileRequest& operator=(const AddFileRequest &) = default ;
    AddFileRequest& operator=(AddFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ParserConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParserConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ModelName, modelName_);
        DARABONBA_PTR_TO_JSON(ModelPrompt, modelPrompt_);
      };
      friend void from_json(const Darabonba::Json& j, ParserConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
        DARABONBA_PTR_FROM_JSON(ModelPrompt, modelPrompt_);
      };
      ParserConfig() = default ;
      ParserConfig(const ParserConfig &) = default ;
      ParserConfig(ParserConfig &&) = default ;
      ParserConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ParserConfig() = default ;
      ParserConfig& operator=(const ParserConfig &) = default ;
      ParserConfig& operator=(ParserConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->modelName_ == nullptr
        && this->modelPrompt_ == nullptr; };
      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline ParserConfig& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // modelPrompt Field Functions 
      bool hasModelPrompt() const { return this->modelPrompt_ != nullptr;};
      void deleteModelPrompt() { this->modelPrompt_ = nullptr;};
      inline string getModelPrompt() const { DARABONBA_PTR_GET_DEFAULT(modelPrompt_, "") };
      inline ParserConfig& setModelPrompt(string modelPrompt) { DARABONBA_PTR_SET_VALUE(modelPrompt_, modelPrompt) };


    protected:
      // The model name.
      shared_ptr<string> modelName_ {};
      // The prompt to use when calling the Qwen-VL parser.
      shared_ptr<string> modelPrompt_ {};
    };

    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->categoryType_ == nullptr && this->leaseId_ == nullptr && this->originalFileUrl_ == nullptr && this->parser_ == nullptr && this->parserConfig_ == nullptr
        && this->tags_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline AddFileRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline string getCategoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, "") };
    inline AddFileRequest& setCategoryType(string categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // leaseId Field Functions 
    bool hasLeaseId() const { return this->leaseId_ != nullptr;};
    void deleteLeaseId() { this->leaseId_ = nullptr;};
    inline string getLeaseId() const { DARABONBA_PTR_GET_DEFAULT(leaseId_, "") };
    inline AddFileRequest& setLeaseId(string leaseId) { DARABONBA_PTR_SET_VALUE(leaseId_, leaseId) };


    // originalFileUrl Field Functions 
    bool hasOriginalFileUrl() const { return this->originalFileUrl_ != nullptr;};
    void deleteOriginalFileUrl() { this->originalFileUrl_ = nullptr;};
    inline string getOriginalFileUrl() const { DARABONBA_PTR_GET_DEFAULT(originalFileUrl_, "") };
    inline AddFileRequest& setOriginalFileUrl(string originalFileUrl) { DARABONBA_PTR_SET_VALUE(originalFileUrl_, originalFileUrl) };


    // parser Field Functions 
    bool hasParser() const { return this->parser_ != nullptr;};
    void deleteParser() { this->parser_ = nullptr;};
    inline string getParser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
    inline AddFileRequest& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


    // parserConfig Field Functions 
    bool hasParserConfig() const { return this->parserConfig_ != nullptr;};
    void deleteParserConfig() { this->parserConfig_ = nullptr;};
    inline const AddFileRequest::ParserConfig & getParserConfig() const { DARABONBA_PTR_GET_CONST(parserConfig_, AddFileRequest::ParserConfig) };
    inline AddFileRequest::ParserConfig getParserConfig() { DARABONBA_PTR_GET(parserConfig_, AddFileRequest::ParserConfig) };
    inline AddFileRequest& setParserConfig(const AddFileRequest::ParserConfig & parserConfig) { DARABONBA_PTR_SET_VALUE(parserConfig_, parserConfig) };
    inline AddFileRequest& setParserConfig(AddFileRequest::ParserConfig && parserConfig) { DARABONBA_PTR_SET_RVALUE(parserConfig_, parserConfig) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline AddFileRequest& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline AddFileRequest& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // <props="china">
    // 
    // - If `CategoryType` is set to `UNSTRUCTURED`, you must specify the ID of the category to which the file belongs. This is the `CategoryId` returned by the **AddCategory** API. You can also obtain the category ID by navigating to the \\*\\*Application data\\*\\* > \\*\\*Files\\*\\* tab and clicking the ID icon next to the category name. You can specify `default` to use the default category.
    // 
    // - If `CategoryType` is set to `SESSION_FILE`, specify `default`.
    // 
    // 
    // 
    // <props="intl">
    // 
    // The ID of the category to which the file belongs. This is the `CategoryId` returned by the **AddCategory** API. You can also obtain the category ID by navigating to the \\*\\*Application data\\*\\* > \\*\\*Files\\*\\* tab and clicking the ID icon next to the category name. You can specify `default` to use the default category.
    // 
    // This parameter is required.
    shared_ptr<string> categoryId_ {};
    // The type of category. This parameter is optional. Default value: `UNSTRUCTURED`. Valid values:
    // 
    // - `UNSTRUCTURED`: A category used for building a knowledge base.
    // 
    // <props="china">
    // 
    // - `SESSION_FILE`: A file used for interactions within an agent [session](https://help.aliyun.com/zh/model-studio/user-guide/file-interaction).
    //   > If you set this parameter to `SESSION_FILE`, you must also set the `CategoryType` parameter to `SESSION_FILE` when you call the ApplyFileUploadLease API.
    //   > Files of this type are valid only for the current session and expire after the session is closed, with a maximum validity of 7 days. These files are not intended for long-term storage.
    shared_ptr<string> categoryType_ {};
    // The upload lease ID. This value maps to the `FileUploadLeaseId` returned by the **ApplyFileUploadLease** API.
    // 
    // This parameter is required.
    shared_ptr<string> leaseId_ {};
    // <props="china">
    // 
    // The URL of the file. The system records this link when building a [document retrieval-based knowledge base](https://help.aliyun.com/document_detail/2807740.html). When you interact with an [agent](https://help.aliyun.com/document_detail/2842749.html) in the Alibaba Cloud Model Studio console, this URL is returned with the retrieval results for the file in the `docUrl` field.
    // 
    // > For this parameter to take effect, the **knowledge base** feature must be enabled for the agent, and the **display the source of the answer** option must be enabled.
    // 
    // 
    // 
    // <props="intl">
    // 
    // The URL of the file. The system records this link when building a [document retrieval-based knowledge base](https://help.aliyun.com/document_detail/2807740.html). When you interact with an [agent](https://help.aliyun.com/document_detail/2842749.html) in the Alibaba Cloud Model Studio console, this URL is returned with the retrieval results for the file in the `docUrl` field.
    // 
    // > For this parameter to take effect, the **knowledge base** feature must be enabled for the agent, and the **display the source of the answer** option must be enabled.
    shared_ptr<string> originalFileUrl_ {};
    // The type of parser. Valid values:
    // 
    // - DOCMIND: Intelligent Document Parsing
    // 
    // - DOCMIND_DIGITAL: Digital Document Parsing
    // 
    // - DOCMIND_LLM_VERSION: Large Language Model-based Document Parsing
    // 
    // - DASH_QWEN_VL_PARSER: Qwen-VL Parsing
    // 
    // - DOCMIND_LLM_VERSION_MEDIA: Audio and Video Parsing
    // 
    // - AUTO_SELECT: Automatic Parser Selection
    // 
    // <props="intl">
    // 
    // > The system uses the specified parser to parse the uploaded file. If you set this parameter to `AUTO_SELECT`, the parser configured for the category is used.
    // 
    // 
    // 
    // <props="china">
    // 
    // > If `CategoryType` is set to `UNSTRUCTURED`, the parser parses your uploaded file based on the category’s data parsing settings.
    // > If `CategoryType` is set to `SESSION_FILE`, the system uses a default parsing method that cannot be changed.
    // 
    // This parameter is required.
    shared_ptr<string> parser_ {};
    // The parser configuration. This parameter is required only if you set `Parser` to `DASH_QWEN_VL_PARSER`.
    shared_ptr<AddFileRequest::ParserConfig> parserConfig_ {};
    // - A list of tags for the file. You can specify up to 100 tags. The total length of all tags cannot exceed 700 characters.
    // 
    // - If this parameter is not specified, no tags are added.
    shared_ptr<vector<string>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
