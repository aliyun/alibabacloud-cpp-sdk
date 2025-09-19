// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOUNTNOTSCANNEDIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOUNTNOTSCANNEDIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCountNotScannedImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCountNotScannedImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NotScannedCnt, notScannedCnt_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCountNotScannedImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NotScannedCnt, notScannedCnt_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCountNotScannedImageResponseBody() = default ;
    DescribeCountNotScannedImageResponseBody(const DescribeCountNotScannedImageResponseBody &) = default ;
    DescribeCountNotScannedImageResponseBody(DescribeCountNotScannedImageResponseBody &&) = default ;
    DescribeCountNotScannedImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCountNotScannedImageResponseBody() = default ;
    DescribeCountNotScannedImageResponseBody& operator=(const DescribeCountNotScannedImageResponseBody &) = default ;
    DescribeCountNotScannedImageResponseBody& operator=(DescribeCountNotScannedImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->notScannedCnt_ != nullptr
        && this->requestId_ != nullptr; };
    // notScannedCnt Field Functions 
    bool hasNotScannedCnt() const { return this->notScannedCnt_ != nullptr;};
    void deleteNotScannedCnt() { this->notScannedCnt_ = nullptr;};
    inline int32_t notScannedCnt() const { DARABONBA_PTR_GET_DEFAULT(notScannedCnt_, 0) };
    inline DescribeCountNotScannedImageResponseBody& setNotScannedCnt(int32_t notScannedCnt) { DARABONBA_PTR_SET_VALUE(notScannedCnt_, notScannedCnt) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCountNotScannedImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of images that are not scanned.
    std::shared_ptr<int32_t> notScannedCnt_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
