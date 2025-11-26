// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHBASEREGIONSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHBASEREGIONSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorHBaseRegionServerResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHBaseRegionServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHBaseRegionServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHBaseRegionServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDoctorHBaseRegionServerResponseBody() = default ;
    GetDoctorHBaseRegionServerResponseBody(const GetDoctorHBaseRegionServerResponseBody &) = default ;
    GetDoctorHBaseRegionServerResponseBody(GetDoctorHBaseRegionServerResponseBody &&) = default ;
    GetDoctorHBaseRegionServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHBaseRegionServerResponseBody() = default ;
    GetDoctorHBaseRegionServerResponseBody& operator=(const GetDoctorHBaseRegionServerResponseBody &) = default ;
    GetDoctorHBaseRegionServerResponseBody& operator=(GetDoctorHBaseRegionServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDoctorHBaseRegionServerResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetDoctorHBaseRegionServerResponseBodyData) };
    inline GetDoctorHBaseRegionServerResponseBodyData data() { DARABONBA_PTR_GET(data_, GetDoctorHBaseRegionServerResponseBodyData) };
    inline GetDoctorHBaseRegionServerResponseBody& setData(const GetDoctorHBaseRegionServerResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDoctorHBaseRegionServerResponseBody& setData(GetDoctorHBaseRegionServerResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDoctorHBaseRegionServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<GetDoctorHBaseRegionServerResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
