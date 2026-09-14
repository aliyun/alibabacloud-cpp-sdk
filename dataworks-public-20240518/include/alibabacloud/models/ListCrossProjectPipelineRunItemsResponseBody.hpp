// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCROSSPROJECTPIPELINERUNITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCROSSPROJECTPIPELINERUNITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListCrossProjectPipelineRunItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCrossProjectPipelineRunItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCrossProjectPipelineRunItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCrossProjectPipelineRunItemsResponseBody() = default ;
    ListCrossProjectPipelineRunItemsResponseBody(const ListCrossProjectPipelineRunItemsResponseBody &) = default ;
    ListCrossProjectPipelineRunItemsResponseBody(ListCrossProjectPipelineRunItemsResponseBody &&) = default ;
    ListCrossProjectPipelineRunItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCrossProjectPipelineRunItemsResponseBody() = default ;
    ListCrossProjectPipelineRunItemsResponseBody& operator=(const ListCrossProjectPipelineRunItemsResponseBody &) = default ;
    ListCrossProjectPipelineRunItemsResponseBody& operator=(ListCrossProjectPipelineRunItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(PipelineRunItems, pipelineRunItems_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(PipelineRunItems, pipelineRunItems_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class PipelineRunItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PipelineRunItems& obj) { 
          DARABONBA_PTR_TO_JSON(ChangeType, changeType_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(IsRoot, isRoot_);
          DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
          DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
          DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
          DARABONBA_PTR_TO_JSON(ObjectVersion, objectVersion_);
          DARABONBA_PTR_TO_JSON(ParentObjectId, parentObjectId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, PipelineRunItems& obj) { 
          DARABONBA_PTR_FROM_JSON(ChangeType, changeType_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(IsRoot, isRoot_);
          DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
          DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
          DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
          DARABONBA_PTR_FROM_JSON(ObjectVersion, objectVersion_);
          DARABONBA_PTR_FROM_JSON(ParentObjectId, parentObjectId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        PipelineRunItems() = default ;
        PipelineRunItems(const PipelineRunItems &) = default ;
        PipelineRunItems(PipelineRunItems &&) = default ;
        PipelineRunItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PipelineRunItems() = default ;
        PipelineRunItems& operator=(const PipelineRunItems &) = default ;
        PipelineRunItems& operator=(PipelineRunItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->changeType_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->isRoot_ == nullptr && this->objectId_ == nullptr && this->objectName_ == nullptr
        && this->objectType_ == nullptr && this->objectVersion_ == nullptr && this->parentObjectId_ == nullptr && this->status_ == nullptr; };
        // changeType Field Functions 
        bool hasChangeType() const { return this->changeType_ != nullptr;};
        void deleteChangeType() { this->changeType_ = nullptr;};
        inline string getChangeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, "") };
        inline PipelineRunItems& setChangeType(string changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline PipelineRunItems& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline PipelineRunItems& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // isRoot Field Functions 
        bool hasIsRoot() const { return this->isRoot_ != nullptr;};
        void deleteIsRoot() { this->isRoot_ = nullptr;};
        inline bool getIsRoot() const { DARABONBA_PTR_GET_DEFAULT(isRoot_, false) };
        inline PipelineRunItems& setIsRoot(bool isRoot) { DARABONBA_PTR_SET_VALUE(isRoot_, isRoot) };


        // objectId Field Functions 
        bool hasObjectId() const { return this->objectId_ != nullptr;};
        void deleteObjectId() { this->objectId_ = nullptr;};
        inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
        inline PipelineRunItems& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


        // objectName Field Functions 
        bool hasObjectName() const { return this->objectName_ != nullptr;};
        void deleteObjectName() { this->objectName_ = nullptr;};
        inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
        inline PipelineRunItems& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


        // objectType Field Functions 
        bool hasObjectType() const { return this->objectType_ != nullptr;};
        void deleteObjectType() { this->objectType_ = nullptr;};
        inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
        inline PipelineRunItems& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


        // objectVersion Field Functions 
        bool hasObjectVersion() const { return this->objectVersion_ != nullptr;};
        void deleteObjectVersion() { this->objectVersion_ = nullptr;};
        inline string getObjectVersion() const { DARABONBA_PTR_GET_DEFAULT(objectVersion_, "") };
        inline PipelineRunItems& setObjectVersion(string objectVersion) { DARABONBA_PTR_SET_VALUE(objectVersion_, objectVersion) };


        // parentObjectId Field Functions 
        bool hasParentObjectId() const { return this->parentObjectId_ != nullptr;};
        void deleteParentObjectId() { this->parentObjectId_ = nullptr;};
        inline string getParentObjectId() const { DARABONBA_PTR_GET_DEFAULT(parentObjectId_, "") };
        inline PipelineRunItems& setParentObjectId(string parentObjectId) { DARABONBA_PTR_SET_VALUE(parentObjectId_, parentObjectId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PipelineRunItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The change type.
        shared_ptr<string> changeType_ {};
        // The error code.
        shared_ptr<string> errorCode_ {};
        // The error message.
        shared_ptr<string> errorMessage_ {};
        // Indicates whether the object is a root object.
        shared_ptr<bool> isRoot_ {};
        // The ID of the publish object.
        shared_ptr<string> objectId_ {};
        // The name of the publish object.
        shared_ptr<string> objectName_ {};
        // The object type of the publish object.
        shared_ptr<string> objectType_ {};
        // The version of the publish object.
        shared_ptr<string> objectVersion_ {};
        // The ID of the parent object.
        shared_ptr<string> parentObjectId_ {};
        // The status of the publish item.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->pipelineRunItems_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // pipelineRunItems Field Functions 
      bool hasPipelineRunItems() const { return this->pipelineRunItems_ != nullptr;};
      void deletePipelineRunItems() { this->pipelineRunItems_ = nullptr;};
      inline const vector<Data::PipelineRunItems> & getPipelineRunItems() const { DARABONBA_PTR_GET_CONST(pipelineRunItems_, vector<Data::PipelineRunItems>) };
      inline vector<Data::PipelineRunItems> getPipelineRunItems() { DARABONBA_PTR_GET(pipelineRunItems_, vector<Data::PipelineRunItems>) };
      inline Data& setPipelineRunItems(const vector<Data::PipelineRunItems> & pipelineRunItems) { DARABONBA_PTR_SET_VALUE(pipelineRunItems_, pipelineRunItems) };
      inline Data& setPipelineRunItems(vector<Data::PipelineRunItems> && pipelineRunItems) { DARABONBA_PTR_SET_RVALUE(pipelineRunItems_, pipelineRunItems) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The list of publish items for the root objects and their child objects that are included in the cross-workspace publish pipeline.
      shared_ptr<vector<Data::PipelineRunItems>> pipelineRunItems_ {};
      // The request ID.
      shared_ptr<string> requestId_ {};
      // The total number of records.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCrossProjectPipelineRunItemsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCrossProjectPipelineRunItemsResponseBody::Data) };
    inline ListCrossProjectPipelineRunItemsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCrossProjectPipelineRunItemsResponseBody::Data) };
    inline ListCrossProjectPipelineRunItemsResponseBody& setData(const ListCrossProjectPipelineRunItemsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCrossProjectPipelineRunItemsResponseBody& setData(ListCrossProjectPipelineRunItemsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCrossProjectPipelineRunItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCrossProjectPipelineRunItemsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business response.
    shared_ptr<ListCrossProjectPipelineRunItemsResponseBody::Data> data_ {};
    // The request ID, which is used to locate and troubleshoot this API call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
