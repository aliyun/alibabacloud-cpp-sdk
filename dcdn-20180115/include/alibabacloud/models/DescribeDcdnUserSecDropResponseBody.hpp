// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERSECDROPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERSECDROPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserSecDropResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserSecDropResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Drops, drops_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UuidStr, uuidStr_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserSecDropResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Drops, drops_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UuidStr, uuidStr_);
    };
    DescribeDcdnUserSecDropResponseBody() = default ;
    DescribeDcdnUserSecDropResponseBody(const DescribeDcdnUserSecDropResponseBody &) = default ;
    DescribeDcdnUserSecDropResponseBody(DescribeDcdnUserSecDropResponseBody &&) = default ;
    DescribeDcdnUserSecDropResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserSecDropResponseBody() = default ;
    DescribeDcdnUserSecDropResponseBody& operator=(const DescribeDcdnUserSecDropResponseBody &) = default ;
    DescribeDcdnUserSecDropResponseBody& operator=(DescribeDcdnUserSecDropResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->drops_ == nullptr
        && this->msg_ == nullptr && this->requestId_ == nullptr && this->uuidStr_ == nullptr; };
    // drops Field Functions 
    bool hasDrops() const { return this->drops_ != nullptr;};
    void deleteDrops() { this->drops_ = nullptr;};
    inline int32_t getDrops() const { DARABONBA_PTR_GET_DEFAULT(drops_, 0) };
    inline DescribeDcdnUserSecDropResponseBody& setDrops(int32_t drops) { DARABONBA_PTR_SET_VALUE(drops_, drops) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline DescribeDcdnUserSecDropResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnUserSecDropResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uuidStr Field Functions 
    bool hasUuidStr() const { return this->uuidStr_ != nullptr;};
    void deleteUuidStr() { this->uuidStr_ = nullptr;};
    inline string getUuidStr() const { DARABONBA_PTR_GET_DEFAULT(uuidStr_, "") };
    inline DescribeDcdnUserSecDropResponseBody& setUuidStr(string uuidStr) { DARABONBA_PTR_SET_VALUE(uuidStr_, uuidStr) };


  protected:
    // The number of packets that are blocked.
    shared_ptr<int32_t> drops_ {};
    // Indicates whether the information is found.
    // 
    // *   Found
    // *   Not Found
    shared_ptr<string> msg_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The character string that is concatenated based on the request parameters and is used to locate causes when data is not found.
    shared_ptr<string> uuidStr_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
