// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCENRESPONSEBODYROUTEENTRIES_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCENRESPONSEBODYROUTEENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class VerifyCenResponseBodyRouteEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCenResponseBodyRouteEntries& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(NextHopInstanceId, nextHopInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCenResponseBodyRouteEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(NextHopInstanceId, nextHopInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    VerifyCenResponseBodyRouteEntries() = default ;
    VerifyCenResponseBodyRouteEntries(const VerifyCenResponseBodyRouteEntries &) = default ;
    VerifyCenResponseBodyRouteEntries(VerifyCenResponseBodyRouteEntries &&) = default ;
    VerifyCenResponseBodyRouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCenResponseBodyRouteEntries() = default ;
    VerifyCenResponseBodyRouteEntries& operator=(const VerifyCenResponseBodyRouteEntries &) = default ;
    VerifyCenResponseBodyRouteEntries& operator=(VerifyCenResponseBodyRouteEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationCidrBlock_ != nullptr
        && this->nextHopInstanceId_ != nullptr && this->regionId_ != nullptr && this->status_ != nullptr; };
    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline VerifyCenResponseBodyRouteEntries& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // nextHopInstanceId Field Functions 
    bool hasNextHopInstanceId() const { return this->nextHopInstanceId_ != nullptr;};
    void deleteNextHopInstanceId() { this->nextHopInstanceId_ = nullptr;};
    inline string nextHopInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nextHopInstanceId_, "") };
    inline VerifyCenResponseBodyRouteEntries& setNextHopInstanceId(string nextHopInstanceId) { DARABONBA_PTR_SET_VALUE(nextHopInstanceId_, nextHopInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline VerifyCenResponseBodyRouteEntries& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline VerifyCenResponseBodyRouteEntries& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The CIDR block of the route.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The ID of the instance corresponding to the route.
    std::shared_ptr<string> nextHopInstanceId_ = nullptr;
    // The region ID of the route.
    std::shared_ptr<string> regionId_ = nullptr;
    // The verification result of the route.
    // 
    // Valid values:
    // 
    // *   Conflict: A CIDR block conflict exists.
    // *   Access: The verification is passed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
