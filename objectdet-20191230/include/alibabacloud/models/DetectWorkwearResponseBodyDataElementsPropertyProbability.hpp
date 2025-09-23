// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTWORKWEARRESPONSEBODYDATAELEMENTSPROPERTYPROBABILITY_HPP_
#define ALIBABACLOUD_MODELS_DETECTWORKWEARRESPONSEBODYDATAELEMENTSPROPERTYPROBABILITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectWorkwearResponseBodyDataElementsPropertyProbability : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectWorkwearResponseBodyDataElementsPropertyProbability& obj) { 
      DARABONBA_PTR_TO_JSON(No, no_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(Unknown, unknown_);
      DARABONBA_PTR_TO_JSON(Yes, yes_);
    };
    friend void from_json(const Darabonba::Json& j, DetectWorkwearResponseBodyDataElementsPropertyProbability& obj) { 
      DARABONBA_PTR_FROM_JSON(No, no_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(Unknown, unknown_);
      DARABONBA_PTR_FROM_JSON(Yes, yes_);
    };
    DetectWorkwearResponseBodyDataElementsPropertyProbability() = default ;
    DetectWorkwearResponseBodyDataElementsPropertyProbability(const DetectWorkwearResponseBodyDataElementsPropertyProbability &) = default ;
    DetectWorkwearResponseBodyDataElementsPropertyProbability(DetectWorkwearResponseBodyDataElementsPropertyProbability &&) = default ;
    DetectWorkwearResponseBodyDataElementsPropertyProbability(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectWorkwearResponseBodyDataElementsPropertyProbability() = default ;
    DetectWorkwearResponseBodyDataElementsPropertyProbability& operator=(const DetectWorkwearResponseBodyDataElementsPropertyProbability &) = default ;
    DetectWorkwearResponseBodyDataElementsPropertyProbability& operator=(DetectWorkwearResponseBodyDataElementsPropertyProbability &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->no_ != nullptr
        && this->threshold_ != nullptr && this->unknown_ != nullptr && this->yes_ != nullptr; };
    // no Field Functions 
    bool hasNo() const { return this->no_ != nullptr;};
    void deleteNo() { this->no_ = nullptr;};
    inline double no() const { DARABONBA_PTR_GET_DEFAULT(no_, 0.0) };
    inline DetectWorkwearResponseBodyDataElementsPropertyProbability& setNo(double no) { DARABONBA_PTR_SET_VALUE(no_, no) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline int64_t threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0L) };
    inline DetectWorkwearResponseBodyDataElementsPropertyProbability& setThreshold(int64_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // unknown Field Functions 
    bool hasUnknown() const { return this->unknown_ != nullptr;};
    void deleteUnknown() { this->unknown_ = nullptr;};
    inline double unknown() const { DARABONBA_PTR_GET_DEFAULT(unknown_, 0.0) };
    inline DetectWorkwearResponseBodyDataElementsPropertyProbability& setUnknown(double unknown) { DARABONBA_PTR_SET_VALUE(unknown_, unknown) };


    // yes Field Functions 
    bool hasYes() const { return this->yes_ != nullptr;};
    void deleteYes() { this->yes_ = nullptr;};
    inline double yes() const { DARABONBA_PTR_GET_DEFAULT(yes_, 0.0) };
    inline DetectWorkwearResponseBodyDataElementsPropertyProbability& setYes(double yes) { DARABONBA_PTR_SET_VALUE(yes_, yes) };


  protected:
    std::shared_ptr<double> no_ = nullptr;
    std::shared_ptr<int64_t> threshold_ = nullptr;
    std::shared_ptr<double> unknown_ = nullptr;
    std::shared_ptr<double> yes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
