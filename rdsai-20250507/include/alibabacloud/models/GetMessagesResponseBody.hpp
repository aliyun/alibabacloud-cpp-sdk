// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMessagesResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetMessagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMessagesResponseBody() = default ;
    GetMessagesResponseBody(const GetMessagesResponseBody &) = default ;
    GetMessagesResponseBody(GetMessagesResponseBody &&) = default ;
    GetMessagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessagesResponseBody() = default ;
    GetMessagesResponseBody& operator=(const GetMessagesResponseBody &) = default ;
    GetMessagesResponseBody& operator=(GetMessagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->hasMore_ == nullptr && return this->limit_ == nullptr && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetMessagesResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<GetMessagesResponseBodyData>) };
    inline vector<GetMessagesResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<GetMessagesResponseBodyData>) };
    inline GetMessagesResponseBody& setData(const vector<GetMessagesResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMessagesResponseBody& setData(vector<GetMessagesResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline GetMessagesResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline GetMessagesResponseBody& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMessagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetMessagesResponseBodyData>> data_ = nullptr;
    std::shared_ptr<bool> hasMore_ = nullptr;
    std::shared_ptr<int64_t> limit_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
