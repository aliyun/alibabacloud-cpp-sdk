// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDINGTALKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDINGTALKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDingTalkResponseBodyActionList.hpp>
#include <alibabacloud/models/DescribeDingTalkResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDingTalkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDingTalkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActionList, actionList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDingTalkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionList, actionList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDingTalkResponseBody() = default ;
    DescribeDingTalkResponseBody(const DescribeDingTalkResponseBody &) = default ;
    DescribeDingTalkResponseBody(DescribeDingTalkResponseBody &&) = default ;
    DescribeDingTalkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDingTalkResponseBody() = default ;
    DescribeDingTalkResponseBody& operator=(const DescribeDingTalkResponseBody &) = default ;
    DescribeDingTalkResponseBody& operator=(DescribeDingTalkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionList_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // actionList Field Functions 
    bool hasActionList() const { return this->actionList_ != nullptr;};
    void deleteActionList() { this->actionList_ = nullptr;};
    inline const vector<DescribeDingTalkResponseBodyActionList> & actionList() const { DARABONBA_PTR_GET_CONST(actionList_, vector<DescribeDingTalkResponseBodyActionList>) };
    inline vector<DescribeDingTalkResponseBodyActionList> actionList() { DARABONBA_PTR_GET(actionList_, vector<DescribeDingTalkResponseBodyActionList>) };
    inline DescribeDingTalkResponseBody& setActionList(const vector<DescribeDingTalkResponseBodyActionList> & actionList) { DARABONBA_PTR_SET_VALUE(actionList_, actionList) };
    inline DescribeDingTalkResponseBody& setActionList(vector<DescribeDingTalkResponseBodyActionList> && actionList) { DARABONBA_PTR_SET_RVALUE(actionList_, actionList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeDingTalkResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeDingTalkResponseBodyPageInfo) };
    inline DescribeDingTalkResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeDingTalkResponseBodyPageInfo) };
    inline DescribeDingTalkResponseBody& setPageInfo(const DescribeDingTalkResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeDingTalkResponseBody& setPageInfo(DescribeDingTalkResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDingTalkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of details of notifications.
    std::shared_ptr<vector<DescribeDingTalkResponseBodyActionList>> actionList_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeDingTalkResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
