// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDCONTAINERNETWORKCONNECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FINDCONTAINERNETWORKCONNECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FindContainerNetworkConnectResponseBodyConnects.hpp>
#include <alibabacloud/models/FindContainerNetworkConnectResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class FindContainerNetworkConnectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindContainerNetworkConnectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Connects, connects_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, FindContainerNetworkConnectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Connects, connects_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    FindContainerNetworkConnectResponseBody() = default ;
    FindContainerNetworkConnectResponseBody(const FindContainerNetworkConnectResponseBody &) = default ;
    FindContainerNetworkConnectResponseBody(FindContainerNetworkConnectResponseBody &&) = default ;
    FindContainerNetworkConnectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindContainerNetworkConnectResponseBody() = default ;
    FindContainerNetworkConnectResponseBody& operator=(const FindContainerNetworkConnectResponseBody &) = default ;
    FindContainerNetworkConnectResponseBody& operator=(FindContainerNetworkConnectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connects_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // connects Field Functions 
    bool hasConnects() const { return this->connects_ != nullptr;};
    void deleteConnects() { this->connects_ = nullptr;};
    inline const vector<FindContainerNetworkConnectResponseBodyConnects> & connects() const { DARABONBA_PTR_GET_CONST(connects_, vector<FindContainerNetworkConnectResponseBodyConnects>) };
    inline vector<FindContainerNetworkConnectResponseBodyConnects> connects() { DARABONBA_PTR_GET(connects_, vector<FindContainerNetworkConnectResponseBodyConnects>) };
    inline FindContainerNetworkConnectResponseBody& setConnects(const vector<FindContainerNetworkConnectResponseBodyConnects> & connects) { DARABONBA_PTR_SET_VALUE(connects_, connects) };
    inline FindContainerNetworkConnectResponseBody& setConnects(vector<FindContainerNetworkConnectResponseBodyConnects> && connects) { DARABONBA_PTR_SET_RVALUE(connects_, connects) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const FindContainerNetworkConnectResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, FindContainerNetworkConnectResponseBodyPageInfo) };
    inline FindContainerNetworkConnectResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, FindContainerNetworkConnectResponseBodyPageInfo) };
    inline FindContainerNetworkConnectResponseBody& setPageInfo(const FindContainerNetworkConnectResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline FindContainerNetworkConnectResponseBody& setPageInfo(FindContainerNetworkConnectResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FindContainerNetworkConnectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the network connections.
    std::shared_ptr<vector<FindContainerNetworkConnectResponseBodyConnects>> connects_ = nullptr;
    // The pagination information.
    std::shared_ptr<FindContainerNetworkConnectResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
