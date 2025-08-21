// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKAVAILABLERESOURCEINFORESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCEABILITY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKAVAILABLERESOURCEINFORESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCEABILITY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility& obj) { 
      DARABONBA_PTR_TO_JSON(Ability, ability_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility& obj) { 
      DARABONBA_PTR_FROM_JSON(Ability, ability_);
    };
    DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility() = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility(const DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility &) = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility(DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility &&) = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility() = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility& operator=(const DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility &) = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility& operator=(DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ability_ != nullptr; };
    // ability Field Functions 
    bool hasAbility() const { return this->ability_ != nullptr;};
    void deleteAbility() { this->ability_ = nullptr;};
    inline const vector<string> & ability() const { DARABONBA_PTR_GET_CONST(ability_, vector<string>) };
    inline vector<string> ability() { DARABONBA_PTR_GET(ability_, vector<string>) };
    inline DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility& setAbility(const vector<string> & ability) { DARABONBA_PTR_SET_VALUE(ability_, ability) };
    inline DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility& setAbility(vector<string> && ability) { DARABONBA_PTR_SET_RVALUE(ability_, ability) };


  protected:
    std::shared_ptr<vector<string>> ability_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
