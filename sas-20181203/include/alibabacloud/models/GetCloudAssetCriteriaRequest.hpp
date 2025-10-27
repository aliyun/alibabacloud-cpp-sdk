// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDASSETCRITERIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDASSETCRITERIAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCloudAssetCriteriaRequestCloudAssetTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCloudAssetCriteriaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudAssetCriteriaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAssetTypes, cloudAssetTypes_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAssetCriteriaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAssetTypes, cloudAssetTypes_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetCloudAssetCriteriaRequest() = default ;
    GetCloudAssetCriteriaRequest(const GetCloudAssetCriteriaRequest &) = default ;
    GetCloudAssetCriteriaRequest(GetCloudAssetCriteriaRequest &&) = default ;
    GetCloudAssetCriteriaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudAssetCriteriaRequest() = default ;
    GetCloudAssetCriteriaRequest& operator=(const GetCloudAssetCriteriaRequest &) = default ;
    GetCloudAssetCriteriaRequest& operator=(GetCloudAssetCriteriaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudAssetTypes_ == nullptr
        && return this->value_ == nullptr; };
    // cloudAssetTypes Field Functions 
    bool hasCloudAssetTypes() const { return this->cloudAssetTypes_ != nullptr;};
    void deleteCloudAssetTypes() { this->cloudAssetTypes_ = nullptr;};
    inline const vector<GetCloudAssetCriteriaRequestCloudAssetTypes> & cloudAssetTypes() const { DARABONBA_PTR_GET_CONST(cloudAssetTypes_, vector<GetCloudAssetCriteriaRequestCloudAssetTypes>) };
    inline vector<GetCloudAssetCriteriaRequestCloudAssetTypes> cloudAssetTypes() { DARABONBA_PTR_GET(cloudAssetTypes_, vector<GetCloudAssetCriteriaRequestCloudAssetTypes>) };
    inline GetCloudAssetCriteriaRequest& setCloudAssetTypes(const vector<GetCloudAssetCriteriaRequestCloudAssetTypes> & cloudAssetTypes) { DARABONBA_PTR_SET_VALUE(cloudAssetTypes_, cloudAssetTypes) };
    inline GetCloudAssetCriteriaRequest& setCloudAssetTypes(vector<GetCloudAssetCriteriaRequestCloudAssetTypes> && cloudAssetTypes) { DARABONBA_PTR_SET_RVALUE(cloudAssetTypes_, cloudAssetTypes) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetCloudAssetCriteriaRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The types of cloud assets.
    std::shared_ptr<vector<GetCloudAssetCriteriaRequestCloudAssetTypes>> cloudAssetTypes_ = nullptr;
    // The keyword for fuzzy search when you query the asset.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
