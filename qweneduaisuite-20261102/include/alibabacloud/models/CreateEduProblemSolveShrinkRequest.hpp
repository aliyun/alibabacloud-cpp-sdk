// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEDUPROBLEMSOLVESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEDUPROBLEMSOLVESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenEduAiSuite20261102
{
namespace Models
{
  class CreateEduProblemSolveShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEduProblemSolveShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(query, queryShrink_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEduProblemSolveShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(query, queryShrink_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateEduProblemSolveShrinkRequest() = default ;
    CreateEduProblemSolveShrinkRequest(const CreateEduProblemSolveShrinkRequest &) = default ;
    CreateEduProblemSolveShrinkRequest(CreateEduProblemSolveShrinkRequest &&) = default ;
    CreateEduProblemSolveShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEduProblemSolveShrinkRequest() = default ;
    CreateEduProblemSolveShrinkRequest& operator=(const CreateEduProblemSolveShrinkRequest &) = default ;
    CreateEduProblemSolveShrinkRequest& operator=(CreateEduProblemSolveShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryShrink_ == nullptr
        && this->requestId_ == nullptr; };
    // queryShrink Field Functions 
    bool hasQueryShrink() const { return this->queryShrink_ != nullptr;};
    void deleteQueryShrink() { this->queryShrink_ = nullptr;};
    inline string getQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(queryShrink_, "") };
    inline CreateEduProblemSolveShrinkRequest& setQueryShrink(string queryShrink) { DARABONBA_PTR_SET_VALUE(queryShrink_, queryShrink) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateEduProblemSolveShrinkRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // **The question image container.**
    shared_ptr<string> queryShrink_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenEduAiSuite20261102
#endif
