// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMSYSTEMLINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMSYSTEMLINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCloudGtmSystemLinesResponseBodySystemLines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmSystemLinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmSystemLinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SystemLines, systemLines_);
      DARABONBA_PTR_TO_JSON(SystemLinesTree, systemLinesTree_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmSystemLinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SystemLines, systemLines_);
      DARABONBA_PTR_FROM_JSON(SystemLinesTree, systemLinesTree_);
    };
    DescribeCloudGtmSystemLinesResponseBody() = default ;
    DescribeCloudGtmSystemLinesResponseBody(const DescribeCloudGtmSystemLinesResponseBody &) = default ;
    DescribeCloudGtmSystemLinesResponseBody(DescribeCloudGtmSystemLinesResponseBody &&) = default ;
    DescribeCloudGtmSystemLinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmSystemLinesResponseBody() = default ;
    DescribeCloudGtmSystemLinesResponseBody& operator=(const DescribeCloudGtmSystemLinesResponseBody &) = default ;
    DescribeCloudGtmSystemLinesResponseBody& operator=(DescribeCloudGtmSystemLinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->systemLines_ != nullptr && this->systemLinesTree_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudGtmSystemLinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // systemLines Field Functions 
    bool hasSystemLines() const { return this->systemLines_ != nullptr;};
    void deleteSystemLines() { this->systemLines_ = nullptr;};
    inline const DescribeCloudGtmSystemLinesResponseBodySystemLines & systemLines() const { DARABONBA_PTR_GET_CONST(systemLines_, DescribeCloudGtmSystemLinesResponseBodySystemLines) };
    inline DescribeCloudGtmSystemLinesResponseBodySystemLines systemLines() { DARABONBA_PTR_GET(systemLines_, DescribeCloudGtmSystemLinesResponseBodySystemLines) };
    inline DescribeCloudGtmSystemLinesResponseBody& setSystemLines(const DescribeCloudGtmSystemLinesResponseBodySystemLines & systemLines) { DARABONBA_PTR_SET_VALUE(systemLines_, systemLines) };
    inline DescribeCloudGtmSystemLinesResponseBody& setSystemLines(DescribeCloudGtmSystemLinesResponseBodySystemLines && systemLines) { DARABONBA_PTR_SET_RVALUE(systemLines_, systemLines) };


    // systemLinesTree Field Functions 
    bool hasSystemLinesTree() const { return this->systemLinesTree_ != nullptr;};
    void deleteSystemLinesTree() { this->systemLinesTree_ = nullptr;};
    inline string systemLinesTree() const { DARABONBA_PTR_GET_DEFAULT(systemLinesTree_, "") };
    inline DescribeCloudGtmSystemLinesResponseBody& setSystemLinesTree(string systemLinesTree) { DARABONBA_PTR_SET_VALUE(systemLinesTree_, systemLinesTree) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The system lines.
    std::shared_ptr<DescribeCloudGtmSystemLinesResponseBodySystemLines> systemLines_ = nullptr;
    // The system lines, which are in a tree structure. Only a system line is listed in this example.
    std::shared_ptr<string> systemLinesTree_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
