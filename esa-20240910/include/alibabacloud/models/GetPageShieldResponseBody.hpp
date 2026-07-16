// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPAGESHIELDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPAGESHIELDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetPageShieldResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPageShieldResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(ReportUri, reportUri_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetPageShieldResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(ReportUri, reportUri_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    GetPageShieldResponseBody() = default ;
    GetPageShieldResponseBody(const GetPageShieldResponseBody &) = default ;
    GetPageShieldResponseBody(GetPageShieldResponseBody &&) = default ;
    GetPageShieldResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPageShieldResponseBody() = default ;
    GetPageShieldResponseBody& operator=(const GetPageShieldResponseBody &) = default ;
    GetPageShieldResponseBody& operator=(GetPageShieldResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && this->reportUri_ == nullptr && this->requestId_ == nullptr && this->siteVersion_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline GetPageShieldResponseBody& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // reportUri Field Functions 
    bool hasReportUri() const { return this->reportUri_ != nullptr;};
    void deleteReportUri() { this->reportUri_ = nullptr;};
    inline string getReportUri() const { DARABONBA_PTR_GET_DEFAULT(reportUri_, "") };
    inline GetPageShieldResponseBody& setReportUri(string reportUri) { DARABONBA_PTR_SET_VALUE(reportUri_, reportUri) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPageShieldResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline GetPageShieldResponseBody& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // The switch status. Valid values:
    // - on: Enabled.
    // - off: Disabled.
    shared_ptr<string> enable_ {};
    // The report URI.
    shared_ptr<string> reportUri_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The version number of the site. For sites with version management enabled, you can use this parameter to specify the site version on which the configuration takes effect. The default value is 0.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
