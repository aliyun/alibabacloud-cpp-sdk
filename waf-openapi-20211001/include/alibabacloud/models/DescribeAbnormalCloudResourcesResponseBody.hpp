// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEABNORMALCLOUDRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEABNORMALCLOUDRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeAbnormalCloudResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAbnormalCloudResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalCloudResources, abnormalCloudResources_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAbnormalCloudResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalCloudResources, abnormalCloudResources_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAbnormalCloudResourcesResponseBody() = default ;
    DescribeAbnormalCloudResourcesResponseBody(const DescribeAbnormalCloudResourcesResponseBody &) = default ;
    DescribeAbnormalCloudResourcesResponseBody(DescribeAbnormalCloudResourcesResponseBody &&) = default ;
    DescribeAbnormalCloudResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAbnormalCloudResourcesResponseBody() = default ;
    DescribeAbnormalCloudResourcesResponseBody& operator=(const DescribeAbnormalCloudResourcesResponseBody &) = default ;
    DescribeAbnormalCloudResourcesResponseBody& operator=(DescribeAbnormalCloudResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abnormalCloudResources_ == nullptr
        && return this->requestId_ == nullptr; };
    // abnormalCloudResources Field Functions 
    bool hasAbnormalCloudResources() const { return this->abnormalCloudResources_ != nullptr;};
    void deleteAbnormalCloudResources() { this->abnormalCloudResources_ = nullptr;};
    inline const vector<DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources> & abnormalCloudResources() const { DARABONBA_PTR_GET_CONST(abnormalCloudResources_, vector<DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources>) };
    inline vector<DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources> abnormalCloudResources() { DARABONBA_PTR_GET(abnormalCloudResources_, vector<DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources>) };
    inline DescribeAbnormalCloudResourcesResponseBody& setAbnormalCloudResources(const vector<DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources> & abnormalCloudResources) { DARABONBA_PTR_SET_VALUE(abnormalCloudResources_, abnormalCloudResources) };
    inline DescribeAbnormalCloudResourcesResponseBody& setAbnormalCloudResources(vector<DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources> && abnormalCloudResources) { DARABONBA_PTR_SET_RVALUE(abnormalCloudResources_, abnormalCloudResources) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAbnormalCloudResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources>> abnormalCloudResources_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
