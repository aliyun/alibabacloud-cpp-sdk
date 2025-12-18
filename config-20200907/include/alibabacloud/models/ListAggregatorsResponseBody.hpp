// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAggregatorsResponseBodyAggregatorsResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregatorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregatorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorsResult, aggregatorsResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregatorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorsResult, aggregatorsResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAggregatorsResponseBody() = default ;
    ListAggregatorsResponseBody(const ListAggregatorsResponseBody &) = default ;
    ListAggregatorsResponseBody(ListAggregatorsResponseBody &&) = default ;
    ListAggregatorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregatorsResponseBody() = default ;
    ListAggregatorsResponseBody& operator=(const ListAggregatorsResponseBody &) = default ;
    ListAggregatorsResponseBody& operator=(ListAggregatorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorsResult_ == nullptr
        && return this->requestId_ == nullptr; };
    // aggregatorsResult Field Functions 
    bool hasAggregatorsResult() const { return this->aggregatorsResult_ != nullptr;};
    void deleteAggregatorsResult() { this->aggregatorsResult_ = nullptr;};
    inline const ListAggregatorsResponseBodyAggregatorsResult & aggregatorsResult() const { DARABONBA_PTR_GET_CONST(aggregatorsResult_, ListAggregatorsResponseBodyAggregatorsResult) };
    inline ListAggregatorsResponseBodyAggregatorsResult aggregatorsResult() { DARABONBA_PTR_GET(aggregatorsResult_, ListAggregatorsResponseBodyAggregatorsResult) };
    inline ListAggregatorsResponseBody& setAggregatorsResult(const ListAggregatorsResponseBodyAggregatorsResult & aggregatorsResult) { DARABONBA_PTR_SET_VALUE(aggregatorsResult_, aggregatorsResult) };
    inline ListAggregatorsResponseBody& setAggregatorsResult(ListAggregatorsResponseBodyAggregatorsResult && aggregatorsResult) { DARABONBA_PTR_SET_RVALUE(aggregatorsResult_, aggregatorsResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAggregatorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The account groups.
    std::shared_ptr<ListAggregatorsResponseBodyAggregatorsResult> aggregatorsResult_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
