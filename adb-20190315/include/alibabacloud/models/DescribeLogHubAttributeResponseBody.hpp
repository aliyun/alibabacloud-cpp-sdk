// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGHUBATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGHUBATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLogHubAttributeResponseBodyLoghubInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeLogHubAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogHubAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoghubInfo, loghubInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogHubAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoghubInfo, loghubInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLogHubAttributeResponseBody() = default ;
    DescribeLogHubAttributeResponseBody(const DescribeLogHubAttributeResponseBody &) = default ;
    DescribeLogHubAttributeResponseBody(DescribeLogHubAttributeResponseBody &&) = default ;
    DescribeLogHubAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogHubAttributeResponseBody() = default ;
    DescribeLogHubAttributeResponseBody& operator=(const DescribeLogHubAttributeResponseBody &) = default ;
    DescribeLogHubAttributeResponseBody& operator=(DescribeLogHubAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->loghubInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // loghubInfo Field Functions 
    bool hasLoghubInfo() const { return this->loghubInfo_ != nullptr;};
    void deleteLoghubInfo() { this->loghubInfo_ = nullptr;};
    inline const DescribeLogHubAttributeResponseBodyLoghubInfo & loghubInfo() const { DARABONBA_PTR_GET_CONST(loghubInfo_, DescribeLogHubAttributeResponseBodyLoghubInfo) };
    inline DescribeLogHubAttributeResponseBodyLoghubInfo loghubInfo() { DARABONBA_PTR_GET(loghubInfo_, DescribeLogHubAttributeResponseBodyLoghubInfo) };
    inline DescribeLogHubAttributeResponseBody& setLoghubInfo(const DescribeLogHubAttributeResponseBodyLoghubInfo & loghubInfo) { DARABONBA_PTR_SET_VALUE(loghubInfo_, loghubInfo) };
    inline DescribeLogHubAttributeResponseBody& setLoghubInfo(DescribeLogHubAttributeResponseBodyLoghubInfo && loghubInfo) { DARABONBA_PTR_SET_RVALUE(loghubInfo_, loghubInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogHubAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The log collection information.
    std::shared_ptr<DescribeLogHubAttributeResponseBodyLoghubInfo> loghubInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
