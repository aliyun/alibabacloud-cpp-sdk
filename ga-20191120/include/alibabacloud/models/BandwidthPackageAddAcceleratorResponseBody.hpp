// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BANDWIDTHPACKAGEADDACCELERATORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BANDWIDTHPACKAGEADDACCELERATORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class BandwidthPackageAddAcceleratorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BandwidthPackageAddAcceleratorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accelerators, accelerators_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BandwidthPackageAddAcceleratorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accelerators, accelerators_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BandwidthPackageAddAcceleratorResponseBody() = default ;
    BandwidthPackageAddAcceleratorResponseBody(const BandwidthPackageAddAcceleratorResponseBody &) = default ;
    BandwidthPackageAddAcceleratorResponseBody(BandwidthPackageAddAcceleratorResponseBody &&) = default ;
    BandwidthPackageAddAcceleratorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BandwidthPackageAddAcceleratorResponseBody() = default ;
    BandwidthPackageAddAcceleratorResponseBody& operator=(const BandwidthPackageAddAcceleratorResponseBody &) = default ;
    BandwidthPackageAddAcceleratorResponseBody& operator=(BandwidthPackageAddAcceleratorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accelerators_ == nullptr
        && this->bandwidthPackageId_ == nullptr && this->requestId_ == nullptr; };
    // accelerators Field Functions 
    bool hasAccelerators() const { return this->accelerators_ != nullptr;};
    void deleteAccelerators() { this->accelerators_ = nullptr;};
    inline const vector<string> & getAccelerators() const { DARABONBA_PTR_GET_CONST(accelerators_, vector<string>) };
    inline vector<string> getAccelerators() { DARABONBA_PTR_GET(accelerators_, vector<string>) };
    inline BandwidthPackageAddAcceleratorResponseBody& setAccelerators(const vector<string> & accelerators) { DARABONBA_PTR_SET_VALUE(accelerators_, accelerators) };
    inline BandwidthPackageAddAcceleratorResponseBody& setAccelerators(vector<string> && accelerators) { DARABONBA_PTR_SET_RVALUE(accelerators_, accelerators) };


    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline BandwidthPackageAddAcceleratorResponseBody& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BandwidthPackageAddAcceleratorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The GA instance IDs.
    shared_ptr<vector<string>> accelerators_ {};
    // The bandwidth plan ID.
    shared_ptr<string> bandwidthPackageId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
