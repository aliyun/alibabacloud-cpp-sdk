// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVINCODERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVINCODERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeVINCodeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVINCodeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(VinCode, vinCode_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVINCodeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(VinCode, vinCode_);
    };
    RecognizeVINCodeResponseBodyData() = default ;
    RecognizeVINCodeResponseBodyData(const RecognizeVINCodeResponseBodyData &) = default ;
    RecognizeVINCodeResponseBodyData(RecognizeVINCodeResponseBodyData &&) = default ;
    RecognizeVINCodeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVINCodeResponseBodyData() = default ;
    RecognizeVINCodeResponseBodyData& operator=(const RecognizeVINCodeResponseBodyData &) = default ;
    RecognizeVINCodeResponseBodyData& operator=(RecognizeVINCodeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vinCode_ != nullptr; };
    // vinCode Field Functions 
    bool hasVinCode() const { return this->vinCode_ != nullptr;};
    void deleteVinCode() { this->vinCode_ = nullptr;};
    inline string vinCode() const { DARABONBA_PTR_GET_DEFAULT(vinCode_, "") };
    inline RecognizeVINCodeResponseBodyData& setVinCode(string vinCode) { DARABONBA_PTR_SET_VALUE(vinCode_, vinCode) };


  protected:
    std::shared_ptr<string> vinCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
