// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMROBOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMROBOTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIMRobotsResponseBodyPageBean.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeIMRobotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIMRobotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageBean, pageBean_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIMRobotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageBean, pageBean_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeIMRobotsResponseBody() = default ;
    DescribeIMRobotsResponseBody(const DescribeIMRobotsResponseBody &) = default ;
    DescribeIMRobotsResponseBody(DescribeIMRobotsResponseBody &&) = default ;
    DescribeIMRobotsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIMRobotsResponseBody() = default ;
    DescribeIMRobotsResponseBody& operator=(const DescribeIMRobotsResponseBody &) = default ;
    DescribeIMRobotsResponseBody& operator=(DescribeIMRobotsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageBean_ != nullptr
        && this->requestId_ != nullptr; };
    // pageBean Field Functions 
    bool hasPageBean() const { return this->pageBean_ != nullptr;};
    void deletePageBean() { this->pageBean_ = nullptr;};
    inline const DescribeIMRobotsResponseBodyPageBean & pageBean() const { DARABONBA_PTR_GET_CONST(pageBean_, DescribeIMRobotsResponseBodyPageBean) };
    inline DescribeIMRobotsResponseBodyPageBean pageBean() { DARABONBA_PTR_GET(pageBean_, DescribeIMRobotsResponseBodyPageBean) };
    inline DescribeIMRobotsResponseBody& setPageBean(const DescribeIMRobotsResponseBodyPageBean & pageBean) { DARABONBA_PTR_SET_VALUE(pageBean_, pageBean) };
    inline DescribeIMRobotsResponseBody& setPageBean(DescribeIMRobotsResponseBodyPageBean && pageBean) { DARABONBA_PTR_SET_RVALUE(pageBean_, pageBean) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIMRobotsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned objects.
    std::shared_ptr<DescribeIMRobotsResponseBodyPageBean> pageBean_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
