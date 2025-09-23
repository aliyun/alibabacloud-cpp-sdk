// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLSEMPTYCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLSEMPTYCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeSlsEmptyCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlsEmptyCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableCount, availableCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlsEmptyCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableCount, availableCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSlsEmptyCountResponseBody() = default ;
    DescribeSlsEmptyCountResponseBody(const DescribeSlsEmptyCountResponseBody &) = default ;
    DescribeSlsEmptyCountResponseBody(DescribeSlsEmptyCountResponseBody &&) = default ;
    DescribeSlsEmptyCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlsEmptyCountResponseBody() = default ;
    DescribeSlsEmptyCountResponseBody& operator=(const DescribeSlsEmptyCountResponseBody &) = default ;
    DescribeSlsEmptyCountResponseBody& operator=(DescribeSlsEmptyCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableCount_ != nullptr
        && this->requestId_ != nullptr; };
    // availableCount Field Functions 
    bool hasAvailableCount() const { return this->availableCount_ != nullptr;};
    void deleteAvailableCount() { this->availableCount_ = nullptr;};
    inline int32_t availableCount() const { DARABONBA_PTR_GET_DEFAULT(availableCount_, 0) };
    inline DescribeSlsEmptyCountResponseBody& setAvailableCount(int32_t availableCount) { DARABONBA_PTR_SET_VALUE(availableCount_, availableCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlsEmptyCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int32_t> availableCount_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
