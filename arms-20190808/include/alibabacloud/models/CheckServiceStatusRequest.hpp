// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSERVICESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKSERVICESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CheckServiceStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckServiceStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SvcCode, svcCode_);
    };
    friend void from_json(const Darabonba::Json& j, CheckServiceStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SvcCode, svcCode_);
    };
    CheckServiceStatusRequest() = default ;
    CheckServiceStatusRequest(const CheckServiceStatusRequest &) = default ;
    CheckServiceStatusRequest(CheckServiceStatusRequest &&) = default ;
    CheckServiceStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckServiceStatusRequest() = default ;
    CheckServiceStatusRequest& operator=(const CheckServiceStatusRequest &) = default ;
    CheckServiceStatusRequest& operator=(CheckServiceStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->svcCode_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CheckServiceStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // svcCode Field Functions 
    bool hasSvcCode() const { return this->svcCode_ != nullptr;};
    void deleteSvcCode() { this->svcCode_ = nullptr;};
    inline string svcCode() const { DARABONBA_PTR_GET_DEFAULT(svcCode_, "") };
    inline CheckServiceStatusRequest& setSvcCode(string svcCode) { DARABONBA_PTR_SET_VALUE(svcCode_, svcCode) };


  protected:
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The service code of an Alibaba Cloud service. The service code of Managed Service for Prometheus is prometheus.
    // 
    // This parameter is required.
    std::shared_ptr<string> svcCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
