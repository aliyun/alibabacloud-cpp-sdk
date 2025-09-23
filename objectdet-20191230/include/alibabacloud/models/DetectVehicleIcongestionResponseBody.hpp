// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVEHICLEICONGESTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETECTVEHICLEICONGESTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DetectVehicleICongestionResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVehicleICongestionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVehicleICongestionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVehicleICongestionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetectVehicleICongestionResponseBody() = default ;
    DetectVehicleICongestionResponseBody(const DetectVehicleICongestionResponseBody &) = default ;
    DetectVehicleICongestionResponseBody(DetectVehicleICongestionResponseBody &&) = default ;
    DetectVehicleICongestionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVehicleICongestionResponseBody() = default ;
    DetectVehicleICongestionResponseBody& operator=(const DetectVehicleICongestionResponseBody &) = default ;
    DetectVehicleICongestionResponseBody& operator=(DetectVehicleICongestionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DetectVehicleICongestionResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DetectVehicleICongestionResponseBodyData) };
    inline DetectVehicleICongestionResponseBodyData data() { DARABONBA_PTR_GET(data_, DetectVehicleICongestionResponseBodyData) };
    inline DetectVehicleICongestionResponseBody& setData(const DetectVehicleICongestionResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DetectVehicleICongestionResponseBody& setData(DetectVehicleICongestionResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetectVehicleICongestionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DetectVehicleICongestionResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
