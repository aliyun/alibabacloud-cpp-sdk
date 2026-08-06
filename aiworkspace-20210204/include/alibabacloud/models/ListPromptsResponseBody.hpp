// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMPTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMPTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Prompt.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListPromptsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPromptsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Prompts, prompts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPromptsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Prompts, prompts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPromptsResponseBody() = default ;
    ListPromptsResponseBody(const ListPromptsResponseBody &) = default ;
    ListPromptsResponseBody(ListPromptsResponseBody &&) = default ;
    ListPromptsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPromptsResponseBody() = default ;
    ListPromptsResponseBody& operator=(const ListPromptsResponseBody &) = default ;
    ListPromptsResponseBody& operator=(ListPromptsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->prompts_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // prompts Field Functions 
    bool hasPrompts() const { return this->prompts_ != nullptr;};
    void deletePrompts() { this->prompts_ = nullptr;};
    inline const vector<Prompt> & getPrompts() const { DARABONBA_PTR_GET_CONST(prompts_, vector<Prompt>) };
    inline vector<Prompt> getPrompts() { DARABONBA_PTR_GET(prompts_, vector<Prompt>) };
    inline ListPromptsResponseBody& setPrompts(const vector<Prompt> & prompts) { DARABONBA_PTR_SET_VALUE(prompts_, prompts) };
    inline ListPromptsResponseBody& setPrompts(vector<Prompt> && prompts) { DARABONBA_PTR_SET_RVALUE(prompts_, prompts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPromptsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPromptsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of prompts.
    shared_ptr<vector<Prompt>> prompts_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned under the current request conditions. This parameter is optional and may not be returned by default.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
