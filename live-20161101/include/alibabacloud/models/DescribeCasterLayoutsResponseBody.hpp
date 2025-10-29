// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERLAYOUTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERLAYOUTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCasterLayoutsResponseBodyLayouts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterLayoutsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterLayoutsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Layouts, layouts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterLayoutsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Layouts, layouts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeCasterLayoutsResponseBody() = default ;
    DescribeCasterLayoutsResponseBody(const DescribeCasterLayoutsResponseBody &) = default ;
    DescribeCasterLayoutsResponseBody(DescribeCasterLayoutsResponseBody &&) = default ;
    DescribeCasterLayoutsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterLayoutsResponseBody() = default ;
    DescribeCasterLayoutsResponseBody& operator=(const DescribeCasterLayoutsResponseBody &) = default ;
    DescribeCasterLayoutsResponseBody& operator=(DescribeCasterLayoutsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->layouts_ == nullptr
        && return this->requestId_ == nullptr && return this->total_ == nullptr; };
    // layouts Field Functions 
    bool hasLayouts() const { return this->layouts_ != nullptr;};
    void deleteLayouts() { this->layouts_ = nullptr;};
    inline const DescribeCasterLayoutsResponseBodyLayouts & layouts() const { DARABONBA_PTR_GET_CONST(layouts_, DescribeCasterLayoutsResponseBodyLayouts) };
    inline DescribeCasterLayoutsResponseBodyLayouts layouts() { DARABONBA_PTR_GET(layouts_, DescribeCasterLayoutsResponseBodyLayouts) };
    inline DescribeCasterLayoutsResponseBody& setLayouts(const DescribeCasterLayoutsResponseBodyLayouts & layouts) { DARABONBA_PTR_SET_VALUE(layouts_, layouts) };
    inline DescribeCasterLayoutsResponseBody& setLayouts(DescribeCasterLayoutsResponseBodyLayouts && layouts) { DARABONBA_PTR_SET_RVALUE(layouts_, layouts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCasterLayoutsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeCasterLayoutsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The layouts.
    std::shared_ptr<DescribeCasterLayoutsResponseBodyLayouts> layouts_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
