// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNamespacesRequestDescribeNamespacesRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class DescribeNamespacesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespacesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DescribeNamespacesRequest, describeNamespacesRequest_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespacesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DescribeNamespacesRequest, describeNamespacesRequest_);
    };
    DescribeNamespacesRequest() = default ;
    DescribeNamespacesRequest(const DescribeNamespacesRequest &) = default ;
    DescribeNamespacesRequest(DescribeNamespacesRequest &&) = default ;
    DescribeNamespacesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespacesRequest() = default ;
    DescribeNamespacesRequest& operator=(const DescribeNamespacesRequest &) = default ;
    DescribeNamespacesRequest& operator=(DescribeNamespacesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->describeNamespacesRequest_ == nullptr; };
    // describeNamespacesRequest Field Functions 
    bool hasDescribeNamespacesRequest() const { return this->describeNamespacesRequest_ != nullptr;};
    void deleteDescribeNamespacesRequest() { this->describeNamespacesRequest_ = nullptr;};
    inline const DescribeNamespacesRequestDescribeNamespacesRequest & describeNamespacesRequest() const { DARABONBA_PTR_GET_CONST(describeNamespacesRequest_, DescribeNamespacesRequestDescribeNamespacesRequest) };
    inline DescribeNamespacesRequestDescribeNamespacesRequest describeNamespacesRequest() { DARABONBA_PTR_GET(describeNamespacesRequest_, DescribeNamespacesRequestDescribeNamespacesRequest) };
    inline DescribeNamespacesRequest& setDescribeNamespacesRequest(const DescribeNamespacesRequestDescribeNamespacesRequest & describeNamespacesRequest) { DARABONBA_PTR_SET_VALUE(describeNamespacesRequest_, describeNamespacesRequest) };
    inline DescribeNamespacesRequest& setDescribeNamespacesRequest(DescribeNamespacesRequestDescribeNamespacesRequest && describeNamespacesRequest) { DARABONBA_PTR_SET_RVALUE(describeNamespacesRequest_, describeNamespacesRequest) };


  protected:
    // This parameter is required.
    std::shared_ptr<DescribeNamespacesRequestDescribeNamespacesRequest> describeNamespacesRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
