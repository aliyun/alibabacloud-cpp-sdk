// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETICPFILINGINFOFORPARTNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETICPFILINGINFOFORPARTNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIcpFilingInfoForPartnerResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetIcpFilingInfoForPartnerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIcpFilingInfoForPartnerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIcpFilingInfoForPartnerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetIcpFilingInfoForPartnerResponseBody() = default ;
    GetIcpFilingInfoForPartnerResponseBody(const GetIcpFilingInfoForPartnerResponseBody &) = default ;
    GetIcpFilingInfoForPartnerResponseBody(GetIcpFilingInfoForPartnerResponseBody &&) = default ;
    GetIcpFilingInfoForPartnerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIcpFilingInfoForPartnerResponseBody() = default ;
    GetIcpFilingInfoForPartnerResponseBody& operator=(const GetIcpFilingInfoForPartnerResponseBody &) = default ;
    GetIcpFilingInfoForPartnerResponseBody& operator=(GetIcpFilingInfoForPartnerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetIcpFilingInfoForPartnerResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetIcpFilingInfoForPartnerResponseBodyData) };
    inline GetIcpFilingInfoForPartnerResponseBodyData data() { DARABONBA_PTR_GET(data_, GetIcpFilingInfoForPartnerResponseBodyData) };
    inline GetIcpFilingInfoForPartnerResponseBody& setData(const GetIcpFilingInfoForPartnerResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetIcpFilingInfoForPartnerResponseBody& setData(GetIcpFilingInfoForPartnerResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIcpFilingInfoForPartnerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetIcpFilingInfoForPartnerResponseBodyData> data_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
