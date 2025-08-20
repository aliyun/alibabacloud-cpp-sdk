// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZECONVERSATIONREQUESTSERVICEINSPECTIONINSPECTIONCONTENTS_HPP_
#define ALIBABACLOUD_MODELS_ANALYZECONVERSATIONREQUESTSERVICEINSPECTIONINSPECTIONCONTENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class AnalyzeConversationRequestServiceInspectionInspectionContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeConversationRequestServiceInspectionInspectionContents& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeConversationRequestServiceInspectionInspectionContents& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    AnalyzeConversationRequestServiceInspectionInspectionContents() = default ;
    AnalyzeConversationRequestServiceInspectionInspectionContents(const AnalyzeConversationRequestServiceInspectionInspectionContents &) = default ;
    AnalyzeConversationRequestServiceInspectionInspectionContents(AnalyzeConversationRequestServiceInspectionInspectionContents &&) = default ;
    AnalyzeConversationRequestServiceInspectionInspectionContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeConversationRequestServiceInspectionInspectionContents() = default ;
    AnalyzeConversationRequestServiceInspectionInspectionContents& operator=(const AnalyzeConversationRequestServiceInspectionInspectionContents &) = default ;
    AnalyzeConversationRequestServiceInspectionInspectionContents& operator=(AnalyzeConversationRequestServiceInspectionInspectionContents &&) = default ;
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
    inline AnalyzeConversationRequestServiceInspectionInspectionContents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline AnalyzeConversationRequestServiceInspectionInspectionContents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
