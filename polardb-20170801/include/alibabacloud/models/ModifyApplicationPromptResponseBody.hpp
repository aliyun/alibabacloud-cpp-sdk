// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPLICATIONPROMPTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPLICATIONPROMPTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyApplicationPromptResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApplicationPromptResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PromptId, promptId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApplicationPromptResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PromptId, promptId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyApplicationPromptResponseBody() = default ;
    ModifyApplicationPromptResponseBody(const ModifyApplicationPromptResponseBody &) = default ;
    ModifyApplicationPromptResponseBody(ModifyApplicationPromptResponseBody &&) = default ;
    ModifyApplicationPromptResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApplicationPromptResponseBody() = default ;
    ModifyApplicationPromptResponseBody& operator=(const ModifyApplicationPromptResponseBody &) = default ;
    ModifyApplicationPromptResponseBody& operator=(ModifyApplicationPromptResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->promptId_ == nullptr
        && this->requestId_ == nullptr; };
    // promptId Field Functions 
    bool hasPromptId() const { return this->promptId_ != nullptr;};
    void deletePromptId() { this->promptId_ = nullptr;};
    inline string getPromptId() const { DARABONBA_PTR_GET_DEFAULT(promptId_, "") };
    inline ModifyApplicationPromptResponseBody& setPromptId(string promptId) { DARABONBA_PTR_SET_VALUE(promptId_, promptId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyApplicationPromptResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> promptId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
