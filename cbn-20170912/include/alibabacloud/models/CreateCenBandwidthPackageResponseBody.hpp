// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECENBANDWIDTHPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECENBANDWIDTHPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateCenBandwidthPackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCenBandwidthPackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CenBandwidthPackageId, cenBandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(CenBandwidthPackageOrderId, cenBandwidthPackageOrderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCenBandwidthPackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CenBandwidthPackageId, cenBandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(CenBandwidthPackageOrderId, cenBandwidthPackageOrderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCenBandwidthPackageResponseBody() = default ;
    CreateCenBandwidthPackageResponseBody(const CreateCenBandwidthPackageResponseBody &) = default ;
    CreateCenBandwidthPackageResponseBody(CreateCenBandwidthPackageResponseBody &&) = default ;
    CreateCenBandwidthPackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCenBandwidthPackageResponseBody() = default ;
    CreateCenBandwidthPackageResponseBody& operator=(const CreateCenBandwidthPackageResponseBody &) = default ;
    CreateCenBandwidthPackageResponseBody& operator=(CreateCenBandwidthPackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenBandwidthPackageId_ != nullptr
        && this->cenBandwidthPackageOrderId_ != nullptr && this->requestId_ != nullptr; };
    // cenBandwidthPackageId Field Functions 
    bool hasCenBandwidthPackageId() const { return this->cenBandwidthPackageId_ != nullptr;};
    void deleteCenBandwidthPackageId() { this->cenBandwidthPackageId_ = nullptr;};
    inline string cenBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(cenBandwidthPackageId_, "") };
    inline CreateCenBandwidthPackageResponseBody& setCenBandwidthPackageId(string cenBandwidthPackageId) { DARABONBA_PTR_SET_VALUE(cenBandwidthPackageId_, cenBandwidthPackageId) };


    // cenBandwidthPackageOrderId Field Functions 
    bool hasCenBandwidthPackageOrderId() const { return this->cenBandwidthPackageOrderId_ != nullptr;};
    void deleteCenBandwidthPackageOrderId() { this->cenBandwidthPackageOrderId_ = nullptr;};
    inline string cenBandwidthPackageOrderId() const { DARABONBA_PTR_GET_DEFAULT(cenBandwidthPackageOrderId_, "") };
    inline CreateCenBandwidthPackageResponseBody& setCenBandwidthPackageOrderId(string cenBandwidthPackageOrderId) { DARABONBA_PTR_SET_VALUE(cenBandwidthPackageOrderId_, cenBandwidthPackageOrderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCenBandwidthPackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the bandwidth plan.
    std::shared_ptr<string> cenBandwidthPackageId_ = nullptr;
    // The ID of the order for the bandwidth plan.
    std::shared_ptr<string> cenBandwidthPackageOrderId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
