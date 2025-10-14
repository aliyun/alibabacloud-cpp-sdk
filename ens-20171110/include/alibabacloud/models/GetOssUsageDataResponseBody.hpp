// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOSSUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOssUsageDataResponseBodyUsageList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class GetOssUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UsageList, usageList_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UsageList, usageList_);
    };
    GetOssUsageDataResponseBody() = default ;
    GetOssUsageDataResponseBody(const GetOssUsageDataResponseBody &) = default ;
    GetOssUsageDataResponseBody(GetOssUsageDataResponseBody &&) = default ;
    GetOssUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssUsageDataResponseBody() = default ;
    GetOssUsageDataResponseBody& operator=(const GetOssUsageDataResponseBody &) = default ;
    GetOssUsageDataResponseBody& operator=(GetOssUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->usageList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOssUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usageList Field Functions 
    bool hasUsageList() const { return this->usageList_ != nullptr;};
    void deleteUsageList() { this->usageList_ = nullptr;};
    inline const vector<GetOssUsageDataResponseBodyUsageList> & usageList() const { DARABONBA_PTR_GET_CONST(usageList_, vector<GetOssUsageDataResponseBodyUsageList>) };
    inline vector<GetOssUsageDataResponseBodyUsageList> usageList() { DARABONBA_PTR_GET(usageList_, vector<GetOssUsageDataResponseBodyUsageList>) };
    inline GetOssUsageDataResponseBody& setUsageList(const vector<GetOssUsageDataResponseBodyUsageList> & usageList) { DARABONBA_PTR_SET_VALUE(usageList_, usageList) };
    inline GetOssUsageDataResponseBody& setUsageList(vector<GetOssUsageDataResponseBodyUsageList> && usageList) { DARABONBA_PTR_SET_RVALUE(usageList_, usageList) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The array of usage data.
    std::shared_ptr<vector<GetOssUsageDataResponseBodyUsageList>> usageList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
