// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCHARACTERRESPONSEBODYDATAFRAMES_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCHARACTERRESPONSEBODYDATAFRAMES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeVideoCharacterResponseBodyDataFramesElements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeVideoCharacterResponseBodyDataFrames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVideoCharacterResponseBodyDataFrames& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVideoCharacterResponseBodyDataFrames& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    RecognizeVideoCharacterResponseBodyDataFrames() = default ;
    RecognizeVideoCharacterResponseBodyDataFrames(const RecognizeVideoCharacterResponseBodyDataFrames &) = default ;
    RecognizeVideoCharacterResponseBodyDataFrames(RecognizeVideoCharacterResponseBodyDataFrames &&) = default ;
    RecognizeVideoCharacterResponseBodyDataFrames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVideoCharacterResponseBodyDataFrames() = default ;
    RecognizeVideoCharacterResponseBodyDataFrames& operator=(const RecognizeVideoCharacterResponseBodyDataFrames &) = default ;
    RecognizeVideoCharacterResponseBodyDataFrames& operator=(RecognizeVideoCharacterResponseBodyDataFrames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elements_ != nullptr
        && this->timestamp_ != nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Models::RecognizeVideoCharacterResponseBodyDataFramesElements> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Models::RecognizeVideoCharacterResponseBodyDataFramesElements>) };
    inline vector<Models::RecognizeVideoCharacterResponseBodyDataFramesElements> elements() { DARABONBA_PTR_GET(elements_, vector<Models::RecognizeVideoCharacterResponseBodyDataFramesElements>) };
    inline RecognizeVideoCharacterResponseBodyDataFrames& setElements(const vector<Models::RecognizeVideoCharacterResponseBodyDataFramesElements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline RecognizeVideoCharacterResponseBodyDataFrames& setElements(vector<Models::RecognizeVideoCharacterResponseBodyDataFramesElements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline RecognizeVideoCharacterResponseBodyDataFrames& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<vector<Models::RecognizeVideoCharacterResponseBodyDataFramesElements>> elements_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
