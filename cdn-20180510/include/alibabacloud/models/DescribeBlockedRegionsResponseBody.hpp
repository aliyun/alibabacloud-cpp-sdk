// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBLOCKEDREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBLOCKEDREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBlockedRegionsResponseBodyInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeBlockedRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBlockedRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InfoList, infoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBlockedRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InfoList, infoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBlockedRegionsResponseBody() = default ;
    DescribeBlockedRegionsResponseBody(const DescribeBlockedRegionsResponseBody &) = default ;
    DescribeBlockedRegionsResponseBody(DescribeBlockedRegionsResponseBody &&) = default ;
    DescribeBlockedRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBlockedRegionsResponseBody() = default ;
    DescribeBlockedRegionsResponseBody& operator=(const DescribeBlockedRegionsResponseBody &) = default ;
    DescribeBlockedRegionsResponseBody& operator=(DescribeBlockedRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->infoList_ != nullptr
        && this->requestId_ != nullptr; };
    // infoList Field Functions 
    bool hasInfoList() const { return this->infoList_ != nullptr;};
    void deleteInfoList() { this->infoList_ = nullptr;};
    inline const DescribeBlockedRegionsResponseBodyInfoList & infoList() const { DARABONBA_PTR_GET_CONST(infoList_, DescribeBlockedRegionsResponseBodyInfoList) };
    inline DescribeBlockedRegionsResponseBodyInfoList infoList() { DARABONBA_PTR_GET(infoList_, DescribeBlockedRegionsResponseBodyInfoList) };
    inline DescribeBlockedRegionsResponseBody& setInfoList(const DescribeBlockedRegionsResponseBodyInfoList & infoList) { DARABONBA_PTR_SET_VALUE(infoList_, infoList) };
    inline DescribeBlockedRegionsResponseBody& setInfoList(DescribeBlockedRegionsResponseBodyInfoList && infoList) { DARABONBA_PTR_SET_RVALUE(infoList_, infoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBlockedRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information returned.
    std::shared_ptr<DescribeBlockedRegionsResponseBodyInfoList> infoList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
