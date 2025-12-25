// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACESRESPONSEBODYNAMESPACES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACESRESPONSEBODYNAMESPACES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNamespacesResponseBodyNamespacesElasticResourceSpec.hpp>
#include <alibabacloud/models/DescribeNamespacesResponseBodyNamespacesGuaranteedResourceSpec.hpp>
#include <alibabacloud/models/DescribeNamespacesResponseBodyNamespacesResourceSpec.hpp>
#include <alibabacloud/models/DescribeNamespacesResponseBodyNamespacesResourceUsed.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNamespacesResponseBodyNamespacesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class DescribeNamespacesResponseBodyNamespaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespacesResponseBodyNamespaces& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticResourceSpec, elasticResourceSpec_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GuaranteedResourceSpec, guaranteedResourceSpec_);
      DARABONBA_PTR_TO_JSON(Ha, ha_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpec_);
      DARABONBA_PTR_TO_JSON(ResourceUsed, resourceUsed_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespacesResponseBodyNamespaces& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticResourceSpec, elasticResourceSpec_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GuaranteedResourceSpec, guaranteedResourceSpec_);
      DARABONBA_PTR_FROM_JSON(Ha, ha_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpec_);
      DARABONBA_PTR_FROM_JSON(ResourceUsed, resourceUsed_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeNamespacesResponseBodyNamespaces() = default ;
    DescribeNamespacesResponseBodyNamespaces(const DescribeNamespacesResponseBodyNamespaces &) = default ;
    DescribeNamespacesResponseBodyNamespaces(DescribeNamespacesResponseBodyNamespaces &&) = default ;
    DescribeNamespacesResponseBodyNamespaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespacesResponseBodyNamespaces() = default ;
    DescribeNamespacesResponseBodyNamespaces& operator=(const DescribeNamespacesResponseBodyNamespaces &) = default ;
    DescribeNamespacesResponseBodyNamespaces& operator=(DescribeNamespacesResponseBodyNamespaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticResourceSpec_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->guaranteedResourceSpec_ == nullptr && return this->ha_ == nullptr && return this->namespace_ == nullptr
        && return this->resourceSpec_ == nullptr && return this->resourceUsed_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr; };
    // elasticResourceSpec Field Functions 
    bool hasElasticResourceSpec() const { return this->elasticResourceSpec_ != nullptr;};
    void deleteElasticResourceSpec() { this->elasticResourceSpec_ = nullptr;};
    inline const Models::DescribeNamespacesResponseBodyNamespacesElasticResourceSpec & elasticResourceSpec() const { DARABONBA_PTR_GET_CONST(elasticResourceSpec_, Models::DescribeNamespacesResponseBodyNamespacesElasticResourceSpec) };
    inline Models::DescribeNamespacesResponseBodyNamespacesElasticResourceSpec elasticResourceSpec() { DARABONBA_PTR_GET(elasticResourceSpec_, Models::DescribeNamespacesResponseBodyNamespacesElasticResourceSpec) };
    inline DescribeNamespacesResponseBodyNamespaces& setElasticResourceSpec(const Models::DescribeNamespacesResponseBodyNamespacesElasticResourceSpec & elasticResourceSpec) { DARABONBA_PTR_SET_VALUE(elasticResourceSpec_, elasticResourceSpec) };
    inline DescribeNamespacesResponseBodyNamespaces& setElasticResourceSpec(Models::DescribeNamespacesResponseBodyNamespacesElasticResourceSpec && elasticResourceSpec) { DARABONBA_PTR_SET_RVALUE(elasticResourceSpec_, elasticResourceSpec) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeNamespacesResponseBodyNamespaces& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeNamespacesResponseBodyNamespaces& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // guaranteedResourceSpec Field Functions 
    bool hasGuaranteedResourceSpec() const { return this->guaranteedResourceSpec_ != nullptr;};
    void deleteGuaranteedResourceSpec() { this->guaranteedResourceSpec_ = nullptr;};
    inline const Models::DescribeNamespacesResponseBodyNamespacesGuaranteedResourceSpec & guaranteedResourceSpec() const { DARABONBA_PTR_GET_CONST(guaranteedResourceSpec_, Models::DescribeNamespacesResponseBodyNamespacesGuaranteedResourceSpec) };
    inline Models::DescribeNamespacesResponseBodyNamespacesGuaranteedResourceSpec guaranteedResourceSpec() { DARABONBA_PTR_GET(guaranteedResourceSpec_, Models::DescribeNamespacesResponseBodyNamespacesGuaranteedResourceSpec) };
    inline DescribeNamespacesResponseBodyNamespaces& setGuaranteedResourceSpec(const Models::DescribeNamespacesResponseBodyNamespacesGuaranteedResourceSpec & guaranteedResourceSpec) { DARABONBA_PTR_SET_VALUE(guaranteedResourceSpec_, guaranteedResourceSpec) };
    inline DescribeNamespacesResponseBodyNamespaces& setGuaranteedResourceSpec(Models::DescribeNamespacesResponseBodyNamespacesGuaranteedResourceSpec && guaranteedResourceSpec) { DARABONBA_PTR_SET_RVALUE(guaranteedResourceSpec_, guaranteedResourceSpec) };


    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool ha() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline DescribeNamespacesResponseBodyNamespaces& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeNamespacesResponseBodyNamespaces& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline const Models::DescribeNamespacesResponseBodyNamespacesResourceSpec & resourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, Models::DescribeNamespacesResponseBodyNamespacesResourceSpec) };
    inline Models::DescribeNamespacesResponseBodyNamespacesResourceSpec resourceSpec() { DARABONBA_PTR_GET(resourceSpec_, Models::DescribeNamespacesResponseBodyNamespacesResourceSpec) };
    inline DescribeNamespacesResponseBodyNamespaces& setResourceSpec(const Models::DescribeNamespacesResponseBodyNamespacesResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
    inline DescribeNamespacesResponseBodyNamespaces& setResourceSpec(Models::DescribeNamespacesResponseBodyNamespacesResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


    // resourceUsed Field Functions 
    bool hasResourceUsed() const { return this->resourceUsed_ != nullptr;};
    void deleteResourceUsed() { this->resourceUsed_ = nullptr;};
    inline const Models::DescribeNamespacesResponseBodyNamespacesResourceUsed & resourceUsed() const { DARABONBA_PTR_GET_CONST(resourceUsed_, Models::DescribeNamespacesResponseBodyNamespacesResourceUsed) };
    inline Models::DescribeNamespacesResponseBodyNamespacesResourceUsed resourceUsed() { DARABONBA_PTR_GET(resourceUsed_, Models::DescribeNamespacesResponseBodyNamespacesResourceUsed) };
    inline DescribeNamespacesResponseBodyNamespaces& setResourceUsed(const Models::DescribeNamespacesResponseBodyNamespacesResourceUsed & resourceUsed) { DARABONBA_PTR_SET_VALUE(resourceUsed_, resourceUsed) };
    inline DescribeNamespacesResponseBodyNamespaces& setResourceUsed(Models::DescribeNamespacesResponseBodyNamespacesResourceUsed && resourceUsed) { DARABONBA_PTR_SET_RVALUE(resourceUsed_, resourceUsed) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNamespacesResponseBodyNamespaces& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeNamespacesResponseBodyNamespacesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeNamespacesResponseBodyNamespacesTags>) };
    inline vector<Models::DescribeNamespacesResponseBodyNamespacesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeNamespacesResponseBodyNamespacesTags>) };
    inline DescribeNamespacesResponseBodyNamespaces& setTags(const vector<Models::DescribeNamespacesResponseBodyNamespacesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeNamespacesResponseBodyNamespaces& setTags(vector<Models::DescribeNamespacesResponseBodyNamespacesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<Models::DescribeNamespacesResponseBodyNamespacesElasticResourceSpec> elasticResourceSpec_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<Models::DescribeNamespacesResponseBodyNamespacesGuaranteedResourceSpec> guaranteedResourceSpec_ = nullptr;
    std::shared_ptr<bool> ha_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<Models::DescribeNamespacesResponseBodyNamespacesResourceSpec> resourceSpec_ = nullptr;
    std::shared_ptr<Models::DescribeNamespacesResponseBodyNamespacesResourceUsed> resourceUsed_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::DescribeNamespacesResponseBodyNamespacesTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
