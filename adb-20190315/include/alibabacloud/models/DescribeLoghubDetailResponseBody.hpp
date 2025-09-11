// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGHUBDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGHUBDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLoghubDetailResponseBodyLoghubInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeLoghubDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoghubDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoghubInfo, loghubInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoghubDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoghubInfo, loghubInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLoghubDetailResponseBody() = default ;
    DescribeLoghubDetailResponseBody(const DescribeLoghubDetailResponseBody &) = default ;
    DescribeLoghubDetailResponseBody(DescribeLoghubDetailResponseBody &&) = default ;
    DescribeLoghubDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoghubDetailResponseBody() = default ;
    DescribeLoghubDetailResponseBody& operator=(const DescribeLoghubDetailResponseBody &) = default ;
    DescribeLoghubDetailResponseBody& operator=(DescribeLoghubDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->loghubInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // loghubInfo Field Functions 
    bool hasLoghubInfo() const { return this->loghubInfo_ != nullptr;};
    void deleteLoghubInfo() { this->loghubInfo_ = nullptr;};
    inline const DescribeLoghubDetailResponseBodyLoghubInfo & loghubInfo() const { DARABONBA_PTR_GET_CONST(loghubInfo_, DescribeLoghubDetailResponseBodyLoghubInfo) };
    inline DescribeLoghubDetailResponseBodyLoghubInfo loghubInfo() { DARABONBA_PTR_GET(loghubInfo_, DescribeLoghubDetailResponseBodyLoghubInfo) };
    inline DescribeLoghubDetailResponseBody& setLoghubInfo(const DescribeLoghubDetailResponseBodyLoghubInfo & loghubInfo) { DARABONBA_PTR_SET_VALUE(loghubInfo_, loghubInfo) };
    inline DescribeLoghubDetailResponseBody& setLoghubInfo(DescribeLoghubDetailResponseBodyLoghubInfo && loghubInfo) { DARABONBA_PTR_SET_RVALUE(loghubInfo_, loghubInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoghubDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried log collection information.
    std::shared_ptr<DescribeLoghubDetailResponseBodyLoghubInfo> loghubInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
