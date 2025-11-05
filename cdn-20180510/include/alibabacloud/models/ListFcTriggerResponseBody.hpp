// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFCTRIGGERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFCTRIGGERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFCTriggerResponseBodyFCTriggers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ListFCTriggerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFCTriggerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FCTriggers, FCTriggers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFCTriggerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FCTriggers, FCTriggers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFCTriggerResponseBody() = default ;
    ListFCTriggerResponseBody(const ListFCTriggerResponseBody &) = default ;
    ListFCTriggerResponseBody(ListFCTriggerResponseBody &&) = default ;
    ListFCTriggerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFCTriggerResponseBody() = default ;
    ListFCTriggerResponseBody& operator=(const ListFCTriggerResponseBody &) = default ;
    ListFCTriggerResponseBody& operator=(ListFCTriggerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->FCTriggers_ == nullptr
        && return this->requestId_ == nullptr; };
    // FCTriggers Field Functions 
    bool hasFCTriggers() const { return this->FCTriggers_ != nullptr;};
    void deleteFCTriggers() { this->FCTriggers_ = nullptr;};
    inline const vector<ListFCTriggerResponseBodyFCTriggers> & FCTriggers() const { DARABONBA_PTR_GET_CONST(FCTriggers_, vector<ListFCTriggerResponseBodyFCTriggers>) };
    inline vector<ListFCTriggerResponseBodyFCTriggers> FCTriggers() { DARABONBA_PTR_GET(FCTriggers_, vector<ListFCTriggerResponseBodyFCTriggers>) };
    inline ListFCTriggerResponseBody& setFCTriggers(const vector<ListFCTriggerResponseBodyFCTriggers> & FCTriggers) { DARABONBA_PTR_SET_VALUE(FCTriggers_, FCTriggers) };
    inline ListFCTriggerResponseBody& setFCTriggers(vector<ListFCTriggerResponseBodyFCTriggers> && FCTriggers) { DARABONBA_PTR_SET_RVALUE(FCTriggers_, FCTriggers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFCTriggerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Function Compute triggers that are set for Alibaba Cloud CDN events.
    std::shared_ptr<vector<ListFCTriggerResponseBodyFCTriggers>> FCTriggers_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
