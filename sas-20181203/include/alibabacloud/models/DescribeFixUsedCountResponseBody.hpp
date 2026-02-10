// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIXUSEDCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIXUSEDCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeFixUsedCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFixUsedCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UsedCount, usedCount_);
      DARABONBA_PTR_TO_JSON(UsedCountCn, usedCountCn_);
      DARABONBA_PTR_TO_JSON(UsedCountSg, usedCountSg_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFixUsedCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UsedCount, usedCount_);
      DARABONBA_PTR_FROM_JSON(UsedCountCn, usedCountCn_);
      DARABONBA_PTR_FROM_JSON(UsedCountSg, usedCountSg_);
    };
    DescribeFixUsedCountResponseBody() = default ;
    DescribeFixUsedCountResponseBody(const DescribeFixUsedCountResponseBody &) = default ;
    DescribeFixUsedCountResponseBody(DescribeFixUsedCountResponseBody &&) = default ;
    DescribeFixUsedCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFixUsedCountResponseBody() = default ;
    DescribeFixUsedCountResponseBody& operator=(const DescribeFixUsedCountResponseBody &) = default ;
    DescribeFixUsedCountResponseBody& operator=(DescribeFixUsedCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->usedCount_ == nullptr && this->usedCountCn_ == nullptr && this->usedCountSg_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFixUsedCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usedCount Field Functions 
    bool hasUsedCount() const { return this->usedCount_ != nullptr;};
    void deleteUsedCount() { this->usedCount_ = nullptr;};
    inline int32_t getUsedCount() const { DARABONBA_PTR_GET_DEFAULT(usedCount_, 0) };
    inline DescribeFixUsedCountResponseBody& setUsedCount(int32_t usedCount) { DARABONBA_PTR_SET_VALUE(usedCount_, usedCount) };


    // usedCountCn Field Functions 
    bool hasUsedCountCn() const { return this->usedCountCn_ != nullptr;};
    void deleteUsedCountCn() { this->usedCountCn_ = nullptr;};
    inline int32_t getUsedCountCn() const { DARABONBA_PTR_GET_DEFAULT(usedCountCn_, 0) };
    inline DescribeFixUsedCountResponseBody& setUsedCountCn(int32_t usedCountCn) { DARABONBA_PTR_SET_VALUE(usedCountCn_, usedCountCn) };


    // usedCountSg Field Functions 
    bool hasUsedCountSg() const { return this->usedCountSg_ != nullptr;};
    void deleteUsedCountSg() { this->usedCountSg_ = nullptr;};
    inline int32_t getUsedCountSg() const { DARABONBA_PTR_GET_DEFAULT(usedCountSg_, 0) };
    inline DescribeFixUsedCountResponseBody& setUsedCountSg(int32_t usedCountSg) { DARABONBA_PTR_SET_VALUE(usedCountSg_, usedCountSg) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of vulnerabilities that are fixed by the vulnerability fixing feature.
    shared_ptr<int32_t> usedCount_ {};
    // The number of vulnerabilities that are fixed by the vulnerability fixing feature in China.
    shared_ptr<int32_t> usedCountCn_ {};
    // The number of vulnerabilities that are fixed by the vulnerability fixing feature outside China.
    shared_ptr<int32_t> usedCountSg_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
