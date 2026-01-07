// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEOUTPUTFORMATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEOUTPUTFORMATREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GenerateOutputFormatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateOutputFormatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(businessType, businessType_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(taskDescription, taskDescription_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateOutputFormatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(businessType, businessType_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(taskDescription, taskDescription_);
    };
    GenerateOutputFormatRequest() = default ;
    GenerateOutputFormatRequest(const GenerateOutputFormatRequest &) = default ;
    GenerateOutputFormatRequest(GenerateOutputFormatRequest &&) = default ;
    GenerateOutputFormatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateOutputFormatRequest() = default ;
    GenerateOutputFormatRequest& operator=(const GenerateOutputFormatRequest &) = default ;
    GenerateOutputFormatRequest& operator=(GenerateOutputFormatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(tagDefinePrompt, tagDefinePrompt_);
        DARABONBA_PTR_TO_JSON(tagName, tagName_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(tagDefinePrompt, tagDefinePrompt_);
        DARABONBA_PTR_FROM_JSON(tagName, tagName_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagDefinePrompt_ == nullptr
        && this->tagName_ == nullptr; };
      // tagDefinePrompt Field Functions 
      bool hasTagDefinePrompt() const { return this->tagDefinePrompt_ != nullptr;};
      void deleteTagDefinePrompt() { this->tagDefinePrompt_ = nullptr;};
      inline string getTagDefinePrompt() const { DARABONBA_PTR_GET_DEFAULT(tagDefinePrompt_, "") };
      inline Tags& setTagDefinePrompt(string tagDefinePrompt) { DARABONBA_PTR_SET_VALUE(tagDefinePrompt_, tagDefinePrompt) };


      // tagName Field Functions 
      bool hasTagName() const { return this->tagName_ != nullptr;};
      void deleteTagName() { this->tagName_ = nullptr;};
      inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
      inline Tags& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    protected:
      shared_ptr<string> tagDefinePrompt_ {};
      shared_ptr<string> tagName_ {};
    };

    virtual bool empty() const override { return this->businessType_ == nullptr
        && this->content_ == nullptr && this->extraInfo_ == nullptr && this->tags_ == nullptr && this->taskDescription_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline GenerateOutputFormatRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GenerateOutputFormatRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string getExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline GenerateOutputFormatRequest& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GenerateOutputFormatRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GenerateOutputFormatRequest::Tags>) };
    inline vector<GenerateOutputFormatRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GenerateOutputFormatRequest::Tags>) };
    inline GenerateOutputFormatRequest& setTags(const vector<GenerateOutputFormatRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GenerateOutputFormatRequest& setTags(vector<GenerateOutputFormatRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskDescription Field Functions 
    bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
    void deleteTaskDescription() { this->taskDescription_ = nullptr;};
    inline string getTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
    inline GenerateOutputFormatRequest& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


  protected:
    shared_ptr<string> businessType_ {};
    shared_ptr<string> content_ {};
    shared_ptr<string> extraInfo_ {};
    // This parameter is required.
    shared_ptr<vector<GenerateOutputFormatRequest::Tags>> tags_ {};
    shared_ptr<string> taskDescription_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
