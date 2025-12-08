// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXTRACTFINGERPRINTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_EXTRACTFINGERPRINTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class ExtractFingerPrintResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExtractFingerPrintResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FingerPrint, fingerPrint_);
    };
    friend void from_json(const Darabonba::Json& j, ExtractFingerPrintResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FingerPrint, fingerPrint_);
    };
    ExtractFingerPrintResponseBodyData() = default ;
    ExtractFingerPrintResponseBodyData(const ExtractFingerPrintResponseBodyData &) = default ;
    ExtractFingerPrintResponseBodyData(ExtractFingerPrintResponseBodyData &&) = default ;
    ExtractFingerPrintResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExtractFingerPrintResponseBodyData() = default ;
    ExtractFingerPrintResponseBodyData& operator=(const ExtractFingerPrintResponseBodyData &) = default ;
    ExtractFingerPrintResponseBodyData& operator=(ExtractFingerPrintResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fingerPrint_ == nullptr; };
    // fingerPrint Field Functions 
    bool hasFingerPrint() const { return this->fingerPrint_ != nullptr;};
    void deleteFingerPrint() { this->fingerPrint_ = nullptr;};
    inline string fingerPrint() const { DARABONBA_PTR_GET_DEFAULT(fingerPrint_, "") };
    inline ExtractFingerPrintResponseBodyData& setFingerPrint(string fingerPrint) { DARABONBA_PTR_SET_VALUE(fingerPrint_, fingerPrint) };


  protected:
    std::shared_ptr<string> fingerPrint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
