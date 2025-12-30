// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRESOURCECENTERPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRESOURCECENTERPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyResourceCenterPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyResourceCenterPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModifyResults, modifyResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyResourceCenterPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModifyResults, modifyResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyResourceCenterPolicyResponseBody() = default ;
    ModifyResourceCenterPolicyResponseBody(const ModifyResourceCenterPolicyResponseBody &) = default ;
    ModifyResourceCenterPolicyResponseBody(ModifyResourceCenterPolicyResponseBody &&) = default ;
    ModifyResourceCenterPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyResourceCenterPolicyResponseBody() = default ;
    ModifyResourceCenterPolicyResponseBody& operator=(const ModifyResourceCenterPolicyResponseBody &) = default ;
    ModifyResourceCenterPolicyResponseBody& operator=(ModifyResourceCenterPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModifyResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModifyResults& obj) { 
        DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      };
      friend void from_json(const Darabonba::Json& j, ModifyResults& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      };
      ModifyResults() = default ;
      ModifyResults(const ModifyResults &) = default ;
      ModifyResults(ModifyResults &&) = default ;
      ModifyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModifyResults() = default ;
      ModifyResults& operator=(const ModifyResults &) = default ;
      ModifyResults& operator=(ModifyResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkResult_ == nullptr
        && this->resourceId_ == nullptr; };
      // checkResult Field Functions 
      bool hasCheckResult() const { return this->checkResult_ != nullptr;};
      void deleteCheckResult() { this->checkResult_ = nullptr;};
      inline bool getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, false) };
      inline ModifyResults& setCheckResult(bool checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline ModifyResults& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    protected:
      // The verification result.
      shared_ptr<bool> checkResult_ {};
      // The resource ID.
      shared_ptr<string> resourceId_ {};
    };

    virtual bool empty() const override { return this->modifyResults_ == nullptr
        && this->requestId_ == nullptr; };
    // modifyResults Field Functions 
    bool hasModifyResults() const { return this->modifyResults_ != nullptr;};
    void deleteModifyResults() { this->modifyResults_ = nullptr;};
    inline const vector<ModifyResourceCenterPolicyResponseBody::ModifyResults> & getModifyResults() const { DARABONBA_PTR_GET_CONST(modifyResults_, vector<ModifyResourceCenterPolicyResponseBody::ModifyResults>) };
    inline vector<ModifyResourceCenterPolicyResponseBody::ModifyResults> getModifyResults() { DARABONBA_PTR_GET(modifyResults_, vector<ModifyResourceCenterPolicyResponseBody::ModifyResults>) };
    inline ModifyResourceCenterPolicyResponseBody& setModifyResults(const vector<ModifyResourceCenterPolicyResponseBody::ModifyResults> & modifyResults) { DARABONBA_PTR_SET_VALUE(modifyResults_, modifyResults) };
    inline ModifyResourceCenterPolicyResponseBody& setModifyResults(vector<ModifyResourceCenterPolicyResponseBody::ModifyResults> && modifyResults) { DARABONBA_PTR_SET_RVALUE(modifyResults_, modifyResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyResourceCenterPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The modification results.
    shared_ptr<vector<ModifyResourceCenterPolicyResponseBody::ModifyResults>> modifyResults_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
