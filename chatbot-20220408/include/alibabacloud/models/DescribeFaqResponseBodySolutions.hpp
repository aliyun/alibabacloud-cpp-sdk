// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAQRESPONSEBODYSOLUTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAQRESPONSEBODYSOLUTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class DescribeFaqResponseBodySolutions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaqResponseBodySolutions& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(PerspectiveCodes, perspectiveCodes_);
      DARABONBA_PTR_TO_JSON(PlainText, plainText_);
      DARABONBA_PTR_TO_JSON(SolutionId, solutionId_);
      DARABONBA_PTR_TO_JSON(TagIdList, tagIdList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaqResponseBodySolutions& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(PerspectiveCodes, perspectiveCodes_);
      DARABONBA_PTR_FROM_JSON(PlainText, plainText_);
      DARABONBA_PTR_FROM_JSON(SolutionId, solutionId_);
      DARABONBA_PTR_FROM_JSON(TagIdList, tagIdList_);
    };
    DescribeFaqResponseBodySolutions() = default ;
    DescribeFaqResponseBodySolutions(const DescribeFaqResponseBodySolutions &) = default ;
    DescribeFaqResponseBodySolutions(DescribeFaqResponseBodySolutions &&) = default ;
    DescribeFaqResponseBodySolutions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaqResponseBodySolutions() = default ;
    DescribeFaqResponseBodySolutions& operator=(const DescribeFaqResponseBodySolutions &) = default ;
    DescribeFaqResponseBodySolutions& operator=(DescribeFaqResponseBodySolutions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->contentType_ == nullptr && return this->createTime_ == nullptr && return this->modifyTime_ == nullptr && return this->perspectiveCodes_ == nullptr && return this->plainText_ == nullptr
        && return this->solutionId_ == nullptr && return this->tagIdList_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeFaqResponseBodySolutions& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline int32_t contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, 0) };
    inline DescribeFaqResponseBodySolutions& setContentType(int32_t contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeFaqResponseBodySolutions& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeFaqResponseBodySolutions& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // perspectiveCodes Field Functions 
    bool hasPerspectiveCodes() const { return this->perspectiveCodes_ != nullptr;};
    void deletePerspectiveCodes() { this->perspectiveCodes_ = nullptr;};
    inline const vector<string> & perspectiveCodes() const { DARABONBA_PTR_GET_CONST(perspectiveCodes_, vector<string>) };
    inline vector<string> perspectiveCodes() { DARABONBA_PTR_GET(perspectiveCodes_, vector<string>) };
    inline DescribeFaqResponseBodySolutions& setPerspectiveCodes(const vector<string> & perspectiveCodes) { DARABONBA_PTR_SET_VALUE(perspectiveCodes_, perspectiveCodes) };
    inline DescribeFaqResponseBodySolutions& setPerspectiveCodes(vector<string> && perspectiveCodes) { DARABONBA_PTR_SET_RVALUE(perspectiveCodes_, perspectiveCodes) };


    // plainText Field Functions 
    bool hasPlainText() const { return this->plainText_ != nullptr;};
    void deletePlainText() { this->plainText_ = nullptr;};
    inline string plainText() const { DARABONBA_PTR_GET_DEFAULT(plainText_, "") };
    inline DescribeFaqResponseBodySolutions& setPlainText(string plainText) { DARABONBA_PTR_SET_VALUE(plainText_, plainText) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline int64_t solutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, 0L) };
    inline DescribeFaqResponseBodySolutions& setSolutionId(int64_t solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


    // tagIdList Field Functions 
    bool hasTagIdList() const { return this->tagIdList_ != nullptr;};
    void deleteTagIdList() { this->tagIdList_ = nullptr;};
    inline const vector<int64_t> & tagIdList() const { DARABONBA_PTR_GET_CONST(tagIdList_, vector<int64_t>) };
    inline vector<int64_t> tagIdList() { DARABONBA_PTR_GET(tagIdList_, vector<int64_t>) };
    inline DescribeFaqResponseBodySolutions& setTagIdList(const vector<int64_t> & tagIdList) { DARABONBA_PTR_SET_VALUE(tagIdList_, tagIdList) };
    inline DescribeFaqResponseBodySolutions& setTagIdList(vector<int64_t> && tagIdList) { DARABONBA_PTR_SET_RVALUE(tagIdList_, tagIdList) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<int32_t> contentType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<vector<string>> perspectiveCodes_ = nullptr;
    std::shared_ptr<string> plainText_ = nullptr;
    std::shared_ptr<int64_t> solutionId_ = nullptr;
    std::shared_ptr<vector<int64_t>> tagIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
