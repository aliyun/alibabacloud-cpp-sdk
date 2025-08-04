// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEUPLOADTEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEUPLOADTEMPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ValidateUploadTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateUploadTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CommentCount, commentCount_);
      DARABONBA_PTR_TO_JSON(DialogueCount, dialogueCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateUploadTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CommentCount, commentCount_);
      DARABONBA_PTR_FROM_JSON(DialogueCount, dialogueCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ValidateUploadTemplateResponseBodyData() = default ;
    ValidateUploadTemplateResponseBodyData(const ValidateUploadTemplateResponseBodyData &) = default ;
    ValidateUploadTemplateResponseBodyData(ValidateUploadTemplateResponseBodyData &&) = default ;
    ValidateUploadTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateUploadTemplateResponseBodyData() = default ;
    ValidateUploadTemplateResponseBodyData& operator=(const ValidateUploadTemplateResponseBodyData &) = default ;
    ValidateUploadTemplateResponseBodyData& operator=(ValidateUploadTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commentCount_ != nullptr
        && this->dialogueCount_ != nullptr && this->totalCount_ != nullptr; };
    // commentCount Field Functions 
    bool hasCommentCount() const { return this->commentCount_ != nullptr;};
    void deleteCommentCount() { this->commentCount_ = nullptr;};
    inline int32_t commentCount() const { DARABONBA_PTR_GET_DEFAULT(commentCount_, 0) };
    inline ValidateUploadTemplateResponseBodyData& setCommentCount(int32_t commentCount) { DARABONBA_PTR_SET_VALUE(commentCount_, commentCount) };


    // dialogueCount Field Functions 
    bool hasDialogueCount() const { return this->dialogueCount_ != nullptr;};
    void deleteDialogueCount() { this->dialogueCount_ = nullptr;};
    inline int32_t dialogueCount() const { DARABONBA_PTR_GET_DEFAULT(dialogueCount_, 0) };
    inline ValidateUploadTemplateResponseBodyData& setDialogueCount(int32_t dialogueCount) { DARABONBA_PTR_SET_VALUE(dialogueCount_, dialogueCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ValidateUploadTemplateResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> commentCount_ = nullptr;
    std::shared_ptr<int32_t> dialogueCount_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
