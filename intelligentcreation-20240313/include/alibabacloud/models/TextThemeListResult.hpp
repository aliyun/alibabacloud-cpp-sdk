// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTTHEMELISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_TEXTTHEMELISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TextTheme.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class TextThemeListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextThemeListResult& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(textThemeList, textThemeList_);
    };
    friend void from_json(const Darabonba::Json& j, TextThemeListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(textThemeList, textThemeList_);
    };
    TextThemeListResult() = default ;
    TextThemeListResult(const TextThemeListResult &) = default ;
    TextThemeListResult(TextThemeListResult &&) = default ;
    TextThemeListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextThemeListResult() = default ;
    TextThemeListResult& operator=(const TextThemeListResult &) = default ;
    TextThemeListResult& operator=(TextThemeListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->textThemeList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TextThemeListResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // textThemeList Field Functions 
    bool hasTextThemeList() const { return this->textThemeList_ != nullptr;};
    void deleteTextThemeList() { this->textThemeList_ = nullptr;};
    inline const vector<TextTheme> & textThemeList() const { DARABONBA_PTR_GET_CONST(textThemeList_, vector<TextTheme>) };
    inline vector<TextTheme> textThemeList() { DARABONBA_PTR_GET(textThemeList_, vector<TextTheme>) };
    inline TextThemeListResult& setTextThemeList(const vector<TextTheme> & textThemeList) { DARABONBA_PTR_SET_VALUE(textThemeList_, textThemeList) };
    inline TextThemeListResult& setTextThemeList(vector<TextTheme> && textThemeList) { DARABONBA_PTR_SET_RVALUE(textThemeList_, textThemeList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<TextTheme>> textThemeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
