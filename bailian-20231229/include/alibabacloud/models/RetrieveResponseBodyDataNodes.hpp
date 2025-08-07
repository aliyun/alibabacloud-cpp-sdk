// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVERESPONSEBODYDATANODES_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVERESPONSEBODYDATANODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class RetrieveResponseBodyDataNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveResponseBodyDataNodes& obj) { 
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveResponseBodyDataNodes& obj) { 
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    RetrieveResponseBodyDataNodes() = default ;
    RetrieveResponseBodyDataNodes(const RetrieveResponseBodyDataNodes &) = default ;
    RetrieveResponseBodyDataNodes(RetrieveResponseBodyDataNodes &&) = default ;
    RetrieveResponseBodyDataNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveResponseBodyDataNodes() = default ;
    RetrieveResponseBodyDataNodes& operator=(const RetrieveResponseBodyDataNodes &) = default ;
    RetrieveResponseBodyDataNodes& operator=(RetrieveResponseBodyDataNodes &&) = default ;
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
    inline RetrieveResponseBodyDataNodes& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline RetrieveResponseBodyDataNodes& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline RetrieveResponseBodyDataNodes& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RetrieveResponseBodyDataNodes& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    // The metadata map of the chunk.
    Darabonba::Json metadata_ = nullptr;
    // The similarity score of the chunk. Valid values:[0-1].
    std::shared_ptr<double> score_ = nullptr;
    // The text of the chunk.
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
