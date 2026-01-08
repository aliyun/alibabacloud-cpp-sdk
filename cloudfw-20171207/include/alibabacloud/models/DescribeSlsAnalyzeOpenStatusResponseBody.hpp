// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLSANALYZEOPENSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLSANALYZEOPENSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSlsAnalyzeOpenStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlsAnalyzeOpenStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OpenStatus, openStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlsAnalyzeOpenStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenStatus, openStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSlsAnalyzeOpenStatusResponseBody() = default ;
    DescribeSlsAnalyzeOpenStatusResponseBody(const DescribeSlsAnalyzeOpenStatusResponseBody &) = default ;
    DescribeSlsAnalyzeOpenStatusResponseBody(DescribeSlsAnalyzeOpenStatusResponseBody &&) = default ;
    DescribeSlsAnalyzeOpenStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlsAnalyzeOpenStatusResponseBody() = default ;
    DescribeSlsAnalyzeOpenStatusResponseBody& operator=(const DescribeSlsAnalyzeOpenStatusResponseBody &) = default ;
    DescribeSlsAnalyzeOpenStatusResponseBody& operator=(DescribeSlsAnalyzeOpenStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->openStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // openStatus Field Functions 
    bool hasOpenStatus() const { return this->openStatus_ != nullptr;};
    void deleteOpenStatus() { this->openStatus_ = nullptr;};
    inline string getOpenStatus() const { DARABONBA_PTR_GET_DEFAULT(openStatus_, "") };
    inline DescribeSlsAnalyzeOpenStatusResponseBody& setOpenStatus(string openStatus) { DARABONBA_PTR_SET_VALUE(openStatus_, openStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlsAnalyzeOpenStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> openStatus_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
