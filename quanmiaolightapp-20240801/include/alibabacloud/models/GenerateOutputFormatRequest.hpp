// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEOUTPUTFORMATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEOUTPUTFORMATREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GenerateOutputFormatRequestTags.hpp>
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
    virtual bool empty() const override { return this->businessType_ == nullptr
        && return this->content_ == nullptr && return this->extraInfo_ == nullptr && return this->tags_ == nullptr && return this->taskDescription_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline GenerateOutputFormatRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GenerateOutputFormatRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string extraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline GenerateOutputFormatRequest& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GenerateOutputFormatRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GenerateOutputFormatRequestTags>) };
    inline vector<GenerateOutputFormatRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<GenerateOutputFormatRequestTags>) };
    inline GenerateOutputFormatRequest& setTags(const vector<GenerateOutputFormatRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GenerateOutputFormatRequest& setTags(vector<GenerateOutputFormatRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskDescription Field Functions 
    bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
    void deleteTaskDescription() { this->taskDescription_ = nullptr;};
    inline string taskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
    inline GenerateOutputFormatRequest& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


  protected:
    std::shared_ptr<string> businessType_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> extraInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<GenerateOutputFormatRequestTags>> tags_ = nullptr;
    std::shared_ptr<string> taskDescription_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
