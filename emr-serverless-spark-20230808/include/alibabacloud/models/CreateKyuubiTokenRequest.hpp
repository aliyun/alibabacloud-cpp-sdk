// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKYUUBITOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKYUUBITOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateKyuubiTokenRequestAutoExpireConfiguration.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateKyuubiTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKyuubiTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(autoExpireConfiguration, autoExpireConfiguration_);
      DARABONBA_PTR_TO_JSON(memberArns, memberArns_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKyuubiTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(autoExpireConfiguration, autoExpireConfiguration_);
      DARABONBA_PTR_FROM_JSON(memberArns, memberArns_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    CreateKyuubiTokenRequest() = default ;
    CreateKyuubiTokenRequest(const CreateKyuubiTokenRequest &) = default ;
    CreateKyuubiTokenRequest(CreateKyuubiTokenRequest &&) = default ;
    CreateKyuubiTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKyuubiTokenRequest() = default ;
    CreateKyuubiTokenRequest& operator=(const CreateKyuubiTokenRequest &) = default ;
    CreateKyuubiTokenRequest& operator=(CreateKyuubiTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoExpireConfiguration_ == nullptr
        && return this->memberArns_ == nullptr && return this->name_ == nullptr && return this->token_ == nullptr && return this->regionId_ == nullptr; };
    // autoExpireConfiguration Field Functions 
    bool hasAutoExpireConfiguration() const { return this->autoExpireConfiguration_ != nullptr;};
    void deleteAutoExpireConfiguration() { this->autoExpireConfiguration_ = nullptr;};
    inline const CreateKyuubiTokenRequestAutoExpireConfiguration & autoExpireConfiguration() const { DARABONBA_PTR_GET_CONST(autoExpireConfiguration_, CreateKyuubiTokenRequestAutoExpireConfiguration) };
    inline CreateKyuubiTokenRequestAutoExpireConfiguration autoExpireConfiguration() { DARABONBA_PTR_GET(autoExpireConfiguration_, CreateKyuubiTokenRequestAutoExpireConfiguration) };
    inline CreateKyuubiTokenRequest& setAutoExpireConfiguration(const CreateKyuubiTokenRequestAutoExpireConfiguration & autoExpireConfiguration) { DARABONBA_PTR_SET_VALUE(autoExpireConfiguration_, autoExpireConfiguration) };
    inline CreateKyuubiTokenRequest& setAutoExpireConfiguration(CreateKyuubiTokenRequestAutoExpireConfiguration && autoExpireConfiguration) { DARABONBA_PTR_SET_RVALUE(autoExpireConfiguration_, autoExpireConfiguration) };


    // memberArns Field Functions 
    bool hasMemberArns() const { return this->memberArns_ != nullptr;};
    void deleteMemberArns() { this->memberArns_ = nullptr;};
    inline const vector<string> & memberArns() const { DARABONBA_PTR_GET_CONST(memberArns_, vector<string>) };
    inline vector<string> memberArns() { DARABONBA_PTR_GET(memberArns_, vector<string>) };
    inline CreateKyuubiTokenRequest& setMemberArns(const vector<string> & memberArns) { DARABONBA_PTR_SET_VALUE(memberArns_, memberArns) };
    inline CreateKyuubiTokenRequest& setMemberArns(vector<string> && memberArns) { DARABONBA_PTR_SET_RVALUE(memberArns_, memberArns) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateKyuubiTokenRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline CreateKyuubiTokenRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateKyuubiTokenRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<CreateKyuubiTokenRequestAutoExpireConfiguration> autoExpireConfiguration_ = nullptr;
    std::shared_ptr<vector<string>> memberArns_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
