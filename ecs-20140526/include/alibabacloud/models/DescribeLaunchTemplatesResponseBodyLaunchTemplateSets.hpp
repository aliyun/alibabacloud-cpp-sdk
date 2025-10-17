// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAUNCHTEMPLATESRESPONSEBODYLAUNCHTEMPLATESETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAUNCHTEMPLATESRESPONSEBODYLAUNCHTEMPLATESETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeLaunchTemplatesResponseBodyLaunchTemplateSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLaunchTemplatesResponseBodyLaunchTemplateSets& obj) { 
      DARABONBA_PTR_TO_JSON(LaunchTemplateSet, launchTemplateSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLaunchTemplatesResponseBodyLaunchTemplateSets& obj) { 
      DARABONBA_PTR_FROM_JSON(LaunchTemplateSet, launchTemplateSet_);
    };
    DescribeLaunchTemplatesResponseBodyLaunchTemplateSets() = default ;
    DescribeLaunchTemplatesResponseBodyLaunchTemplateSets(const DescribeLaunchTemplatesResponseBodyLaunchTemplateSets &) = default ;
    DescribeLaunchTemplatesResponseBodyLaunchTemplateSets(DescribeLaunchTemplatesResponseBodyLaunchTemplateSets &&) = default ;
    DescribeLaunchTemplatesResponseBodyLaunchTemplateSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLaunchTemplatesResponseBodyLaunchTemplateSets() = default ;
    DescribeLaunchTemplatesResponseBodyLaunchTemplateSets& operator=(const DescribeLaunchTemplatesResponseBodyLaunchTemplateSets &) = default ;
    DescribeLaunchTemplatesResponseBodyLaunchTemplateSets& operator=(DescribeLaunchTemplatesResponseBodyLaunchTemplateSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->launchTemplateSet_ == nullptr; };
    // launchTemplateSet Field Functions 
    bool hasLaunchTemplateSet() const { return this->launchTemplateSet_ != nullptr;};
    void deleteLaunchTemplateSet() { this->launchTemplateSet_ = nullptr;};
    inline const vector<Models::DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet> & launchTemplateSet() const { DARABONBA_PTR_GET_CONST(launchTemplateSet_, vector<Models::DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet>) };
    inline vector<Models::DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet> launchTemplateSet() { DARABONBA_PTR_GET(launchTemplateSet_, vector<Models::DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet>) };
    inline DescribeLaunchTemplatesResponseBodyLaunchTemplateSets& setLaunchTemplateSet(const vector<Models::DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet> & launchTemplateSet) { DARABONBA_PTR_SET_VALUE(launchTemplateSet_, launchTemplateSet) };
    inline DescribeLaunchTemplatesResponseBodyLaunchTemplateSets& setLaunchTemplateSet(vector<Models::DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet> && launchTemplateSet) { DARABONBA_PTR_SET_RVALUE(launchTemplateSet_, launchTemplateSet) };


  protected:
    std::shared_ptr<vector<Models::DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet>> launchTemplateSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
