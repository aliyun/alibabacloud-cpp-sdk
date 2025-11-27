// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEKEYWORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEKEYWORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceKeywordsResponseBodyWords.hpp>
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
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->requestId_ == nullptr && return this->words_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeInstanceKeywordsResponseBody& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceKeywordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // words Field Functions 
    bool hasWords() const { return this->words_ != nullptr;};
    void deleteWords() { this->words_ = nullptr;};
    inline const DescribeInstanceKeywordsResponseBodyWords & words() const { DARABONBA_PTR_GET_CONST(words_, DescribeInstanceKeywordsResponseBodyWords) };
    inline DescribeInstanceKeywordsResponseBodyWords words() { DARABONBA_PTR_GET(words_, DescribeInstanceKeywordsResponseBodyWords) };
    inline DescribeInstanceKeywordsResponseBody& setWords(const DescribeInstanceKeywordsResponseBodyWords & words) { DARABONBA_PTR_SET_VALUE(words_, words) };
    inline DescribeInstanceKeywordsResponseBody& setWords(DescribeInstanceKeywordsResponseBodyWords && words) { DARABONBA_PTR_SET_RVALUE(words_, words) };


  protected:
    // The type of reserved keyword returned.
    std::shared_ptr<string> key_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The reserved keywords.
    std::shared_ptr<DescribeInstanceKeywordsResponseBodyWords> words_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
