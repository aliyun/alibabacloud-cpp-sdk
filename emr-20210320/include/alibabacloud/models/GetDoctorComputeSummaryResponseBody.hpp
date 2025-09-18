// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORCOMPUTESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORCOMPUTESUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorComputeSummaryResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorComputeSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorComputeSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorComputeSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDoctorComputeSummaryResponseBody() = default ;
    GetDoctorComputeSummaryResponseBody(const GetDoctorComputeSummaryResponseBody &) = default ;
    GetDoctorComputeSummaryResponseBody(GetDoctorComputeSummaryResponseBody &&) = default ;
    GetDoctorComputeSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorComputeSummaryResponseBody() = default ;
    GetDoctorComputeSummaryResponseBody& operator=(const GetDoctorComputeSummaryResponseBody &) = default ;
    GetDoctorComputeSummaryResponseBody& operator=(GetDoctorComputeSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDoctorComputeSummaryResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetDoctorComputeSummaryResponseBodyData) };
    inline GetDoctorComputeSummaryResponseBodyData data() { DARABONBA_PTR_GET(data_, GetDoctorComputeSummaryResponseBodyData) };
    inline GetDoctorComputeSummaryResponseBody& setData(const GetDoctorComputeSummaryResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDoctorComputeSummaryResponseBody& setData(GetDoctorComputeSummaryResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDoctorComputeSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of resource usage.
    std::shared_ptr<GetDoctorComputeSummaryResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
