// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKAVAILABLEZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKAVAILABLEZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetNetworkAvailableZonesResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetNetworkAvailableZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkAvailableZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkAvailableZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNetworkAvailableZonesResponseBody() = default ;
    GetNetworkAvailableZonesResponseBody(const GetNetworkAvailableZonesResponseBody &) = default ;
    GetNetworkAvailableZonesResponseBody(GetNetworkAvailableZonesResponseBody &&) = default ;
    GetNetworkAvailableZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkAvailableZonesResponseBody() = default ;
    GetNetworkAvailableZonesResponseBody& operator=(const GetNetworkAvailableZonesResponseBody &) = default ;
    GetNetworkAvailableZonesResponseBody& operator=(GetNetworkAvailableZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetNetworkAvailableZonesResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetNetworkAvailableZonesResponseBodyData) };
    inline GetNetworkAvailableZonesResponseBodyData data() { DARABONBA_PTR_GET(data_, GetNetworkAvailableZonesResponseBodyData) };
    inline GetNetworkAvailableZonesResponseBody& setData(const GetNetworkAvailableZonesResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetNetworkAvailableZonesResponseBody& setData(GetNetworkAvailableZonesResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNetworkAvailableZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetNetworkAvailableZonesResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
