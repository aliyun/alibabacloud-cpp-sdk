// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEIPWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEIPWHITELISTREQUEST_HPP_
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
  class CreateInstanceIpWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceIpWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ipWhitelists, ipWhitelists_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceIpWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ipWhitelists, ipWhitelists_);
    };
    CreateInstanceIpWhitelistRequest() = default ;
    CreateInstanceIpWhitelistRequest(const CreateInstanceIpWhitelistRequest &) = default ;
    CreateInstanceIpWhitelistRequest(CreateInstanceIpWhitelistRequest &&) = default ;
    CreateInstanceIpWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceIpWhitelistRequest() = default ;
    CreateInstanceIpWhitelistRequest& operator=(const CreateInstanceIpWhitelistRequest &) = default ;
    CreateInstanceIpWhitelistRequest& operator=(CreateInstanceIpWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipWhitelists_ != nullptr; };
    // ipWhitelists Field Functions 
    bool hasIpWhitelists() const { return this->ipWhitelists_ != nullptr;};
    void deleteIpWhitelists() { this->ipWhitelists_ = nullptr;};
    inline const vector<string> & ipWhitelists() const { DARABONBA_PTR_GET_CONST(ipWhitelists_, vector<string>) };
    inline vector<string> ipWhitelists() { DARABONBA_PTR_GET(ipWhitelists_, vector<string>) };
    inline CreateInstanceIpWhitelistRequest& setIpWhitelists(const vector<string> & ipWhitelists) { DARABONBA_PTR_SET_VALUE(ipWhitelists_, ipWhitelists) };
    inline CreateInstanceIpWhitelistRequest& setIpWhitelists(vector<string> && ipWhitelists) { DARABONBA_PTR_SET_RVALUE(ipWhitelists_, ipWhitelists) };


  protected:
    // The IP address whitelists.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> ipWhitelists_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
