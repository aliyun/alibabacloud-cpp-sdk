// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERINTERCEPTIONCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERINTERCEPTIONCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListClusterInterceptionConfigResponseBodyClusterConfigList.hpp>
#include <alibabacloud/models/ListClusterInterceptionConfigResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListClusterInterceptionConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterInterceptionConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterConfigList, clusterConfigList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterInterceptionConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterConfigList, clusterConfigList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListClusterInterceptionConfigResponseBody() = default ;
    ListClusterInterceptionConfigResponseBody(const ListClusterInterceptionConfigResponseBody &) = default ;
    ListClusterInterceptionConfigResponseBody(ListClusterInterceptionConfigResponseBody &&) = default ;
    ListClusterInterceptionConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterInterceptionConfigResponseBody() = default ;
    ListClusterInterceptionConfigResponseBody& operator=(const ListClusterInterceptionConfigResponseBody &) = default ;
    ListClusterInterceptionConfigResponseBody& operator=(ListClusterInterceptionConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterConfigList_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // clusterConfigList Field Functions 
    bool hasClusterConfigList() const { return this->clusterConfigList_ != nullptr;};
    void deleteClusterConfigList() { this->clusterConfigList_ = nullptr;};
    inline const vector<ListClusterInterceptionConfigResponseBodyClusterConfigList> & clusterConfigList() const { DARABONBA_PTR_GET_CONST(clusterConfigList_, vector<ListClusterInterceptionConfigResponseBodyClusterConfigList>) };
    inline vector<ListClusterInterceptionConfigResponseBodyClusterConfigList> clusterConfigList() { DARABONBA_PTR_GET(clusterConfigList_, vector<ListClusterInterceptionConfigResponseBodyClusterConfigList>) };
    inline ListClusterInterceptionConfigResponseBody& setClusterConfigList(const vector<ListClusterInterceptionConfigResponseBodyClusterConfigList> & clusterConfigList) { DARABONBA_PTR_SET_VALUE(clusterConfigList_, clusterConfigList) };
    inline ListClusterInterceptionConfigResponseBody& setClusterConfigList(vector<ListClusterInterceptionConfigResponseBodyClusterConfigList> && clusterConfigList) { DARABONBA_PTR_SET_RVALUE(clusterConfigList_, clusterConfigList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListClusterInterceptionConfigResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListClusterInterceptionConfigResponseBodyPageInfo) };
    inline ListClusterInterceptionConfigResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListClusterInterceptionConfigResponseBodyPageInfo) };
    inline ListClusterInterceptionConfigResponseBody& setPageInfo(const ListClusterInterceptionConfigResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListClusterInterceptionConfigResponseBody& setPageInfo(ListClusterInterceptionConfigResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClusterInterceptionConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the configurations of the cluster.
    std::shared_ptr<vector<ListClusterInterceptionConfigResponseBodyClusterConfigList>> clusterConfigList_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListClusterInterceptionConfigResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
