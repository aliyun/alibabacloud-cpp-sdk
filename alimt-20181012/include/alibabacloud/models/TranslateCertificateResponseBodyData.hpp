// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSLATECERTIFICATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_TRANSLATECERTIFICATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TranslateCertificateResponseBodyDataTranslatedValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class TranslateCertificateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TranslateCertificateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TranslatedValues, translatedValues_);
    };
    friend void from_json(const Darabonba::Json& j, TranslateCertificateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TranslatedValues, translatedValues_);
    };
    TranslateCertificateResponseBodyData() = default ;
    TranslateCertificateResponseBodyData(const TranslateCertificateResponseBodyData &) = default ;
    TranslateCertificateResponseBodyData(TranslateCertificateResponseBodyData &&) = default ;
    TranslateCertificateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TranslateCertificateResponseBodyData() = default ;
    TranslateCertificateResponseBodyData& operator=(const TranslateCertificateResponseBodyData &) = default ;
    TranslateCertificateResponseBodyData& operator=(TranslateCertificateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->translatedValues_ == nullptr; };
    // translatedValues Field Functions 
    bool hasTranslatedValues() const { return this->translatedValues_ != nullptr;};
    void deleteTranslatedValues() { this->translatedValues_ = nullptr;};
    inline const vector<Models::TranslateCertificateResponseBodyDataTranslatedValues> & translatedValues() const { DARABONBA_PTR_GET_CONST(translatedValues_, vector<Models::TranslateCertificateResponseBodyDataTranslatedValues>) };
    inline vector<Models::TranslateCertificateResponseBodyDataTranslatedValues> translatedValues() { DARABONBA_PTR_GET(translatedValues_, vector<Models::TranslateCertificateResponseBodyDataTranslatedValues>) };
    inline TranslateCertificateResponseBodyData& setTranslatedValues(const vector<Models::TranslateCertificateResponseBodyDataTranslatedValues> & translatedValues) { DARABONBA_PTR_SET_VALUE(translatedValues_, translatedValues) };
    inline TranslateCertificateResponseBodyData& setTranslatedValues(vector<Models::TranslateCertificateResponseBodyDataTranslatedValues> && translatedValues) { DARABONBA_PTR_SET_RVALUE(translatedValues_, translatedValues) };


  protected:
    std::shared_ptr<vector<Models::TranslateCertificateResponseBodyDataTranslatedValues>> translatedValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
