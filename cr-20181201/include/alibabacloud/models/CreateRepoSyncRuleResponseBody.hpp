// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPOSYNCRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPOSYNCRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateRepoSyncRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRepoSyncRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SyncRuleId, syncRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRepoSyncRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SyncRuleId, syncRuleId_);
    };
    CreateRepoSyncRuleResponseBody() = default ;
    CreateRepoSyncRuleResponseBody(const CreateRepoSyncRuleResponseBody &) = default ;
    CreateRepoSyncRuleResponseBody(CreateRepoSyncRuleResponseBody &&) = default ;
    CreateRepoSyncRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRepoSyncRuleResponseBody() = default ;
    CreateRepoSyncRuleResponseBody& operator=(const CreateRepoSyncRuleResponseBody &) = default ;
    CreateRepoSyncRuleResponseBody& operator=(CreateRepoSyncRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->isSuccess_ == nullptr && this->requestId_ == nullptr && this->syncRuleId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateRepoSyncRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline CreateRepoSyncRuleResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRepoSyncRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // syncRuleId Field Functions 
    bool hasSyncRuleId() const { return this->syncRuleId_ != nullptr;};
    void deleteSyncRuleId() { this->syncRuleId_ = nullptr;};
    inline string getSyncRuleId() const { DARABONBA_PTR_GET_DEFAULT(syncRuleId_, "") };
    inline CreateRepoSyncRuleResponseBody& setSyncRuleId(string syncRuleId) { DARABONBA_PTR_SET_VALUE(syncRuleId_, syncRuleId) };


  protected:
    // The HTTP status code.
    shared_ptr<string> code_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> isSuccess_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the synchronization rule.
    shared_ptr<string> syncRuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
