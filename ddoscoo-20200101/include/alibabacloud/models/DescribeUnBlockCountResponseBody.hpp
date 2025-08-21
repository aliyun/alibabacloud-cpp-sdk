// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNBLOCKCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNBLOCKCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeUnBlockCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUnBlockCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RemainCount, remainCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUnBlockCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RemainCount, remainCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeUnBlockCountResponseBody() = default ;
    DescribeUnBlockCountResponseBody(const DescribeUnBlockCountResponseBody &) = default ;
    DescribeUnBlockCountResponseBody(DescribeUnBlockCountResponseBody &&) = default ;
    DescribeUnBlockCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUnBlockCountResponseBody() = default ;
    DescribeUnBlockCountResponseBody& operator=(const DescribeUnBlockCountResponseBody &) = default ;
    DescribeUnBlockCountResponseBody& operator=(DescribeUnBlockCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->remainCount_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // remainCount Field Functions 
    bool hasRemainCount() const { return this->remainCount_ != nullptr;};
    void deleteRemainCount() { this->remainCount_ = nullptr;};
    inline int32_t remainCount() const { DARABONBA_PTR_GET_DEFAULT(remainCount_, 0) };
    inline DescribeUnBlockCountResponseBody& setRemainCount(int32_t remainCount) { DARABONBA_PTR_SET_VALUE(remainCount_, remainCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUnBlockCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeUnBlockCountResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The remaining number of times that you can enable the near-origin traffic diversion feature.
    std::shared_ptr<int32_t> remainCount_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of times that you can enable the near-origin traffic diversion feature.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
