// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIPSETSBANDWIDTHLIMITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIPSETSBANDWIDTHLIMITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class GetIpsetsBandwidthLimitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIpsetsBandwidthLimitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthAllocationType, bandwidthAllocationType_);
      DARABONBA_PTR_TO_JSON(BandwidthLimit, bandwidthLimit_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIpsetsBandwidthLimitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthAllocationType, bandwidthAllocationType_);
      DARABONBA_PTR_FROM_JSON(BandwidthLimit, bandwidthLimit_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetIpsetsBandwidthLimitResponseBody() = default ;
    GetIpsetsBandwidthLimitResponseBody(const GetIpsetsBandwidthLimitResponseBody &) = default ;
    GetIpsetsBandwidthLimitResponseBody(GetIpsetsBandwidthLimitResponseBody &&) = default ;
    GetIpsetsBandwidthLimitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIpsetsBandwidthLimitResponseBody() = default ;
    GetIpsetsBandwidthLimitResponseBody& operator=(const GetIpsetsBandwidthLimitResponseBody &) = default ;
    GetIpsetsBandwidthLimitResponseBody& operator=(GetIpsetsBandwidthLimitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidthAllocationType_ == nullptr
        && this->bandwidthLimit_ == nullptr && this->requestId_ == nullptr; };
    // bandwidthAllocationType Field Functions 
    bool hasBandwidthAllocationType() const { return this->bandwidthAllocationType_ != nullptr;};
    void deleteBandwidthAllocationType() { this->bandwidthAllocationType_ = nullptr;};
    inline string getBandwidthAllocationType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthAllocationType_, "") };
    inline GetIpsetsBandwidthLimitResponseBody& setBandwidthAllocationType(string bandwidthAllocationType) { DARABONBA_PTR_SET_VALUE(bandwidthAllocationType_, bandwidthAllocationType) };


    // bandwidthLimit Field Functions 
    bool hasBandwidthLimit() const { return this->bandwidthLimit_ != nullptr;};
    void deleteBandwidthLimit() { this->bandwidthLimit_ = nullptr;};
    inline int64_t getBandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(bandwidthLimit_, 0L) };
    inline GetIpsetsBandwidthLimitResponseBody& setBandwidthLimit(int64_t bandwidthLimit) { DARABONBA_PTR_SET_VALUE(bandwidthLimit_, bandwidthLimit) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIpsetsBandwidthLimitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The type of the bandwidth that is allocated.
    // 
    // *   **ShareBandwidth:** shared bandwidth.
    // *   **ExclusiveBandwidth:** dedicated bandwidth.
    shared_ptr<string> bandwidthAllocationType_ {};
    // The maximum bandwidth of the acceleration area. Unit: Mbit/s.
    shared_ptr<int64_t> bandwidthLimit_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
