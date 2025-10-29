// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAISUBTITLERESPONSEBODYSUBTITLECONFIGSSUBTITLECONFIGPOSITIONNORMALIZED_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAISUBTITLERESPONSEBODYSUBTITLECONFIGSSUBTITLECONFIGPOSITIONNORMALIZED_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized& obj) { 
      DARABONBA_PTR_TO_JSON(Position, position_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized& obj) { 
      DARABONBA_PTR_FROM_JSON(Position, position_);
    };
    DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized() = default ;
    DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized(const DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized &) = default ;
    DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized(DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized &&) = default ;
    DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized() = default ;
    DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized& operator=(const DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized &) = default ;
    DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized& operator=(DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->position_ == nullptr; };
    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline const vector<float> & position() const { DARABONBA_PTR_GET_CONST(position_, vector<float>) };
    inline vector<float> position() { DARABONBA_PTR_GET(position_, vector<float>) };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized& setPosition(const vector<float> & position) { DARABONBA_PTR_SET_VALUE(position_, position) };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized& setPosition(vector<float> && position) { DARABONBA_PTR_SET_RVALUE(position_, position) };


  protected:
    std::shared_ptr<vector<float>> position_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
