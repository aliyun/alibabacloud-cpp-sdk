// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTDESKTOPGROUPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTDESKTOPGROUPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ExportDesktopGroupInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportDesktopGroupInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ExportDesktopGroupInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ExportDesktopGroupInfoResponseBody() = default ;
    ExportDesktopGroupInfoResponseBody(const ExportDesktopGroupInfoResponseBody &) = default ;
    ExportDesktopGroupInfoResponseBody(ExportDesktopGroupInfoResponseBody &&) = default ;
    ExportDesktopGroupInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportDesktopGroupInfoResponseBody() = default ;
    ExportDesktopGroupInfoResponseBody& operator=(const ExportDesktopGroupInfoResponseBody &) = default ;
    ExportDesktopGroupInfoResponseBody& operator=(ExportDesktopGroupInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->url_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportDesktopGroupInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ExportDesktopGroupInfoResponseBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The download URL of the XLSX file that contains cloud computer shares. The XLSX file provides the following information:
    // 
    // *   Cloud computer share ID/name
    // *   Office network ID/name
    // *   Cloud computer share template
    // *   vCPUs/Memory size
    // *   System disk/Data disk
    // *   Security policy name
    // *   Number of authorized users
    // *   Billing method
    // *   Creation time
    // *   Expiration time
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
