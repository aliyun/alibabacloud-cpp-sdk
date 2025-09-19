// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSSCANCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOSSSCANCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOssScanConfigResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOssScanConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssScanConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssScanConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetOssScanConfigResponseBody() = default ;
    GetOssScanConfigResponseBody(const GetOssScanConfigResponseBody &) = default ;
    GetOssScanConfigResponseBody(GetOssScanConfigResponseBody &&) = default ;
    GetOssScanConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssScanConfigResponseBody() = default ;
    GetOssScanConfigResponseBody& operator=(const GetOssScanConfigResponseBody &) = default ;
    GetOssScanConfigResponseBody& operator=(GetOssScanConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetOssScanConfigResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetOssScanConfigResponseBodyData) };
    inline GetOssScanConfigResponseBodyData data() { DARABONBA_PTR_GET(data_, GetOssScanConfigResponseBodyData) };
    inline GetOssScanConfigResponseBody& setData(const GetOssScanConfigResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetOssScanConfigResponseBody& setData(GetOssScanConfigResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOssScanConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<GetOssScanConfigResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
