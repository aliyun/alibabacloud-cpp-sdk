// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATURECONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETFEATURECONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetFeatureConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureConf, featureConf_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureConf, featureConf_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    GetFeatureConfigResponseBodyData() = default ;
    GetFeatureConfigResponseBodyData(const GetFeatureConfigResponseBodyData &) = default ;
    GetFeatureConfigResponseBodyData(GetFeatureConfigResponseBodyData &&) = default ;
    GetFeatureConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureConfigResponseBodyData() = default ;
    GetFeatureConfigResponseBodyData& operator=(const GetFeatureConfigResponseBodyData &) = default ;
    GetFeatureConfigResponseBodyData& operator=(GetFeatureConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureConf_ == nullptr
        && return this->resourceType_ == nullptr && return this->serviceCode_ == nullptr && return this->type_ == nullptr && return this->uid_ == nullptr; };
    // featureConf Field Functions 
    bool hasFeatureConf() const { return this->featureConf_ != nullptr;};
    void deleteFeatureConf() { this->featureConf_ = nullptr;};
    inline const vector<Darabonba::Json> & featureConf() const { DARABONBA_PTR_GET_CONST(featureConf_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> featureConf() { DARABONBA_PTR_GET(featureConf_, vector<Darabonba::Json>) };
    inline GetFeatureConfigResponseBodyData& setFeatureConf(const vector<Darabonba::Json> & featureConf) { DARABONBA_PTR_SET_VALUE(featureConf_, featureConf) };
    inline GetFeatureConfigResponseBodyData& setFeatureConf(vector<Darabonba::Json> && featureConf) { DARABONBA_PTR_SET_RVALUE(featureConf_, featureConf) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetFeatureConfigResponseBodyData& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline GetFeatureConfigResponseBodyData& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetFeatureConfigResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline GetFeatureConfigResponseBodyData& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // List of feature configurations
    std::shared_ptr<vector<Darabonba::Json>> featureConf_ = nullptr;
    // Resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // Service code.
    std::shared_ptr<string> serviceCode_ = nullptr;
    // Type
    std::shared_ptr<string> type_ = nullptr;
    // UID.
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
