// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTQUERYRESULT_HPP_
#define ALIBABACLOUD_MODELS_TEXTQUERYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Text.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class TextQueryResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextQueryResult& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(texts, texts_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, TextQueryResult& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(texts, texts_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    TextQueryResult() = default ;
    TextQueryResult(const TextQueryResult &) = default ;
    TextQueryResult(TextQueryResult &&) = default ;
    TextQueryResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextQueryResult() = default ;
    TextQueryResult& operator=(const TextQueryResult &) = default ;
    TextQueryResult& operator=(TextQueryResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->texts_ == nullptr && this->total_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TextQueryResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // texts Field Functions 
    bool hasTexts() const { return this->texts_ != nullptr;};
    void deleteTexts() { this->texts_ = nullptr;};
    inline const vector<Text> & getTexts() const { DARABONBA_PTR_GET_CONST(texts_, vector<Text>) };
    inline vector<Text> getTexts() { DARABONBA_PTR_GET(texts_, vector<Text>) };
    inline TextQueryResult& setTexts(const vector<Text> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
    inline TextQueryResult& setTexts(vector<Text> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline TextQueryResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<Text>> texts_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
