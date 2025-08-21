// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBGPPACKBYIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBGPPACKBYIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBgpPackByIpResponseBodyDdosbgpInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeBgpPackByIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBgpPackByIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DdosbgpInfo, ddosbgpInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBgpPackByIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DdosbgpInfo, ddosbgpInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeBgpPackByIpResponseBody() = default ;
    DescribeBgpPackByIpResponseBody(const DescribeBgpPackByIpResponseBody &) = default ;
    DescribeBgpPackByIpResponseBody(DescribeBgpPackByIpResponseBody &&) = default ;
    DescribeBgpPackByIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBgpPackByIpResponseBody() = default ;
    DescribeBgpPackByIpResponseBody& operator=(const DescribeBgpPackByIpResponseBody &) = default ;
    DescribeBgpPackByIpResponseBody& operator=(DescribeBgpPackByIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->ddosbgpInfo_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeBgpPackByIpResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ddosbgpInfo Field Functions 
    bool hasDdosbgpInfo() const { return this->ddosbgpInfo_ != nullptr;};
    void deleteDdosbgpInfo() { this->ddosbgpInfo_ = nullptr;};
    inline const DescribeBgpPackByIpResponseBodyDdosbgpInfo & ddosbgpInfo() const { DARABONBA_PTR_GET_CONST(ddosbgpInfo_, DescribeBgpPackByIpResponseBodyDdosbgpInfo) };
    inline DescribeBgpPackByIpResponseBodyDdosbgpInfo ddosbgpInfo() { DARABONBA_PTR_GET(ddosbgpInfo_, DescribeBgpPackByIpResponseBodyDdosbgpInfo) };
    inline DescribeBgpPackByIpResponseBody& setDdosbgpInfo(const DescribeBgpPackByIpResponseBodyDdosbgpInfo & ddosbgpInfo) { DARABONBA_PTR_SET_VALUE(ddosbgpInfo_, ddosbgpInfo) };
    inline DescribeBgpPackByIpResponseBody& setDdosbgpInfo(DescribeBgpPackByIpResponseBodyDdosbgpInfo && ddosbgpInfo) { DARABONBA_PTR_SET_RVALUE(ddosbgpInfo_, ddosbgpInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBgpPackByIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeBgpPackByIpResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code of the request.
    // 
    // For more information about status codes, see [Common parameters](https://help.aliyun.com/document_detail/118841.html).
    std::shared_ptr<int32_t> code_ = nullptr;
    // The configurations of the instance that is associated with the asset.
    std::shared_ptr<DescribeBgpPackByIpResponseBodyDdosbgpInfo> ddosbgpInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
