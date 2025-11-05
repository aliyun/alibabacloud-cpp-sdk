// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGRAYDOMAINFUNCTIONRESPONSEBODYDOMAINCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_GETGRAYDOMAINFUNCTIONRESPONSEBODYDOMAINCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGrayDomainFunctionResponseBodyDomainConfigListFunctionArgs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class GetGrayDomainFunctionResponseBodyDomainConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGrayDomainFunctionResponseBodyDomainConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(FunctionArgs, functionArgs_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetGrayDomainFunctionResponseBodyDomainConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(FunctionArgs, functionArgs_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetGrayDomainFunctionResponseBodyDomainConfigList() = default ;
    GetGrayDomainFunctionResponseBodyDomainConfigList(const GetGrayDomainFunctionResponseBodyDomainConfigList &) = default ;
    GetGrayDomainFunctionResponseBodyDomainConfigList(GetGrayDomainFunctionResponseBodyDomainConfigList &&) = default ;
    GetGrayDomainFunctionResponseBodyDomainConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGrayDomainFunctionResponseBodyDomainConfigList() = default ;
    GetGrayDomainFunctionResponseBodyDomainConfigList& operator=(const GetGrayDomainFunctionResponseBodyDomainConfigList &) = default ;
    GetGrayDomainFunctionResponseBodyDomainConfigList& operator=(GetGrayDomainFunctionResponseBodyDomainConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && return this->functionArgs_ == nullptr && return this->functionName_ == nullptr && return this->parentId_ == nullptr && return this->status_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline GetGrayDomainFunctionResponseBodyDomainConfigList& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // functionArgs Field Functions 
    bool hasFunctionArgs() const { return this->functionArgs_ != nullptr;};
    void deleteFunctionArgs() { this->functionArgs_ = nullptr;};
    inline const vector<Models::GetGrayDomainFunctionResponseBodyDomainConfigListFunctionArgs> & functionArgs() const { DARABONBA_PTR_GET_CONST(functionArgs_, vector<Models::GetGrayDomainFunctionResponseBodyDomainConfigListFunctionArgs>) };
    inline vector<Models::GetGrayDomainFunctionResponseBodyDomainConfigListFunctionArgs> functionArgs() { DARABONBA_PTR_GET(functionArgs_, vector<Models::GetGrayDomainFunctionResponseBodyDomainConfigListFunctionArgs>) };
    inline GetGrayDomainFunctionResponseBodyDomainConfigList& setFunctionArgs(const vector<Models::GetGrayDomainFunctionResponseBodyDomainConfigListFunctionArgs> & functionArgs) { DARABONBA_PTR_SET_VALUE(functionArgs_, functionArgs) };
    inline GetGrayDomainFunctionResponseBodyDomainConfigList& setFunctionArgs(vector<Models::GetGrayDomainFunctionResponseBodyDomainConfigListFunctionArgs> && functionArgs) { DARABONBA_PTR_SET_RVALUE(functionArgs_, functionArgs) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline GetGrayDomainFunctionResponseBodyDomainConfigList& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline GetGrayDomainFunctionResponseBodyDomainConfigList& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetGrayDomainFunctionResponseBodyDomainConfigList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int64_t> configId_ = nullptr;
    std::shared_ptr<vector<Models::GetGrayDomainFunctionResponseBodyDomainConfigListFunctionArgs>> functionArgs_ = nullptr;
    std::shared_ptr<string> functionName_ = nullptr;
    std::shared_ptr<string> parentId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
