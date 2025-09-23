// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTWORKWEARREQUESTCLOTHES_HPP_
#define ALIBABACLOUD_MODELS_DETECTWORKWEARREQUESTCLOTHES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectWorkwearRequestClothes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectWorkwearRequestClothes& obj) { 
      DARABONBA_PTR_TO_JSON(MaxNum, maxNum_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, DetectWorkwearRequestClothes& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxNum, maxNum_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    DetectWorkwearRequestClothes() = default ;
    DetectWorkwearRequestClothes(const DetectWorkwearRequestClothes &) = default ;
    DetectWorkwearRequestClothes(DetectWorkwearRequestClothes &&) = default ;
    DetectWorkwearRequestClothes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectWorkwearRequestClothes() = default ;
    DetectWorkwearRequestClothes& operator=(const DetectWorkwearRequestClothes &) = default ;
    DetectWorkwearRequestClothes& operator=(DetectWorkwearRequestClothes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxNum_ != nullptr
        && this->threshold_ != nullptr; };
    // maxNum Field Functions 
    bool hasMaxNum() const { return this->maxNum_ != nullptr;};
    void deleteMaxNum() { this->maxNum_ = nullptr;};
    inline int64_t maxNum() const { DARABONBA_PTR_GET_DEFAULT(maxNum_, 0L) };
    inline DetectWorkwearRequestClothes& setMaxNum(int64_t maxNum) { DARABONBA_PTR_SET_VALUE(maxNum_, maxNum) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline double threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline DetectWorkwearRequestClothes& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    std::shared_ptr<int64_t> maxNum_ = nullptr;
    std::shared_ptr<double> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
