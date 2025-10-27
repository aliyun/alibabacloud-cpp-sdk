// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVULWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVULWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVulWhitelistResponseBodyVulWhitelist.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetVulWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVulWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VulWhitelist, vulWhitelist_);
    };
    friend void from_json(const Darabonba::Json& j, GetVulWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VulWhitelist, vulWhitelist_);
    };
    GetVulWhitelistResponseBody() = default ;
    GetVulWhitelistResponseBody(const GetVulWhitelistResponseBody &) = default ;
    GetVulWhitelistResponseBody(GetVulWhitelistResponseBody &&) = default ;
    GetVulWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVulWhitelistResponseBody() = default ;
    GetVulWhitelistResponseBody& operator=(const GetVulWhitelistResponseBody &) = default ;
    GetVulWhitelistResponseBody& operator=(GetVulWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->vulWhitelist_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVulWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vulWhitelist Field Functions 
    bool hasVulWhitelist() const { return this->vulWhitelist_ != nullptr;};
    void deleteVulWhitelist() { this->vulWhitelist_ = nullptr;};
    inline const GetVulWhitelistResponseBodyVulWhitelist & vulWhitelist() const { DARABONBA_PTR_GET_CONST(vulWhitelist_, GetVulWhitelistResponseBodyVulWhitelist) };
    inline GetVulWhitelistResponseBodyVulWhitelist vulWhitelist() { DARABONBA_PTR_GET(vulWhitelist_, GetVulWhitelistResponseBodyVulWhitelist) };
    inline GetVulWhitelistResponseBody& setVulWhitelist(const GetVulWhitelistResponseBodyVulWhitelist & vulWhitelist) { DARABONBA_PTR_SET_VALUE(vulWhitelist_, vulWhitelist) };
    inline GetVulWhitelistResponseBody& setVulWhitelist(GetVulWhitelistResponseBodyVulWhitelist && vulWhitelist) { DARABONBA_PTR_SET_RVALUE(vulWhitelist_, vulWhitelist) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the whitelist.
    std::shared_ptr<GetVulWhitelistResponseBodyVulWhitelist> vulWhitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
