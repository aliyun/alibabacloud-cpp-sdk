// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTRESULT_HPP_
#define ALIBABACLOUD_MODELS_TEXTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Text.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class TextResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextResult& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(text, text_);
    };
    friend void from_json(const Darabonba::Json& j, TextResult& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(text, text_);
    };
    TextResult() = default ;
    TextResult(const TextResult &) = default ;
    TextResult(TextResult &&) = default ;
    TextResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextResult() = default ;
    TextResult& operator=(const TextResult &) = default ;
    TextResult& operator=(TextResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->text_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TextResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline const Text & getText() const { DARABONBA_PTR_GET_CONST(text_, Text) };
    inline Text getText() { DARABONBA_PTR_GET(text_, Text) };
    inline TextResult& setText(const Text & text) { DARABONBA_PTR_SET_VALUE(text_, text) };
    inline TextResult& setText(Text && text) { DARABONBA_PTR_SET_RVALUE(text_, text) };


  protected:
    shared_ptr<string> requestId_ {};
    // This parameter is required.
    shared_ptr<Text> text_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
