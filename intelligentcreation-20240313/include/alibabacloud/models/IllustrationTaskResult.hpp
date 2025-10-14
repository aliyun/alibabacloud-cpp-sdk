// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ILLUSTRATIONTASKRESULT_HPP_
#define ALIBABACLOUD_MODELS_ILLUSTRATIONTASKRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IllustrationTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class IllustrationTaskResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IllustrationTaskResult& obj) { 
      DARABONBA_PTR_TO_JSON(illustrationTask, illustrationTask_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, IllustrationTaskResult& obj) { 
      DARABONBA_PTR_FROM_JSON(illustrationTask, illustrationTask_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    IllustrationTaskResult() = default ;
    IllustrationTaskResult(const IllustrationTaskResult &) = default ;
    IllustrationTaskResult(IllustrationTaskResult &&) = default ;
    IllustrationTaskResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IllustrationTaskResult() = default ;
    IllustrationTaskResult& operator=(const IllustrationTaskResult &) = default ;
    IllustrationTaskResult& operator=(IllustrationTaskResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->illustrationTask_ == nullptr
        && return this->requestId_ == nullptr; };
    // illustrationTask Field Functions 
    bool hasIllustrationTask() const { return this->illustrationTask_ != nullptr;};
    void deleteIllustrationTask() { this->illustrationTask_ = nullptr;};
    inline const IllustrationTask & illustrationTask() const { DARABONBA_PTR_GET_CONST(illustrationTask_, IllustrationTask) };
    inline IllustrationTask illustrationTask() { DARABONBA_PTR_GET(illustrationTask_, IllustrationTask) };
    inline IllustrationTaskResult& setIllustrationTask(const IllustrationTask & illustrationTask) { DARABONBA_PTR_SET_VALUE(illustrationTask_, illustrationTask) };
    inline IllustrationTaskResult& setIllustrationTask(IllustrationTask && illustrationTask) { DARABONBA_PTR_SET_RVALUE(illustrationTask_, illustrationTask) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline IllustrationTaskResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<IllustrationTask> illustrationTask_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
