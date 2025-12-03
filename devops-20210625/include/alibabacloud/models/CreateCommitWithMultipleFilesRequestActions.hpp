// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMMITWITHMULTIPLEFILESREQUESTACTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMMITWITHMULTIPLEFILESREQUESTACTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateCommitWithMultipleFilesRequestActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCommitWithMultipleFilesRequestActions& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(filePath, filePath_);
      DARABONBA_PTR_TO_JSON(previousPath, previousPath_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCommitWithMultipleFilesRequestActions& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(filePath, filePath_);
      DARABONBA_PTR_FROM_JSON(previousPath, previousPath_);
    };
    CreateCommitWithMultipleFilesRequestActions() = default ;
    CreateCommitWithMultipleFilesRequestActions(const CreateCommitWithMultipleFilesRequestActions &) = default ;
    CreateCommitWithMultipleFilesRequestActions(CreateCommitWithMultipleFilesRequestActions &&) = default ;
    CreateCommitWithMultipleFilesRequestActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCommitWithMultipleFilesRequestActions() = default ;
    CreateCommitWithMultipleFilesRequestActions& operator=(const CreateCommitWithMultipleFilesRequestActions &) = default ;
    CreateCommitWithMultipleFilesRequestActions& operator=(CreateCommitWithMultipleFilesRequestActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->content_ == nullptr && return this->filePath_ == nullptr && return this->previousPath_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline CreateCommitWithMultipleFilesRequestActions& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateCommitWithMultipleFilesRequestActions& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline CreateCommitWithMultipleFilesRequestActions& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // previousPath Field Functions 
    bool hasPreviousPath() const { return this->previousPath_ != nullptr;};
    void deletePreviousPath() { this->previousPath_ = nullptr;};
    inline string previousPath() const { DARABONBA_PTR_GET_DEFAULT(previousPath_, "") };
    inline CreateCommitWithMultipleFilesRequestActions& setPreviousPath(string previousPath) { DARABONBA_PTR_SET_VALUE(previousPath_, previousPath) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> filePath_ = nullptr;
    std::shared_ptr<string> previousPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
