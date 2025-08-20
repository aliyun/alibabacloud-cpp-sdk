// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ARTIFACTLIFECYCLEPOLICYFILTER_HPP_
#define ALIBABACLOUD_MODELS_ARTIFACTLIFECYCLEPOLICYFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ArtifactLifecyclePolicyFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ArtifactLifecyclePolicyFilter& obj) { 
      DARABONBA_PTR_TO_JSON(TagWildcard, tagWildcard_);
    };
    friend void from_json(const Darabonba::Json& j, ArtifactLifecyclePolicyFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(TagWildcard, tagWildcard_);
    };
    ArtifactLifecyclePolicyFilter() = default ;
    ArtifactLifecyclePolicyFilter(const ArtifactLifecyclePolicyFilter &) = default ;
    ArtifactLifecyclePolicyFilter(ArtifactLifecyclePolicyFilter &&) = default ;
    ArtifactLifecyclePolicyFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ArtifactLifecyclePolicyFilter() = default ;
    ArtifactLifecyclePolicyFilter& operator=(const ArtifactLifecyclePolicyFilter &) = default ;
    ArtifactLifecyclePolicyFilter& operator=(ArtifactLifecyclePolicyFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagWildcard_ != nullptr; };
    // tagWildcard Field Functions 
    bool hasTagWildcard() const { return this->tagWildcard_ != nullptr;};
    void deleteTagWildcard() { this->tagWildcard_ = nullptr;};
    inline string tagWildcard() const { DARABONBA_PTR_GET_DEFAULT(tagWildcard_, "") };
    inline ArtifactLifecyclePolicyFilter& setTagWildcard(string tagWildcard) { DARABONBA_PTR_SET_VALUE(tagWildcard_, tagWildcard) };


  protected:
    std::shared_ptr<string> tagWildcard_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
