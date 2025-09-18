// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYSERVICELOCALECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYSERVICELOCALECONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceResponseBodyServiceLocaleConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBodyServiceLocaleConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(EnValue, enValue_);
      DARABONBA_PTR_TO_JSON(OriginalValue, originalValue_);
      DARABONBA_PTR_TO_JSON(ZhValue, zhValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBodyServiceLocaleConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(EnValue, enValue_);
      DARABONBA_PTR_FROM_JSON(OriginalValue, originalValue_);
      DARABONBA_PTR_FROM_JSON(ZhValue, zhValue_);
    };
    GetServiceResponseBodyServiceLocaleConfigs() = default ;
    GetServiceResponseBodyServiceLocaleConfigs(const GetServiceResponseBodyServiceLocaleConfigs &) = default ;
    GetServiceResponseBodyServiceLocaleConfigs(GetServiceResponseBodyServiceLocaleConfigs &&) = default ;
    GetServiceResponseBodyServiceLocaleConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBodyServiceLocaleConfigs() = default ;
    GetServiceResponseBodyServiceLocaleConfigs& operator=(const GetServiceResponseBodyServiceLocaleConfigs &) = default ;
    GetServiceResponseBodyServiceLocaleConfigs& operator=(GetServiceResponseBodyServiceLocaleConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enValue_ != nullptr
        && this->originalValue_ != nullptr && this->zhValue_ != nullptr; };
    // enValue Field Functions 
    bool hasEnValue() const { return this->enValue_ != nullptr;};
    void deleteEnValue() { this->enValue_ = nullptr;};
    inline string enValue() const { DARABONBA_PTR_GET_DEFAULT(enValue_, "") };
    inline GetServiceResponseBodyServiceLocaleConfigs& setEnValue(string enValue) { DARABONBA_PTR_SET_VALUE(enValue_, enValue) };


    // originalValue Field Functions 
    bool hasOriginalValue() const { return this->originalValue_ != nullptr;};
    void deleteOriginalValue() { this->originalValue_ = nullptr;};
    inline string originalValue() const { DARABONBA_PTR_GET_DEFAULT(originalValue_, "") };
    inline GetServiceResponseBodyServiceLocaleConfigs& setOriginalValue(string originalValue) { DARABONBA_PTR_SET_VALUE(originalValue_, originalValue) };


    // zhValue Field Functions 
    bool hasZhValue() const { return this->zhValue_ != nullptr;};
    void deleteZhValue() { this->zhValue_ = nullptr;};
    inline string zhValue() const { DARABONBA_PTR_GET_DEFAULT(zhValue_, "") };
    inline GetServiceResponseBodyServiceLocaleConfigs& setZhValue(string zhValue) { DARABONBA_PTR_SET_VALUE(zhValue_, zhValue) };


  protected:
    std::shared_ptr<string> enValue_ = nullptr;
    std::shared_ptr<string> originalValue_ = nullptr;
    std::shared_ptr<string> zhValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
