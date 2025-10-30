// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPWMINFOMAPPINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPWMINFOMAPPINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class LookupWmInfoMappingResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupWmInfoMappingResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(WmInfoBytesB64, wmInfoBytesB64_);
    };
    friend void from_json(const Darabonba::Json& j, LookupWmInfoMappingResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(WmInfoBytesB64, wmInfoBytesB64_);
    };
    LookupWmInfoMappingResponseBodyData() = default ;
    LookupWmInfoMappingResponseBodyData(const LookupWmInfoMappingResponseBodyData &) = default ;
    LookupWmInfoMappingResponseBodyData(LookupWmInfoMappingResponseBodyData &&) = default ;
    LookupWmInfoMappingResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupWmInfoMappingResponseBodyData() = default ;
    LookupWmInfoMappingResponseBodyData& operator=(const LookupWmInfoMappingResponseBodyData &) = default ;
    LookupWmInfoMappingResponseBodyData& operator=(LookupWmInfoMappingResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->wmInfoBytesB64_ == nullptr; };
    // wmInfoBytesB64 Field Functions 
    bool hasWmInfoBytesB64() const { return this->wmInfoBytesB64_ != nullptr;};
    void deleteWmInfoBytesB64() { this->wmInfoBytesB64_ = nullptr;};
    inline string wmInfoBytesB64() const { DARABONBA_PTR_GET_DEFAULT(wmInfoBytesB64_, "") };
    inline LookupWmInfoMappingResponseBodyData& setWmInfoBytesB64(string wmInfoBytesB64) { DARABONBA_PTR_SET_VALUE(wmInfoBytesB64_, wmInfoBytesB64) };


  protected:
    std::shared_ptr<string> wmInfoBytesB64_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
