// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETOPOLOGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETOPOLOGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceTopologyResponseBodyTopologys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceTopologyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTopologyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Topologys, topologys_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTopologyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Topologys, topologys_);
    };
    DescribeInstanceTopologyResponseBody() = default ;
    DescribeInstanceTopologyResponseBody(const DescribeInstanceTopologyResponseBody &) = default ;
    DescribeInstanceTopologyResponseBody(DescribeInstanceTopologyResponseBody &&) = default ;
    DescribeInstanceTopologyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTopologyResponseBody() = default ;
    DescribeInstanceTopologyResponseBody& operator=(const DescribeInstanceTopologyResponseBody &) = default ;
    DescribeInstanceTopologyResponseBody& operator=(DescribeInstanceTopologyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->topologys_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceTopologyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // topologys Field Functions 
    bool hasTopologys() const { return this->topologys_ != nullptr;};
    void deleteTopologys() { this->topologys_ = nullptr;};
    inline const DescribeInstanceTopologyResponseBodyTopologys & topologys() const { DARABONBA_PTR_GET_CONST(topologys_, DescribeInstanceTopologyResponseBodyTopologys) };
    inline DescribeInstanceTopologyResponseBodyTopologys topologys() { DARABONBA_PTR_GET(topologys_, DescribeInstanceTopologyResponseBodyTopologys) };
    inline DescribeInstanceTopologyResponseBody& setTopologys(const DescribeInstanceTopologyResponseBodyTopologys & topologys) { DARABONBA_PTR_SET_VALUE(topologys_, topologys) };
    inline DescribeInstanceTopologyResponseBody& setTopologys(DescribeInstanceTopologyResponseBodyTopologys && topologys) { DARABONBA_PTR_SET_RVALUE(topologys_, topologys) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Details about the topology.
    std::shared_ptr<DescribeInstanceTopologyResponseBodyTopologys> topologys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
