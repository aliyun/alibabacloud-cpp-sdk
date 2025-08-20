// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMPLETIONREQUESTSERVICEINSPECTIONINSPECTIONCONTENTS_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMPLETIONREQUESTSERVICEINSPECTIONINSPECTIONCONTENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class RunCompletionRequestServiceInspectionInspectionContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCompletionRequestServiceInspectionInspectionContents& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, RunCompletionRequestServiceInspectionInspectionContents& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    RunCompletionRequestServiceInspectionInspectionContents() = default ;
    RunCompletionRequestServiceInspectionInspectionContents(const RunCompletionRequestServiceInspectionInspectionContents &) = default ;
    RunCompletionRequestServiceInspectionInspectionContents(RunCompletionRequestServiceInspectionInspectionContents &&) = default ;
    RunCompletionRequestServiceInspectionInspectionContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCompletionRequestServiceInspectionInspectionContents() = default ;
    RunCompletionRequestServiceInspectionInspectionContents& operator=(const RunCompletionRequestServiceInspectionInspectionContents &) = default ;
    RunCompletionRequestServiceInspectionInspectionContents& operator=(RunCompletionRequestServiceInspectionInspectionContents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->title_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunCompletionRequestServiceInspectionInspectionContents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline RunCompletionRequestServiceInspectionInspectionContents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
