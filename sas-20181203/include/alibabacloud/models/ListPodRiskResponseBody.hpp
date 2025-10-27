// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPODRISKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPODRISKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPodRiskResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListPodRiskResponseBodyPodRiskList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListPodRiskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPodRiskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(PodRiskList, podRiskList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPodRiskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(PodRiskList, podRiskList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPodRiskResponseBody() = default ;
    ListPodRiskResponseBody(const ListPodRiskResponseBody &) = default ;
    ListPodRiskResponseBody(ListPodRiskResponseBody &&) = default ;
    ListPodRiskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPodRiskResponseBody() = default ;
    ListPodRiskResponseBody& operator=(const ListPodRiskResponseBody &) = default ;
    ListPodRiskResponseBody& operator=(ListPodRiskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && return this->podRiskList_ == nullptr && return this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListPodRiskResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListPodRiskResponseBodyPageInfo) };
    inline ListPodRiskResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListPodRiskResponseBodyPageInfo) };
    inline ListPodRiskResponseBody& setPageInfo(const ListPodRiskResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListPodRiskResponseBody& setPageInfo(ListPodRiskResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // podRiskList Field Functions 
    bool hasPodRiskList() const { return this->podRiskList_ != nullptr;};
    void deletePodRiskList() { this->podRiskList_ = nullptr;};
    inline const vector<ListPodRiskResponseBodyPodRiskList> & podRiskList() const { DARABONBA_PTR_GET_CONST(podRiskList_, vector<ListPodRiskResponseBodyPodRiskList>) };
    inline vector<ListPodRiskResponseBodyPodRiskList> podRiskList() { DARABONBA_PTR_GET(podRiskList_, vector<ListPodRiskResponseBodyPodRiskList>) };
    inline ListPodRiskResponseBody& setPodRiskList(const vector<ListPodRiskResponseBodyPodRiskList> & podRiskList) { DARABONBA_PTR_SET_VALUE(podRiskList_, podRiskList) };
    inline ListPodRiskResponseBody& setPodRiskList(vector<ListPodRiskResponseBodyPodRiskList> && podRiskList) { DARABONBA_PTR_SET_RVALUE(podRiskList_, podRiskList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPodRiskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<ListPodRiskResponseBodyPageInfo> pageInfo_ = nullptr;
    // An array that consists of the risks.
    std::shared_ptr<vector<ListPodRiskResponseBodyPodRiskList>> podRiskList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
