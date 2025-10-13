// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUMODELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetUmodelResponseBodyCommonSchemaRef.hpp>
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
    virtual bool empty() const override { return this->commonSchemaRef_ == nullptr
        && return this->description_ == nullptr && return this->regionId_ == nullptr && return this->requestId_ == nullptr && return this->workspace_ == nullptr; };
    // commonSchemaRef Field Functions 
    bool hasCommonSchemaRef() const { return this->commonSchemaRef_ != nullptr;};
    void deleteCommonSchemaRef() { this->commonSchemaRef_ = nullptr;};
    inline const vector<GetUmodelResponseBodyCommonSchemaRef> & commonSchemaRef() const { DARABONBA_PTR_GET_CONST(commonSchemaRef_, vector<GetUmodelResponseBodyCommonSchemaRef>) };
    inline vector<GetUmodelResponseBodyCommonSchemaRef> commonSchemaRef() { DARABONBA_PTR_GET(commonSchemaRef_, vector<GetUmodelResponseBodyCommonSchemaRef>) };
    inline GetUmodelResponseBody& setCommonSchemaRef(const vector<GetUmodelResponseBodyCommonSchemaRef> & commonSchemaRef) { DARABONBA_PTR_SET_VALUE(commonSchemaRef_, commonSchemaRef) };
    inline GetUmodelResponseBody& setCommonSchemaRef(vector<GetUmodelResponseBodyCommonSchemaRef> && commonSchemaRef) { DARABONBA_PTR_SET_RVALUE(commonSchemaRef_, commonSchemaRef) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetUmodelResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetUmodelResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUmodelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline GetUmodelResponseBody& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<vector<GetUmodelResponseBodyCommonSchemaRef>> commonSchemaRef_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
