// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBANDWIDTHPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBANDWIDTHPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class UpdateBandwidthPackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBandwidthPackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthPackage, bandwidthPackage_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBandwidthPackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthPackage, bandwidthPackage_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateBandwidthPackageResponseBody() = default ;
    UpdateBandwidthPackageResponseBody(const UpdateBandwidthPackageResponseBody &) = default ;
    UpdateBandwidthPackageResponseBody(UpdateBandwidthPackageResponseBody &&) = default ;
    UpdateBandwidthPackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBandwidthPackageResponseBody() = default ;
    UpdateBandwidthPackageResponseBody& operator=(const UpdateBandwidthPackageResponseBody &) = default ;
    UpdateBandwidthPackageResponseBody& operator=(UpdateBandwidthPackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidthPackage_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr; };
    // bandwidthPackage Field Functions 
    bool hasBandwidthPackage() const { return this->bandwidthPackage_ != nullptr;};
    void deleteBandwidthPackage() { this->bandwidthPackage_ = nullptr;};
    inline string getBandwidthPackage() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackage_, "") };
    inline UpdateBandwidthPackageResponseBody& setBandwidthPackage(string bandwidthPackage) { DARABONBA_PTR_SET_VALUE(bandwidthPackage_, bandwidthPackage) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateBandwidthPackageResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateBandwidthPackageResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateBandwidthPackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The bandwidth plan ID.
    shared_ptr<string> bandwidthPackage_ {};
    // The description of the bandwidth plan.
    shared_ptr<string> description_ {};
    // The name of the bandwidth plan.
    shared_ptr<string> name_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
