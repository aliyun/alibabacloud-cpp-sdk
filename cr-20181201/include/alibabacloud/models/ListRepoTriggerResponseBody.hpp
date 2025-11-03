// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOTRIGGERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOTRIGGERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRepoTriggerResponseBodyTriggers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoTriggerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoTriggerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Triggers, triggers_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoTriggerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Triggers, triggers_);
    };
    ListRepoTriggerResponseBody() = default ;
    ListRepoTriggerResponseBody(const ListRepoTriggerResponseBody &) = default ;
    ListRepoTriggerResponseBody(ListRepoTriggerResponseBody &&) = default ;
    ListRepoTriggerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoTriggerResponseBody() = default ;
    ListRepoTriggerResponseBody& operator=(const ListRepoTriggerResponseBody &) = default ;
    ListRepoTriggerResponseBody& operator=(ListRepoTriggerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->isSuccess_ == nullptr && return this->requestId_ == nullptr && return this->triggers_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRepoTriggerResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListRepoTriggerResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRepoTriggerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // triggers Field Functions 
    bool hasTriggers() const { return this->triggers_ != nullptr;};
    void deleteTriggers() { this->triggers_ = nullptr;};
    inline const vector<ListRepoTriggerResponseBodyTriggers> & triggers() const { DARABONBA_PTR_GET_CONST(triggers_, vector<ListRepoTriggerResponseBodyTriggers>) };
    inline vector<ListRepoTriggerResponseBodyTriggers> triggers() { DARABONBA_PTR_GET(triggers_, vector<ListRepoTriggerResponseBodyTriggers>) };
    inline ListRepoTriggerResponseBody& setTriggers(const vector<ListRepoTriggerResponseBodyTriggers> & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
    inline ListRepoTriggerResponseBody& setTriggers(vector<ListRepoTriggerResponseBodyTriggers> && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


  protected:
    // The return value.
    std::shared_ptr<string> code_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The triggers of the repository.
    std::shared_ptr<vector<ListRepoTriggerResponseBodyTriggers>> triggers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
