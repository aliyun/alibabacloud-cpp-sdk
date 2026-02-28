// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDNOTEPHRASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDNOTEPHRASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeCloudNotePhrasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudNotePhrasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Phrases, phrases_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudNotePhrasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Phrases, phrases_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeCloudNotePhrasesResponseBody() = default ;
    DescribeCloudNotePhrasesResponseBody(const DescribeCloudNotePhrasesResponseBody &) = default ;
    DescribeCloudNotePhrasesResponseBody(DescribeCloudNotePhrasesResponseBody &&) = default ;
    DescribeCloudNotePhrasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudNotePhrasesResponseBody() = default ;
    DescribeCloudNotePhrasesResponseBody& operator=(const DescribeCloudNotePhrasesResponseBody &) = default ;
    DescribeCloudNotePhrasesResponseBody& operator=(DescribeCloudNotePhrasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Phrases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Phrases& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(WordWeights, wordWeights_);
      };
      friend void from_json(const Darabonba::Json& j, Phrases& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(WordWeights, wordWeights_);
      };
      Phrases() = default ;
      Phrases(const Phrases &) = default ;
      Phrases(Phrases &&) = default ;
      Phrases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Phrases() = default ;
      Phrases& operator=(const Phrases &) = default ;
      Phrases& operator=(Phrases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WordWeights : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WordWeights& obj) { 
          DARABONBA_PTR_TO_JSON(Weight, weight_);
          DARABONBA_PTR_TO_JSON(Word, word_);
        };
        friend void from_json(const Darabonba::Json& j, WordWeights& obj) { 
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
          DARABONBA_PTR_FROM_JSON(Word, word_);
        };
        WordWeights() = default ;
        WordWeights(const WordWeights &) = default ;
        WordWeights(WordWeights &&) = default ;
        WordWeights(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WordWeights() = default ;
        WordWeights& operator=(const WordWeights &) = default ;
        WordWeights& operator=(WordWeights &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->weight_ == nullptr
        && this->word_ == nullptr; };
        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline WordWeights& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


        // word Field Functions 
        bool hasWord() const { return this->word_ != nullptr;};
        void deleteWord() { this->word_ = nullptr;};
        inline string getWord() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
        inline WordWeights& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


      protected:
        shared_ptr<int32_t> weight_ {};
        shared_ptr<string> word_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->wordWeights_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Phrases& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Phrases& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Phrases& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Phrases& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // wordWeights Field Functions 
      bool hasWordWeights() const { return this->wordWeights_ != nullptr;};
      void deleteWordWeights() { this->wordWeights_ = nullptr;};
      inline const vector<Phrases::WordWeights> & getWordWeights() const { DARABONBA_PTR_GET_CONST(wordWeights_, vector<Phrases::WordWeights>) };
      inline vector<Phrases::WordWeights> getWordWeights() { DARABONBA_PTR_GET(wordWeights_, vector<Phrases::WordWeights>) };
      inline Phrases& setWordWeights(const vector<Phrases::WordWeights> & wordWeights) { DARABONBA_PTR_SET_VALUE(wordWeights_, wordWeights) };
      inline Phrases& setWordWeights(vector<Phrases::WordWeights> && wordWeights) { DARABONBA_PTR_SET_RVALUE(wordWeights_, wordWeights) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> name_ {};
      // This parameter is required.
      shared_ptr<vector<Phrases::WordWeights>> wordWeights_ {};
    };

    virtual bool empty() const override { return this->phrases_ == nullptr
        && this->requestId_ == nullptr && this->totalNum_ == nullptr && this->totalPage_ == nullptr; };
    // phrases Field Functions 
    bool hasPhrases() const { return this->phrases_ != nullptr;};
    void deletePhrases() { this->phrases_ = nullptr;};
    inline const vector<DescribeCloudNotePhrasesResponseBody::Phrases> & getPhrases() const { DARABONBA_PTR_GET_CONST(phrases_, vector<DescribeCloudNotePhrasesResponseBody::Phrases>) };
    inline vector<DescribeCloudNotePhrasesResponseBody::Phrases> getPhrases() { DARABONBA_PTR_GET(phrases_, vector<DescribeCloudNotePhrasesResponseBody::Phrases>) };
    inline DescribeCloudNotePhrasesResponseBody& setPhrases(const vector<DescribeCloudNotePhrasesResponseBody::Phrases> & phrases) { DARABONBA_PTR_SET_VALUE(phrases_, phrases) };
    inline DescribeCloudNotePhrasesResponseBody& setPhrases(vector<DescribeCloudNotePhrasesResponseBody::Phrases> && phrases) { DARABONBA_PTR_SET_RVALUE(phrases_, phrases) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudNotePhrasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline DescribeCloudNotePhrasesResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline DescribeCloudNotePhrasesResponseBody& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    shared_ptr<vector<DescribeCloudNotePhrasesResponseBody::Phrases>> phrases_ {};
    // Id of the request。
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalNum_ {};
    shared_ptr<int64_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
