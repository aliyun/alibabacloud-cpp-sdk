// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRENDERINGSESSIONRESPONSEBODYLOCATION_HPP_
#define ALIBABACLOUD_MODELS_STARTRENDERINGSESSIONRESPONSEBODYLOCATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class StartRenderingSessionResponseBodyLocation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRenderingSessionResponseBodyLocation& obj) { 
      DARABONBA_PTR_TO_JSON(ProvinceCode, provinceCode_);
    };
    friend void from_json(const Darabonba::Json& j, StartRenderingSessionResponseBodyLocation& obj) { 
      DARABONBA_PTR_FROM_JSON(ProvinceCode, provinceCode_);
    };
    StartRenderingSessionResponseBodyLocation() = default ;
    StartRenderingSessionResponseBodyLocation(const StartRenderingSessionResponseBodyLocation &) = default ;
    StartRenderingSessionResponseBodyLocation(StartRenderingSessionResponseBodyLocation &&) = default ;
    StartRenderingSessionResponseBodyLocation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRenderingSessionResponseBodyLocation() = default ;
    StartRenderingSessionResponseBodyLocation& operator=(const StartRenderingSessionResponseBodyLocation &) = default ;
    StartRenderingSessionResponseBodyLocation& operator=(StartRenderingSessionResponseBodyLocation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->provinceCode_ == nullptr; };
    // provinceCode Field Functions 
    bool hasProvinceCode() const { return this->provinceCode_ != nullptr;};
    void deleteProvinceCode() { this->provinceCode_ = nullptr;};
    inline string provinceCode() const { DARABONBA_PTR_GET_DEFAULT(provinceCode_, "") };
    inline StartRenderingSessionResponseBodyLocation& setProvinceCode(string provinceCode) { DARABONBA_PTR_SET_VALUE(provinceCode_, provinceCode) };


  protected:
    std::shared_ptr<string> provinceCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
