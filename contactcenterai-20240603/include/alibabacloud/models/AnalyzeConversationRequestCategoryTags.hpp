// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZECONVERSATIONREQUESTCATEGORYTAGS_HPP_
#define ALIBABACLOUD_MODELS_ANALYZECONVERSATIONREQUESTCATEGORYTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class AnalyzeConversationRequestCategoryTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeConversationRequestCategoryTags& obj) { 
      DARABONBA_PTR_TO_JSON(tagDesc, tagDesc_);
      DARABONBA_PTR_TO_JSON(tagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeConversationRequestCategoryTags& obj) { 
      DARABONBA_PTR_FROM_JSON(tagDesc, tagDesc_);
      DARABONBA_PTR_FROM_JSON(tagName, tagName_);
    };
    AnalyzeConversationRequestCategoryTags() = default ;
    AnalyzeConversationRequestCategoryTags(const AnalyzeConversationRequestCategoryTags &) = default ;
    AnalyzeConversationRequestCategoryTags(AnalyzeConversationRequestCategoryTags &&) = default ;
    AnalyzeConversationRequestCategoryTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeConversationRequestCategoryTags() = default ;
    AnalyzeConversationRequestCategoryTags& operator=(const AnalyzeConversationRequestCategoryTags &) = default ;
    AnalyzeConversationRequestCategoryTags& operator=(AnalyzeConversationRequestCategoryTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagDesc_ != nullptr
        && this->tagName_ != nullptr; };
    // tagDesc Field Functions 
    bool hasTagDesc() const { return this->tagDesc_ != nullptr;};
    void deleteTagDesc() { this->tagDesc_ = nullptr;};
    inline string tagDesc() const { DARABONBA_PTR_GET_DEFAULT(tagDesc_, "") };
    inline AnalyzeConversationRequestCategoryTags& setTagDesc(string tagDesc) { DARABONBA_PTR_SET_VALUE(tagDesc_, tagDesc) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline AnalyzeConversationRequestCategoryTags& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    std::shared_ptr<string> tagDesc_ = nullptr;
    std::shared_ptr<string> tagName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
