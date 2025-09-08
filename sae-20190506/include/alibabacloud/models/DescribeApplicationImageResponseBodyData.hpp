// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONIMAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONIMAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationImageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationImageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CrUrl, crUrl_);
      DARABONBA_PTR_TO_JSON(Logo, logo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_TO_JSON(RepoOriginType, repoOriginType_);
      DARABONBA_PTR_TO_JSON(RepoTag, repoTag_);
      DARABONBA_PTR_TO_JSON(RepoType, repoType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationImageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CrUrl, crUrl_);
      DARABONBA_PTR_FROM_JSON(Logo, logo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_FROM_JSON(RepoOriginType, repoOriginType_);
      DARABONBA_PTR_FROM_JSON(RepoTag, repoTag_);
      DARABONBA_PTR_FROM_JSON(RepoType, repoType_);
    };
    DescribeApplicationImageResponseBodyData() = default ;
    DescribeApplicationImageResponseBodyData(const DescribeApplicationImageResponseBodyData &) = default ;
    DescribeApplicationImageResponseBodyData(DescribeApplicationImageResponseBodyData &&) = default ;
    DescribeApplicationImageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationImageResponseBodyData() = default ;
    DescribeApplicationImageResponseBodyData& operator=(const DescribeApplicationImageResponseBodyData &) = default ;
    DescribeApplicationImageResponseBodyData& operator=(DescribeApplicationImageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->crUrl_ != nullptr
        && this->logo_ != nullptr && this->regionId_ != nullptr && this->repoName_ != nullptr && this->repoNamespace_ != nullptr && this->repoOriginType_ != nullptr
        && this->repoTag_ != nullptr && this->repoType_ != nullptr; };
    // crUrl Field Functions 
    bool hasCrUrl() const { return this->crUrl_ != nullptr;};
    void deleteCrUrl() { this->crUrl_ = nullptr;};
    inline string crUrl() const { DARABONBA_PTR_GET_DEFAULT(crUrl_, "") };
    inline DescribeApplicationImageResponseBodyData& setCrUrl(string crUrl) { DARABONBA_PTR_SET_VALUE(crUrl_, crUrl) };


    // logo Field Functions 
    bool hasLogo() const { return this->logo_ != nullptr;};
    void deleteLogo() { this->logo_ = nullptr;};
    inline string logo() const { DARABONBA_PTR_GET_DEFAULT(logo_, "") };
    inline DescribeApplicationImageResponseBodyData& setLogo(string logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApplicationImageResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DescribeApplicationImageResponseBodyData& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string repoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline DescribeApplicationImageResponseBodyData& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    // repoOriginType Field Functions 
    bool hasRepoOriginType() const { return this->repoOriginType_ != nullptr;};
    void deleteRepoOriginType() { this->repoOriginType_ = nullptr;};
    inline string repoOriginType() const { DARABONBA_PTR_GET_DEFAULT(repoOriginType_, "") };
    inline DescribeApplicationImageResponseBodyData& setRepoOriginType(string repoOriginType) { DARABONBA_PTR_SET_VALUE(repoOriginType_, repoOriginType) };


    // repoTag Field Functions 
    bool hasRepoTag() const { return this->repoTag_ != nullptr;};
    void deleteRepoTag() { this->repoTag_ = nullptr;};
    inline string repoTag() const { DARABONBA_PTR_GET_DEFAULT(repoTag_, "") };
    inline DescribeApplicationImageResponseBodyData& setRepoTag(string repoTag) { DARABONBA_PTR_SET_VALUE(repoTag_, repoTag) };


    // repoType Field Functions 
    bool hasRepoType() const { return this->repoType_ != nullptr;};
    void deleteRepoType() { this->repoType_ = nullptr;};
    inline string repoType() const { DARABONBA_PTR_GET_DEFAULT(repoType_, "") };
    inline DescribeApplicationImageResponseBodyData& setRepoType(string repoType) { DARABONBA_PTR_SET_VALUE(repoType_, repoType) };


  protected:
    // This parameter is reserved.
    std::shared_ptr<string> crUrl_ = nullptr;
    // This parameter is reserved.
    std::shared_ptr<string> logo_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The name of the namespace to which the image repository belongs.
    std::shared_ptr<string> repoNamespace_ = nullptr;
    // The type of the repository. Only Container Registry is supported.
    std::shared_ptr<string> repoOriginType_ = nullptr;
    // The tag of the image.
    std::shared_ptr<string> repoTag_ = nullptr;
    // This parameter is reserved.
    std::shared_ptr<string> repoType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
