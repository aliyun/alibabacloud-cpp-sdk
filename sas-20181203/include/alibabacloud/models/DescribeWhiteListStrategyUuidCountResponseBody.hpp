// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTSTRATEGYUUIDCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTSTRATEGYUUIDCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWhiteListStrategyUuidCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteListStrategyUuidCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UuidCount, uuidCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteListStrategyUuidCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UuidCount, uuidCount_);
    };
    DescribeWhiteListStrategyUuidCountResponseBody() = default ;
    DescribeWhiteListStrategyUuidCountResponseBody(const DescribeWhiteListStrategyUuidCountResponseBody &) = default ;
    DescribeWhiteListStrategyUuidCountResponseBody(DescribeWhiteListStrategyUuidCountResponseBody &&) = default ;
    DescribeWhiteListStrategyUuidCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteListStrategyUuidCountResponseBody() = default ;
    DescribeWhiteListStrategyUuidCountResponseBody& operator=(const DescribeWhiteListStrategyUuidCountResponseBody &) = default ;
    DescribeWhiteListStrategyUuidCountResponseBody& operator=(DescribeWhiteListStrategyUuidCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->uuidCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWhiteListStrategyUuidCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uuidCount Field Functions 
    bool hasUuidCount() const { return this->uuidCount_ != nullptr;};
    void deleteUuidCount() { this->uuidCount_ = nullptr;};
    inline int32_t getUuidCount() const { DARABONBA_PTR_GET_DEFAULT(uuidCount_, 0) };
    inline DescribeWhiteListStrategyUuidCountResponseBody& setUuidCount(int32_t uuidCount) { DARABONBA_PTR_SET_VALUE(uuidCount_, uuidCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of the servers on which the application whitelist policy takes effect.
    shared_ptr<int32_t> uuidCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
