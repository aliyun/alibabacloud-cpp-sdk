// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYSTORAGEREQUIREMENTSRESPONSEBODYSTORAGEREQUIREMENTSMETADATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYSTORAGEREQUIREMENTSRESPONSEBODYSTORAGEREQUIREMENTSMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(annotations, annotations_);
      DARABONBA_PTR_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
    };
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata() = default ;
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata(const ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata &) = default ;
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata(ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata &&) = default ;
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata() = default ;
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata& operator=(const ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata &) = default ;
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata& operator=(ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotations_ == nullptr
        && return this->labels_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline const map<string, string> & annotations() const { DARABONBA_PTR_GET_CONST(annotations_, map<string, string>) };
    inline map<string, string> annotations() { DARABONBA_PTR_GET(annotations_, map<string, string>) };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata& setAnnotations(const map<string, string> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata& setAnnotations(map<string, string> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const map<string, string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
    inline map<string, string> labels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // Annotations
    std::shared_ptr<map<string, string>> annotations_ = nullptr;
    // Resource labels
    std::shared_ptr<map<string, string>> labels_ = nullptr;
    // Resource name
    std::shared_ptr<string> name_ = nullptr;
    // Namespace
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
