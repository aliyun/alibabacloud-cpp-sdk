// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENCLOUDHCRISKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENCLOUDHCRISKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class DescribeScreenCloudHcRiskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenCloudHcRiskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudHcRiskItems, cloudHcRiskItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenCloudHcRiskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudHcRiskItems, cloudHcRiskItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeScreenCloudHcRiskResponseBody() = default ;
    DescribeScreenCloudHcRiskResponseBody(const DescribeScreenCloudHcRiskResponseBody &) = default ;
    DescribeScreenCloudHcRiskResponseBody(DescribeScreenCloudHcRiskResponseBody &&) = default ;
    DescribeScreenCloudHcRiskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenCloudHcRiskResponseBody() = default ;
    DescribeScreenCloudHcRiskResponseBody& operator=(const DescribeScreenCloudHcRiskResponseBody &) = default ;
    DescribeScreenCloudHcRiskResponseBody& operator=(DescribeScreenCloudHcRiskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudHcRiskItems_ == nullptr
        && return this->requestId_ == nullptr; };
    // cloudHcRiskItems Field Functions 
    bool hasCloudHcRiskItems() const { return this->cloudHcRiskItems_ != nullptr;};
    void deleteCloudHcRiskItems() { this->cloudHcRiskItems_ = nullptr;};
    inline const vector<DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems> & cloudHcRiskItems() const { DARABONBA_PTR_GET_CONST(cloudHcRiskItems_, vector<DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems>) };
    inline vector<DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems> cloudHcRiskItems() { DARABONBA_PTR_GET(cloudHcRiskItems_, vector<DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems>) };
    inline DescribeScreenCloudHcRiskResponseBody& setCloudHcRiskItems(const vector<DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems> & cloudHcRiskItems) { DARABONBA_PTR_SET_VALUE(cloudHcRiskItems_, cloudHcRiskItems) };
    inline DescribeScreenCloudHcRiskResponseBody& setCloudHcRiskItems(vector<DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems> && cloudHcRiskItems) { DARABONBA_PTR_SET_RVALUE(cloudHcRiskItems_, cloudHcRiskItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScreenCloudHcRiskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems>> cloudHcRiskItems_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
