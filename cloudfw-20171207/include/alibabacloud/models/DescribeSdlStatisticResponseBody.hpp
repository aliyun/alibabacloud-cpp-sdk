// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDLSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDLSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSdlStatisticResponseBodySdlStatisticResp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSdlStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSdlStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SdlStatisticResp, sdlStatisticResp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSdlStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SdlStatisticResp, sdlStatisticResp_);
    };
    DescribeSdlStatisticResponseBody() = default ;
    DescribeSdlStatisticResponseBody(const DescribeSdlStatisticResponseBody &) = default ;
    DescribeSdlStatisticResponseBody(DescribeSdlStatisticResponseBody &&) = default ;
    DescribeSdlStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSdlStatisticResponseBody() = default ;
    DescribeSdlStatisticResponseBody& operator=(const DescribeSdlStatisticResponseBody &) = default ;
    DescribeSdlStatisticResponseBody& operator=(DescribeSdlStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->sdlStatisticResp_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSdlStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sdlStatisticResp Field Functions 
    bool hasSdlStatisticResp() const { return this->sdlStatisticResp_ != nullptr;};
    void deleteSdlStatisticResp() { this->sdlStatisticResp_ = nullptr;};
    inline const DescribeSdlStatisticResponseBodySdlStatisticResp & sdlStatisticResp() const { DARABONBA_PTR_GET_CONST(sdlStatisticResp_, DescribeSdlStatisticResponseBodySdlStatisticResp) };
    inline DescribeSdlStatisticResponseBodySdlStatisticResp sdlStatisticResp() { DARABONBA_PTR_GET(sdlStatisticResp_, DescribeSdlStatisticResponseBodySdlStatisticResp) };
    inline DescribeSdlStatisticResponseBody& setSdlStatisticResp(const DescribeSdlStatisticResponseBodySdlStatisticResp & sdlStatisticResp) { DARABONBA_PTR_SET_VALUE(sdlStatisticResp_, sdlStatisticResp) };
    inline DescribeSdlStatisticResponseBody& setSdlStatisticResp(DescribeSdlStatisticResponseBodySdlStatisticResp && sdlStatisticResp) { DARABONBA_PTR_SET_RVALUE(sdlStatisticResp_, sdlStatisticResp) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeSdlStatisticResponseBodySdlStatisticResp> sdlStatisticResp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
