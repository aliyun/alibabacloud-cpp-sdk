// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTHTTPAPIRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_EXPORTHTTPAPIRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ExportHttpApiResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportHttpApiResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(specContentBase64, specContentBase64_);
    };
    friend void from_json(const Darabonba::Json& j, ExportHttpApiResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(specContentBase64, specContentBase64_);
    };
    ExportHttpApiResponseBodyData() = default ;
    ExportHttpApiResponseBodyData(const ExportHttpApiResponseBodyData &) = default ;
    ExportHttpApiResponseBodyData(ExportHttpApiResponseBodyData &&) = default ;
    ExportHttpApiResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportHttpApiResponseBodyData() = default ;
    ExportHttpApiResponseBodyData& operator=(const ExportHttpApiResponseBodyData &) = default ;
    ExportHttpApiResponseBodyData& operator=(ExportHttpApiResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->specContentBase64_ == nullptr; };
    // specContentBase64 Field Functions 
    bool hasSpecContentBase64() const { return this->specContentBase64_ != nullptr;};
    void deleteSpecContentBase64() { this->specContentBase64_ = nullptr;};
    inline string specContentBase64() const { DARABONBA_PTR_GET_DEFAULT(specContentBase64_, "") };
    inline ExportHttpApiResponseBodyData& setSpecContentBase64(string specContentBase64) { DARABONBA_PTR_SET_VALUE(specContentBase64_, specContentBase64) };


  protected:
    // Base64编码的API定义。
    std::shared_ptr<string> specContentBase64_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
