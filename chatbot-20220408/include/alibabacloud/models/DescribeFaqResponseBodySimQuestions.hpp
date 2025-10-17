// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAQRESPONSEBODYSIMQUESTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAQRESPONSEBODYSIMQUESTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class DescribeFaqResponseBodySimQuestions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaqResponseBodySimQuestions& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(SimQuestionId, simQuestionId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaqResponseBodySimQuestions& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(SimQuestionId, simQuestionId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    DescribeFaqResponseBodySimQuestions() = default ;
    DescribeFaqResponseBodySimQuestions(const DescribeFaqResponseBodySimQuestions &) = default ;
    DescribeFaqResponseBodySimQuestions(DescribeFaqResponseBodySimQuestions &&) = default ;
    DescribeFaqResponseBodySimQuestions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaqResponseBodySimQuestions() = default ;
    DescribeFaqResponseBodySimQuestions& operator=(const DescribeFaqResponseBodySimQuestions &) = default ;
    DescribeFaqResponseBodySimQuestions& operator=(DescribeFaqResponseBodySimQuestions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->modifyTime_ == nullptr && return this->simQuestionId_ == nullptr && return this->title_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeFaqResponseBodySimQuestions& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeFaqResponseBodySimQuestions& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // simQuestionId Field Functions 
    bool hasSimQuestionId() const { return this->simQuestionId_ != nullptr;};
    void deleteSimQuestionId() { this->simQuestionId_ = nullptr;};
    inline int64_t simQuestionId() const { DARABONBA_PTR_GET_DEFAULT(simQuestionId_, 0L) };
    inline DescribeFaqResponseBodySimQuestions& setSimQuestionId(int64_t simQuestionId) { DARABONBA_PTR_SET_VALUE(simQuestionId_, simQuestionId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeFaqResponseBodySimQuestions& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


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
