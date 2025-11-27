// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEKEYWORDSRESPONSEBODYWORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEKEYWORDSRESPONSEBODYWORDS_HPP_
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
  class DescribeInstanceKeywordsResponseBodyWords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceKeywordsResponseBodyWords& obj) { 
      DARABONBA_PTR_TO_JSON(word, word_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceKeywordsResponseBodyWords& obj) { 
      DARABONBA_PTR_FROM_JSON(word, word_);
    };
    DescribeInstanceKeywordsResponseBodyWords() = default ;
    DescribeInstanceKeywordsResponseBodyWords(const DescribeInstanceKeywordsResponseBodyWords &) = default ;
    DescribeInstanceKeywordsResponseBodyWords(DescribeInstanceKeywordsResponseBodyWords &&) = default ;
    DescribeInstanceKeywordsResponseBodyWords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceKeywordsResponseBodyWords() = default ;
    DescribeInstanceKeywordsResponseBodyWords& operator=(const DescribeInstanceKeywordsResponseBodyWords &) = default ;
    DescribeInstanceKeywordsResponseBodyWords& operator=(DescribeInstanceKeywordsResponseBodyWords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->word_ == nullptr; };
    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline const vector<string> & word() const { DARABONBA_PTR_GET_CONST(word_, vector<string>) };
    inline vector<string> word() { DARABONBA_PTR_GET(word_, vector<string>) };
    inline DescribeInstanceKeywordsResponseBodyWords& setWord(const vector<string> & word) { DARABONBA_PTR_SET_VALUE(word_, word) };
    inline DescribeInstanceKeywordsResponseBodyWords& setWord(vector<string> && word) { DARABONBA_PTR_SET_RVALUE(word_, word) };


  protected:
    std::shared_ptr<vector<string>> word_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
