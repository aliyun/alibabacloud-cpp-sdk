// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTTASKRESULT_HPP_
#define ALIBABACLOUD_MODELS_TEXTTASKRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TextTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class TextTaskResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextTaskResult& obj) { 
      DARABONBA_PTR_TO_JSON(textTask, textTask_);
    };
    friend void from_json(const Darabonba::Json& j, TextTaskResult& obj) { 
      DARABONBA_PTR_FROM_JSON(textTask, textTask_);
    };
    TextTaskResult() = default ;
    TextTaskResult(const TextTaskResult &) = default ;
    TextTaskResult(TextTaskResult &&) = default ;
    TextTaskResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextTaskResult() = default ;
    TextTaskResult& operator=(const TextTaskResult &) = default ;
    TextTaskResult& operator=(TextTaskResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->textTask_ == nullptr; };
    // textTask Field Functions 
    bool hasTextTask() const { return this->textTask_ != nullptr;};
    void deleteTextTask() { this->textTask_ = nullptr;};
    inline const TextTask & textTask() const { DARABONBA_PTR_GET_CONST(textTask_, TextTask) };
    inline TextTask textTask() { DARABONBA_PTR_GET(textTask_, TextTask) };
    inline TextTaskResult& setTextTask(const TextTask & textTask) { DARABONBA_PTR_SET_VALUE(textTask_, textTask) };
    inline TextTaskResult& setTextTask(TextTask && textTask) { DARABONBA_PTR_SET_RVALUE(textTask_, textTask) };


  protected:
    std::shared_ptr<TextTask> textTask_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
