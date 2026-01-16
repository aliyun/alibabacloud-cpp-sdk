// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetRegionConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    GetRegionConfigurationRequest() = default ;
    GetRegionConfigurationRequest(const GetRegionConfigurationRequest &) = default ;
    GetRegionConfigurationRequest(GetRegionConfigurationRequest &&) = default ;
    GetRegionConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionConfigurationRequest() = default ;
    GetRegionConfigurationRequest& operator=(const GetRegionConfigurationRequest &) = default ;
    GetRegionConfigurationRequest& operator=(GetRegionConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->zoneId_ == nullptr; };
    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetRegionConfigurationRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
