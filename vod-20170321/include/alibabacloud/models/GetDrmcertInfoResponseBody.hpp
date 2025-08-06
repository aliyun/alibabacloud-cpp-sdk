// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDRMCERTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDRMCERTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetDRMCertInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDRMCertInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DRMCertInfo, DRMCertInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDRMCertInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DRMCertInfo, DRMCertInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDRMCertInfoResponseBody() = default ;
    GetDRMCertInfoResponseBody(const GetDRMCertInfoResponseBody &) = default ;
    GetDRMCertInfoResponseBody(GetDRMCertInfoResponseBody &&) = default ;
    GetDRMCertInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDRMCertInfoResponseBody() = default ;
    GetDRMCertInfoResponseBody& operator=(const GetDRMCertInfoResponseBody &) = default ;
    GetDRMCertInfoResponseBody& operator=(GetDRMCertInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DRMCertInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // DRMCertInfo Field Functions 
    bool hasDRMCertInfo() const { return this->DRMCertInfo_ != nullptr;};
    void deleteDRMCertInfo() { this->DRMCertInfo_ = nullptr;};
    inline string DRMCertInfo() const { DARABONBA_PTR_GET_DEFAULT(DRMCertInfo_, "") };
    inline GetDRMCertInfoResponseBody& setDRMCertInfo(string DRMCertInfo) { DARABONBA_PTR_SET_VALUE(DRMCertInfo_, DRMCertInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDRMCertInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> DRMCertInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
