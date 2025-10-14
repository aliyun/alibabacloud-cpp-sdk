// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAFFILTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWAFFILTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWafFilterResponseBodyFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetWafFilterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWafFilterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWafFilterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetWafFilterResponseBody() = default ;
    GetWafFilterResponseBody(const GetWafFilterResponseBody &) = default ;
    GetWafFilterResponseBody(GetWafFilterResponseBody &&) = default ;
    GetWafFilterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWafFilterResponseBody() = default ;
    GetWafFilterResponseBody& operator=(const GetWafFilterResponseBody &) = default ;
    GetWafFilterResponseBody& operator=(GetWafFilterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && return this->requestId_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const GetWafFilterResponseBodyFilter & filter() const { DARABONBA_PTR_GET_CONST(filter_, GetWafFilterResponseBodyFilter) };
    inline GetWafFilterResponseBodyFilter filter() { DARABONBA_PTR_GET(filter_, GetWafFilterResponseBodyFilter) };
    inline GetWafFilterResponseBody& setFilter(const GetWafFilterResponseBodyFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline GetWafFilterResponseBody& setFilter(GetWafFilterResponseBodyFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWafFilterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned match conditions.
    std::shared_ptr<GetWafFilterResponseBodyFilter> filter_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
