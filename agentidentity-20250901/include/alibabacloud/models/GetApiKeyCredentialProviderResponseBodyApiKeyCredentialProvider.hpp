// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPIKEYCREDENTIALPROVIDERRESPONSEBODYAPIKEYCREDENTIALPROVIDER_HPP_
#define ALIBABACLOUD_MODELS_GETAPIKEYCREDENTIALPROVIDERRESPONSEBODYAPIKEYCREDENTIALPROVIDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider& obj) { 
      DARABONBA_PTR_TO_JSON(APIKeyCredentialProviderName, APIKeyCredentialProviderName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CredentialProviderArn, credentialProviderArn_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider& obj) { 
      DARABONBA_PTR_FROM_JSON(APIKeyCredentialProviderName, APIKeyCredentialProviderName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CredentialProviderArn, credentialProviderArn_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider() = default ;
    GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider(const GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider &) = default ;
    GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider(GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider &&) = default ;
    GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider() = default ;
    GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider& operator=(const GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider &) = default ;
    GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider& operator=(GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->APIKeyCredentialProviderName_ == nullptr
        && return this->createTime_ == nullptr && return this->credentialProviderArn_ == nullptr && return this->description_ == nullptr && return this->updateTime_ == nullptr; };
    // APIKeyCredentialProviderName Field Functions 
    bool hasAPIKeyCredentialProviderName() const { return this->APIKeyCredentialProviderName_ != nullptr;};
    void deleteAPIKeyCredentialProviderName() { this->APIKeyCredentialProviderName_ = nullptr;};
    inline string APIKeyCredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(APIKeyCredentialProviderName_, "") };
    inline GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider& setAPIKeyCredentialProviderName(string APIKeyCredentialProviderName) { DARABONBA_PTR_SET_VALUE(APIKeyCredentialProviderName_, APIKeyCredentialProviderName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // credentialProviderArn Field Functions 
    bool hasCredentialProviderArn() const { return this->credentialProviderArn_ != nullptr;};
    void deleteCredentialProviderArn() { this->credentialProviderArn_ = nullptr;};
    inline string credentialProviderArn() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderArn_, "") };
    inline GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider& setCredentialProviderArn(string credentialProviderArn) { DARABONBA_PTR_SET_VALUE(credentialProviderArn_, credentialProviderArn) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> APIKeyCredentialProviderName_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> credentialProviderArn_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
