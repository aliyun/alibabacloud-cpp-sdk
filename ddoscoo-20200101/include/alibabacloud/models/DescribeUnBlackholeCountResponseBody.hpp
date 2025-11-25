// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNBLACKHOLECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNBLACKHOLECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeUnBlackholeCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUnBlackholeCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RemainCount, remainCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUnBlackholeCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RemainCount, remainCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeUnBlackholeCountResponseBody() = default ;
    DescribeUnBlackholeCountResponseBody(const DescribeUnBlackholeCountResponseBody &) = default ;
    DescribeUnBlackholeCountResponseBody(DescribeUnBlackholeCountResponseBody &&) = default ;
    DescribeUnBlackholeCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUnBlackholeCountResponseBody() = default ;
    DescribeUnBlackholeCountResponseBody& operator=(const DescribeUnBlackholeCountResponseBody &) = default ;
    DescribeUnBlackholeCountResponseBody& operator=(DescribeUnBlackholeCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remainCount_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // remainCount Field Functions 
    bool hasRemainCount() const { return this->remainCount_ != nullptr;};
    void deleteRemainCount() { this->remainCount_ = nullptr;};
    inline int32_t remainCount() const { DARABONBA_PTR_GET_DEFAULT(remainCount_, 0) };
    inline DescribeUnBlackholeCountResponseBody& setRemainCount(int32_t remainCount) { DARABONBA_PTR_SET_VALUE(remainCount_, remainCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUnBlackholeCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeUnBlackholeCountResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The remaining quota that you can deactivate blackhole filtering.
    std::shared_ptr<int32_t> remainCount_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total quota that you can deactivate blackhole filtering.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
