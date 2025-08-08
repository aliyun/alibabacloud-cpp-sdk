// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DLFUNCTIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_DLFUNCTIONINPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/DmsEnterprise20181101.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DLFunctionInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DLFunctionInput& obj) { 
      DARABONBA_PTR_TO_JSON(ClassName, className_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(FunctionType, functionType_);
      DARABONBA_PTR_TO_JSON(ModifierId, modifierId_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_TO_JSON(ResourceUris, resourceUris_);
    };
    friend void from_json(const Darabonba::Json& j, DLFunctionInput& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassName, className_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(FunctionType, functionType_);
      DARABONBA_PTR_FROM_JSON(ModifierId, modifierId_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_FROM_JSON(ResourceUris, resourceUris_);
    };
    DLFunctionInput() = default ;
    DLFunctionInput(const DLFunctionInput &) = default ;
    DLFunctionInput(DLFunctionInput &&) = default ;
    DLFunctionInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DLFunctionInput() = default ;
    DLFunctionInput& operator=(const DLFunctionInput &) = default ;
    DLFunctionInput& operator=(DLFunctionInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->className_ != nullptr
        && this->createTime_ != nullptr && this->creatorId_ != nullptr && this->functionName_ != nullptr && this->functionType_ != nullptr && this->modifierId_ != nullptr
        && this->ownerName_ != nullptr && this->ownerType_ != nullptr && this->resourceUris_ != nullptr; };
    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string className() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline DLFunctionInput& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int32_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0) };
    inline DLFunctionInput& setCreateTime(int32_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline int64_t creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
    inline DLFunctionInput& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline DLFunctionInput& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // functionType Field Functions 
    bool hasFunctionType() const { return this->functionType_ != nullptr;};
    void deleteFunctionType() { this->functionType_ = nullptr;};
    inline string functionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
    inline DLFunctionInput& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


    // modifierId Field Functions 
    bool hasModifierId() const { return this->modifierId_ != nullptr;};
    void deleteModifierId() { this->modifierId_ = nullptr;};
    inline int64_t modifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, 0L) };
    inline DLFunctionInput& setModifierId(int64_t modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline DLFunctionInput& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // ownerType Field Functions 
    bool hasOwnerType() const { return this->ownerType_ != nullptr;};
    void deleteOwnerType() { this->ownerType_ = nullptr;};
    inline string ownerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
    inline DLFunctionInput& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


    // resourceUris Field Functions 
    bool hasResourceUris() const { return this->resourceUris_ != nullptr;};
    void deleteResourceUris() { this->resourceUris_ = nullptr;};
    inline const vector<DLResourceUri> & resourceUris() const { DARABONBA_PTR_GET_CONST(resourceUris_, vector<DLResourceUri>) };
    inline vector<DLResourceUri> resourceUris() { DARABONBA_PTR_GET(resourceUris_, vector<DLResourceUri>) };
    inline DLFunctionInput& setResourceUris(const vector<DLResourceUri> & resourceUris) { DARABONBA_PTR_SET_VALUE(resourceUris_, resourceUris) };
    inline DLFunctionInput& setResourceUris(vector<DLResourceUri> && resourceUris) { DARABONBA_PTR_SET_RVALUE(resourceUris_, resourceUris) };


  protected:
    std::shared_ptr<string> className_ = nullptr;
    std::shared_ptr<int32_t> createTime_ = nullptr;
    std::shared_ptr<int64_t> creatorId_ = nullptr;
    std::shared_ptr<string> functionName_ = nullptr;
    std::shared_ptr<string> functionType_ = nullptr;
    std::shared_ptr<int64_t> modifierId_ = nullptr;
    std::shared_ptr<string> ownerName_ = nullptr;
    std::shared_ptr<string> ownerType_ = nullptr;
    std::shared_ptr<vector<DLResourceUri>> resourceUris_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
