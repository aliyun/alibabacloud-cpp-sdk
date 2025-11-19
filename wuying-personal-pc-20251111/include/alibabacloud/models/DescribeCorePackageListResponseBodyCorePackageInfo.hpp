// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOREPACKAGELISTRESPONSEBODYCOREPACKAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOREPACKAGELISTRESPONSEBODYCOREPACKAGEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class DescribeCorePackageListResponseBodyCorePackageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCorePackageListResponseBodyCorePackageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CorePackageList, corePackageList_);
      DARABONBA_PTR_TO_JSON(SummaryRemainingCoreHours, summaryRemainingCoreHours_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCorePackageListResponseBodyCorePackageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CorePackageList, corePackageList_);
      DARABONBA_PTR_FROM_JSON(SummaryRemainingCoreHours, summaryRemainingCoreHours_);
    };
    DescribeCorePackageListResponseBodyCorePackageInfo() = default ;
    DescribeCorePackageListResponseBodyCorePackageInfo(const DescribeCorePackageListResponseBodyCorePackageInfo &) = default ;
    DescribeCorePackageListResponseBodyCorePackageInfo(DescribeCorePackageListResponseBodyCorePackageInfo &&) = default ;
    DescribeCorePackageListResponseBodyCorePackageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCorePackageListResponseBodyCorePackageInfo() = default ;
    DescribeCorePackageListResponseBodyCorePackageInfo& operator=(const DescribeCorePackageListResponseBodyCorePackageInfo &) = default ;
    DescribeCorePackageListResponseBodyCorePackageInfo& operator=(DescribeCorePackageListResponseBodyCorePackageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->corePackageList_ == nullptr
        && return this->summaryRemainingCoreHours_ == nullptr; };
    // corePackageList Field Functions 
    bool hasCorePackageList() const { return this->corePackageList_ != nullptr;};
    void deleteCorePackageList() { this->corePackageList_ = nullptr;};
    inline const vector<Models::DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList> & corePackageList() const { DARABONBA_PTR_GET_CONST(corePackageList_, vector<Models::DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList>) };
    inline vector<Models::DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList> corePackageList() { DARABONBA_PTR_GET(corePackageList_, vector<Models::DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList>) };
    inline DescribeCorePackageListResponseBodyCorePackageInfo& setCorePackageList(const vector<Models::DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList> & corePackageList) { DARABONBA_PTR_SET_VALUE(corePackageList_, corePackageList) };
    inline DescribeCorePackageListResponseBodyCorePackageInfo& setCorePackageList(vector<Models::DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList> && corePackageList) { DARABONBA_PTR_SET_RVALUE(corePackageList_, corePackageList) };


    // summaryRemainingCoreHours Field Functions 
    bool hasSummaryRemainingCoreHours() const { return this->summaryRemainingCoreHours_ != nullptr;};
    void deleteSummaryRemainingCoreHours() { this->summaryRemainingCoreHours_ = nullptr;};
    inline float summaryRemainingCoreHours() const { DARABONBA_PTR_GET_DEFAULT(summaryRemainingCoreHours_, 0.0) };
    inline DescribeCorePackageListResponseBodyCorePackageInfo& setSummaryRemainingCoreHours(float summaryRemainingCoreHours) { DARABONBA_PTR_SET_VALUE(summaryRemainingCoreHours_, summaryRemainingCoreHours) };


  protected:
    std::shared_ptr<vector<Models::DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList>> corePackageList_ = nullptr;
    std::shared_ptr<float> summaryRemainingCoreHours_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
