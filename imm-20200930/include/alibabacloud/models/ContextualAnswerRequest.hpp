// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTEXTUALANSWERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONTEXTUALANSWERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ContextualFile.hpp>
#include <alibabacloud/models/ContextualMessage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ContextualAnswerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContextualAnswerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, ContextualAnswerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    ContextualAnswerRequest() = default ;
    ContextualAnswerRequest(const ContextualAnswerRequest &) = default ;
    ContextualAnswerRequest(ContextualAnswerRequest &&) = default ;
    ContextualAnswerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContextualAnswerRequest() = default ;
    ContextualAnswerRequest& operator=(const ContextualAnswerRequest &) = default ;
    ContextualAnswerRequest& operator=(ContextualAnswerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->files_ != nullptr
        && this->messages_ != nullptr && this->projectName_ != nullptr; };
    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<ContextualFile> & files() const { DARABONBA_PTR_GET_CONST(files_, vector<ContextualFile>) };
    inline vector<ContextualFile> files() { DARABONBA_PTR_GET(files_, vector<ContextualFile>) };
    inline ContextualAnswerRequest& setFiles(const vector<ContextualFile> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline ContextualAnswerRequest& setFiles(vector<ContextualFile> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<ContextualMessage> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<ContextualMessage>) };
    inline vector<ContextualMessage> messages() { DARABONBA_PTR_GET(messages_, vector<ContextualMessage>) };
    inline ContextualAnswerRequest& setMessages(const vector<ContextualMessage> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline ContextualAnswerRequest& setMessages(vector<ContextualMessage> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ContextualAnswerRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    std::shared_ptr<vector<ContextualFile>> files_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<ContextualMessage>> messages_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
