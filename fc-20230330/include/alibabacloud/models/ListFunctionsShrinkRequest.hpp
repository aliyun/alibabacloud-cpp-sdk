// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListFunctionsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(fcVersion, fcVersion_);
      DARABONBA_PTR_TO_JSON(functionName, functionName_);
      DARABONBA_PTR_TO_JSON(gpuType, gpuType_);
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(prefix, prefix_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(runtime, runtime_);
      DARABONBA_PTR_TO_JSON(tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunctionsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(fcVersion, fcVersion_);
      DARABONBA_PTR_FROM_JSON(functionName, functionName_);
      DARABONBA_PTR_FROM_JSON(gpuType, gpuType_);
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(runtime, runtime_);
      DARABONBA_PTR_FROM_JSON(tags, tagsShrink_);
    };
    ListFunctionsShrinkRequest() = default ;
    ListFunctionsShrinkRequest(const ListFunctionsShrinkRequest &) = default ;
    ListFunctionsShrinkRequest(ListFunctionsShrinkRequest &&) = default ;
    ListFunctionsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionsShrinkRequest() = default ;
    ListFunctionsShrinkRequest& operator=(const ListFunctionsShrinkRequest &) = default ;
    ListFunctionsShrinkRequest& operator=(ListFunctionsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->fcVersion_ == nullptr && this->functionName_ == nullptr && this->gpuType_ == nullptr && this->limit_ == nullptr && this->nextToken_ == nullptr
        && this->prefix_ == nullptr && this->resourceGroupId_ == nullptr && this->runtime_ == nullptr && this->tagsShrink_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListFunctionsShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fcVersion Field Functions 
    bool hasFcVersion() const { return this->fcVersion_ != nullptr;};
    void deleteFcVersion() { this->fcVersion_ = nullptr;};
    inline string getFcVersion() const { DARABONBA_PTR_GET_DEFAULT(fcVersion_, "") };
    inline ListFunctionsShrinkRequest& setFcVersion(string fcVersion) { DARABONBA_PTR_SET_VALUE(fcVersion_, fcVersion) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline ListFunctionsShrinkRequest& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // gpuType Field Functions 
    bool hasGpuType() const { return this->gpuType_ != nullptr;};
    void deleteGpuType() { this->gpuType_ = nullptr;};
    inline string getGpuType() const { DARABONBA_PTR_GET_DEFAULT(gpuType_, "") };
    inline ListFunctionsShrinkRequest& setGpuType(string gpuType) { DARABONBA_PTR_SET_VALUE(gpuType_, gpuType) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListFunctionsShrinkRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFunctionsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline ListFunctionsShrinkRequest& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListFunctionsShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline string getRuntime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
    inline ListFunctionsShrinkRequest& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline ListFunctionsShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // The description of the functions to retrieve.
    shared_ptr<string> description_ {};
    // The version of Function Compute to which the functions belong.
    // 
    // *   v3: Only lists functions of Function Compute 3.0.
    // *   v2: Only lists functions of Function Compute 2.0.
    // 
    // By default, this parameter is left empty and functions in both Function Compute 3.0 and Function Compute 2.0 are listed.
    shared_ptr<string> fcVersion_ {};
    shared_ptr<string> functionName_ {};
    // The GPU type of the functions to retrieve.
    shared_ptr<string> gpuType_ {};
    // The number of functions to return. The minimum value is 1 and the maximum value is 100.
    shared_ptr<int32_t> limit_ {};
    // The pagination token.
    shared_ptr<string> nextToken_ {};
    // The prefix of the function name.
    shared_ptr<string> prefix_ {};
    shared_ptr<string> resourceGroupId_ {};
    // The runtime of the functions to retrieve.
    shared_ptr<string> runtime_ {};
    // The tag of the functions to retrieve.
    shared_ptr<string> tagsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
