// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTOPICSELECTIONPERSPECTIVEANALYSISTASKREQUESTDOCUMENTSCOMMENTS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTOPICSELECTIONPERSPECTIVEANALYSISTASKREQUESTDOCUMENTSCOMMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocumentsComments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocumentsComments& obj) { 
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocumentsComments& obj) { 
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocumentsComments() = default ;
    SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocumentsComments(const SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocumentsComments &) = default ;
    SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocumentsComments(SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocumentsComments &&) = default ;
    SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocumentsComments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocumentsComments() = default ;
    SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocumentsComments& operator=(const SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocumentsComments &) = default ;
    SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocumentsComments& operator=(SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocumentsComments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->text_ == nullptr
        && return this->username_ == nullptr; };
    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocumentsComments& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocumentsComments& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
