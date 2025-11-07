// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECRETPARAMETERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSECRETPARAMETERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetSecretParametersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecretParametersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Names, names_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WithDecryption, withDecryption_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecretParametersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Names, names_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WithDecryption, withDecryption_);
    };
    GetSecretParametersRequest() = default ;
    GetSecretParametersRequest(const GetSecretParametersRequest &) = default ;
    GetSecretParametersRequest(GetSecretParametersRequest &&) = default ;
    GetSecretParametersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecretParametersRequest() = default ;
    GetSecretParametersRequest& operator=(const GetSecretParametersRequest &) = default ;
    GetSecretParametersRequest& operator=(GetSecretParametersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->names_ == nullptr
        && return this->regionId_ == nullptr && return this->withDecryption_ == nullptr; };
    // names Field Functions 
    bool hasNames() const { return this->names_ != nullptr;};
    void deleteNames() { this->names_ = nullptr;};
    inline string names() const { DARABONBA_PTR_GET_DEFAULT(names_, "") };
    inline GetSecretParametersRequest& setNames(string names) { DARABONBA_PTR_SET_VALUE(names_, names) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetSecretParametersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // withDecryption Field Functions 
    bool hasWithDecryption() const { return this->withDecryption_ != nullptr;};
    void deleteWithDecryption() { this->withDecryption_ = nullptr;};
    inline bool withDecryption() const { DARABONBA_PTR_GET_DEFAULT(withDecryption_, false) };
    inline GetSecretParametersRequest& setWithDecryption(bool withDecryption) { DARABONBA_PTR_SET_VALUE(withDecryption_, withDecryption) };


  protected:
    // The name of the encryption parameter. Multiple encryption parameters can form a JSON array in the format of ["xxxxxxxxx", "yyyyyyyyy", … "zzzzzzzzz"]. Each JSON array can contain a maximum of 10 encryption parameters. Multiple encryption parameters in the array are separated by commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> names_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to decrypt the parameter value. Default value: false. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> withDecryption_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
