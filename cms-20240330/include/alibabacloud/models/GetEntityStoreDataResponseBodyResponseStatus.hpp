// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENTITYSTOREDATARESPONSEBODYRESPONSESTATUS_HPP_
#define ALIBABACLOUD_MODELS_GETENTITYSTOREDATARESPONSEBODYRESPONSESTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetEntityStoreDataResponseBodyResponseStatusStatusItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetEntityStoreDataResponseBodyResponseStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEntityStoreDataResponseBodyResponseStatus& obj) { 
      DARABONBA_PTR_TO_JSON(executionStates, executionStates_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(retryPolicy, retryPolicy_);
      DARABONBA_PTR_TO_JSON(statusItem, statusItem_);
    };
    friend void from_json(const Darabonba::Json& j, GetEntityStoreDataResponseBodyResponseStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(executionStates, executionStates_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(retryPolicy, retryPolicy_);
      DARABONBA_PTR_FROM_JSON(statusItem, statusItem_);
    };
    GetEntityStoreDataResponseBodyResponseStatus() = default ;
    GetEntityStoreDataResponseBodyResponseStatus(const GetEntityStoreDataResponseBodyResponseStatus &) = default ;
    GetEntityStoreDataResponseBodyResponseStatus(GetEntityStoreDataResponseBodyResponseStatus &&) = default ;
    GetEntityStoreDataResponseBodyResponseStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEntityStoreDataResponseBodyResponseStatus() = default ;
    GetEntityStoreDataResponseBodyResponseStatus& operator=(const GetEntityStoreDataResponseBodyResponseStatus &) = default ;
    GetEntityStoreDataResponseBodyResponseStatus& operator=(GetEntityStoreDataResponseBodyResponseStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->executionStates_ != nullptr
        && this->level_ != nullptr && this->result_ != nullptr && this->retryPolicy_ != nullptr && this->statusItem_ != nullptr; };
    // executionStates Field Functions 
    bool hasExecutionStates() const { return this->executionStates_ != nullptr;};
    void deleteExecutionStates() { this->executionStates_ = nullptr;};
    inline string executionStates() const { DARABONBA_PTR_GET_DEFAULT(executionStates_, "") };
    inline GetEntityStoreDataResponseBodyResponseStatus& setExecutionStates(string executionStates) { DARABONBA_PTR_SET_VALUE(executionStates_, executionStates) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetEntityStoreDataResponseBodyResponseStatus& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline GetEntityStoreDataResponseBodyResponseStatus& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // retryPolicy Field Functions 
    bool hasRetryPolicy() const { return this->retryPolicy_ != nullptr;};
    void deleteRetryPolicy() { this->retryPolicy_ = nullptr;};
    inline string retryPolicy() const { DARABONBA_PTR_GET_DEFAULT(retryPolicy_, "") };
    inline GetEntityStoreDataResponseBodyResponseStatus& setRetryPolicy(string retryPolicy) { DARABONBA_PTR_SET_VALUE(retryPolicy_, retryPolicy) };


    // statusItem Field Functions 
    bool hasStatusItem() const { return this->statusItem_ != nullptr;};
    void deleteStatusItem() { this->statusItem_ = nullptr;};
    inline const vector<Models::GetEntityStoreDataResponseBodyResponseStatusStatusItem> & statusItem() const { DARABONBA_PTR_GET_CONST(statusItem_, vector<Models::GetEntityStoreDataResponseBodyResponseStatusStatusItem>) };
    inline vector<Models::GetEntityStoreDataResponseBodyResponseStatusStatusItem> statusItem() { DARABONBA_PTR_GET(statusItem_, vector<Models::GetEntityStoreDataResponseBodyResponseStatusStatusItem>) };
    inline GetEntityStoreDataResponseBodyResponseStatus& setStatusItem(const vector<Models::GetEntityStoreDataResponseBodyResponseStatusStatusItem> & statusItem) { DARABONBA_PTR_SET_VALUE(statusItem_, statusItem) };
    inline GetEntityStoreDataResponseBodyResponseStatus& setStatusItem(vector<Models::GetEntityStoreDataResponseBodyResponseStatusStatusItem> && statusItem) { DARABONBA_PTR_SET_RVALUE(statusItem_, statusItem) };


  protected:
    std::shared_ptr<string> executionStates_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> result_ = nullptr;
    std::shared_ptr<string> retryPolicy_ = nullptr;
    std::shared_ptr<vector<Models::GetEntityStoreDataResponseBodyResponseStatusStatusItem>> statusItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
