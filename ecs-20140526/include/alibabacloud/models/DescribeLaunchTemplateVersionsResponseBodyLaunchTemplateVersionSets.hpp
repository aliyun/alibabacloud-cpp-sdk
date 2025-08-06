// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAUNCHTEMPLATEVERSIONSRESPONSEBODYLAUNCHTEMPLATEVERSIONSETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAUNCHTEMPLATEVERSIONSRESPONSEBODYLAUNCHTEMPLATEVERSIONSETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSetsLaunchTemplateVersionSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets& obj) { 
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersionSet, launchTemplateVersionSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets& obj) { 
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersionSet, launchTemplateVersionSet_);
    };
    DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets() = default ;
    DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets(const DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets &) = default ;
    DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets(DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets &&) = default ;
    DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets() = default ;
    DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets& operator=(const DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets &) = default ;
    DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets& operator=(DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->launchTemplateVersionSet_ != nullptr; };
    // launchTemplateVersionSet Field Functions 
    bool hasLaunchTemplateVersionSet() const { return this->launchTemplateVersionSet_ != nullptr;};
    void deleteLaunchTemplateVersionSet() { this->launchTemplateVersionSet_ = nullptr;};
    inline const vector<Models::DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSetsLaunchTemplateVersionSet> & launchTemplateVersionSet() const { DARABONBA_PTR_GET_CONST(launchTemplateVersionSet_, vector<Models::DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSetsLaunchTemplateVersionSet>) };
    inline vector<Models::DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSetsLaunchTemplateVersionSet> launchTemplateVersionSet() { DARABONBA_PTR_GET(launchTemplateVersionSet_, vector<Models::DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSetsLaunchTemplateVersionSet>) };
    inline DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets& setLaunchTemplateVersionSet(const vector<Models::DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSetsLaunchTemplateVersionSet> & launchTemplateVersionSet) { DARABONBA_PTR_SET_VALUE(launchTemplateVersionSet_, launchTemplateVersionSet) };
    inline DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets& setLaunchTemplateVersionSet(vector<Models::DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSetsLaunchTemplateVersionSet> && launchTemplateVersionSet) { DARABONBA_PTR_SET_RVALUE(launchTemplateVersionSet_, launchTemplateVersionSet) };


  protected:
    std::shared_ptr<vector<Models::DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSetsLaunchTemplateVersionSet>> launchTemplateVersionSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
