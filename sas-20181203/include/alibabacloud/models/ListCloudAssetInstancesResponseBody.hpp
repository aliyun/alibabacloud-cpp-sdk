// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDASSETINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDASSETINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudAssetInstancesResponseBodyInstances.hpp>
#include <alibabacloud/models/ListCloudAssetInstancesResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCloudAssetInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAssetInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAssetInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCloudAssetInstancesResponseBody() = default ;
    ListCloudAssetInstancesResponseBody(const ListCloudAssetInstancesResponseBody &) = default ;
    ListCloudAssetInstancesResponseBody(ListCloudAssetInstancesResponseBody &&) = default ;
    ListCloudAssetInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAssetInstancesResponseBody() = default ;
    ListCloudAssetInstancesResponseBody& operator=(const ListCloudAssetInstancesResponseBody &) = default ;
    ListCloudAssetInstancesResponseBody& operator=(ListCloudAssetInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instances_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ListCloudAssetInstancesResponseBodyInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ListCloudAssetInstancesResponseBodyInstances>) };
    inline vector<ListCloudAssetInstancesResponseBodyInstances> instances() { DARABONBA_PTR_GET(instances_, vector<ListCloudAssetInstancesResponseBodyInstances>) };
    inline ListCloudAssetInstancesResponseBody& setInstances(const vector<ListCloudAssetInstancesResponseBodyInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListCloudAssetInstancesResponseBody& setInstances(vector<ListCloudAssetInstancesResponseBodyInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListCloudAssetInstancesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListCloudAssetInstancesResponseBodyPageInfo) };
    inline ListCloudAssetInstancesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListCloudAssetInstancesResponseBodyPageInfo) };
    inline ListCloudAssetInstancesResponseBody& setPageInfo(const ListCloudAssetInstancesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCloudAssetInstancesResponseBody& setPageInfo(ListCloudAssetInstancesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudAssetInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCloudAssetInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the cloud assets.
    std::shared_ptr<vector<ListCloudAssetInstancesResponseBodyInstances>> instances_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListCloudAssetInstancesResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
