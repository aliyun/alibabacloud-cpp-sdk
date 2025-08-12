// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMONITORLISTRESPONSEBODYLIVESTREAMMONITORLISTINPUTLISTLAYOUTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMONITORLISTRESPONSEBODYLIVESTREAMMONITORLISTINPUTLISTLAYOUTCONFIG_HPP_
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
  class DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig& obj) { 
      DARABONBA_PTR_TO_JSON(FillMode, fillMode_);
      DARABONBA_PTR_TO_JSON(PositionNormalized, positionNormalized_);
      DARABONBA_PTR_TO_JSON(PositionRefer, positionRefer_);
      DARABONBA_PTR_TO_JSON(SizeNormalized, sizeNormalized_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(FillMode, fillMode_);
      DARABONBA_PTR_FROM_JSON(PositionNormalized, positionNormalized_);
      DARABONBA_PTR_FROM_JSON(PositionRefer, positionRefer_);
      DARABONBA_PTR_FROM_JSON(SizeNormalized, sizeNormalized_);
    };
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig() = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig(const DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig &) = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig(DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig &&) = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig() = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig& operator=(const DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig &) = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig& operator=(DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fillMode_ != nullptr
        && this->positionNormalized_ != nullptr && this->positionRefer_ != nullptr && this->sizeNormalized_ != nullptr; };
    // fillMode Field Functions 
    bool hasFillMode() const { return this->fillMode_ != nullptr;};
    void deleteFillMode() { this->fillMode_ = nullptr;};
    inline string fillMode() const { DARABONBA_PTR_GET_DEFAULT(fillMode_, "") };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig& setFillMode(string fillMode) { DARABONBA_PTR_SET_VALUE(fillMode_, fillMode) };


    // positionNormalized Field Functions 
    bool hasPositionNormalized() const { return this->positionNormalized_ != nullptr;};
    void deletePositionNormalized() { this->positionNormalized_ = nullptr;};
    inline const vector<float> & positionNormalized() const { DARABONBA_PTR_GET_CONST(positionNormalized_, vector<float>) };
    inline vector<float> positionNormalized() { DARABONBA_PTR_GET(positionNormalized_, vector<float>) };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig& setPositionNormalized(const vector<float> & positionNormalized) { DARABONBA_PTR_SET_VALUE(positionNormalized_, positionNormalized) };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig& setPositionNormalized(vector<float> && positionNormalized) { DARABONBA_PTR_SET_RVALUE(positionNormalized_, positionNormalized) };


    // positionRefer Field Functions 
    bool hasPositionRefer() const { return this->positionRefer_ != nullptr;};
    void deletePositionRefer() { this->positionRefer_ = nullptr;};
    inline string positionRefer() const { DARABONBA_PTR_GET_DEFAULT(positionRefer_, "") };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig& setPositionRefer(string positionRefer) { DARABONBA_PTR_SET_VALUE(positionRefer_, positionRefer) };


    // sizeNormalized Field Functions 
    bool hasSizeNormalized() const { return this->sizeNormalized_ != nullptr;};
    void deleteSizeNormalized() { this->sizeNormalized_ = nullptr;};
    inline const vector<float> & sizeNormalized() const { DARABONBA_PTR_GET_CONST(sizeNormalized_, vector<float>) };
    inline vector<float> sizeNormalized() { DARABONBA_PTR_GET(sizeNormalized_, vector<float>) };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig& setSizeNormalized(const vector<float> & sizeNormalized) { DARABONBA_PTR_SET_VALUE(sizeNormalized_, sizeNormalized) };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig& setSizeNormalized(vector<float> && sizeNormalized) { DARABONBA_PTR_SET_RVALUE(sizeNormalized_, sizeNormalized) };


  protected:
    // The fill type. Set this value to none.
    std::shared_ptr<string> fillMode_ = nullptr;
    // The position of the layer, in the format of [unk][x,y][unk]. The values of x and y need to be normalized.
    std::shared_ptr<vector<float>> positionNormalized_ = nullptr;
    // The reference position of the element. Valid values:
    // 
    // *   topLeft
    // *   topRight
    // *   bottomLeft
    // *   bottomRight
    std::shared_ptr<string> positionRefer_ = nullptr;
    // The size of the layer. Unit: bytes.
    std::shared_ptr<vector<float>> sizeNormalized_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
