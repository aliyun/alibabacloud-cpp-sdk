// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEKEYWORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEKEYWORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeInstanceKeywordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceKeywordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Words, words_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceKeywordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Words, words_);
    };
    DescribeInstanceKeywordsResponseBody() = default ;
    DescribeInstanceKeywordsResponseBody(const DescribeInstanceKeywordsResponseBody &) = default ;
    DescribeInstanceKeywordsResponseBody(DescribeInstanceKeywordsResponseBody &&) = default ;
    DescribeInstanceKeywordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceKeywordsResponseBody() = default ;
    DescribeInstanceKeywordsResponseBody& operator=(const DescribeInstanceKeywordsResponseBody &) = default ;
    DescribeInstanceKeywordsResponseBody& operator=(DescribeInstanceKeywordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Words : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Words& obj) { 
        DARABONBA_PTR_TO_JSON(word, word_);
      };
      friend void from_json(const Darabonba::Json& j, Words& obj) { 
        DARABONBA_PTR_FROM_JSON(word, word_);
      };
      Words() = default ;
      Words(const Words &) = default ;
      Words(Words &&) = default ;
      Words(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Words() = default ;
      Words& operator=(const Words &) = default ;
      Words& operator=(Words &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->word_ == nullptr; };
      // word Field Functions 
      bool hasWord() const { return this->word_ != nullptr;};
      void deleteWord() { this->word_ = nullptr;};
      inline const vector<string> & getWord() const { DARABONBA_PTR_GET_CONST(word_, vector<string>) };
      inline vector<string> getWord() { DARABONBA_PTR_GET(word_, vector<string>) };
      inline Words& setWord(const vector<string> & word) { DARABONBA_PTR_SET_VALUE(word_, word) };
      inline Words& setWord(vector<string> && word) { DARABONBA_PTR_SET_RVALUE(word_, word) };


    protected:
      shared_ptr<vector<string>> word_ {};
    };

    virtual bool empty() const override { return this->key_ == nullptr
        && this->requestId_ == nullptr && this->words_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeInstanceKeywordsResponseBody& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceKeywordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // words Field Functions 
    bool hasWords() const { return this->words_ != nullptr;};
    void deleteWords() { this->words_ = nullptr;};
    inline const DescribeInstanceKeywordsResponseBody::Words & getWords() const { DARABONBA_PTR_GET_CONST(words_, DescribeInstanceKeywordsResponseBody::Words) };
    inline DescribeInstanceKeywordsResponseBody::Words getWords() { DARABONBA_PTR_GET(words_, DescribeInstanceKeywordsResponseBody::Words) };
    inline DescribeInstanceKeywordsResponseBody& setWords(const DescribeInstanceKeywordsResponseBody::Words & words) { DARABONBA_PTR_SET_VALUE(words_, words) };
    inline DescribeInstanceKeywordsResponseBody& setWords(DescribeInstanceKeywordsResponseBody::Words && words) { DARABONBA_PTR_SET_RVALUE(words_, words) };


  protected:
    // The type of reserved keyword returned.
    shared_ptr<string> key_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The reserved keywords.
    shared_ptr<DescribeInstanceKeywordsResponseBody::Words> words_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
