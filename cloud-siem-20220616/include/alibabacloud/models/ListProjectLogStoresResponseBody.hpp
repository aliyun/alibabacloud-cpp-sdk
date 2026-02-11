// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTLOGSTORESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTLOGSTORESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListProjectLogStoresResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectLogStoresResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectLogStoresResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListProjectLogStoresResponseBody() = default ;
    ListProjectLogStoresResponseBody(const ListProjectLogStoresResponseBody &) = default ;
    ListProjectLogStoresResponseBody(ListProjectLogStoresResponseBody &&) = default ;
    ListProjectLogStoresResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectLogStoresResponseBody() = default ;
    ListProjectLogStoresResponseBody& operator=(const ListProjectLogStoresResponseBody &) = default ;
    ListProjectLogStoresResponseBody& operator=(ListProjectLogStoresResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EndPoint, endPoint_);
        DARABONBA_PTR_TO_JSON(LocalName, localName_);
        DARABONBA_PTR_TO_JSON(LogStore, logStore_);
        DARABONBA_PTR_TO_JSON(MainUserId, mainUserId_);
        DARABONBA_PTR_TO_JSON(Project, project_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
        DARABONBA_PTR_TO_JSON(SubUserName, subUserName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EndPoint, endPoint_);
        DARABONBA_PTR_FROM_JSON(LocalName, localName_);
        DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
        DARABONBA_PTR_FROM_JSON(MainUserId, mainUserId_);
        DARABONBA_PTR_FROM_JSON(Project, project_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
        DARABONBA_PTR_FROM_JSON(SubUserName, subUserName_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endPoint_ == nullptr
        && this->localName_ == nullptr && this->logStore_ == nullptr && this->mainUserId_ == nullptr && this->project_ == nullptr && this->regionId_ == nullptr
        && this->subUserId_ == nullptr && this->subUserName_ == nullptr; };
      // endPoint Field Functions 
      bool hasEndPoint() const { return this->endPoint_ != nullptr;};
      void deleteEndPoint() { this->endPoint_ = nullptr;};
      inline string getEndPoint() const { DARABONBA_PTR_GET_DEFAULT(endPoint_, "") };
      inline Data& setEndPoint(string endPoint) { DARABONBA_PTR_SET_VALUE(endPoint_, endPoint) };


      // localName Field Functions 
      bool hasLocalName() const { return this->localName_ != nullptr;};
      void deleteLocalName() { this->localName_ = nullptr;};
      inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
      inline Data& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


      // logStore Field Functions 
      bool hasLogStore() const { return this->logStore_ != nullptr;};
      void deleteLogStore() { this->logStore_ = nullptr;};
      inline string getLogStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
      inline Data& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


      // mainUserId Field Functions 
      bool hasMainUserId() const { return this->mainUserId_ != nullptr;};
      void deleteMainUserId() { this->mainUserId_ = nullptr;};
      inline int64_t getMainUserId() const { DARABONBA_PTR_GET_DEFAULT(mainUserId_, 0L) };
      inline Data& setMainUserId(int64_t mainUserId) { DARABONBA_PTR_SET_VALUE(mainUserId_, mainUserId) };


      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
      inline Data& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // subUserId Field Functions 
      bool hasSubUserId() const { return this->subUserId_ != nullptr;};
      void deleteSubUserId() { this->subUserId_ = nullptr;};
      inline int64_t getSubUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
      inline Data& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


      // subUserName Field Functions 
      bool hasSubUserName() const { return this->subUserName_ != nullptr;};
      void deleteSubUserName() { this->subUserName_ = nullptr;};
      inline string getSubUserName() const { DARABONBA_PTR_GET_DEFAULT(subUserName_, "") };
      inline Data& setSubUserName(string subUserName) { DARABONBA_PTR_SET_VALUE(subUserName_, subUserName) };


    protected:
      // The endpoint of the Simple Log Service project.
      shared_ptr<string> endPoint_ {};
      // The name of the region in which the Simple Log Service project resides.
      shared_ptr<string> localName_ {};
      // The name of the Simple Log Service Logstore.
      shared_ptr<string> logStore_ {};
      // The ID of the Alibaba Cloud account that is used to purchase the threat analysis feature.
      shared_ptr<int64_t> mainUserId_ {};
      // The name of the Simple Log Service project.
      shared_ptr<string> project_ {};
      // The ID of the region in which the Simple Log Service project resides.
      shared_ptr<string> regionId_ {};
      // The ID of the Alibaba Cloud account that can be used to perform operations supported by the threat analysis feature.
      shared_ptr<int64_t> subUserId_ {};
      // The username of the Alibaba Cloud account that can be used to perform operations supported by the threat analysis feature.
      shared_ptr<string> subUserName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListProjectLogStoresResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListProjectLogStoresResponseBody::Data>) };
    inline vector<ListProjectLogStoresResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListProjectLogStoresResponseBody::Data>) };
    inline ListProjectLogStoresResponseBody& setData(const vector<ListProjectLogStoresResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListProjectLogStoresResponseBody& setData(vector<ListProjectLogStoresResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProjectLogStoresResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<vector<ListProjectLogStoresResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
