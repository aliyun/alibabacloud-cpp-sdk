// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENASAVAILABLERESOURCEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENASAVAILABLERESOURCEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNASAvailableResourceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNASAvailableResourceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NasAvailableResourceInfo, nasAvailableResourceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNASAvailableResourceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NasAvailableResourceInfo, nasAvailableResourceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNASAvailableResourceInfoResponseBody() = default ;
    DescribeNASAvailableResourceInfoResponseBody(const DescribeNASAvailableResourceInfoResponseBody &) = default ;
    DescribeNASAvailableResourceInfoResponseBody(DescribeNASAvailableResourceInfoResponseBody &&) = default ;
    DescribeNASAvailableResourceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNASAvailableResourceInfoResponseBody() = default ;
    DescribeNASAvailableResourceInfoResponseBody& operator=(const DescribeNASAvailableResourceInfoResponseBody &) = default ;
    DescribeNASAvailableResourceInfoResponseBody& operator=(DescribeNASAvailableResourceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->nasAvailableResourceInfo_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeNASAvailableResourceInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeNASAvailableResourceInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nasAvailableResourceInfo Field Functions 
    bool hasNasAvailableResourceInfo() const { return this->nasAvailableResourceInfo_ != nullptr;};
    void deleteNasAvailableResourceInfo() { this->nasAvailableResourceInfo_ = nullptr;};
    inline const vector<DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo> & nasAvailableResourceInfo() const { DARABONBA_PTR_GET_CONST(nasAvailableResourceInfo_, vector<DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo>) };
    inline vector<DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo> nasAvailableResourceInfo() { DARABONBA_PTR_GET(nasAvailableResourceInfo_, vector<DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo>) };
    inline DescribeNASAvailableResourceInfoResponseBody& setNasAvailableResourceInfo(const vector<DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo> & nasAvailableResourceInfo) { DARABONBA_PTR_SET_VALUE(nasAvailableResourceInfo_, nasAvailableResourceInfo) };
    inline DescribeNASAvailableResourceInfoResponseBody& setNasAvailableResourceInfo(vector<DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo> && nasAvailableResourceInfo) { DARABONBA_PTR_SET_RVALUE(nasAvailableResourceInfo_, nasAvailableResourceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNASAvailableResourceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned service code. A value of 0 indicates that the operation was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The information of available NAS resources.
    std::shared_ptr<vector<DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo>> nasAvailableResourceInfo_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
