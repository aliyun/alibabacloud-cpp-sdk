// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROCESSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROCESSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeProcessListResponseBodyProcessList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeProcessListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProcessListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProcessList, processList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProcessListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProcessList, processList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeProcessListResponseBody() = default ;
    DescribeProcessListResponseBody(const DescribeProcessListResponseBody &) = default ;
    DescribeProcessListResponseBody(DescribeProcessListResponseBody &&) = default ;
    DescribeProcessListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProcessListResponseBody() = default ;
    DescribeProcessListResponseBody& operator=(const DescribeProcessListResponseBody &) = default ;
    DescribeProcessListResponseBody& operator=(DescribeProcessListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->processList_ == nullptr
        && return this->requestId_ == nullptr; };
    // processList Field Functions 
    bool hasProcessList() const { return this->processList_ != nullptr;};
    void deleteProcessList() { this->processList_ = nullptr;};
    inline const DescribeProcessListResponseBodyProcessList & processList() const { DARABONBA_PTR_GET_CONST(processList_, DescribeProcessListResponseBodyProcessList) };
    inline DescribeProcessListResponseBodyProcessList processList() { DARABONBA_PTR_GET(processList_, DescribeProcessListResponseBodyProcessList) };
    inline DescribeProcessListResponseBody& setProcessList(const DescribeProcessListResponseBodyProcessList & processList) { DARABONBA_PTR_SET_VALUE(processList_, processList) };
    inline DescribeProcessListResponseBody& setProcessList(DescribeProcessListResponseBodyProcessList && processList) { DARABONBA_PTR_SET_RVALUE(processList_, processList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProcessListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queries.
    std::shared_ptr<DescribeProcessListResponseBodyProcessList> processList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
