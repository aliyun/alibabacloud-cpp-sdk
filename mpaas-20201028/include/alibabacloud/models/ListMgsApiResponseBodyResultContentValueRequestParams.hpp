// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMGSAPIRESPONSEBODYRESULTCONTENTVALUEREQUESTPARAMS_HPP_
#define ALIBABACLOUD_MODELS_LISTMGSAPIRESPONSEBODYRESULTCONTENTVALUEREQUESTPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMgsApiResponseBodyResultContentValueRequestParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMgsApiResponseBodyResultContentValueRequestParams& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RefType, refType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMgsApiResponseBodyResultContentValueRequestParams& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RefType, refType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListMgsApiResponseBodyResultContentValueRequestParams() = default ;
    ListMgsApiResponseBodyResultContentValueRequestParams(const ListMgsApiResponseBodyResultContentValueRequestParams &) = default ;
    ListMgsApiResponseBodyResultContentValueRequestParams(ListMgsApiResponseBodyResultContentValueRequestParams &&) = default ;
    ListMgsApiResponseBodyResultContentValueRequestParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMgsApiResponseBodyResultContentValueRequestParams() = default ;
    ListMgsApiResponseBodyResultContentValueRequestParams& operator=(const ListMgsApiResponseBodyResultContentValueRequestParams &) = default ;
    ListMgsApiResponseBodyResultContentValueRequestParams& operator=(ListMgsApiResponseBodyResultContentValueRequestParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiId_ != nullptr
        && this->appId_ != nullptr && this->defaultValue_ != nullptr && this->description_ != nullptr && this->id_ != nullptr && this->location_ != nullptr
        && this->name_ != nullptr && this->refType_ != nullptr && this->type_ != nullptr && this->workspaceId_ != nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline ListMgsApiResponseBodyResultContentValueRequestParams& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListMgsApiResponseBodyResultContentValueRequestParams& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline ListMgsApiResponseBodyResultContentValueRequestParams& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListMgsApiResponseBodyResultContentValueRequestParams& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListMgsApiResponseBodyResultContentValueRequestParams& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline ListMgsApiResponseBodyResultContentValueRequestParams& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMgsApiResponseBodyResultContentValueRequestParams& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // refType Field Functions 
    bool hasRefType() const { return this->refType_ != nullptr;};
    void deleteRefType() { this->refType_ = nullptr;};
    inline string refType() const { DARABONBA_PTR_GET_DEFAULT(refType_, "") };
    inline ListMgsApiResponseBodyResultContentValueRequestParams& setRefType(string refType) { DARABONBA_PTR_SET_VALUE(refType_, refType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMgsApiResponseBodyResultContentValueRequestParams& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListMgsApiResponseBodyResultContentValueRequestParams& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> apiId_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> defaultValue_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> refType_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
