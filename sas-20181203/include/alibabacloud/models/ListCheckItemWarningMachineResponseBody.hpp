// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKITEMWARNINGMACHINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKITEMWARNINGMACHINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCheckItemWarningMachineResponseBodyList.hpp>
#include <alibabacloud/models/ListCheckItemWarningMachineResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckItemWarningMachineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckItemWarningMachineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckItemWarningMachineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCheckItemWarningMachineResponseBody() = default ;
    ListCheckItemWarningMachineResponseBody(const ListCheckItemWarningMachineResponseBody &) = default ;
    ListCheckItemWarningMachineResponseBody(ListCheckItemWarningMachineResponseBody &&) = default ;
    ListCheckItemWarningMachineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckItemWarningMachineResponseBody() = default ;
    ListCheckItemWarningMachineResponseBody& operator=(const ListCheckItemWarningMachineResponseBody &) = default ;
    ListCheckItemWarningMachineResponseBody& operator=(ListCheckItemWarningMachineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListCheckItemWarningMachineResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<ListCheckItemWarningMachineResponseBodyList>) };
    inline vector<ListCheckItemWarningMachineResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<ListCheckItemWarningMachineResponseBodyList>) };
    inline ListCheckItemWarningMachineResponseBody& setList(const vector<ListCheckItemWarningMachineResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListCheckItemWarningMachineResponseBody& setList(vector<ListCheckItemWarningMachineResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListCheckItemWarningMachineResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListCheckItemWarningMachineResponseBodyPageInfo) };
    inline ListCheckItemWarningMachineResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListCheckItemWarningMachineResponseBodyPageInfo) };
    inline ListCheckItemWarningMachineResponseBody& setPageInfo(const ListCheckItemWarningMachineResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCheckItemWarningMachineResponseBody& setPageInfo(ListCheckItemWarningMachineResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCheckItemWarningMachineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The servers on which the alerts are generated.
    std::shared_ptr<vector<ListCheckItemWarningMachineResponseBodyList>> list_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListCheckItemWarningMachineResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
