// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUMODELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetUmodelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUmodelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(commonSchemaRef, commonSchemaRef_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, GetUmodelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(commonSchemaRef, commonSchemaRef_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    GetUmodelResponseBody() = default ;
    GetUmodelResponseBody(const GetUmodelResponseBody &) = default ;
    GetUmodelResponseBody(GetUmodelResponseBody &&) = default ;
    GetUmodelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUmodelResponseBody() = default ;
    GetUmodelResponseBody& operator=(const GetUmodelResponseBody &) = default ;
    GetUmodelResponseBody& operator=(GetUmodelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CommonSchemaRef : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CommonSchemaRef& obj) { 
        DARABONBA_PTR_TO_JSON(group, group_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, CommonSchemaRef& obj) { 
        DARABONBA_PTR_FROM_JSON(group, group_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      CommonSchemaRef() = default ;
      CommonSchemaRef(const CommonSchemaRef &) = default ;
      CommonSchemaRef(CommonSchemaRef &&) = default ;
      CommonSchemaRef(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CommonSchemaRef() = default ;
      CommonSchemaRef& operator=(const CommonSchemaRef &) = default ;
      CommonSchemaRef& operator=(CommonSchemaRef &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->group_ == nullptr
        && this->version_ == nullptr; };
      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
      inline CommonSchemaRef& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline CommonSchemaRef& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // Common Umodel Schema group
      shared_ptr<string> group_ {};
      // Version
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->commonSchemaRef_ == nullptr
        && this->description_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->workspace_ == nullptr; };
    // commonSchemaRef Field Functions 
    bool hasCommonSchemaRef() const { return this->commonSchemaRef_ != nullptr;};
    void deleteCommonSchemaRef() { this->commonSchemaRef_ = nullptr;};
    inline const vector<GetUmodelResponseBody::CommonSchemaRef> & getCommonSchemaRef() const { DARABONBA_PTR_GET_CONST(commonSchemaRef_, vector<GetUmodelResponseBody::CommonSchemaRef>) };
    inline vector<GetUmodelResponseBody::CommonSchemaRef> getCommonSchemaRef() { DARABONBA_PTR_GET(commonSchemaRef_, vector<GetUmodelResponseBody::CommonSchemaRef>) };
    inline GetUmodelResponseBody& setCommonSchemaRef(const vector<GetUmodelResponseBody::CommonSchemaRef> & commonSchemaRef) { DARABONBA_PTR_SET_VALUE(commonSchemaRef_, commonSchemaRef) };
    inline GetUmodelResponseBody& setCommonSchemaRef(vector<GetUmodelResponseBody::CommonSchemaRef> && commonSchemaRef) { DARABONBA_PTR_SET_RVALUE(commonSchemaRef_, commonSchemaRef) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetUmodelResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetUmodelResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUmodelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline GetUmodelResponseBody& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // This field does not need to be filled currently
    shared_ptr<vector<GetUmodelResponseBody::CommonSchemaRef>> commonSchemaRef_ {};
    // Umodel description
    shared_ptr<string> description_ {};
    // Region
    shared_ptr<string> regionId_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Workspace name
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
