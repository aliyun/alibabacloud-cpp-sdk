// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBACCESSLOGEMPTYCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBACCESSLOGEMPTYCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebAccessLogEmptyCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebAccessLogEmptyCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableCount, availableCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebAccessLogEmptyCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableCount, availableCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeWebAccessLogEmptyCountResponseBody() = default ;
    DescribeWebAccessLogEmptyCountResponseBody(const DescribeWebAccessLogEmptyCountResponseBody &) = default ;
    DescribeWebAccessLogEmptyCountResponseBody(DescribeWebAccessLogEmptyCountResponseBody &&) = default ;
    DescribeWebAccessLogEmptyCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebAccessLogEmptyCountResponseBody() = default ;
    DescribeWebAccessLogEmptyCountResponseBody& operator=(const DescribeWebAccessLogEmptyCountResponseBody &) = default ;
    DescribeWebAccessLogEmptyCountResponseBody& operator=(DescribeWebAccessLogEmptyCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableCount_ == nullptr
        && this->requestId_ == nullptr; };
    // availableCount Field Functions 
    bool hasAvailableCount() const { return this->availableCount_ != nullptr;};
    void deleteAvailableCount() { this->availableCount_ = nullptr;};
    inline int32_t getAvailableCount() const { DARABONBA_PTR_GET_DEFAULT(availableCount_, 0) };
    inline DescribeWebAccessLogEmptyCountResponseBody& setAvailableCount(int32_t availableCount) { DARABONBA_PTR_SET_VALUE(availableCount_, availableCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebAccessLogEmptyCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The remaining quota that you can clear the Logstore.
    shared_ptr<int32_t> availableCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
