// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCEXTRACTIONRESULTRESPONSEBODYDATAKVLISTINFOCONTEXTCONFIDENCE_HPP_
#define ALIBABACLOUD_MODELS_GETDOCEXTRACTIONRESULTRESPONSEBODYDATAKVLISTINFOCONTEXTCONFIDENCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence& obj) { 
      DARABONBA_PTR_TO_JSON(keyConfidence, keyConfidence_);
      DARABONBA_PTR_TO_JSON(valueConfidence, valueConfidence_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence& obj) { 
      DARABONBA_PTR_FROM_JSON(keyConfidence, keyConfidence_);
      DARABONBA_PTR_FROM_JSON(valueConfidence, valueConfidence_);
    };
    GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence() = default ;
    GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence(const GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence &) = default ;
    GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence(GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence &&) = default ;
    GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence() = default ;
    GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence& operator=(const GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence &) = default ;
    GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence& operator=(GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence &&) = default ;
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
    inline GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence& setKeyConfidence(double keyConfidence) { DARABONBA_PTR_SET_VALUE(keyConfidence_, keyConfidence) };


    // valueConfidence Field Functions 
    bool hasValueConfidence() const { return this->valueConfidence_ != nullptr;};
    void deleteValueConfidence() { this->valueConfidence_ = nullptr;};
    inline double valueConfidence() const { DARABONBA_PTR_GET_DEFAULT(valueConfidence_, 0.0) };
    inline GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence& setValueConfidence(double valueConfidence) { DARABONBA_PTR_SET_VALUE(valueConfidence_, valueConfidence) };


  protected:
    // Key confidence level
    std::shared_ptr<double> keyConfidence_ = nullptr;
    // value confidence level
    std::shared_ptr<double> valueConfidence_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
