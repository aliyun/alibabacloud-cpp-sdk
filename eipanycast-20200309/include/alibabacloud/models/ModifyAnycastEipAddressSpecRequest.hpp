// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYANYCASTEIPADDRESSSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYANYCASTEIPADDRESSSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class ModifyAnycastEipAddressSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAnycastEipAddressSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnycastId, anycastId_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAnycastEipAddressSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnycastId, anycastId_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
    };
    ModifyAnycastEipAddressSpecRequest() = default ;
    ModifyAnycastEipAddressSpecRequest(const ModifyAnycastEipAddressSpecRequest &) = default ;
    ModifyAnycastEipAddressSpecRequest(ModifyAnycastEipAddressSpecRequest &&) = default ;
    ModifyAnycastEipAddressSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAnycastEipAddressSpecRequest() = default ;
    ModifyAnycastEipAddressSpecRequest& operator=(const ModifyAnycastEipAddressSpecRequest &) = default ;
    ModifyAnycastEipAddressSpecRequest& operator=(ModifyAnycastEipAddressSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->anycastId_ != nullptr
        && this->bandwidth_ != nullptr; };
    // anycastId Field Functions 
    bool hasAnycastId() const { return this->anycastId_ != nullptr;};
    void deleteAnycastId() { this->anycastId_ = nullptr;};
    inline string anycastId() const { DARABONBA_PTR_GET_DEFAULT(anycastId_, "") };
    inline ModifyAnycastEipAddressSpecRequest& setAnycastId(string anycastId) { DARABONBA_PTR_SET_VALUE(anycastId_, anycastId) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline string bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
    inline ModifyAnycastEipAddressSpecRequest& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


  protected:
    // The ID of the Anycast EIP.
    // 
    // This parameter is required.
    std::shared_ptr<string> anycastId_ = nullptr;
    // The maximum bandwidth of the Anycast EIP. Unit: Mbit/s.
    // 
    // Valid values: **200** to **1000**.
    // 
    // This parameter is required.
    std::shared_ptr<string> bandwidth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
