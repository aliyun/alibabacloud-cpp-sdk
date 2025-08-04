// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBNETSRESPONSEBODYSUBNETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBNETSRESPONSEBODYSUBNETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeSubnetsResponseBodySubnets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubnetsResponseBodySubnets& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_TO_JSON(TotalEdsCount, totalEdsCount_);
      DARABONBA_PTR_TO_JSON(TotalEdsCountForGroup, totalEdsCountForGroup_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubnetsResponseBodySubnets& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_FROM_JSON(TotalEdsCount, totalEdsCount_);
      DARABONBA_PTR_FROM_JSON(TotalEdsCountForGroup, totalEdsCountForGroup_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeSubnetsResponseBodySubnets() = default ;
    DescribeSubnetsResponseBodySubnets(const DescribeSubnetsResponseBodySubnets &) = default ;
    DescribeSubnetsResponseBodySubnets(DescribeSubnetsResponseBodySubnets &&) = default ;
    DescribeSubnetsResponseBodySubnets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubnetsResponseBodySubnets() = default ;
    DescribeSubnetsResponseBodySubnets& operator=(const DescribeSubnetsResponseBodySubnets &) = default ;
    DescribeSubnetsResponseBodySubnets& operator=(DescribeSubnetsResponseBodySubnets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidrBlock_ != nullptr
        && this->name_ != nullptr && this->officeSiteId_ != nullptr && this->status_ != nullptr && this->subnetId_ != nullptr && this->totalEdsCount_ != nullptr
        && this->totalEdsCountForGroup_ != nullptr && this->zoneId_ != nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeSubnetsResponseBodySubnets& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSubnetsResponseBodySubnets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeSubnetsResponseBodySubnets& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSubnetsResponseBodySubnets& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subnetId Field Functions 
    bool hasSubnetId() const { return this->subnetId_ != nullptr;};
    void deleteSubnetId() { this->subnetId_ = nullptr;};
    inline string subnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
    inline DescribeSubnetsResponseBodySubnets& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


    // totalEdsCount Field Functions 
    bool hasTotalEdsCount() const { return this->totalEdsCount_ != nullptr;};
    void deleteTotalEdsCount() { this->totalEdsCount_ = nullptr;};
    inline int32_t totalEdsCount() const { DARABONBA_PTR_GET_DEFAULT(totalEdsCount_, 0) };
    inline DescribeSubnetsResponseBodySubnets& setTotalEdsCount(int32_t totalEdsCount) { DARABONBA_PTR_SET_VALUE(totalEdsCount_, totalEdsCount) };


    // totalEdsCountForGroup Field Functions 
    bool hasTotalEdsCountForGroup() const { return this->totalEdsCountForGroup_ != nullptr;};
    void deleteTotalEdsCountForGroup() { this->totalEdsCountForGroup_ = nullptr;};
    inline int32_t totalEdsCountForGroup() const { DARABONBA_PTR_GET_DEFAULT(totalEdsCountForGroup_, 0) };
    inline DescribeSubnetsResponseBodySubnets& setTotalEdsCountForGroup(int32_t totalEdsCountForGroup) { DARABONBA_PTR_SET_VALUE(totalEdsCountForGroup_, totalEdsCountForGroup) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeSubnetsResponseBodySubnets& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> cidrBlock_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> officeSiteId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> subnetId_ = nullptr;
    std::shared_ptr<int32_t> totalEdsCount_ = nullptr;
    std::shared_ptr<int32_t> totalEdsCountForGroup_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
