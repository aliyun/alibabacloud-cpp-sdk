// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTLIFECYCLERULERESPONSEBODYPOLICIESFILTER_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTLIFECYCLERULERESPONSEBODYPOLICIESFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetArtifactLifecycleRuleResponseBodyPoliciesFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArtifactLifecycleRuleResponseBodyPoliciesFilter& obj) { 
      DARABONBA_PTR_TO_JSON(TagWildcard, tagWildcard_);
    };
    friend void from_json(const Darabonba::Json& j, GetArtifactLifecycleRuleResponseBodyPoliciesFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(TagWildcard, tagWildcard_);
    };
    GetArtifactLifecycleRuleResponseBodyPoliciesFilter() = default ;
    GetArtifactLifecycleRuleResponseBodyPoliciesFilter(const GetArtifactLifecycleRuleResponseBodyPoliciesFilter &) = default ;
    GetArtifactLifecycleRuleResponseBodyPoliciesFilter(GetArtifactLifecycleRuleResponseBodyPoliciesFilter &&) = default ;
    GetArtifactLifecycleRuleResponseBodyPoliciesFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArtifactLifecycleRuleResponseBodyPoliciesFilter() = default ;
    GetArtifactLifecycleRuleResponseBodyPoliciesFilter& operator=(const GetArtifactLifecycleRuleResponseBodyPoliciesFilter &) = default ;
    GetArtifactLifecycleRuleResponseBodyPoliciesFilter& operator=(GetArtifactLifecycleRuleResponseBodyPoliciesFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagWildcard_ == nullptr; };
    // tagWildcard Field Functions 
    bool hasTagWildcard() const { return this->tagWildcard_ != nullptr;};
    void deleteTagWildcard() { this->tagWildcard_ = nullptr;};
    inline string tagWildcard() const { DARABONBA_PTR_GET_DEFAULT(tagWildcard_, "") };
    inline GetArtifactLifecycleRuleResponseBodyPoliciesFilter& setTagWildcard(string tagWildcard) { DARABONBA_PTR_SET_VALUE(tagWildcard_, tagWildcard) };


  protected:
    std::shared_ptr<string> tagWildcard_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
