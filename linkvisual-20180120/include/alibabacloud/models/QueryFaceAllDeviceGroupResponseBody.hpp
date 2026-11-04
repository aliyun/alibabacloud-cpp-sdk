// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFACEALLDEVICEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYFACEALLDEVICEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryFaceAllDeviceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFaceAllDeviceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFaceAllDeviceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryFaceAllDeviceGroupResponseBody() = default ;
    QueryFaceAllDeviceGroupResponseBody(const QueryFaceAllDeviceGroupResponseBody &) = default ;
    QueryFaceAllDeviceGroupResponseBody(QueryFaceAllDeviceGroupResponseBody &&) = default ;
    QueryFaceAllDeviceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFaceAllDeviceGroupResponseBody() = default ;
    QueryFaceAllDeviceGroupResponseBody& operator=(const QueryFaceAllDeviceGroupResponseBody &) = default ;
    QueryFaceAllDeviceGroupResponseBody& operator=(QueryFaceAllDeviceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DeviceGroupList, deviceGroupList_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DeviceGroupList, deviceGroupList_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class DeviceGroupList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeviceGroupList& obj) { 
          DARABONBA_PTR_TO_JSON(DeviceGroupId, deviceGroupId_);
          DARABONBA_PTR_TO_JSON(DeviceGroupName, deviceGroupName_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        };
        friend void from_json(const Darabonba::Json& j, DeviceGroupList& obj) { 
          DARABONBA_PTR_FROM_JSON(DeviceGroupId, deviceGroupId_);
          DARABONBA_PTR_FROM_JSON(DeviceGroupName, deviceGroupName_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        };
        DeviceGroupList() = default ;
        DeviceGroupList(const DeviceGroupList &) = default ;
        DeviceGroupList(DeviceGroupList &&) = default ;
        DeviceGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeviceGroupList() = default ;
        DeviceGroupList& operator=(const DeviceGroupList &) = default ;
        DeviceGroupList& operator=(DeviceGroupList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deviceGroupId_ == nullptr
        && this->deviceGroupName_ == nullptr && this->modifiedTime_ == nullptr; };
        // deviceGroupId Field Functions 
        bool hasDeviceGroupId() const { return this->deviceGroupId_ != nullptr;};
        void deleteDeviceGroupId() { this->deviceGroupId_ = nullptr;};
        inline string getDeviceGroupId() const { DARABONBA_PTR_GET_DEFAULT(deviceGroupId_, "") };
        inline DeviceGroupList& setDeviceGroupId(string deviceGroupId) { DARABONBA_PTR_SET_VALUE(deviceGroupId_, deviceGroupId) };


        // deviceGroupName Field Functions 
        bool hasDeviceGroupName() const { return this->deviceGroupName_ != nullptr;};
        void deleteDeviceGroupName() { this->deviceGroupName_ = nullptr;};
        inline string getDeviceGroupName() const { DARABONBA_PTR_GET_DEFAULT(deviceGroupName_, "") };
        inline DeviceGroupList& setDeviceGroupName(string deviceGroupName) { DARABONBA_PTR_SET_VALUE(deviceGroupName_, deviceGroupName) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline DeviceGroupList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      protected:
        // The ID of the device group.
        shared_ptr<string> deviceGroupId_ {};
        // The name of the device group.
        shared_ptr<string> deviceGroupName_ {};
        // The time when the device group was modified.
        shared_ptr<string> modifiedTime_ {};
      };

      virtual bool empty() const override { return this->deviceGroupList_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // deviceGroupList Field Functions 
      bool hasDeviceGroupList() const { return this->deviceGroupList_ != nullptr;};
      void deleteDeviceGroupList() { this->deviceGroupList_ = nullptr;};
      inline const vector<Data::DeviceGroupList> & getDeviceGroupList() const { DARABONBA_PTR_GET_CONST(deviceGroupList_, vector<Data::DeviceGroupList>) };
      inline vector<Data::DeviceGroupList> getDeviceGroupList() { DARABONBA_PTR_GET(deviceGroupList_, vector<Data::DeviceGroupList>) };
      inline Data& setDeviceGroupList(const vector<Data::DeviceGroupList> & deviceGroupList) { DARABONBA_PTR_SET_VALUE(deviceGroupList_, deviceGroupList) };
      inline Data& setDeviceGroupList(vector<Data::DeviceGroupList> && deviceGroupList) { DARABONBA_PTR_SET_RVALUE(deviceGroupList_, deviceGroupList) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline Data& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The list of device groups.
      shared_ptr<vector<Data::DeviceGroupList>> deviceGroupList_ {};
      // The page number.
      shared_ptr<int32_t> pageNo_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of device groups.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryFaceAllDeviceGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryFaceAllDeviceGroupResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryFaceAllDeviceGroupResponseBody::Data) };
    inline QueryFaceAllDeviceGroupResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryFaceAllDeviceGroupResponseBody::Data) };
    inline QueryFaceAllDeviceGroupResponseBody& setData(const QueryFaceAllDeviceGroupResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryFaceAllDeviceGroupResponseBody& setData(QueryFaceAllDeviceGroupResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryFaceAllDeviceGroupResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryFaceAllDeviceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryFaceAllDeviceGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The data returned by the API operation.
    shared_ptr<QueryFaceAllDeviceGroupResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
