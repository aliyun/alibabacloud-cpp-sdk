// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECRETPARAMETERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSECRETPARAMETERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetSecretParameterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecretParameterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParameterVersion, parameterVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WithDecryption, withDecryption_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecretParameterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParameterVersion, parameterVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WithDecryption, withDecryption_);
    };
    GetSecretParameterRequest() = default ;
    GetSecretParameterRequest(const GetSecretParameterRequest &) = default ;
    GetSecretParameterRequest(GetSecretParameterRequest &&) = default ;
    GetSecretParameterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecretParameterRequest() = default ;
    GetSecretParameterRequest& operator=(const GetSecretParameterRequest &) = default ;
    GetSecretParameterRequest& operator=(GetSecretParameterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->parameterVersion_ == nullptr && return this->regionId_ == nullptr && return this->withDecryption_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSecretParameterRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parameterVersion Field Functions 
    bool hasParameterVersion() const { return this->parameterVersion_ != nullptr;};
    void deleteParameterVersion() { this->parameterVersion_ = nullptr;};
    inline int32_t parameterVersion() const { DARABONBA_PTR_GET_DEFAULT(parameterVersion_, 0) };
    inline GetSecretParameterRequest& setParameterVersion(int32_t parameterVersion) { DARABONBA_PTR_SET_VALUE(parameterVersion_, parameterVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetSecretParameterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // withDecryption Field Functions 
    bool hasWithDecryption() const { return this->withDecryption_ != nullptr;};
    void deleteWithDecryption() { this->withDecryption_ = nullptr;};
    inline bool withDecryption() const { DARABONBA_PTR_GET_DEFAULT(withDecryption_, false) };
    inline GetSecretParameterRequest& setWithDecryption(bool withDecryption) { DARABONBA_PTR_SET_VALUE(withDecryption_, withDecryption) };


  protected:
    // The name of the parameter. The name must be 1 to 180 characters in length, and can contain letters, digits, hyphens (-), and underscores (_). It cannot start with ALIYUN, ACS, ALIBABA, ALICLOUD, or OOS.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The version number of the common parameter. Valid values: 1 to 100.
    std::shared_ptr<int32_t> parameterVersion_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to decrypt the parameter value. The decrypted parameter value is returned only if this parameter is set to true. Otherwise, null is returned.
    std::shared_ptr<bool> withDecryption_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
