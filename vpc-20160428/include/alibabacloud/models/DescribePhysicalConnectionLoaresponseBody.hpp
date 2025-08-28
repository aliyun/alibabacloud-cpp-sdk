// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONLOARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONLOARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribePhysicalConnectionLOAResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhysicalConnectionLOAResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PhysicalConnectionLOAType, physicalConnectionLOAType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhysicalConnectionLOAResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionLOAType, physicalConnectionLOAType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePhysicalConnectionLOAResponseBody() = default ;
    DescribePhysicalConnectionLOAResponseBody(const DescribePhysicalConnectionLOAResponseBody &) = default ;
    DescribePhysicalConnectionLOAResponseBody(DescribePhysicalConnectionLOAResponseBody &&) = default ;
    DescribePhysicalConnectionLOAResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhysicalConnectionLOAResponseBody() = default ;
    DescribePhysicalConnectionLOAResponseBody& operator=(const DescribePhysicalConnectionLOAResponseBody &) = default ;
    DescribePhysicalConnectionLOAResponseBody& operator=(DescribePhysicalConnectionLOAResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->physicalConnectionLOAType_ != nullptr
        && this->requestId_ != nullptr; };
    // physicalConnectionLOAType Field Functions 
    bool hasPhysicalConnectionLOAType() const { return this->physicalConnectionLOAType_ != nullptr;};
    void deletePhysicalConnectionLOAType() { this->physicalConnectionLOAType_ = nullptr;};
    inline const DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType & physicalConnectionLOAType() const { DARABONBA_PTR_GET_CONST(physicalConnectionLOAType_, DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType) };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType physicalConnectionLOAType() { DARABONBA_PTR_GET(physicalConnectionLOAType_, DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType) };
    inline DescribePhysicalConnectionLOAResponseBody& setPhysicalConnectionLOAType(const DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType & physicalConnectionLOAType) { DARABONBA_PTR_SET_VALUE(physicalConnectionLOAType_, physicalConnectionLOAType) };
    inline DescribePhysicalConnectionLOAResponseBody& setPhysicalConnectionLOAType(DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType && physicalConnectionLOAType) { DARABONBA_PTR_SET_RVALUE(physicalConnectionLOAType_, physicalConnectionLOAType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePhysicalConnectionLOAResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The LOA information about the Express Connect circuit.
    std::shared_ptr<DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType> physicalConnectionLOAType_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
