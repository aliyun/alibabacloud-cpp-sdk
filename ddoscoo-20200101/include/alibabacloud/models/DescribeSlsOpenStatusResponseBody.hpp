// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLSOPENSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLSOPENSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeSlsOpenStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlsOpenStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsOpenStatus, slsOpenStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlsOpenStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsOpenStatus, slsOpenStatus_);
    };
    DescribeSlsOpenStatusResponseBody() = default ;
    DescribeSlsOpenStatusResponseBody(const DescribeSlsOpenStatusResponseBody &) = default ;
    DescribeSlsOpenStatusResponseBody(DescribeSlsOpenStatusResponseBody &&) = default ;
    DescribeSlsOpenStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlsOpenStatusResponseBody() = default ;
    DescribeSlsOpenStatusResponseBody& operator=(const DescribeSlsOpenStatusResponseBody &) = default ;
    DescribeSlsOpenStatusResponseBody& operator=(DescribeSlsOpenStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->slsOpenStatus_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlsOpenStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsOpenStatus Field Functions 
    bool hasSlsOpenStatus() const { return this->slsOpenStatus_ != nullptr;};
    void deleteSlsOpenStatus() { this->slsOpenStatus_ = nullptr;};
    inline bool getSlsOpenStatus() const { DARABONBA_PTR_GET_DEFAULT(slsOpenStatus_, false) };
    inline DescribeSlsOpenStatusResponseBody& setSlsOpenStatus(bool slsOpenStatus) { DARABONBA_PTR_SET_VALUE(slsOpenStatus_, slsOpenStatus) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether Log Service is activated. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    shared_ptr<bool> slsOpenStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
