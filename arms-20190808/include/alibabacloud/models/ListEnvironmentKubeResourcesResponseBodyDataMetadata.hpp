// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTKUBERESOURCESRESPONSEBODYDATAMETADATA_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTKUBERESOURCESRESPONSEBODYDATAMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentKubeResourcesResponseBodyDataMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentKubeResourcesResponseBodyDataMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(Annotations, annotations_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentKubeResourcesResponseBodyDataMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    ListEnvironmentKubeResourcesResponseBodyDataMetadata() = default ;
    ListEnvironmentKubeResourcesResponseBodyDataMetadata(const ListEnvironmentKubeResourcesResponseBodyDataMetadata &) = default ;
    ListEnvironmentKubeResourcesResponseBodyDataMetadata(ListEnvironmentKubeResourcesResponseBodyDataMetadata &&) = default ;
    ListEnvironmentKubeResourcesResponseBodyDataMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentKubeResourcesResponseBodyDataMetadata() = default ;
    ListEnvironmentKubeResourcesResponseBodyDataMetadata& operator=(const ListEnvironmentKubeResourcesResponseBodyDataMetadata &) = default ;
    ListEnvironmentKubeResourcesResponseBodyDataMetadata& operator=(ListEnvironmentKubeResourcesResponseBodyDataMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->annotations_ != nullptr
        && this->labels_ != nullptr && this->name_ != nullptr && this->namespace_ != nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline const map<string, string> & annotations() const { DARABONBA_PTR_GET_CONST(annotations_, map<string, string>) };
    inline map<string, string> annotations() { DARABONBA_PTR_GET(annotations_, map<string, string>) };
    inline ListEnvironmentKubeResourcesResponseBodyDataMetadata& setAnnotations(const map<string, string> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
    inline ListEnvironmentKubeResourcesResponseBodyDataMetadata& setAnnotations(map<string, string> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const map<string, string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
    inline map<string, string> labels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
    inline ListEnvironmentKubeResourcesResponseBodyDataMetadata& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ListEnvironmentKubeResourcesResponseBodyDataMetadata& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEnvironmentKubeResourcesResponseBodyDataMetadata& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListEnvironmentKubeResourcesResponseBodyDataMetadata& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The annotations.
    std::shared_ptr<map<string, string>> annotations_ = nullptr;
    // The tags.
    std::shared_ptr<map<string, string>> labels_ = nullptr;
    // The resource name.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
