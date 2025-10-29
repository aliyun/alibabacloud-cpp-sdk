// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSUBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSUBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEventSubResponseBodySubscribers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListEventSubResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventSubResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Subscribers, subscribers_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventSubResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Subscribers, subscribers_);
    };
    ListEventSubResponseBody() = default ;
    ListEventSubResponseBody(const ListEventSubResponseBody &) = default ;
    ListEventSubResponseBody(ListEventSubResponseBody &&) = default ;
    ListEventSubResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventSubResponseBody() = default ;
    ListEventSubResponseBody& operator=(const ListEventSubResponseBody &) = default ;
    ListEventSubResponseBody& operator=(ListEventSubResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->subscribers_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEventSubResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subscribers Field Functions 
    bool hasSubscribers() const { return this->subscribers_ != nullptr;};
    void deleteSubscribers() { this->subscribers_ = nullptr;};
    inline const vector<ListEventSubResponseBodySubscribers> & subscribers() const { DARABONBA_PTR_GET_CONST(subscribers_, vector<ListEventSubResponseBodySubscribers>) };
    inline vector<ListEventSubResponseBodySubscribers> subscribers() { DARABONBA_PTR_GET(subscribers_, vector<ListEventSubResponseBodySubscribers>) };
    inline ListEventSubResponseBody& setSubscribers(const vector<ListEventSubResponseBodySubscribers> & subscribers) { DARABONBA_PTR_SET_VALUE(subscribers_, subscribers) };
    inline ListEventSubResponseBody& setSubscribers(vector<ListEventSubResponseBodySubscribers> && subscribers) { DARABONBA_PTR_SET_RVALUE(subscribers_, subscribers) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The events.
    std::shared_ptr<vector<ListEventSubResponseBodySubscribers>> subscribers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
