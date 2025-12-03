// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISBYBACKENDRESPONSEBODYAPIINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISBYBACKENDRESPONSEBODYAPIINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApisByBackendResponseBodyApiInfoListApiInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisByBackendResponseBodyApiInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisByBackendResponseBodyApiInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(ApiInfo, apiInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisByBackendResponseBodyApiInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiInfo, apiInfo_);
    };
    DescribeApisByBackendResponseBodyApiInfoList() = default ;
    DescribeApisByBackendResponseBodyApiInfoList(const DescribeApisByBackendResponseBodyApiInfoList &) = default ;
    DescribeApisByBackendResponseBodyApiInfoList(DescribeApisByBackendResponseBodyApiInfoList &&) = default ;
    DescribeApisByBackendResponseBodyApiInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisByBackendResponseBodyApiInfoList() = default ;
    DescribeApisByBackendResponseBodyApiInfoList& operator=(const DescribeApisByBackendResponseBodyApiInfoList &) = default ;
    DescribeApisByBackendResponseBodyApiInfoList& operator=(DescribeApisByBackendResponseBodyApiInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiInfo_ == nullptr; };
    // apiInfo Field Functions 
    bool hasApiInfo() const { return this->apiInfo_ != nullptr;};
    void deleteApiInfo() { this->apiInfo_ = nullptr;};
    inline const vector<Models::DescribeApisByBackendResponseBodyApiInfoListApiInfo> & apiInfo() const { DARABONBA_PTR_GET_CONST(apiInfo_, vector<Models::DescribeApisByBackendResponseBodyApiInfoListApiInfo>) };
    inline vector<Models::DescribeApisByBackendResponseBodyApiInfoListApiInfo> apiInfo() { DARABONBA_PTR_GET(apiInfo_, vector<Models::DescribeApisByBackendResponseBodyApiInfoListApiInfo>) };
    inline DescribeApisByBackendResponseBodyApiInfoList& setApiInfo(const vector<Models::DescribeApisByBackendResponseBodyApiInfoListApiInfo> & apiInfo) { DARABONBA_PTR_SET_VALUE(apiInfo_, apiInfo) };
    inline DescribeApisByBackendResponseBodyApiInfoList& setApiInfo(vector<Models::DescribeApisByBackendResponseBodyApiInfoListApiInfo> && apiInfo) { DARABONBA_PTR_SET_RVALUE(apiInfo_, apiInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeApisByBackendResponseBodyApiInfoListApiInfo>> apiInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
