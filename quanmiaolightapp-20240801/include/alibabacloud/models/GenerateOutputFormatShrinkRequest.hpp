// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEOUTPUTFORMATSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEOUTPUTFORMATSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GenerateOutputFormatShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateOutputFormatShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(businessType, businessType_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(taskDescription, taskDescription_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateOutputFormatShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(businessType, businessType_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(taskDescription, taskDescription_);
    };
    GenerateOutputFormatShrinkRequest() = default ;
    GenerateOutputFormatShrinkRequest(const GenerateOutputFormatShrinkRequest &) = default ;
    GenerateOutputFormatShrinkRequest(GenerateOutputFormatShrinkRequest &&) = default ;
    GenerateOutputFormatShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateOutputFormatShrinkRequest() = default ;
    GenerateOutputFormatShrinkRequest& operator=(const GenerateOutputFormatShrinkRequest &) = default ;
    GenerateOutputFormatShrinkRequest& operator=(GenerateOutputFormatShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessType_ != nullptr
        && this->content_ != nullptr && this->extraInfo_ != nullptr && this->tagsShrink_ != nullptr && this->taskDescription_ != nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline GenerateOutputFormatShrinkRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GenerateOutputFormatShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string extraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline GenerateOutputFormatShrinkRequest& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline GenerateOutputFormatShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // taskDescription Field Functions 
    bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
    void deleteTaskDescription() { this->taskDescription_ = nullptr;};
    inline string taskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
    inline GenerateOutputFormatShrinkRequest& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


  protected:
    std::shared_ptr<string> businessType_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> extraInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tagsShrink_ = nullptr;
    std::shared_ptr<string> taskDescription_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
