// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKYUUBITOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKYUUBITOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateKyuubiTokenRequestAutoExpireConfiguration.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class UpdateKyuubiTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKyuubiTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(autoExpireConfiguration, autoExpireConfiguration_);
      DARABONBA_PTR_TO_JSON(memberArns, memberArns_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKyuubiTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(autoExpireConfiguration, autoExpireConfiguration_);
      DARABONBA_PTR_FROM_JSON(memberArns, memberArns_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    UpdateKyuubiTokenRequest() = default ;
    UpdateKyuubiTokenRequest(const UpdateKyuubiTokenRequest &) = default ;
    UpdateKyuubiTokenRequest(UpdateKyuubiTokenRequest &&) = default ;
    UpdateKyuubiTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKyuubiTokenRequest() = default ;
    UpdateKyuubiTokenRequest& operator=(const UpdateKyuubiTokenRequest &) = default ;
    UpdateKyuubiTokenRequest& operator=(UpdateKyuubiTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoExpireConfiguration_ != nullptr
        && this->memberArns_ != nullptr && this->name_ != nullptr && this->token_ != nullptr && this->regionId_ != nullptr; };
    // autoExpireConfiguration Field Functions 
    bool hasAutoExpireConfiguration() const { return this->autoExpireConfiguration_ != nullptr;};
    void deleteAutoExpireConfiguration() { this->autoExpireConfiguration_ = nullptr;};
    inline const UpdateKyuubiTokenRequestAutoExpireConfiguration & autoExpireConfiguration() const { DARABONBA_PTR_GET_CONST(autoExpireConfiguration_, UpdateKyuubiTokenRequestAutoExpireConfiguration) };
    inline UpdateKyuubiTokenRequestAutoExpireConfiguration autoExpireConfiguration() { DARABONBA_PTR_GET(autoExpireConfiguration_, UpdateKyuubiTokenRequestAutoExpireConfiguration) };
    inline UpdateKyuubiTokenRequest& setAutoExpireConfiguration(const UpdateKyuubiTokenRequestAutoExpireConfiguration & autoExpireConfiguration) { DARABONBA_PTR_SET_VALUE(autoExpireConfiguration_, autoExpireConfiguration) };
    inline UpdateKyuubiTokenRequest& setAutoExpireConfiguration(UpdateKyuubiTokenRequestAutoExpireConfiguration && autoExpireConfiguration) { DARABONBA_PTR_SET_RVALUE(autoExpireConfiguration_, autoExpireConfiguration) };


    // memberArns Field Functions 
    bool hasMemberArns() const { return this->memberArns_ != nullptr;};
    void deleteMemberArns() { this->memberArns_ = nullptr;};
    inline const vector<string> & memberArns() const { DARABONBA_PTR_GET_CONST(memberArns_, vector<string>) };
    inline vector<string> memberArns() { DARABONBA_PTR_GET(memberArns_, vector<string>) };
    inline UpdateKyuubiTokenRequest& setMemberArns(const vector<string> & memberArns) { DARABONBA_PTR_SET_VALUE(memberArns_, memberArns) };
    inline UpdateKyuubiTokenRequest& setMemberArns(vector<string> && memberArns) { DARABONBA_PTR_SET_RVALUE(memberArns_, memberArns) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateKyuubiTokenRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline UpdateKyuubiTokenRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateKyuubiTokenRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<UpdateKyuubiTokenRequestAutoExpireConfiguration> autoExpireConfiguration_ = nullptr;
    std::shared_ptr<vector<string>> memberArns_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
