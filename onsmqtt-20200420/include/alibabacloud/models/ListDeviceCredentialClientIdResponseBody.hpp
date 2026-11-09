// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICECREDENTIALCLIENTIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICECREDENTIALCLIENTIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class ListDeviceCredentialClientIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceCredentialClientIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceCredentialClientIdList, deviceCredentialClientIdList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceCredentialClientIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceCredentialClientIdList, deviceCredentialClientIdList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDeviceCredentialClientIdResponseBody() = default ;
    ListDeviceCredentialClientIdResponseBody(const ListDeviceCredentialClientIdResponseBody &) = default ;
    ListDeviceCredentialClientIdResponseBody(ListDeviceCredentialClientIdResponseBody &&) = default ;
    ListDeviceCredentialClientIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceCredentialClientIdResponseBody() = default ;
    ListDeviceCredentialClientIdResponseBody& operator=(const ListDeviceCredentialClientIdResponseBody &) = default ;
    ListDeviceCredentialClientIdResponseBody& operator=(ListDeviceCredentialClientIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeviceCredentialClientIdList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeviceCredentialClientIdList& obj) { 
        DARABONBA_PTR_TO_JSON(ClientIdList, clientIdList_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, DeviceCredentialClientIdList& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientIdList, clientIdList_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      DeviceCredentialClientIdList() = default ;
      DeviceCredentialClientIdList(const DeviceCredentialClientIdList &) = default ;
      DeviceCredentialClientIdList(DeviceCredentialClientIdList &&) = default ;
      DeviceCredentialClientIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeviceCredentialClientIdList() = default ;
      DeviceCredentialClientIdList& operator=(const DeviceCredentialClientIdList &) = default ;
      DeviceCredentialClientIdList& operator=(DeviceCredentialClientIdList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientIdList_ == nullptr
        && this->nextToken_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // clientIdList Field Functions 
      bool hasClientIdList() const { return this->clientIdList_ != nullptr;};
      void deleteClientIdList() { this->clientIdList_ = nullptr;};
      inline const vector<string> & getClientIdList() const { DARABONBA_PTR_GET_CONST(clientIdList_, vector<string>) };
      inline vector<string> getClientIdList() { DARABONBA_PTR_GET(clientIdList_, vector<string>) };
      inline DeviceCredentialClientIdList& setClientIdList(const vector<string> & clientIdList) { DARABONBA_PTR_SET_VALUE(clientIdList_, clientIdList) };
      inline DeviceCredentialClientIdList& setClientIdList(vector<string> && clientIdList) { DARABONBA_PTR_SET_RVALUE(clientIdList_, clientIdList) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline DeviceCredentialClientIdList& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline string getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, "") };
      inline DeviceCredentialClientIdList& setPageNo(string pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
      inline DeviceCredentialClientIdList& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline string getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
      inline DeviceCredentialClientIdList& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // Client list.
      shared_ptr<vector<string>> clientIdList_ {};
      // Indicates whether there is a token (Token) for the next query. Values:
      // 
      // - For the first query and when there is no next query, this field does not need to be filled.
      // 
      // - If there is a next query, the value should be the NextToken returned from the previous API call.
      shared_ptr<string> nextToken_ {};
      // The current page number of the returned query records.
      shared_ptr<string> pageNo_ {};
      // The maximum number of results to display per page.
      shared_ptr<string> pageSize_ {};
      // Total number of query results.
      shared_ptr<string> total_ {};
    };

    virtual bool empty() const override { return this->deviceCredentialClientIdList_ == nullptr
        && this->requestId_ == nullptr; };
    // deviceCredentialClientIdList Field Functions 
    bool hasDeviceCredentialClientIdList() const { return this->deviceCredentialClientIdList_ != nullptr;};
    void deleteDeviceCredentialClientIdList() { this->deviceCredentialClientIdList_ = nullptr;};
    inline const ListDeviceCredentialClientIdResponseBody::DeviceCredentialClientIdList & getDeviceCredentialClientIdList() const { DARABONBA_PTR_GET_CONST(deviceCredentialClientIdList_, ListDeviceCredentialClientIdResponseBody::DeviceCredentialClientIdList) };
    inline ListDeviceCredentialClientIdResponseBody::DeviceCredentialClientIdList getDeviceCredentialClientIdList() { DARABONBA_PTR_GET(deviceCredentialClientIdList_, ListDeviceCredentialClientIdResponseBody::DeviceCredentialClientIdList) };
    inline ListDeviceCredentialClientIdResponseBody& setDeviceCredentialClientIdList(const ListDeviceCredentialClientIdResponseBody::DeviceCredentialClientIdList & deviceCredentialClientIdList) { DARABONBA_PTR_SET_VALUE(deviceCredentialClientIdList_, deviceCredentialClientIdList) };
    inline ListDeviceCredentialClientIdResponseBody& setDeviceCredentialClientIdList(ListDeviceCredentialClientIdResponseBody::DeviceCredentialClientIdList && deviceCredentialClientIdList) { DARABONBA_PTR_SET_RVALUE(deviceCredentialClientIdList_, deviceCredentialClientIdList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDeviceCredentialClientIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returns the information list.
    shared_ptr<ListDeviceCredentialClientIdResponseBody::DeviceCredentialClientIdList> deviceCredentialClientIdList_ {};
    // Public parameters, each request ID is unique and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
