// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENBANDWIDTHPACKAGESRESPONSEBODYCENBANDWIDTHPACKAGESCENBANDWIDTHPACKAGETAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENBANDWIDTHPACKAGESRESPONSEBODYCENBANDWIDTHPACKAGESCENBANDWIDTHPACKAGETAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags() = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags(const DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags &) = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags(DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags &&) = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags() = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags& operator=(const DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags &) = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags& operator=(DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag>) };
    inline vector<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag>) };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags& setTag(const vector<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags& setTag(vector<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
