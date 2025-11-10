// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEIPWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEIPWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetInstanceIpWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceIpWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ipWhitelists, ipWhitelists_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceIpWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ipWhitelists, ipWhitelists_);
    };
    GetInstanceIpWhitelistRequest() = default ;
    GetInstanceIpWhitelistRequest(const GetInstanceIpWhitelistRequest &) = default ;
    GetInstanceIpWhitelistRequest(GetInstanceIpWhitelistRequest &&) = default ;
    GetInstanceIpWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceIpWhitelistRequest() = default ;
    GetInstanceIpWhitelistRequest& operator=(const GetInstanceIpWhitelistRequest &) = default ;
    GetInstanceIpWhitelistRequest& operator=(GetInstanceIpWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipWhitelists_ == nullptr; };
    // ipWhitelists Field Functions 
    bool hasIpWhitelists() const { return this->ipWhitelists_ != nullptr;};
    void deleteIpWhitelists() { this->ipWhitelists_ = nullptr;};
    inline const vector<string> & ipWhitelists() const { DARABONBA_PTR_GET_CONST(ipWhitelists_, vector<string>) };
    inline vector<string> ipWhitelists() { DARABONBA_PTR_GET(ipWhitelists_, vector<string>) };
    inline GetInstanceIpWhitelistRequest& setIpWhitelists(const vector<string> & ipWhitelists) { DARABONBA_PTR_SET_VALUE(ipWhitelists_, ipWhitelists) };
    inline GetInstanceIpWhitelistRequest& setIpWhitelists(vector<string> && ipWhitelists) { DARABONBA_PTR_SET_RVALUE(ipWhitelists_, ipWhitelists) };


  protected:
    // The  filter IP address whitelists.
    std::shared_ptr<vector<string>> ipWhitelists_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
