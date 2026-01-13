// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVYCOMPUTETOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVYCOMPUTETOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateLivyComputeTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLivyComputeTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(autoExpireConfiguration, autoExpireConfiguration_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLivyComputeTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(autoExpireConfiguration, autoExpireConfiguration_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    CreateLivyComputeTokenRequest() = default ;
    CreateLivyComputeTokenRequest(const CreateLivyComputeTokenRequest &) = default ;
    CreateLivyComputeTokenRequest(CreateLivyComputeTokenRequest &&) = default ;
    CreateLivyComputeTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLivyComputeTokenRequest() = default ;
    CreateLivyComputeTokenRequest& operator=(const CreateLivyComputeTokenRequest &) = default ;
    CreateLivyComputeTokenRequest& operator=(CreateLivyComputeTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AutoExpireConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoExpireConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(enable, enable_);
        DARABONBA_PTR_TO_JSON(expireDays, expireDays_);
      };
      friend void from_json(const Darabonba::Json& j, AutoExpireConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(enable, enable_);
        DARABONBA_PTR_FROM_JSON(expireDays, expireDays_);
      };
      AutoExpireConfiguration() = default ;
      AutoExpireConfiguration(const AutoExpireConfiguration &) = default ;
      AutoExpireConfiguration(AutoExpireConfiguration &&) = default ;
      AutoExpireConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoExpireConfiguration() = default ;
      AutoExpireConfiguration& operator=(const AutoExpireConfiguration &) = default ;
      AutoExpireConfiguration& operator=(AutoExpireConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enable_ == nullptr
        && this->expireDays_ == nullptr; };
      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline AutoExpireConfiguration& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // expireDays Field Functions 
      bool hasExpireDays() const { return this->expireDays_ != nullptr;};
      void deleteExpireDays() { this->expireDays_ = nullptr;};
      inline int32_t getExpireDays() const { DARABONBA_PTR_GET_DEFAULT(expireDays_, 0) };
      inline AutoExpireConfiguration& setExpireDays(int32_t expireDays) { DARABONBA_PTR_SET_VALUE(expireDays_, expireDays) };


    protected:
      shared_ptr<bool> enable_ {};
      shared_ptr<int32_t> expireDays_ {};
    };

    virtual bool empty() const override { return this->autoExpireConfiguration_ == nullptr
        && this->name_ == nullptr && this->token_ == nullptr && this->regionId_ == nullptr; };
    // autoExpireConfiguration Field Functions 
    bool hasAutoExpireConfiguration() const { return this->autoExpireConfiguration_ != nullptr;};
    void deleteAutoExpireConfiguration() { this->autoExpireConfiguration_ = nullptr;};
    inline const CreateLivyComputeTokenRequest::AutoExpireConfiguration & getAutoExpireConfiguration() const { DARABONBA_PTR_GET_CONST(autoExpireConfiguration_, CreateLivyComputeTokenRequest::AutoExpireConfiguration) };
    inline CreateLivyComputeTokenRequest::AutoExpireConfiguration getAutoExpireConfiguration() { DARABONBA_PTR_GET(autoExpireConfiguration_, CreateLivyComputeTokenRequest::AutoExpireConfiguration) };
    inline CreateLivyComputeTokenRequest& setAutoExpireConfiguration(const CreateLivyComputeTokenRequest::AutoExpireConfiguration & autoExpireConfiguration) { DARABONBA_PTR_SET_VALUE(autoExpireConfiguration_, autoExpireConfiguration) };
    inline CreateLivyComputeTokenRequest& setAutoExpireConfiguration(CreateLivyComputeTokenRequest::AutoExpireConfiguration && autoExpireConfiguration) { DARABONBA_PTR_SET_RVALUE(autoExpireConfiguration_, autoExpireConfiguration) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateLivyComputeTokenRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline CreateLivyComputeTokenRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateLivyComputeTokenRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<CreateLivyComputeTokenRequest::AutoExpireConfiguration> autoExpireConfiguration_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> token_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
