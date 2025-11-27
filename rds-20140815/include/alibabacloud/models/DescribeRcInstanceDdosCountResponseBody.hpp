// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEDDOSCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEDDOSCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRCInstanceDdosCountResponseBodyDdosCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceDdosCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceDdosCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DdosCount, ddosCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceDdosCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DdosCount, ddosCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRCInstanceDdosCountResponseBody() = default ;
    DescribeRCInstanceDdosCountResponseBody(const DescribeRCInstanceDdosCountResponseBody &) = default ;
    DescribeRCInstanceDdosCountResponseBody(DescribeRCInstanceDdosCountResponseBody &&) = default ;
    DescribeRCInstanceDdosCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceDdosCountResponseBody() = default ;
    DescribeRCInstanceDdosCountResponseBody& operator=(const DescribeRCInstanceDdosCountResponseBody &) = default ;
    DescribeRCInstanceDdosCountResponseBody& operator=(DescribeRCInstanceDdosCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ddosCount_ == nullptr
        && return this->requestId_ == nullptr; };
    // ddosCount Field Functions 
    bool hasDdosCount() const { return this->ddosCount_ != nullptr;};
    void deleteDdosCount() { this->ddosCount_ = nullptr;};
    inline const DescribeRCInstanceDdosCountResponseBodyDdosCount & ddosCount() const { DARABONBA_PTR_GET_CONST(ddosCount_, DescribeRCInstanceDdosCountResponseBodyDdosCount) };
    inline DescribeRCInstanceDdosCountResponseBodyDdosCount ddosCount() { DARABONBA_PTR_GET(ddosCount_, DescribeRCInstanceDdosCountResponseBodyDdosCount) };
    inline DescribeRCInstanceDdosCountResponseBody& setDdosCount(const DescribeRCInstanceDdosCountResponseBodyDdosCount & ddosCount) { DARABONBA_PTR_SET_VALUE(ddosCount_, ddosCount) };
    inline DescribeRCInstanceDdosCountResponseBody& setDdosCount(DescribeRCInstanceDdosCountResponseBodyDdosCount && ddosCount) { DARABONBA_PTR_SET_RVALUE(ddosCount_, ddosCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCInstanceDdosCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of instances that are under DDoS attacks.
    std::shared_ptr<DescribeRCInstanceDdosCountResponseBodyDdosCount> ddosCount_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
