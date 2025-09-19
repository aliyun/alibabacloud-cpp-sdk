// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSASCONTAINERWEBDEFENSERULEAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSASCONTAINERWEBDEFENSERULEAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSasContainerWebDefenseRuleApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSasContainerWebDefenseRuleApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerWebDefenseAppList, containerWebDefenseAppList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSasContainerWebDefenseRuleApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerWebDefenseAppList, containerWebDefenseAppList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSasContainerWebDefenseRuleApplicationResponseBody() = default ;
    GetSasContainerWebDefenseRuleApplicationResponseBody(const GetSasContainerWebDefenseRuleApplicationResponseBody &) = default ;
    GetSasContainerWebDefenseRuleApplicationResponseBody(GetSasContainerWebDefenseRuleApplicationResponseBody &&) = default ;
    GetSasContainerWebDefenseRuleApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSasContainerWebDefenseRuleApplicationResponseBody() = default ;
    GetSasContainerWebDefenseRuleApplicationResponseBody& operator=(const GetSasContainerWebDefenseRuleApplicationResponseBody &) = default ;
    GetSasContainerWebDefenseRuleApplicationResponseBody& operator=(GetSasContainerWebDefenseRuleApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->containerWebDefenseAppList_ != nullptr
        && this->requestId_ != nullptr; };
    // containerWebDefenseAppList Field Functions 
    bool hasContainerWebDefenseAppList() const { return this->containerWebDefenseAppList_ != nullptr;};
    void deleteContainerWebDefenseAppList() { this->containerWebDefenseAppList_ = nullptr;};
    inline const vector<GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList> & containerWebDefenseAppList() const { DARABONBA_PTR_GET_CONST(containerWebDefenseAppList_, vector<GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList>) };
    inline vector<GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList> containerWebDefenseAppList() { DARABONBA_PTR_GET(containerWebDefenseAppList_, vector<GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList>) };
    inline GetSasContainerWebDefenseRuleApplicationResponseBody& setContainerWebDefenseAppList(const vector<GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList> & containerWebDefenseAppList) { DARABONBA_PTR_SET_VALUE(containerWebDefenseAppList_, containerWebDefenseAppList) };
    inline GetSasContainerWebDefenseRuleApplicationResponseBody& setContainerWebDefenseAppList(vector<GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList> && containerWebDefenseAppList) { DARABONBA_PTR_SET_RVALUE(containerWebDefenseAppList_, containerWebDefenseAppList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSasContainerWebDefenseRuleApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The applications.
    std::shared_ptr<vector<GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList>> containerWebDefenseAppList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
