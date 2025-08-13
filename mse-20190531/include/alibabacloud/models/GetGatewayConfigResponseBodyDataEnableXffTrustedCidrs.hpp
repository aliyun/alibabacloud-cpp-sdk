// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYCONFIGRESPONSEBODYDATAENABLEXFFTRUSTEDCIDRS_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYCONFIGRESPONSEBODYDATAENABLEXFFTRUSTEDCIDRS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(IpListContent, ipListContent_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(IpListContent, ipListContent_);
    };
    GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs() = default ;
    GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs(const GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs &) = default ;
    GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs(GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs &&) = default ;
    GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs() = default ;
    GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs& operator=(const GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs &) = default ;
    GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs& operator=(GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr
        && this->ipListContent_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // ipListContent Field Functions 
    bool hasIpListContent() const { return this->ipListContent_ != nullptr;};
    void deleteIpListContent() { this->ipListContent_ = nullptr;};
    inline string ipListContent() const { DARABONBA_PTR_GET_DEFAULT(ipListContent_, "") };
    inline GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs& setIpListContent(string ipListContent) { DARABONBA_PTR_SET_VALUE(ipListContent_, ipListContent) };


  protected:
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> ipListContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
