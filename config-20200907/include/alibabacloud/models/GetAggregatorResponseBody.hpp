// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAggregatorResponseBodyAggregator.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregatorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregatorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Aggregator, aggregator_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregatorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Aggregator, aggregator_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregatorResponseBody() = default ;
    GetAggregatorResponseBody(const GetAggregatorResponseBody &) = default ;
    GetAggregatorResponseBody(GetAggregatorResponseBody &&) = default ;
    GetAggregatorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregatorResponseBody() = default ;
    GetAggregatorResponseBody& operator=(const GetAggregatorResponseBody &) = default ;
    GetAggregatorResponseBody& operator=(GetAggregatorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregator_ == nullptr
        && return this->requestId_ == nullptr; };
    // aggregator Field Functions 
    bool hasAggregator() const { return this->aggregator_ != nullptr;};
    void deleteAggregator() { this->aggregator_ = nullptr;};
    inline const GetAggregatorResponseBodyAggregator & aggregator() const { DARABONBA_PTR_GET_CONST(aggregator_, GetAggregatorResponseBodyAggregator) };
    inline GetAggregatorResponseBodyAggregator aggregator() { DARABONBA_PTR_GET(aggregator_, GetAggregatorResponseBodyAggregator) };
    inline GetAggregatorResponseBody& setAggregator(const GetAggregatorResponseBodyAggregator & aggregator) { DARABONBA_PTR_SET_VALUE(aggregator_, aggregator) };
    inline GetAggregatorResponseBody& setAggregator(GetAggregatorResponseBodyAggregator && aggregator) { DARABONBA_PTR_SET_RVALUE(aggregator_, aggregator) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregatorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the account group.
    std::shared_ptr<GetAggregatorResponseBodyAggregator> aggregator_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
