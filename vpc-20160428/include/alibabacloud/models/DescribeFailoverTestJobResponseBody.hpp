// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAILOVERTESTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAILOVERTESTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeFailoverTestJobResponseBodyFailoverTestJobModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeFailoverTestJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFailoverTestJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailoverTestJobModel, failoverTestJobModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFailoverTestJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailoverTestJobModel, failoverTestJobModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFailoverTestJobResponseBody() = default ;
    DescribeFailoverTestJobResponseBody(const DescribeFailoverTestJobResponseBody &) = default ;
    DescribeFailoverTestJobResponseBody(DescribeFailoverTestJobResponseBody &&) = default ;
    DescribeFailoverTestJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFailoverTestJobResponseBody() = default ;
    DescribeFailoverTestJobResponseBody& operator=(const DescribeFailoverTestJobResponseBody &) = default ;
    DescribeFailoverTestJobResponseBody& operator=(DescribeFailoverTestJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failoverTestJobModel_ == nullptr
        && return this->requestId_ == nullptr; };
    // failoverTestJobModel Field Functions 
    bool hasFailoverTestJobModel() const { return this->failoverTestJobModel_ != nullptr;};
    void deleteFailoverTestJobModel() { this->failoverTestJobModel_ = nullptr;};
    inline const DescribeFailoverTestJobResponseBodyFailoverTestJobModel & failoverTestJobModel() const { DARABONBA_PTR_GET_CONST(failoverTestJobModel_, DescribeFailoverTestJobResponseBodyFailoverTestJobModel) };
    inline DescribeFailoverTestJobResponseBodyFailoverTestJobModel failoverTestJobModel() { DARABONBA_PTR_GET(failoverTestJobModel_, DescribeFailoverTestJobResponseBodyFailoverTestJobModel) };
    inline DescribeFailoverTestJobResponseBody& setFailoverTestJobModel(const DescribeFailoverTestJobResponseBodyFailoverTestJobModel & failoverTestJobModel) { DARABONBA_PTR_SET_VALUE(failoverTestJobModel_, failoverTestJobModel) };
    inline DescribeFailoverTestJobResponseBody& setFailoverTestJobModel(DescribeFailoverTestJobResponseBodyFailoverTestJobModel && failoverTestJobModel) { DARABONBA_PTR_SET_RVALUE(failoverTestJobModel_, failoverTestJobModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFailoverTestJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The failover test.
    std::shared_ptr<DescribeFailoverTestJobResponseBodyFailoverTestJobModel> failoverTestJobModel_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
