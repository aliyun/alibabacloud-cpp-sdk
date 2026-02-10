// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPICIOUSUUIDCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPICIOUSUUIDCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSuspiciousUUIDConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspiciousUUIDConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UUIDList, UUIDList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspiciousUUIDConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UUIDList, UUIDList_);
    };
    DescribeSuspiciousUUIDConfigResponseBody() = default ;
    DescribeSuspiciousUUIDConfigResponseBody(const DescribeSuspiciousUUIDConfigResponseBody &) = default ;
    DescribeSuspiciousUUIDConfigResponseBody(DescribeSuspiciousUUIDConfigResponseBody &&) = default ;
    DescribeSuspiciousUUIDConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspiciousUUIDConfigResponseBody() = default ;
    DescribeSuspiciousUUIDConfigResponseBody& operator=(const DescribeSuspiciousUUIDConfigResponseBody &) = default ;
    DescribeSuspiciousUUIDConfigResponseBody& operator=(DescribeSuspiciousUUIDConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && this->requestId_ == nullptr && this->UUIDList_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeSuspiciousUUIDConfigResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSuspiciousUUIDConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // UUIDList Field Functions 
    bool hasUUIDList() const { return this->UUIDList_ != nullptr;};
    void deleteUUIDList() { this->UUIDList_ = nullptr;};
    inline const vector<string> & getUUIDList() const { DARABONBA_PTR_GET_CONST(UUIDList_, vector<string>) };
    inline vector<string> getUUIDList() { DARABONBA_PTR_GET(UUIDList_, vector<string>) };
    inline DescribeSuspiciousUUIDConfigResponseBody& setUUIDList(const vector<string> & UUIDList) { DARABONBA_PTR_SET_VALUE(UUIDList_, UUIDList) };
    inline DescribeSuspiciousUUIDConfigResponseBody& setUUIDList(vector<string> && UUIDList) { DARABONBA_PTR_SET_RVALUE(UUIDList_, UUIDList) };


  protected:
    // The total number of servers on which proactive defense of the specified type takes effect.
    shared_ptr<int32_t> count_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The UUIDs of servers on which proactive defense of the specified type takes effect.
    shared_ptr<vector<string>> UUIDList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
