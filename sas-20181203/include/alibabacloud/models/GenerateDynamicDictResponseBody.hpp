// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDYNAMICDICTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDYNAMICDICTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GenerateDynamicDictResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDynamicDictResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KeywordList, keywordList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDynamicDictResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KeywordList, keywordList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateDynamicDictResponseBody() = default ;
    GenerateDynamicDictResponseBody(const GenerateDynamicDictResponseBody &) = default ;
    GenerateDynamicDictResponseBody(GenerateDynamicDictResponseBody &&) = default ;
    GenerateDynamicDictResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDynamicDictResponseBody() = default ;
    GenerateDynamicDictResponseBody& operator=(const GenerateDynamicDictResponseBody &) = default ;
    GenerateDynamicDictResponseBody& operator=(GenerateDynamicDictResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keywordList_ != nullptr
        && this->requestId_ != nullptr; };
    // keywordList Field Functions 
    bool hasKeywordList() const { return this->keywordList_ != nullptr;};
    void deleteKeywordList() { this->keywordList_ = nullptr;};
    inline const vector<string> & keywordList() const { DARABONBA_PTR_GET_CONST(keywordList_, vector<string>) };
    inline vector<string> keywordList() { DARABONBA_PTR_GET(keywordList_, vector<string>) };
    inline GenerateDynamicDictResponseBody& setKeywordList(const vector<string> & keywordList) { DARABONBA_PTR_SET_VALUE(keywordList_, keywordList) };
    inline GenerateDynamicDictResponseBody& setKeywordList(vector<string> && keywordList) { DARABONBA_PTR_SET_RVALUE(keywordList_, keywordList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateDynamicDictResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The custom weak passwords.
    std::shared_ptr<vector<string>> keywordList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
