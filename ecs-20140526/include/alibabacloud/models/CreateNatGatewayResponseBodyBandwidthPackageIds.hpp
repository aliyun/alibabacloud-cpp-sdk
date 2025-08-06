// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENATGATEWAYRESPONSEBODYBANDWIDTHPACKAGEIDS_HPP_
#define ALIBABACLOUD_MODELS_CREATENATGATEWAYRESPONSEBODYBANDWIDTHPACKAGEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateNatGatewayResponseBodyBandwidthPackageIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNatGatewayResponseBodyBandwidthPackageIds& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNatGatewayResponseBodyBandwidthPackageIds& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
    };
    CreateNatGatewayResponseBodyBandwidthPackageIds() = default ;
    CreateNatGatewayResponseBodyBandwidthPackageIds(const CreateNatGatewayResponseBodyBandwidthPackageIds &) = default ;
    CreateNatGatewayResponseBodyBandwidthPackageIds(CreateNatGatewayResponseBodyBandwidthPackageIds &&) = default ;
    CreateNatGatewayResponseBodyBandwidthPackageIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNatGatewayResponseBodyBandwidthPackageIds() = default ;
    CreateNatGatewayResponseBodyBandwidthPackageIds& operator=(const CreateNatGatewayResponseBodyBandwidthPackageIds &) = default ;
    CreateNatGatewayResponseBodyBandwidthPackageIds& operator=(CreateNatGatewayResponseBodyBandwidthPackageIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthPackageId_ != nullptr; };
    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline const vector<string> & bandwidthPackageId() const { DARABONBA_PTR_GET_CONST(bandwidthPackageId_, vector<string>) };
    inline vector<string> bandwidthPackageId() { DARABONBA_PTR_GET(bandwidthPackageId_, vector<string>) };
    inline CreateNatGatewayResponseBodyBandwidthPackageIds& setBandwidthPackageId(const vector<string> & bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };
    inline CreateNatGatewayResponseBodyBandwidthPackageIds& setBandwidthPackageId(vector<string> && bandwidthPackageId) { DARABONBA_PTR_SET_RVALUE(bandwidthPackageId_, bandwidthPackageId) };


  protected:
    std::shared_ptr<vector<string>> bandwidthPackageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
