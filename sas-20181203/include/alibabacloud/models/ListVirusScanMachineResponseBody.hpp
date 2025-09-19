// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRUSSCANMACHINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRUSSCANMACHINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVirusScanMachineResponseBodyData.hpp>
#include <alibabacloud/models/ListVirusScanMachineResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListVirusScanMachineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirusScanMachineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirusScanMachineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListVirusScanMachineResponseBody() = default ;
    ListVirusScanMachineResponseBody(const ListVirusScanMachineResponseBody &) = default ;
    ListVirusScanMachineResponseBody(ListVirusScanMachineResponseBody &&) = default ;
    ListVirusScanMachineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirusScanMachineResponseBody() = default ;
    ListVirusScanMachineResponseBody& operator=(const ListVirusScanMachineResponseBody &) = default ;
    ListVirusScanMachineResponseBody& operator=(ListVirusScanMachineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListVirusScanMachineResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListVirusScanMachineResponseBodyData>) };
    inline vector<ListVirusScanMachineResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListVirusScanMachineResponseBodyData>) };
    inline ListVirusScanMachineResponseBody& setData(const vector<ListVirusScanMachineResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListVirusScanMachineResponseBody& setData(vector<ListVirusScanMachineResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListVirusScanMachineResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListVirusScanMachineResponseBodyPageInfo) };
    inline ListVirusScanMachineResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListVirusScanMachineResponseBodyPageInfo) };
    inline ListVirusScanMachineResponseBody& setPageInfo(const ListVirusScanMachineResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListVirusScanMachineResponseBody& setPageInfo(ListVirusScanMachineResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVirusScanMachineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<vector<ListVirusScanMachineResponseBodyData>> data_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListVirusScanMachineResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
