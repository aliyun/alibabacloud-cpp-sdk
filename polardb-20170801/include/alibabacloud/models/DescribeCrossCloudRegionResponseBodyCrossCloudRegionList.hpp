// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDREGIONRESPONSEBODYCROSSCLOUDREGIONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDREGIONRESPONSEBODYCROSSCLOUDREGIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeCrossCloudRegionResponseBodyCrossCloudRegionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossCloudRegionResponseBodyCrossCloudRegionList& obj) { 
      DARABONBA_PTR_TO_JSON(CrossCloudRegionId, crossCloudRegionId_);
      DARABONBA_PTR_TO_JSON(CrossCloudRegionName, crossCloudRegionName_);
      DARABONBA_PTR_TO_JSON(CrossCloudZoneList, crossCloudZoneList_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossCloudRegionResponseBodyCrossCloudRegionList& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossCloudRegionId, crossCloudRegionId_);
      DARABONBA_PTR_FROM_JSON(CrossCloudRegionName, crossCloudRegionName_);
      DARABONBA_PTR_FROM_JSON(CrossCloudZoneList, crossCloudZoneList_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    DescribeCrossCloudRegionResponseBodyCrossCloudRegionList() = default ;
    DescribeCrossCloudRegionResponseBodyCrossCloudRegionList(const DescribeCrossCloudRegionResponseBodyCrossCloudRegionList &) = default ;
    DescribeCrossCloudRegionResponseBodyCrossCloudRegionList(DescribeCrossCloudRegionResponseBodyCrossCloudRegionList &&) = default ;
    DescribeCrossCloudRegionResponseBodyCrossCloudRegionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossCloudRegionResponseBodyCrossCloudRegionList() = default ;
    DescribeCrossCloudRegionResponseBodyCrossCloudRegionList& operator=(const DescribeCrossCloudRegionResponseBodyCrossCloudRegionList &) = default ;
    DescribeCrossCloudRegionResponseBodyCrossCloudRegionList& operator=(DescribeCrossCloudRegionResponseBodyCrossCloudRegionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->crossCloudRegionId_ != nullptr
        && this->crossCloudRegionName_ != nullptr && this->crossCloudZoneList_ != nullptr && this->projectId_ != nullptr; };
    // crossCloudRegionId Field Functions 
    bool hasCrossCloudRegionId() const { return this->crossCloudRegionId_ != nullptr;};
    void deleteCrossCloudRegionId() { this->crossCloudRegionId_ = nullptr;};
    inline string crossCloudRegionId() const { DARABONBA_PTR_GET_DEFAULT(crossCloudRegionId_, "") };
    inline DescribeCrossCloudRegionResponseBodyCrossCloudRegionList& setCrossCloudRegionId(string crossCloudRegionId) { DARABONBA_PTR_SET_VALUE(crossCloudRegionId_, crossCloudRegionId) };


    // crossCloudRegionName Field Functions 
    bool hasCrossCloudRegionName() const { return this->crossCloudRegionName_ != nullptr;};
    void deleteCrossCloudRegionName() { this->crossCloudRegionName_ = nullptr;};
    inline string crossCloudRegionName() const { DARABONBA_PTR_GET_DEFAULT(crossCloudRegionName_, "") };
    inline DescribeCrossCloudRegionResponseBodyCrossCloudRegionList& setCrossCloudRegionName(string crossCloudRegionName) { DARABONBA_PTR_SET_VALUE(crossCloudRegionName_, crossCloudRegionName) };


    // crossCloudZoneList Field Functions 
    bool hasCrossCloudZoneList() const { return this->crossCloudZoneList_ != nullptr;};
    void deleteCrossCloudZoneList() { this->crossCloudZoneList_ = nullptr;};
    inline const vector<Models::DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList> & crossCloudZoneList() const { DARABONBA_PTR_GET_CONST(crossCloudZoneList_, vector<Models::DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList>) };
    inline vector<Models::DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList> crossCloudZoneList() { DARABONBA_PTR_GET(crossCloudZoneList_, vector<Models::DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList>) };
    inline DescribeCrossCloudRegionResponseBodyCrossCloudRegionList& setCrossCloudZoneList(const vector<Models::DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList> & crossCloudZoneList) { DARABONBA_PTR_SET_VALUE(crossCloudZoneList_, crossCloudZoneList) };
    inline DescribeCrossCloudRegionResponseBodyCrossCloudRegionList& setCrossCloudZoneList(vector<Models::DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList> && crossCloudZoneList) { DARABONBA_PTR_SET_RVALUE(crossCloudZoneList_, crossCloudZoneList) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DescribeCrossCloudRegionResponseBodyCrossCloudRegionList& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    std::shared_ptr<string> crossCloudRegionId_ = nullptr;
    std::shared_ptr<string> crossCloudRegionName_ = nullptr;
    std::shared_ptr<vector<Models::DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList>> crossCloudZoneList_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
