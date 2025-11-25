// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOCCLISTCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOCCLISTCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeAutoCcListCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoCcListCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BlackCount, blackCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WhiteCount, whiteCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoCcListCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackCount, blackCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WhiteCount, whiteCount_);
    };
    DescribeAutoCcListCountResponseBody() = default ;
    DescribeAutoCcListCountResponseBody(const DescribeAutoCcListCountResponseBody &) = default ;
    DescribeAutoCcListCountResponseBody(DescribeAutoCcListCountResponseBody &&) = default ;
    DescribeAutoCcListCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoCcListCountResponseBody() = default ;
    DescribeAutoCcListCountResponseBody& operator=(const DescribeAutoCcListCountResponseBody &) = default ;
    DescribeAutoCcListCountResponseBody& operator=(DescribeAutoCcListCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blackCount_ == nullptr
        && return this->requestId_ == nullptr && return this->whiteCount_ == nullptr; };
    // blackCount Field Functions 
    bool hasBlackCount() const { return this->blackCount_ != nullptr;};
    void deleteBlackCount() { this->blackCount_ = nullptr;};
    inline int32_t blackCount() const { DARABONBA_PTR_GET_DEFAULT(blackCount_, 0) };
    inline DescribeAutoCcListCountResponseBody& setBlackCount(int32_t blackCount) { DARABONBA_PTR_SET_VALUE(blackCount_, blackCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoCcListCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // whiteCount Field Functions 
    bool hasWhiteCount() const { return this->whiteCount_ != nullptr;};
    void deleteWhiteCount() { this->whiteCount_ = nullptr;};
    inline int32_t whiteCount() const { DARABONBA_PTR_GET_DEFAULT(whiteCount_, 0) };
    inline DescribeAutoCcListCountResponseBody& setWhiteCount(int32_t whiteCount) { DARABONBA_PTR_SET_VALUE(whiteCount_, whiteCount) };


  protected:
    // The total number of IP addresses in the blacklist.
    std::shared_ptr<int32_t> blackCount_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of IP addresses in the whitelist.
    std::shared_ptr<int32_t> whiteCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
