// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETICPFILINGINFOFORPARTNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETICPFILINGINFOFORPARTNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(IcpNumber, icpNumber_);
        DARABONBA_PTR_TO_JSON(Recorded, recorded_);
        DARABONBA_PTR_TO_JSON(SiteRecordNumber, siteRecordNumber_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(IcpNumber, icpNumber_);
        DARABONBA_PTR_FROM_JSON(Recorded, recorded_);
        DARABONBA_PTR_FROM_JSON(SiteRecordNumber, siteRecordNumber_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->icpNumber_ == nullptr
        && this->recorded_ == nullptr && this->siteRecordNumber_ == nullptr; };
      // icpNumber Field Functions 
      bool hasIcpNumber() const { return this->icpNumber_ != nullptr;};
      void deleteIcpNumber() { this->icpNumber_ = nullptr;};
      inline string getIcpNumber() const { DARABONBA_PTR_GET_DEFAULT(icpNumber_, "") };
      inline Data& setIcpNumber(string icpNumber) { DARABONBA_PTR_SET_VALUE(icpNumber_, icpNumber) };


      // recorded Field Functions 
      bool hasRecorded() const { return this->recorded_ != nullptr;};
      void deleteRecorded() { this->recorded_ = nullptr;};
      inline bool getRecorded() const { DARABONBA_PTR_GET_DEFAULT(recorded_, false) };
      inline Data& setRecorded(bool recorded) { DARABONBA_PTR_SET_VALUE(recorded_, recorded) };


      // siteRecordNumber Field Functions 
      bool hasSiteRecordNumber() const { return this->siteRecordNumber_ != nullptr;};
      void deleteSiteRecordNumber() { this->siteRecordNumber_ = nullptr;};
      inline string getSiteRecordNumber() const { DARABONBA_PTR_GET_DEFAULT(siteRecordNumber_, "") };
      inline Data& setSiteRecordNumber(string siteRecordNumber) { DARABONBA_PTR_SET_VALUE(siteRecordNumber_, siteRecordNumber) };


    protected:
      shared_ptr<string> icpNumber_ {};
      shared_ptr<bool> recorded_ {};
      shared_ptr<string> siteRecordNumber_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetIcpFilingInfoForPartnerResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetIcpFilingInfoForPartnerResponseBody::Data) };
    inline GetIcpFilingInfoForPartnerResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetIcpFilingInfoForPartnerResponseBody::Data) };
    inline GetIcpFilingInfoForPartnerResponseBody& setData(const GetIcpFilingInfoForPartnerResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetIcpFilingInfoForPartnerResponseBody& setData(GetIcpFilingInfoForPartnerResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIcpFilingInfoForPartnerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetIcpFilingInfoForPartnerResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
