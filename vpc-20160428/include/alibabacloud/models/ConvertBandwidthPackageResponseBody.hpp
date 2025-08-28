// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERTBANDWIDTHPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONVERTBANDWIDTHPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ConvertBandwidthPackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConvertBandwidthPackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConvertInstanceId, convertInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ConvertBandwidthPackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConvertInstanceId, convertInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ConvertBandwidthPackageResponseBody() = default ;
    ConvertBandwidthPackageResponseBody(const ConvertBandwidthPackageResponseBody &) = default ;
    ConvertBandwidthPackageResponseBody(ConvertBandwidthPackageResponseBody &&) = default ;
    ConvertBandwidthPackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConvertBandwidthPackageResponseBody() = default ;
    ConvertBandwidthPackageResponseBody& operator=(const ConvertBandwidthPackageResponseBody &) = default ;
    ConvertBandwidthPackageResponseBody& operator=(ConvertBandwidthPackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->convertInstanceId_ != nullptr
        && this->requestId_ != nullptr; };
    // convertInstanceId Field Functions 
    bool hasConvertInstanceId() const { return this->convertInstanceId_ != nullptr;};
    void deleteConvertInstanceId() { this->convertInstanceId_ = nullptr;};
    inline string convertInstanceId() const { DARABONBA_PTR_GET_DEFAULT(convertInstanceId_, "") };
    inline ConvertBandwidthPackageResponseBody& setConvertInstanceId(string convertInstanceId) { DARABONBA_PTR_SET_VALUE(convertInstanceId_, convertInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ConvertBandwidthPackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the Internet Shared Bandwidth instance.
    std::shared_ptr<string> convertInstanceId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
