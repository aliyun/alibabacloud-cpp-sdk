// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLogConfigResponseBodyLogInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeLogConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLogConfigResponseBody() = default ;
    DescribeLogConfigResponseBody(const DescribeLogConfigResponseBody &) = default ;
    DescribeLogConfigResponseBody(DescribeLogConfigResponseBody &&) = default ;
    DescribeLogConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogConfigResponseBody() = default ;
    DescribeLogConfigResponseBody& operator=(const DescribeLogConfigResponseBody &) = default ;
    DescribeLogConfigResponseBody& operator=(DescribeLogConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logInfos_ == nullptr
        && return this->requestId_ == nullptr; };
    // logInfos Field Functions 
    bool hasLogInfos() const { return this->logInfos_ != nullptr;};
    void deleteLogInfos() { this->logInfos_ = nullptr;};
    inline const DescribeLogConfigResponseBodyLogInfos & logInfos() const { DARABONBA_PTR_GET_CONST(logInfos_, DescribeLogConfigResponseBodyLogInfos) };
    inline DescribeLogConfigResponseBodyLogInfos logInfos() { DARABONBA_PTR_GET(logInfos_, DescribeLogConfigResponseBodyLogInfos) };
    inline DescribeLogConfigResponseBody& setLogInfos(const DescribeLogConfigResponseBodyLogInfos & logInfos) { DARABONBA_PTR_SET_VALUE(logInfos_, logInfos) };
    inline DescribeLogConfigResponseBody& setLogInfos(DescribeLogConfigResponseBodyLogInfos && logInfos) { DARABONBA_PTR_SET_RVALUE(logInfos_, logInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Info of the log config.
    std::shared_ptr<DescribeLogConfigResponseBodyLogInfos> logInfos_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
