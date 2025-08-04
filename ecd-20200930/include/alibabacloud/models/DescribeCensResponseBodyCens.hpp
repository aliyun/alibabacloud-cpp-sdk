// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENSRESPONSEBODYCENS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENSRESPONSEBODYCENS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCensResponseBodyCensPackageIds.hpp>
#include <alibabacloud/models/DescribeCensResponseBodyCensTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeCensResponseBodyCens : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCensResponseBodyCens& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Ipv6Level, ipv6Level_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PackageIds, packageIds_);
      DARABONBA_PTR_TO_JSON(ProtectionLevel, protectionLevel_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCensResponseBodyCens& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Ipv6Level, ipv6Level_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PackageIds, packageIds_);
      DARABONBA_PTR_FROM_JSON(ProtectionLevel, protectionLevel_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeCensResponseBodyCens() = default ;
    DescribeCensResponseBodyCens(const DescribeCensResponseBodyCens &) = default ;
    DescribeCensResponseBodyCens(DescribeCensResponseBodyCens &&) = default ;
    DescribeCensResponseBodyCens(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCensResponseBodyCens() = default ;
    DescribeCensResponseBodyCens& operator=(const DescribeCensResponseBodyCens &) = default ;
    DescribeCensResponseBodyCens& operator=(DescribeCensResponseBodyCens &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->creationTime_ != nullptr && this->description_ != nullptr && this->ipv6Level_ != nullptr && this->name_ != nullptr && this->packageIds_ != nullptr
        && this->protectionLevel_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeCensResponseBodyCens& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeCensResponseBodyCens& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCensResponseBodyCens& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ipv6Level Field Functions 
    bool hasIpv6Level() const { return this->ipv6Level_ != nullptr;};
    void deleteIpv6Level() { this->ipv6Level_ = nullptr;};
    inline string ipv6Level() const { DARABONBA_PTR_GET_DEFAULT(ipv6Level_, "") };
    inline DescribeCensResponseBodyCens& setIpv6Level(string ipv6Level) { DARABONBA_PTR_SET_VALUE(ipv6Level_, ipv6Level) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCensResponseBodyCens& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // packageIds Field Functions 
    bool hasPackageIds() const { return this->packageIds_ != nullptr;};
    void deletePackageIds() { this->packageIds_ = nullptr;};
    inline const vector<Models::DescribeCensResponseBodyCensPackageIds> & packageIds() const { DARABONBA_PTR_GET_CONST(packageIds_, vector<Models::DescribeCensResponseBodyCensPackageIds>) };
    inline vector<Models::DescribeCensResponseBodyCensPackageIds> packageIds() { DARABONBA_PTR_GET(packageIds_, vector<Models::DescribeCensResponseBodyCensPackageIds>) };
    inline DescribeCensResponseBodyCens& setPackageIds(const vector<Models::DescribeCensResponseBodyCensPackageIds> & packageIds) { DARABONBA_PTR_SET_VALUE(packageIds_, packageIds) };
    inline DescribeCensResponseBodyCens& setPackageIds(vector<Models::DescribeCensResponseBodyCensPackageIds> && packageIds) { DARABONBA_PTR_SET_RVALUE(packageIds_, packageIds) };


    // protectionLevel Field Functions 
    bool hasProtectionLevel() const { return this->protectionLevel_ != nullptr;};
    void deleteProtectionLevel() { this->protectionLevel_ = nullptr;};
    inline string protectionLevel() const { DARABONBA_PTR_GET_DEFAULT(protectionLevel_, "") };
    inline DescribeCensResponseBodyCens& setProtectionLevel(string protectionLevel) { DARABONBA_PTR_SET_VALUE(protectionLevel_, protectionLevel) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCensResponseBodyCens& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeCensResponseBodyCensTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeCensResponseBodyCensTags>) };
    inline vector<Models::DescribeCensResponseBodyCensTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeCensResponseBodyCensTags>) };
    inline DescribeCensResponseBodyCens& setTags(const vector<Models::DescribeCensResponseBodyCensTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeCensResponseBodyCens& setTags(vector<Models::DescribeCensResponseBodyCensTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the CEN instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The time when the CEN instance was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the CEN instance.
    std::shared_ptr<string> description_ = nullptr;
    // The IPv6 level.
    // 
    // >  IPv6 is not supported.
    // 
    // Valid value:
    // 
    // *   DISABLED
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> ipv6Level_ = nullptr;
    // The name of the CEN instance.
    std::shared_ptr<string> name_ = nullptr;
    // The bandwidth plans that are bound to the CEN instance.
    std::shared_ptr<vector<Models::DescribeCensResponseBodyCensPackageIds>> packageIds_ = nullptr;
    // The tolerated level of CIDR block conflict.
    // 
    // Valid value:
    // 
    // *   REDUCED: CIDR block conflicts are allowed, but the conflicting CIDR blocks cannot be identical.
    std::shared_ptr<string> protectionLevel_ = nullptr;
    // The status of the CEN instance.
    // 
    // Valid values:
    // 
    // *   Creating
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Active
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Deleting
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the CEN instance.
    std::shared_ptr<vector<Models::DescribeCensResponseBodyCensTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
