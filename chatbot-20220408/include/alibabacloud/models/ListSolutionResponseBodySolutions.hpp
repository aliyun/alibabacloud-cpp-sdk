// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOLUTIONRESPONSEBODYSOLUTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTSOLUTIONRESPONSEBODYSOLUTIONS_HPP_
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
  class ListSolutionResponseBodySolutions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSolutionResponseBodySolutions& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(PerspectiveCodes, perspectiveCodes_);
      DARABONBA_PTR_TO_JSON(PlainText, plainText_);
      DARABONBA_PTR_TO_JSON(SolutionId, solutionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSolutionResponseBodySolutions& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(PerspectiveCodes, perspectiveCodes_);
      DARABONBA_PTR_FROM_JSON(PlainText, plainText_);
      DARABONBA_PTR_FROM_JSON(SolutionId, solutionId_);
    };
    ListSolutionResponseBodySolutions() = default ;
    ListSolutionResponseBodySolutions(const ListSolutionResponseBodySolutions &) = default ;
    ListSolutionResponseBodySolutions(ListSolutionResponseBodySolutions &&) = default ;
    ListSolutionResponseBodySolutions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSolutionResponseBodySolutions() = default ;
    ListSolutionResponseBodySolutions& operator=(const ListSolutionResponseBodySolutions &) = default ;
    ListSolutionResponseBodySolutions& operator=(ListSolutionResponseBodySolutions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->contentType_ == nullptr && return this->createTime_ == nullptr && return this->modifyTime_ == nullptr && return this->perspectiveCodes_ == nullptr && return this->plainText_ == nullptr
        && return this->solutionId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListSolutionResponseBodySolutions& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline int32_t contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, 0) };
    inline ListSolutionResponseBodySolutions& setContentType(int32_t contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListSolutionResponseBodySolutions& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListSolutionResponseBodySolutions& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // perspectiveCodes Field Functions 
    bool hasPerspectiveCodes() const { return this->perspectiveCodes_ != nullptr;};
    void deletePerspectiveCodes() { this->perspectiveCodes_ = nullptr;};
    inline const vector<string> & perspectiveCodes() const { DARABONBA_PTR_GET_CONST(perspectiveCodes_, vector<string>) };
    inline vector<string> perspectiveCodes() { DARABONBA_PTR_GET(perspectiveCodes_, vector<string>) };
    inline ListSolutionResponseBodySolutions& setPerspectiveCodes(const vector<string> & perspectiveCodes) { DARABONBA_PTR_SET_VALUE(perspectiveCodes_, perspectiveCodes) };
    inline ListSolutionResponseBodySolutions& setPerspectiveCodes(vector<string> && perspectiveCodes) { DARABONBA_PTR_SET_RVALUE(perspectiveCodes_, perspectiveCodes) };


    // plainText Field Functions 
    bool hasPlainText() const { return this->plainText_ != nullptr;};
    void deletePlainText() { this->plainText_ = nullptr;};
    inline string plainText() const { DARABONBA_PTR_GET_DEFAULT(plainText_, "") };
    inline ListSolutionResponseBodySolutions& setPlainText(string plainText) { DARABONBA_PTR_SET_VALUE(plainText_, plainText) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline int64_t solutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, 0L) };
    inline ListSolutionResponseBodySolutions& setSolutionId(int64_t solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<int32_t> contentType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<vector<string>> perspectiveCodes_ = nullptr;
    std::shared_ptr<string> plainText_ = nullptr;
    std::shared_ptr<int64_t> solutionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
