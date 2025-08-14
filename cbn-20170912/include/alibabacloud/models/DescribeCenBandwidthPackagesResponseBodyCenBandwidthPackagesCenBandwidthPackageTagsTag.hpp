// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENBANDWIDTHPACKAGESRESPONSEBODYCENBANDWIDTHPACKAGESCENBANDWIDTHPACKAGETAGSTAG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENBANDWIDTHPACKAGESRESPONSEBODYCENBANDWIDTHPACKAGESCENBANDWIDTHPACKAGETAGSTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag() = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag(const DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag &) = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag(DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag &&) = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag() = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag& operator=(const DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag &) = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag& operator=(DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
