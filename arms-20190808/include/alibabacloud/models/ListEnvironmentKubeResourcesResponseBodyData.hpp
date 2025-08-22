// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTKUBERESOURCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTKUBERESOURCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEnvironmentKubeResourcesResponseBodyDataMetadata.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentKubeResourcesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentKubeResourcesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(Kind, kind_);
      DARABONBA_PTR_TO_JSON(Metadata, metadata_);
      DARABONBA_ANY_TO_JSON(Spec, spec_);
      DARABONBA_ANY_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentKubeResourcesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(Kind, kind_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
      DARABONBA_ANY_FROM_JSON(Spec, spec_);
      DARABONBA_ANY_FROM_JSON(Status, status_);
    };
    ListEnvironmentKubeResourcesResponseBodyData() = default ;
    ListEnvironmentKubeResourcesResponseBodyData(const ListEnvironmentKubeResourcesResponseBodyData &) = default ;
    ListEnvironmentKubeResourcesResponseBodyData(ListEnvironmentKubeResourcesResponseBodyData &&) = default ;
    ListEnvironmentKubeResourcesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentKubeResourcesResponseBodyData() = default ;
    ListEnvironmentKubeResourcesResponseBodyData& operator=(const ListEnvironmentKubeResourcesResponseBodyData &) = default ;
    ListEnvironmentKubeResourcesResponseBodyData& operator=(ListEnvironmentKubeResourcesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiVersion_ != nullptr
        && this->kind_ != nullptr && this->metadata_ != nullptr && this->spec_ != nullptr && this->status_ != nullptr; };
    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string apiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline ListEnvironmentKubeResourcesResponseBodyData& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline ListEnvironmentKubeResourcesResponseBodyData& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const Models::ListEnvironmentKubeResourcesResponseBodyDataMetadata & metadata() const { DARABONBA_PTR_GET_CONST(metadata_, Models::ListEnvironmentKubeResourcesResponseBodyDataMetadata) };
    inline Models::ListEnvironmentKubeResourcesResponseBodyDataMetadata metadata() { DARABONBA_PTR_GET(metadata_, Models::ListEnvironmentKubeResourcesResponseBodyDataMetadata) };
    inline ListEnvironmentKubeResourcesResponseBodyData& setMetadata(const Models::ListEnvironmentKubeResourcesResponseBodyDataMetadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline ListEnvironmentKubeResourcesResponseBodyData& setMetadata(Models::ListEnvironmentKubeResourcesResponseBodyDataMetadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline     const Darabonba::Json & spec() const { DARABONBA_GET(spec_) };
    Darabonba::Json & spec() { DARABONBA_GET(spec_) };
    inline ListEnvironmentKubeResourcesResponseBodyData& setSpec(const Darabonba::Json & spec) { DARABONBA_SET_VALUE(spec_, spec) };
    inline ListEnvironmentKubeResourcesResponseBodyData& setSpec(Darabonba::Json & spec) { DARABONBA_SET_RVALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline     const Darabonba::Json & status() const { DARABONBA_GET(status_) };
    Darabonba::Json & status() { DARABONBA_GET(status_) };
    inline ListEnvironmentKubeResourcesResponseBodyData& setStatus(const Darabonba::Json & status) { DARABONBA_SET_VALUE(status_, status) };
    inline ListEnvironmentKubeResourcesResponseBodyData& setStatus(Darabonba::Json & status) { DARABONBA_SET_RVALUE(status_, status) };


  protected:
    // The version number of the API.
    std::shared_ptr<string> apiVersion_ = nullptr;
    // The resource type.
    std::shared_ptr<string> kind_ = nullptr;
    // The metadata.
    std::shared_ptr<Models::ListEnvironmentKubeResourcesResponseBodyDataMetadata> metadata_ = nullptr;
    // The resource specifications.
    Darabonba::Json spec_ = nullptr;
    // The status of the resource.
    Darabonba::Json status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
