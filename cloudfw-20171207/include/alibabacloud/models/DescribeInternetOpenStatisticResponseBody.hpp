// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInternetOpenStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetOpenStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InternetIpNum, internetIpNum_);
      DARABONBA_PTR_TO_JSON(InternetPortNum, internetPortNum_);
      DARABONBA_PTR_TO_JSON(InternetRiskIpNum, internetRiskIpNum_);
      DARABONBA_PTR_TO_JSON(InternetRiskPortNum, internetRiskPortNum_);
      DARABONBA_PTR_TO_JSON(InternetRiskServiceNum, internetRiskServiceNum_);
      DARABONBA_PTR_TO_JSON(InternetServiceNum, internetServiceNum_);
      DARABONBA_PTR_TO_JSON(InternetSlbIpNum, internetSlbIpNum_);
      DARABONBA_PTR_TO_JSON(InternetSlbIpPortNum, internetSlbIpPortNum_);
      DARABONBA_PTR_TO_JSON(InternetUnprotectedPortNum, internetUnprotectedPortNum_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetOpenStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InternetIpNum, internetIpNum_);
      DARABONBA_PTR_FROM_JSON(InternetPortNum, internetPortNum_);
      DARABONBA_PTR_FROM_JSON(InternetRiskIpNum, internetRiskIpNum_);
      DARABONBA_PTR_FROM_JSON(InternetRiskPortNum, internetRiskPortNum_);
      DARABONBA_PTR_FROM_JSON(InternetRiskServiceNum, internetRiskServiceNum_);
      DARABONBA_PTR_FROM_JSON(InternetServiceNum, internetServiceNum_);
      DARABONBA_PTR_FROM_JSON(InternetSlbIpNum, internetSlbIpNum_);
      DARABONBA_PTR_FROM_JSON(InternetSlbIpPortNum, internetSlbIpPortNum_);
      DARABONBA_PTR_FROM_JSON(InternetUnprotectedPortNum, internetUnprotectedPortNum_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInternetOpenStatisticResponseBody() = default ;
    DescribeInternetOpenStatisticResponseBody(const DescribeInternetOpenStatisticResponseBody &) = default ;
    DescribeInternetOpenStatisticResponseBody(DescribeInternetOpenStatisticResponseBody &&) = default ;
    DescribeInternetOpenStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetOpenStatisticResponseBody() = default ;
    DescribeInternetOpenStatisticResponseBody& operator=(const DescribeInternetOpenStatisticResponseBody &) = default ;
    DescribeInternetOpenStatisticResponseBody& operator=(DescribeInternetOpenStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->internetIpNum_ == nullptr
        && return this->internetPortNum_ == nullptr && return this->internetRiskIpNum_ == nullptr && return this->internetRiskPortNum_ == nullptr && return this->internetRiskServiceNum_ == nullptr && return this->internetServiceNum_ == nullptr
        && return this->internetSlbIpNum_ == nullptr && return this->internetSlbIpPortNum_ == nullptr && return this->internetUnprotectedPortNum_ == nullptr && return this->requestId_ == nullptr; };
    // internetIpNum Field Functions 
    bool hasInternetIpNum() const { return this->internetIpNum_ != nullptr;};
    void deleteInternetIpNum() { this->internetIpNum_ = nullptr;};
    inline int32_t internetIpNum() const { DARABONBA_PTR_GET_DEFAULT(internetIpNum_, 0) };
    inline DescribeInternetOpenStatisticResponseBody& setInternetIpNum(int32_t internetIpNum) { DARABONBA_PTR_SET_VALUE(internetIpNum_, internetIpNum) };


    // internetPortNum Field Functions 
    bool hasInternetPortNum() const { return this->internetPortNum_ != nullptr;};
    void deleteInternetPortNum() { this->internetPortNum_ = nullptr;};
    inline int32_t internetPortNum() const { DARABONBA_PTR_GET_DEFAULT(internetPortNum_, 0) };
    inline DescribeInternetOpenStatisticResponseBody& setInternetPortNum(int32_t internetPortNum) { DARABONBA_PTR_SET_VALUE(internetPortNum_, internetPortNum) };


    // internetRiskIpNum Field Functions 
    bool hasInternetRiskIpNum() const { return this->internetRiskIpNum_ != nullptr;};
    void deleteInternetRiskIpNum() { this->internetRiskIpNum_ = nullptr;};
    inline int32_t internetRiskIpNum() const { DARABONBA_PTR_GET_DEFAULT(internetRiskIpNum_, 0) };
    inline DescribeInternetOpenStatisticResponseBody& setInternetRiskIpNum(int32_t internetRiskIpNum) { DARABONBA_PTR_SET_VALUE(internetRiskIpNum_, internetRiskIpNum) };


    // internetRiskPortNum Field Functions 
    bool hasInternetRiskPortNum() const { return this->internetRiskPortNum_ != nullptr;};
    void deleteInternetRiskPortNum() { this->internetRiskPortNum_ = nullptr;};
    inline int32_t internetRiskPortNum() const { DARABONBA_PTR_GET_DEFAULT(internetRiskPortNum_, 0) };
    inline DescribeInternetOpenStatisticResponseBody& setInternetRiskPortNum(int32_t internetRiskPortNum) { DARABONBA_PTR_SET_VALUE(internetRiskPortNum_, internetRiskPortNum) };


    // internetRiskServiceNum Field Functions 
    bool hasInternetRiskServiceNum() const { return this->internetRiskServiceNum_ != nullptr;};
    void deleteInternetRiskServiceNum() { this->internetRiskServiceNum_ = nullptr;};
    inline int32_t internetRiskServiceNum() const { DARABONBA_PTR_GET_DEFAULT(internetRiskServiceNum_, 0) };
    inline DescribeInternetOpenStatisticResponseBody& setInternetRiskServiceNum(int32_t internetRiskServiceNum) { DARABONBA_PTR_SET_VALUE(internetRiskServiceNum_, internetRiskServiceNum) };


    // internetServiceNum Field Functions 
    bool hasInternetServiceNum() const { return this->internetServiceNum_ != nullptr;};
    void deleteInternetServiceNum() { this->internetServiceNum_ = nullptr;};
    inline int32_t internetServiceNum() const { DARABONBA_PTR_GET_DEFAULT(internetServiceNum_, 0) };
    inline DescribeInternetOpenStatisticResponseBody& setInternetServiceNum(int32_t internetServiceNum) { DARABONBA_PTR_SET_VALUE(internetServiceNum_, internetServiceNum) };


    // internetSlbIpNum Field Functions 
    bool hasInternetSlbIpNum() const { return this->internetSlbIpNum_ != nullptr;};
    void deleteInternetSlbIpNum() { this->internetSlbIpNum_ = nullptr;};
    inline int32_t internetSlbIpNum() const { DARABONBA_PTR_GET_DEFAULT(internetSlbIpNum_, 0) };
    inline DescribeInternetOpenStatisticResponseBody& setInternetSlbIpNum(int32_t internetSlbIpNum) { DARABONBA_PTR_SET_VALUE(internetSlbIpNum_, internetSlbIpNum) };


    // internetSlbIpPortNum Field Functions 
    bool hasInternetSlbIpPortNum() const { return this->internetSlbIpPortNum_ != nullptr;};
    void deleteInternetSlbIpPortNum() { this->internetSlbIpPortNum_ = nullptr;};
    inline int32_t internetSlbIpPortNum() const { DARABONBA_PTR_GET_DEFAULT(internetSlbIpPortNum_, 0) };
    inline DescribeInternetOpenStatisticResponseBody& setInternetSlbIpPortNum(int32_t internetSlbIpPortNum) { DARABONBA_PTR_SET_VALUE(internetSlbIpPortNum_, internetSlbIpPortNum) };


    // internetUnprotectedPortNum Field Functions 
    bool hasInternetUnprotectedPortNum() const { return this->internetUnprotectedPortNum_ != nullptr;};
    void deleteInternetUnprotectedPortNum() { this->internetUnprotectedPortNum_ = nullptr;};
    inline int32_t internetUnprotectedPortNum() const { DARABONBA_PTR_GET_DEFAULT(internetUnprotectedPortNum_, 0) };
    inline DescribeInternetOpenStatisticResponseBody& setInternetUnprotectedPortNum(int32_t internetUnprotectedPortNum) { DARABONBA_PTR_SET_VALUE(internetUnprotectedPortNum_, internetUnprotectedPortNum) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInternetOpenStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int32_t> internetIpNum_ = nullptr;
    std::shared_ptr<int32_t> internetPortNum_ = nullptr;
    std::shared_ptr<int32_t> internetRiskIpNum_ = nullptr;
    std::shared_ptr<int32_t> internetRiskPortNum_ = nullptr;
    std::shared_ptr<int32_t> internetRiskServiceNum_ = nullptr;
    std::shared_ptr<int32_t> internetServiceNum_ = nullptr;
    std::shared_ptr<int32_t> internetSlbIpNum_ = nullptr;
    std::shared_ptr<int32_t> internetSlbIpPortNum_ = nullptr;
    std::shared_ptr<int32_t> internetUnprotectedPortNum_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
