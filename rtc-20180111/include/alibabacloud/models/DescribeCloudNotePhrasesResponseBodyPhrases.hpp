// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDNOTEPHRASESRESPONSEBODYPHRASES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDNOTEPHRASESRESPONSEBODYPHRASES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeCloudNotePhrasesResponseBodyPhrases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudNotePhrasesResponseBodyPhrases& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(WordWeights, wordWeights_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudNotePhrasesResponseBodyPhrases& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(WordWeights, wordWeights_);
    };
    DescribeCloudNotePhrasesResponseBodyPhrases() = default ;
    DescribeCloudNotePhrasesResponseBodyPhrases(const DescribeCloudNotePhrasesResponseBodyPhrases &) = default ;
    DescribeCloudNotePhrasesResponseBodyPhrases(DescribeCloudNotePhrasesResponseBodyPhrases &&) = default ;
    DescribeCloudNotePhrasesResponseBodyPhrases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudNotePhrasesResponseBodyPhrases() = default ;
    DescribeCloudNotePhrasesResponseBodyPhrases& operator=(const DescribeCloudNotePhrasesResponseBodyPhrases &) = default ;
    DescribeCloudNotePhrasesResponseBodyPhrases& operator=(DescribeCloudNotePhrasesResponseBodyPhrases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->wordWeights_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeCloudNotePhrasesResponseBodyPhrases& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCloudNotePhrasesResponseBodyPhrases& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeCloudNotePhrasesResponseBodyPhrases& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCloudNotePhrasesResponseBodyPhrases& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // wordWeights Field Functions 
    bool hasWordWeights() const { return this->wordWeights_ != nullptr;};
    void deleteWordWeights() { this->wordWeights_ = nullptr;};
    inline const vector<Models::DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights> & wordWeights() const { DARABONBA_PTR_GET_CONST(wordWeights_, vector<Models::DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights>) };
    inline vector<Models::DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights> wordWeights() { DARABONBA_PTR_GET(wordWeights_, vector<Models::DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights>) };
    inline DescribeCloudNotePhrasesResponseBodyPhrases& setWordWeights(const vector<Models::DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights> & wordWeights) { DARABONBA_PTR_SET_VALUE(wordWeights_, wordWeights) };
    inline DescribeCloudNotePhrasesResponseBodyPhrases& setWordWeights(vector<Models::DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights> && wordWeights) { DARABONBA_PTR_SET_RVALUE(wordWeights_, wordWeights) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights>> wordWeights_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
