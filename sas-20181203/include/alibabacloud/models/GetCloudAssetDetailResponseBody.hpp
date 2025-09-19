// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDASSETDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDASSETDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCloudAssetDetailResponseBodyInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCloudAssetDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudAssetDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAssetDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCloudAssetDetailResponseBody() = default ;
    GetCloudAssetDetailResponseBody(const GetCloudAssetDetailResponseBody &) = default ;
    GetCloudAssetDetailResponseBody(GetCloudAssetDetailResponseBody &&) = default ;
    GetCloudAssetDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudAssetDetailResponseBody() = default ;
    GetCloudAssetDetailResponseBody& operator=(const GetCloudAssetDetailResponseBody &) = default ;
    GetCloudAssetDetailResponseBody& operator=(GetCloudAssetDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->instances_ != nullptr && this->requestId_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetCloudAssetDetailResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<GetCloudAssetDetailResponseBodyInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<GetCloudAssetDetailResponseBodyInstances>) };
    inline vector<GetCloudAssetDetailResponseBodyInstances> instances() { DARABONBA_PTR_GET(instances_, vector<GetCloudAssetDetailResponseBodyInstances>) };
    inline GetCloudAssetDetailResponseBody& setInstances(const vector<GetCloudAssetDetailResponseBodyInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline GetCloudAssetDetailResponseBody& setInstances(vector<GetCloudAssetDetailResponseBodyInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCloudAssetDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of instances in the list of cloud assets returned.
    std::shared_ptr<int32_t> count_ = nullptr;
    // An array that consists of the details of the cloud assets.
    std::shared_ptr<vector<GetCloudAssetDetailResponseBodyInstances>> instances_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
