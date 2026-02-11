// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSISTENCYSNAPSHOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONSISTENCYSNAPSHOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class GetConsistencySnapshotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsistencySnapshotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConsistencyResultJsonStr, consistencyResultJsonStr_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsistencySnapshotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsistencyResultJsonStr, consistencyResultJsonStr_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetConsistencySnapshotResponseBody() = default ;
    GetConsistencySnapshotResponseBody(const GetConsistencySnapshotResponseBody &) = default ;
    GetConsistencySnapshotResponseBody(GetConsistencySnapshotResponseBody &&) = default ;
    GetConsistencySnapshotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsistencySnapshotResponseBody() = default ;
    GetConsistencySnapshotResponseBody& operator=(const GetConsistencySnapshotResponseBody &) = default ;
    GetConsistencySnapshotResponseBody& operator=(GetConsistencySnapshotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consistencyResultJsonStr_ == nullptr
        && this->requestId_ == nullptr; };
    // consistencyResultJsonStr Field Functions 
    bool hasConsistencyResultJsonStr() const { return this->consistencyResultJsonStr_ != nullptr;};
    void deleteConsistencyResultJsonStr() { this->consistencyResultJsonStr_ = nullptr;};
    inline string getConsistencyResultJsonStr() const { DARABONBA_PTR_GET_DEFAULT(consistencyResultJsonStr_, "") };
    inline GetConsistencySnapshotResponseBody& setConsistencyResultJsonStr(string consistencyResultJsonStr) { DARABONBA_PTR_SET_VALUE(consistencyResultJsonStr_, consistencyResultJsonStr) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConsistencySnapshotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> consistencyResultJsonStr_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
