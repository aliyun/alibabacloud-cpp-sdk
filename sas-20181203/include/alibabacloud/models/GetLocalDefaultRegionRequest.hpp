// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOCALDEFAULTREGIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLOCALDEFAULTREGIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetLocalDefaultRegionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLocalDefaultRegionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, GetLocalDefaultRegionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    GetLocalDefaultRegionRequest() = default ;
    GetLocalDefaultRegionRequest(const GetLocalDefaultRegionRequest &) = default ;
    GetLocalDefaultRegionRequest(GetLocalDefaultRegionRequest &&) = default ;
    GetLocalDefaultRegionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLocalDefaultRegionRequest() = default ;
    GetLocalDefaultRegionRequest& operator=(const GetLocalDefaultRegionRequest &) = default ;
    GetLocalDefaultRegionRequest& operator=(GetLocalDefaultRegionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vendor_ == nullptr; };
    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline GetLocalDefaultRegionRequest& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The cloud service provider. Valid values:
    // 
    // *   **Tencent**: Tencent Cloud.
    // *   **HUAWEICLOUD**: Huawei Cloud.
    // *   **Azure**: Microsoft Azure.
    // *   **AWS**: Amazon Web Services (AWS).
    shared_ptr<string> vendor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
