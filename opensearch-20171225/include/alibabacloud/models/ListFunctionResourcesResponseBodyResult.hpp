// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONRESOURCESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONRESOURCESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListFunctionResourcesResponseBodyResultData.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListFunctionResourcesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionResourcesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ReferencedInstances, referencedInstances_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunctionResourcesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ReferencedInstances, referencedInstances_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ListFunctionResourcesResponseBodyResult() = default ;
    ListFunctionResourcesResponseBodyResult(const ListFunctionResourcesResponseBodyResult &) = default ;
    ListFunctionResourcesResponseBodyResult(ListFunctionResourcesResponseBodyResult &&) = default ;
    ListFunctionResourcesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionResourcesResponseBodyResult() = default ;
    ListFunctionResourcesResponseBodyResult& operator=(const ListFunctionResourcesResponseBodyResult &) = default ;
    ListFunctionResourcesResponseBodyResult& operator=(ListFunctionResourcesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->data_ == nullptr && return this->description_ == nullptr && return this->functionName_ == nullptr && return this->modifyTime_ == nullptr && return this->referencedInstances_ == nullptr
        && return this->resourceName_ == nullptr && return this->resourceType_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListFunctionResourcesResponseBodyResult& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::ListFunctionResourcesResponseBodyResultData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::ListFunctionResourcesResponseBodyResultData) };
    inline Models::ListFunctionResourcesResponseBodyResultData data() { DARABONBA_PTR_GET(data_, Models::ListFunctionResourcesResponseBodyResultData) };
    inline ListFunctionResourcesResponseBodyResult& setData(const Models::ListFunctionResourcesResponseBodyResultData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListFunctionResourcesResponseBodyResult& setData(Models::ListFunctionResourcesResponseBodyResultData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListFunctionResourcesResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline ListFunctionResourcesResponseBodyResult& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListFunctionResourcesResponseBodyResult& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // referencedInstances Field Functions 
    bool hasReferencedInstances() const { return this->referencedInstances_ != nullptr;};
    void deleteReferencedInstances() { this->referencedInstances_ = nullptr;};
    inline const vector<string> & referencedInstances() const { DARABONBA_PTR_GET_CONST(referencedInstances_, vector<string>) };
    inline vector<string> referencedInstances() { DARABONBA_PTR_GET(referencedInstances_, vector<string>) };
    inline ListFunctionResourcesResponseBodyResult& setReferencedInstances(const vector<string> & referencedInstances) { DARABONBA_PTR_SET_VALUE(referencedInstances_, referencedInstances) };
    inline ListFunctionResourcesResponseBodyResult& setReferencedInstances(vector<string> && referencedInstances) { DARABONBA_PTR_SET_RVALUE(referencedInstances_, referencedInstances) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ListFunctionResourcesResponseBodyResult& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListFunctionResourcesResponseBodyResult& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The time when the resource was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The resource data. The data structure varies with the resource type.
    std::shared_ptr<Models::ListFunctionResourcesResponseBodyResultData> data_ = nullptr;
    // The description of the resource.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the feature.
    std::shared_ptr<string> functionName_ = nullptr;
    // The time when the resource was modified. Unit: milliseconds.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The algorithm instances that are referenced.
    std::shared_ptr<vector<string>> referencedInstances_ = nullptr;
    // The name of the resource.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
