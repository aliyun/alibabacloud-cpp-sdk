// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVLEXTRACTIONRESULTRESPONSEBODYDATAKVLISTINFOCONTEXTCONFIDENCE_HPP_
#define ALIBABACLOUD_MODELS_GETVLEXTRACTIONRESULTRESPONSEBODYDATAKVLISTINFOCONTEXTCONFIDENCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence& obj) { 
      DARABONBA_PTR_TO_JSON(keyConfidence, keyConfidence_);
      DARABONBA_PTR_TO_JSON(valueConfidence, valueConfidence_);
    };
    friend void from_json(const Darabonba::Json& j, GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence& obj) { 
      DARABONBA_PTR_FROM_JSON(keyConfidence, keyConfidence_);
      DARABONBA_PTR_FROM_JSON(valueConfidence, valueConfidence_);
    };
    GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence() = default ;
    GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence(const GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence &) = default ;
    GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence(GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence &&) = default ;
    GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence() = default ;
    GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence& operator=(const GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence &) = default ;
    GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence& operator=(GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyConfidence_ != nullptr
        && this->valueConfidence_ != nullptr; };
    // keyConfidence Field Functions 
    bool hasKeyConfidence() const { return this->keyConfidence_ != nullptr;};
    void deleteKeyConfidence() { this->keyConfidence_ = nullptr;};
    inline double keyConfidence() const { DARABONBA_PTR_GET_DEFAULT(keyConfidence_, 0.0) };
    inline GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence& setKeyConfidence(double keyConfidence) { DARABONBA_PTR_SET_VALUE(keyConfidence_, keyConfidence) };


    // valueConfidence Field Functions 
    bool hasValueConfidence() const { return this->valueConfidence_ != nullptr;};
    void deleteValueConfidence() { this->valueConfidence_ = nullptr;};
    inline double valueConfidence() const { DARABONBA_PTR_GET_DEFAULT(valueConfidence_, 0.0) };
    inline GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence& setValueConfidence(double valueConfidence) { DARABONBA_PTR_SET_VALUE(valueConfidence_, valueConfidence) };


  protected:
    // Confidence of Key
    std::shared_ptr<double> keyConfidence_ = nullptr;
    // Confidence of Value
    std::shared_ptr<double> valueConfidence_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
