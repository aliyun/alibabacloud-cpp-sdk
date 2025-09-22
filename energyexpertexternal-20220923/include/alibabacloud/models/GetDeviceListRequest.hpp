// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDeviceListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(factoryId, factoryId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(factoryId, factoryId_);
    };
    GetDeviceListRequest() = default ;
    GetDeviceListRequest(const GetDeviceListRequest &) = default ;
    GetDeviceListRequest(GetDeviceListRequest &&) = default ;
    GetDeviceListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceListRequest() = default ;
    GetDeviceListRequest& operator=(const GetDeviceListRequest &) = default ;
    GetDeviceListRequest& operator=(GetDeviceListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->factoryId_ != nullptr; };
    // factoryId Field Functions 
    bool hasFactoryId() const { return this->factoryId_ != nullptr;};
    void deleteFactoryId() { this->factoryId_ = nullptr;};
    inline string factoryId() const { DARABONBA_PTR_GET_DEFAULT(factoryId_, "") };
    inline GetDeviceListRequest& setFactoryId(string factoryId) { DARABONBA_PTR_SET_VALUE(factoryId_, factoryId) };


  protected:
    // The ID of the site.
    // 
    // This parameter is required.
    std::shared_ptr<string> factoryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
