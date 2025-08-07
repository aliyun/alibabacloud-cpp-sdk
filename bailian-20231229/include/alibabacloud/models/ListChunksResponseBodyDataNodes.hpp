// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHUNKSRESPONSEBODYDATANODES_HPP_
#define ALIBABACLOUD_MODELS_LISTCHUNKSRESPONSEBODYDATANODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListChunksResponseBodyDataNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChunksResponseBodyDataNodes& obj) { 
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, ListChunksResponseBodyDataNodes& obj) { 
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    ListChunksResponseBodyDataNodes() = default ;
    ListChunksResponseBodyDataNodes(const ListChunksResponseBodyDataNodes &) = default ;
    ListChunksResponseBodyDataNodes(ListChunksResponseBodyDataNodes &&) = default ;
    ListChunksResponseBodyDataNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChunksResponseBodyDataNodes() = default ;
    ListChunksResponseBodyDataNodes& operator=(const ListChunksResponseBodyDataNodes &) = default ;
    ListChunksResponseBodyDataNodes& operator=(ListChunksResponseBodyDataNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metadata_ != nullptr
        && this->score_ != nullptr && this->text_ != nullptr; };
    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline ListChunksResponseBodyDataNodes& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline ListChunksResponseBodyDataNodes& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline ListChunksResponseBodyDataNodes& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ListChunksResponseBodyDataNodes& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    // The metadata map of the chunk.
    Darabonba::Json metadata_ = nullptr;
    // The similarity score of the chunk.
    std::shared_ptr<double> score_ = nullptr;
    // The text of the chunk.
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
