// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVULWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVULWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetVulWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVulWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VulWhitelistId, vulWhitelistId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVulWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VulWhitelistId, vulWhitelistId_);
    };
    GetVulWhitelistRequest() = default ;
    GetVulWhitelistRequest(const GetVulWhitelistRequest &) = default ;
    GetVulWhitelistRequest(GetVulWhitelistRequest &&) = default ;
    GetVulWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVulWhitelistRequest() = default ;
    GetVulWhitelistRequest& operator=(const GetVulWhitelistRequest &) = default ;
    GetVulWhitelistRequest& operator=(GetVulWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vulWhitelistId_ == nullptr; };
    // vulWhitelistId Field Functions 
    bool hasVulWhitelistId() const { return this->vulWhitelistId_ != nullptr;};
    void deleteVulWhitelistId() { this->vulWhitelistId_ = nullptr;};
    inline int64_t getVulWhitelistId() const { DARABONBA_PTR_GET_DEFAULT(vulWhitelistId_, 0L) };
    inline GetVulWhitelistRequest& setVulWhitelistId(int64_t vulWhitelistId) { DARABONBA_PTR_SET_VALUE(vulWhitelistId_, vulWhitelistId) };


  protected:
    // The ID of the whitelist.
    shared_ptr<int64_t> vulWhitelistId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
