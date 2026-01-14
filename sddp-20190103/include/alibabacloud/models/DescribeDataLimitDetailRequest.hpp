// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATALIMITDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATALIMITDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataLimitDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataLimitDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataLimitDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
    };
    DescribeDataLimitDetailRequest() = default ;
    DescribeDataLimitDetailRequest(const DescribeDataLimitDetailRequest &) = default ;
    DescribeDataLimitDetailRequest(DescribeDataLimitDetailRequest &&) = default ;
    DescribeDataLimitDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataLimitDetailRequest() = default ;
    DescribeDataLimitDetailRequest& operator=(const DescribeDataLimitDetailRequest &) = default ;
    DescribeDataLimitDetailRequest& operator=(DescribeDataLimitDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureType_ == nullptr
        && this->id_ == nullptr && this->lang_ == nullptr && this->networkType_ == nullptr; };
    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline int32_t getFeatureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, 0) };
    inline DescribeDataLimitDetailRequest& setFeatureType(int32_t featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeDataLimitDetailRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDataLimitDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline int32_t getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, 0) };
    inline DescribeDataLimitDetailRequest& setNetworkType(int32_t networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


  protected:
    // This parameter is deprecated.
    shared_ptr<int32_t> featureType_ {};
    // The unique ID of the data asset that you want to query.
    // 
    // > You can call the [DescribeDataLimits](~~DescribeDataLimits~~) operation to query the ID of the data asset.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Simplified Chinese.
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The network type of the data asset that you want to query. Valid values:
    // 
    // *   **1**: virtual private cloud (VPC)
    // *   **2**: classic network
    shared_ptr<int32_t> networkType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
