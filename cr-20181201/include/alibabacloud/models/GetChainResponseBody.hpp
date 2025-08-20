// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetChainResponseBodyChainConfig.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetChainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChainConfig, chainConfig_);
      DARABONBA_PTR_TO_JSON(ChainId, chainId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScopeExclude, scopeExclude_);
      DARABONBA_PTR_TO_JSON(ScopeId, scopeId_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetChainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChainConfig, chainConfig_);
      DARABONBA_PTR_FROM_JSON(ChainId, chainId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScopeExclude, scopeExclude_);
      DARABONBA_PTR_FROM_JSON(ScopeId, scopeId_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
    };
    GetChainResponseBody() = default ;
    GetChainResponseBody(const GetChainResponseBody &) = default ;
    GetChainResponseBody(GetChainResponseBody &&) = default ;
    GetChainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChainResponseBody() = default ;
    GetChainResponseBody& operator=(const GetChainResponseBody &) = default ;
    GetChainResponseBody& operator=(GetChainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chainConfig_ != nullptr
        && this->chainId_ != nullptr && this->code_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr && this->instanceId_ != nullptr
        && this->isSuccess_ != nullptr && this->modifiedTime_ != nullptr && this->name_ != nullptr && this->requestId_ != nullptr && this->scopeExclude_ != nullptr
        && this->scopeId_ != nullptr && this->scopeType_ != nullptr; };
    // chainConfig Field Functions 
    bool hasChainConfig() const { return this->chainConfig_ != nullptr;};
    void deleteChainConfig() { this->chainConfig_ = nullptr;};
    inline const GetChainResponseBodyChainConfig & chainConfig() const { DARABONBA_PTR_GET_CONST(chainConfig_, GetChainResponseBodyChainConfig) };
    inline GetChainResponseBodyChainConfig chainConfig() { DARABONBA_PTR_GET(chainConfig_, GetChainResponseBodyChainConfig) };
    inline GetChainResponseBody& setChainConfig(const GetChainResponseBodyChainConfig & chainConfig) { DARABONBA_PTR_SET_VALUE(chainConfig_, chainConfig) };
    inline GetChainResponseBody& setChainConfig(GetChainResponseBodyChainConfig && chainConfig) { DARABONBA_PTR_SET_RVALUE(chainConfig_, chainConfig) };


    // chainId Field Functions 
    bool hasChainId() const { return this->chainId_ != nullptr;};
    void deleteChainId() { this->chainId_ = nullptr;};
    inline string chainId() const { DARABONBA_PTR_GET_DEFAULT(chainId_, "") };
    inline GetChainResponseBody& setChainId(string chainId) { DARABONBA_PTR_SET_VALUE(chainId_, chainId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetChainResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetChainResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetChainResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetChainResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetChainResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline GetChainResponseBody& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetChainResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetChainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scopeExclude Field Functions 
    bool hasScopeExclude() const { return this->scopeExclude_ != nullptr;};
    void deleteScopeExclude() { this->scopeExclude_ = nullptr;};
    inline const vector<string> & scopeExclude() const { DARABONBA_PTR_GET_CONST(scopeExclude_, vector<string>) };
    inline vector<string> scopeExclude() { DARABONBA_PTR_GET(scopeExclude_, vector<string>) };
    inline GetChainResponseBody& setScopeExclude(const vector<string> & scopeExclude) { DARABONBA_PTR_SET_VALUE(scopeExclude_, scopeExclude) };
    inline GetChainResponseBody& setScopeExclude(vector<string> && scopeExclude) { DARABONBA_PTR_SET_RVALUE(scopeExclude_, scopeExclude) };


    // scopeId Field Functions 
    bool hasScopeId() const { return this->scopeId_ != nullptr;};
    void deleteScopeId() { this->scopeId_ = nullptr;};
    inline string scopeId() const { DARABONBA_PTR_GET_DEFAULT(scopeId_, "") };
    inline GetChainResponseBody& setScopeId(string scopeId) { DARABONBA_PTR_SET_VALUE(scopeId_, scopeId) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string scopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline GetChainResponseBody& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


  protected:
    std::shared_ptr<GetChainResponseBodyChainConfig> chainConfig_ = nullptr;
    std::shared_ptr<string> chainId_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<bool> isSuccess_ = nullptr;
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<string>> scopeExclude_ = nullptr;
    std::shared_ptr<string> scopeId_ = nullptr;
    std::shared_ptr<string> scopeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
