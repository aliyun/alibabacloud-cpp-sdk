// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTANCEIPWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTANCEIPWHITELISTREQUEST_HPP_
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
  class DeleteInstanceIpWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstanceIpWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ipWhitelist, ipWhitelist_);
      DARABONBA_PTR_TO_JSON(ipWhitelists, ipWhitelists_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstanceIpWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ipWhitelist, ipWhitelist_);
      DARABONBA_PTR_FROM_JSON(ipWhitelists, ipWhitelists_);
    };
    DeleteInstanceIpWhitelistRequest() = default ;
    DeleteInstanceIpWhitelistRequest(const DeleteInstanceIpWhitelistRequest &) = default ;
    DeleteInstanceIpWhitelistRequest(DeleteInstanceIpWhitelistRequest &&) = default ;
    DeleteInstanceIpWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstanceIpWhitelistRequest() = default ;
    DeleteInstanceIpWhitelistRequest& operator=(const DeleteInstanceIpWhitelistRequest &) = default ;
    DeleteInstanceIpWhitelistRequest& operator=(DeleteInstanceIpWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipWhitelist_ != nullptr
        && this->ipWhitelists_ != nullptr; };
    // ipWhitelist Field Functions 
    bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
    void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
    inline string ipWhitelist() const { DARABONBA_PTR_GET_DEFAULT(ipWhitelist_, "") };
    inline DeleteInstanceIpWhitelistRequest& setIpWhitelist(string ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };


    // ipWhitelists Field Functions 
    bool hasIpWhitelists() const { return this->ipWhitelists_ != nullptr;};
    void deleteIpWhitelists() { this->ipWhitelists_ = nullptr;};
    inline const vector<string> & ipWhitelists() const { DARABONBA_PTR_GET_CONST(ipWhitelists_, vector<string>) };
    inline vector<string> ipWhitelists() { DARABONBA_PTR_GET(ipWhitelists_, vector<string>) };
    inline DeleteInstanceIpWhitelistRequest& setIpWhitelists(const vector<string> & ipWhitelists) { DARABONBA_PTR_SET_VALUE(ipWhitelists_, ipWhitelists) };
    inline DeleteInstanceIpWhitelistRequest& setIpWhitelists(vector<string> && ipWhitelists) { DARABONBA_PTR_SET_RVALUE(ipWhitelists_, ipWhitelists) };


  protected:
    // The IP address whitelist.
    std::shared_ptr<string> ipWhitelist_ = nullptr;
    // The IP address whitelist.
    std::shared_ptr<vector<string>> ipWhitelists_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
