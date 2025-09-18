// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHBASETABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHBASETABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHBaseTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHBaseTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHBaseTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDoctorHBaseTableResponseBody() = default ;
    GetDoctorHBaseTableResponseBody(const GetDoctorHBaseTableResponseBody &) = default ;
    GetDoctorHBaseTableResponseBody(GetDoctorHBaseTableResponseBody &&) = default ;
    GetDoctorHBaseTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHBaseTableResponseBody() = default ;
    GetDoctorHBaseTableResponseBody& operator=(const GetDoctorHBaseTableResponseBody &) = default ;
    GetDoctorHBaseTableResponseBody& operator=(GetDoctorHBaseTableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDoctorHBaseTableResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetDoctorHBaseTableResponseBodyData) };
    inline GetDoctorHBaseTableResponseBodyData data() { DARABONBA_PTR_GET(data_, GetDoctorHBaseTableResponseBodyData) };
    inline GetDoctorHBaseTableResponseBody& setData(const GetDoctorHBaseTableResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDoctorHBaseTableResponseBody& setData(GetDoctorHBaseTableResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDoctorHBaseTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned data.
    std::shared_ptr<GetDoctorHBaseTableResponseBodyData> data_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
