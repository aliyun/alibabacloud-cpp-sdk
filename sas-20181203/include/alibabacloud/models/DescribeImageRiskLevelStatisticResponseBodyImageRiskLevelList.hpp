// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGERISKLEVELSTATISTICRESPONSEBODYIMAGERISKLEVELLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGERISKLEVELSTATISTICRESPONSEBODYIMAGERISKLEVELLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList& obj) { 
      DARABONBA_PTR_TO_JSON(Cnt, cnt_);
      DARABONBA_PTR_TO_JSON(ImageRiskLevel, imageRiskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList& obj) { 
      DARABONBA_PTR_FROM_JSON(Cnt, cnt_);
      DARABONBA_PTR_FROM_JSON(ImageRiskLevel, imageRiskLevel_);
    };
    DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList() = default ;
    DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList(const DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList &) = default ;
    DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList(DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList &&) = default ;
    DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList() = default ;
    DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList& operator=(const DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList &) = default ;
    DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList& operator=(DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cnt_ == nullptr
        && return this->imageRiskLevel_ == nullptr; };
    // cnt Field Functions 
    bool hasCnt() const { return this->cnt_ != nullptr;};
    void deleteCnt() { this->cnt_ = nullptr;};
    inline int32_t cnt() const { DARABONBA_PTR_GET_DEFAULT(cnt_, 0) };
    inline DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList& setCnt(int32_t cnt) { DARABONBA_PTR_SET_VALUE(cnt_, cnt) };


    // imageRiskLevel Field Functions 
    bool hasImageRiskLevel() const { return this->imageRiskLevel_ != nullptr;};
    void deleteImageRiskLevel() { this->imageRiskLevel_ = nullptr;};
    inline string imageRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(imageRiskLevel_, "") };
    inline DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList& setImageRiskLevel(string imageRiskLevel) { DARABONBA_PTR_SET_VALUE(imageRiskLevel_, imageRiskLevel) };


  protected:
    // The number of images at the risk level.
    std::shared_ptr<int32_t> cnt_ = nullptr;
    // The risk level of the image. Valid values:
    // 
    // *   **3**: high risk.
    // *   **2**: medium risk.
    // *   **1**: low risk.
    // *   **0**: no risk.
    std::shared_ptr<string> imageRiskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
