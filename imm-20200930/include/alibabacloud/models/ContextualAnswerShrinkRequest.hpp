// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTEXTUALANSWERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONTEXTUALANSWERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ContextualAnswerShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContextualAnswerShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Files, filesShrink_);
      DARABONBA_PTR_TO_JSON(Messages, messagesShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, ContextualAnswerShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Files, filesShrink_);
      DARABONBA_PTR_FROM_JSON(Messages, messagesShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    ContextualAnswerShrinkRequest() = default ;
    ContextualAnswerShrinkRequest(const ContextualAnswerShrinkRequest &) = default ;
    ContextualAnswerShrinkRequest(ContextualAnswerShrinkRequest &&) = default ;
    ContextualAnswerShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContextualAnswerShrinkRequest() = default ;
    ContextualAnswerShrinkRequest& operator=(const ContextualAnswerShrinkRequest &) = default ;
    ContextualAnswerShrinkRequest& operator=(ContextualAnswerShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filesShrink_ != nullptr
        && this->messagesShrink_ != nullptr && this->projectName_ != nullptr; };
    // filesShrink Field Functions 
    bool hasFilesShrink() const { return this->filesShrink_ != nullptr;};
    void deleteFilesShrink() { this->filesShrink_ = nullptr;};
    inline string filesShrink() const { DARABONBA_PTR_GET_DEFAULT(filesShrink_, "") };
    inline ContextualAnswerShrinkRequest& setFilesShrink(string filesShrink) { DARABONBA_PTR_SET_VALUE(filesShrink_, filesShrink) };


    // messagesShrink Field Functions 
    bool hasMessagesShrink() const { return this->messagesShrink_ != nullptr;};
    void deleteMessagesShrink() { this->messagesShrink_ = nullptr;};
    inline string messagesShrink() const { DARABONBA_PTR_GET_DEFAULT(messagesShrink_, "") };
    inline ContextualAnswerShrinkRequest& setMessagesShrink(string messagesShrink) { DARABONBA_PTR_SET_VALUE(messagesShrink_, messagesShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ContextualAnswerShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    std::shared_ptr<string> filesShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> messagesShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
