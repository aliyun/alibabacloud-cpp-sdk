// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSIMQUESTIONRESPONSEBODYSIMQUESTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTSIMQUESTIONRESPONSEBODYSIMQUESTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListSimQuestionResponseBodySimQuestions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSimQuestionResponseBodySimQuestions& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(SimQuestionId, simQuestionId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListSimQuestionResponseBodySimQuestions& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(SimQuestionId, simQuestionId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ListSimQuestionResponseBodySimQuestions() = default ;
    ListSimQuestionResponseBodySimQuestions(const ListSimQuestionResponseBodySimQuestions &) = default ;
    ListSimQuestionResponseBodySimQuestions(ListSimQuestionResponseBodySimQuestions &&) = default ;
    ListSimQuestionResponseBodySimQuestions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSimQuestionResponseBodySimQuestions() = default ;
    ListSimQuestionResponseBodySimQuestions& operator=(const ListSimQuestionResponseBodySimQuestions &) = default ;
    ListSimQuestionResponseBodySimQuestions& operator=(ListSimQuestionResponseBodySimQuestions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->modifyTime_ != nullptr && this->simQuestionId_ != nullptr && this->title_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListSimQuestionResponseBodySimQuestions& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListSimQuestionResponseBodySimQuestions& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // simQuestionId Field Functions 
    bool hasSimQuestionId() const { return this->simQuestionId_ != nullptr;};
    void deleteSimQuestionId() { this->simQuestionId_ = nullptr;};
    inline int64_t simQuestionId() const { DARABONBA_PTR_GET_DEFAULT(simQuestionId_, 0L) };
    inline ListSimQuestionResponseBodySimQuestions& setSimQuestionId(int64_t simQuestionId) { DARABONBA_PTR_SET_VALUE(simQuestionId_, simQuestionId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListSimQuestionResponseBodySimQuestions& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<int64_t> simQuestionId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
