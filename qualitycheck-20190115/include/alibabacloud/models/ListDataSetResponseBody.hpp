// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListDataSetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataSetResponseBody() = default ;
    ListDataSetResponseBody(const ListDataSetResponseBody &) = default ;
    ListDataSetResponseBody(ListDataSetResponseBody &&) = default ;
    ListDataSetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSetResponseBody() = default ;
    ListDataSetResponseBody& operator=(const ListDataSetResponseBody &) = default ;
    ListDataSetResponseBody& operator=(ListDataSetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      Messages() = default ;
      Messages(const Messages &) = default ;
      Messages(Messages &&) = default ;
      Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Messages() = default ;
      Messages& operator=(const Messages &) = default ;
      Messages& operator=(Messages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline const vector<string> & getMessage() const { DARABONBA_PTR_GET_CONST(message_, vector<string>) };
      inline vector<string> getMessage() { DARABONBA_PTR_GET(message_, vector<string>) };
      inline Messages& setMessage(const vector<string> & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
      inline Messages& setMessage(vector<string> && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


    protected:
      shared_ptr<vector<string>> message_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
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
      class DataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataItem& obj) { 
          DARABONBA_PTR_TO_JSON(AutoTranscoding, autoTranscoding_);
          DARABONBA_PTR_TO_JSON(ChannelId0, channelId0_);
          DARABONBA_PTR_TO_JSON(ChannelId1, channelId1_);
          DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateType, createType_);
          DARABONBA_PTR_TO_JSON(DataSetType, dataSetType_);
          DARABONBA_PTR_TO_JSON(IsDelete, isDelete_);
          DARABONBA_PTR_TO_JSON(RoleConfigProp, roleConfigProp_);
          DARABONBA_PTR_TO_JSON(RoleConfigStatus, roleConfigStatus_);
          DARABONBA_PTR_TO_JSON(RoleConfigTask, roleConfigTask_);
          DARABONBA_PTR_TO_JSON(SetBucketName, setBucketName_);
          DARABONBA_PTR_TO_JSON(SetDomain, setDomain_);
          DARABONBA_PTR_TO_JSON(SetFolderName, setFolderName_);
          DARABONBA_PTR_TO_JSON(SetId, setId_);
          DARABONBA_PTR_TO_JSON(SetName, setName_);
          DARABONBA_PTR_TO_JSON(SetNumber, setNumber_);
          DARABONBA_PTR_TO_JSON(SetRoleArn, setRoleArn_);
          DARABONBA_PTR_TO_JSON(SetType, setType_);
          DARABONBA_PTR_TO_JSON(SourceDataType, sourceDataType_);
          DARABONBA_PTR_TO_JSON(SubDir, subDir_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UserGroup, userGroup_);
        };
        friend void from_json(const Darabonba::Json& j, DataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoTranscoding, autoTranscoding_);
          DARABONBA_PTR_FROM_JSON(ChannelId0, channelId0_);
          DARABONBA_PTR_FROM_JSON(ChannelId1, channelId1_);
          DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateType, createType_);
          DARABONBA_PTR_FROM_JSON(DataSetType, dataSetType_);
          DARABONBA_PTR_FROM_JSON(IsDelete, isDelete_);
          DARABONBA_PTR_FROM_JSON(RoleConfigProp, roleConfigProp_);
          DARABONBA_PTR_FROM_JSON(RoleConfigStatus, roleConfigStatus_);
          DARABONBA_PTR_FROM_JSON(RoleConfigTask, roleConfigTask_);
          DARABONBA_PTR_FROM_JSON(SetBucketName, setBucketName_);
          DARABONBA_PTR_FROM_JSON(SetDomain, setDomain_);
          DARABONBA_PTR_FROM_JSON(SetFolderName, setFolderName_);
          DARABONBA_PTR_FROM_JSON(SetId, setId_);
          DARABONBA_PTR_FROM_JSON(SetName, setName_);
          DARABONBA_PTR_FROM_JSON(SetNumber, setNumber_);
          DARABONBA_PTR_FROM_JSON(SetRoleArn, setRoleArn_);
          DARABONBA_PTR_FROM_JSON(SetType, setType_);
          DARABONBA_PTR_FROM_JSON(SourceDataType, sourceDataType_);
          DARABONBA_PTR_FROM_JSON(SubDir, subDir_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UserGroup, userGroup_);
        };
        DataItem() = default ;
        DataItem(const DataItem &) = default ;
        DataItem(DataItem &&) = default ;
        DataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataItem() = default ;
        DataItem& operator=(const DataItem &) = default ;
        DataItem& operator=(DataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoTranscoding_ == nullptr
        && this->channelId0_ == nullptr && this->channelId1_ == nullptr && this->channelType_ == nullptr && this->createTime_ == nullptr && this->createType_ == nullptr
        && this->dataSetType_ == nullptr && this->isDelete_ == nullptr && this->roleConfigProp_ == nullptr && this->roleConfigStatus_ == nullptr && this->roleConfigTask_ == nullptr
        && this->setBucketName_ == nullptr && this->setDomain_ == nullptr && this->setFolderName_ == nullptr && this->setId_ == nullptr && this->setName_ == nullptr
        && this->setNumber_ == nullptr && this->setRoleArn_ == nullptr && this->setType_ == nullptr && this->sourceDataType_ == nullptr && this->subDir_ == nullptr
        && this->updateTime_ == nullptr && this->userGroup_ == nullptr; };
        // autoTranscoding Field Functions 
        bool hasAutoTranscoding() const { return this->autoTranscoding_ != nullptr;};
        void deleteAutoTranscoding() { this->autoTranscoding_ = nullptr;};
        inline int32_t getAutoTranscoding() const { DARABONBA_PTR_GET_DEFAULT(autoTranscoding_, 0) };
        inline DataItem& setAutoTranscoding(int32_t autoTranscoding) { DARABONBA_PTR_SET_VALUE(autoTranscoding_, autoTranscoding) };


        // channelId0 Field Functions 
        bool hasChannelId0() const { return this->channelId0_ != nullptr;};
        void deleteChannelId0() { this->channelId0_ = nullptr;};
        inline int32_t getChannelId0() const { DARABONBA_PTR_GET_DEFAULT(channelId0_, 0) };
        inline DataItem& setChannelId0(int32_t channelId0) { DARABONBA_PTR_SET_VALUE(channelId0_, channelId0) };


        // channelId1 Field Functions 
        bool hasChannelId1() const { return this->channelId1_ != nullptr;};
        void deleteChannelId1() { this->channelId1_ = nullptr;};
        inline int32_t getChannelId1() const { DARABONBA_PTR_GET_DEFAULT(channelId1_, 0) };
        inline DataItem& setChannelId1(int32_t channelId1) { DARABONBA_PTR_SET_VALUE(channelId1_, channelId1) };


        // channelType Field Functions 
        bool hasChannelType() const { return this->channelType_ != nullptr;};
        void deleteChannelType() { this->channelType_ = nullptr;};
        inline int32_t getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, 0) };
        inline DataItem& setChannelType(int32_t channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline DataItem& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createType Field Functions 
        bool hasCreateType() const { return this->createType_ != nullptr;};
        void deleteCreateType() { this->createType_ = nullptr;};
        inline int32_t getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, 0) };
        inline DataItem& setCreateType(int32_t createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


        // dataSetType Field Functions 
        bool hasDataSetType() const { return this->dataSetType_ != nullptr;};
        void deleteDataSetType() { this->dataSetType_ = nullptr;};
        inline int32_t getDataSetType() const { DARABONBA_PTR_GET_DEFAULT(dataSetType_, 0) };
        inline DataItem& setDataSetType(int32_t dataSetType) { DARABONBA_PTR_SET_VALUE(dataSetType_, dataSetType) };


        // isDelete Field Functions 
        bool hasIsDelete() const { return this->isDelete_ != nullptr;};
        void deleteIsDelete() { this->isDelete_ = nullptr;};
        inline int32_t getIsDelete() const { DARABONBA_PTR_GET_DEFAULT(isDelete_, 0) };
        inline DataItem& setIsDelete(int32_t isDelete) { DARABONBA_PTR_SET_VALUE(isDelete_, isDelete) };


        // roleConfigProp Field Functions 
        bool hasRoleConfigProp() const { return this->roleConfigProp_ != nullptr;};
        void deleteRoleConfigProp() { this->roleConfigProp_ = nullptr;};
        inline string getRoleConfigProp() const { DARABONBA_PTR_GET_DEFAULT(roleConfigProp_, "") };
        inline DataItem& setRoleConfigProp(string roleConfigProp) { DARABONBA_PTR_SET_VALUE(roleConfigProp_, roleConfigProp) };


        // roleConfigStatus Field Functions 
        bool hasRoleConfigStatus() const { return this->roleConfigStatus_ != nullptr;};
        void deleteRoleConfigStatus() { this->roleConfigStatus_ = nullptr;};
        inline int32_t getRoleConfigStatus() const { DARABONBA_PTR_GET_DEFAULT(roleConfigStatus_, 0) };
        inline DataItem& setRoleConfigStatus(int32_t roleConfigStatus) { DARABONBA_PTR_SET_VALUE(roleConfigStatus_, roleConfigStatus) };


        // roleConfigTask Field Functions 
        bool hasRoleConfigTask() const { return this->roleConfigTask_ != nullptr;};
        void deleteRoleConfigTask() { this->roleConfigTask_ = nullptr;};
        inline string getRoleConfigTask() const { DARABONBA_PTR_GET_DEFAULT(roleConfigTask_, "") };
        inline DataItem& setRoleConfigTask(string roleConfigTask) { DARABONBA_PTR_SET_VALUE(roleConfigTask_, roleConfigTask) };


        // setBucketName Field Functions 
        bool hasSetBucketName() const { return this->setBucketName_ != nullptr;};
        void deleteSetBucketName() { this->setBucketName_ = nullptr;};
        inline string getSetBucketName() const { DARABONBA_PTR_GET_DEFAULT(setBucketName_, "") };
        inline DataItem& setSetBucketName(string setBucketName) { DARABONBA_PTR_SET_VALUE(setBucketName_, setBucketName) };


        // setDomain Field Functions 
        bool hasSetDomain() const { return this->setDomain_ != nullptr;};
        void deleteSetDomain() { this->setDomain_ = nullptr;};
        inline string getSetDomain() const { DARABONBA_PTR_GET_DEFAULT(setDomain_, "") };
        inline DataItem& setSetDomain(string setDomain) { DARABONBA_PTR_SET_VALUE(setDomain_, setDomain) };


        // setFolderName Field Functions 
        bool hasSetFolderName() const { return this->setFolderName_ != nullptr;};
        void deleteSetFolderName() { this->setFolderName_ = nullptr;};
        inline string getSetFolderName() const { DARABONBA_PTR_GET_DEFAULT(setFolderName_, "") };
        inline DataItem& setSetFolderName(string setFolderName) { DARABONBA_PTR_SET_VALUE(setFolderName_, setFolderName) };


        // setId Field Functions 
        bool hasSetId() const { return this->setId_ != nullptr;};
        void deleteSetId() { this->setId_ = nullptr;};
        inline int64_t getSetId() const { DARABONBA_PTR_GET_DEFAULT(setId_, 0L) };
        inline DataItem& setSetId(int64_t setId) { DARABONBA_PTR_SET_VALUE(setId_, setId) };


        // setName Field Functions 
        bool hasSetName() const { return this->setName_ != nullptr;};
        void deleteSetName() { this->setName_ = nullptr;};
        inline string getSetName() const { DARABONBA_PTR_GET_DEFAULT(setName_, "") };
        inline DataItem& setSetName(string setName) { DARABONBA_PTR_SET_VALUE(setName_, setName) };


        // setNumber Field Functions 
        bool hasSetNumber() const { return this->setNumber_ != nullptr;};
        void deleteSetNumber() { this->setNumber_ = nullptr;};
        inline int32_t getSetNumber() const { DARABONBA_PTR_GET_DEFAULT(setNumber_, 0) };
        inline DataItem& setSetNumber(int32_t setNumber) { DARABONBA_PTR_SET_VALUE(setNumber_, setNumber) };


        // setRoleArn Field Functions 
        bool hasSetRoleArn() const { return this->setRoleArn_ != nullptr;};
        void deleteSetRoleArn() { this->setRoleArn_ = nullptr;};
        inline string getSetRoleArn() const { DARABONBA_PTR_GET_DEFAULT(setRoleArn_, "") };
        inline DataItem& setSetRoleArn(string setRoleArn) { DARABONBA_PTR_SET_VALUE(setRoleArn_, setRoleArn) };


        // setType Field Functions 
        bool hasSetType() const { return this->setType_ != nullptr;};
        void deleteSetType() { this->setType_ = nullptr;};
        inline int32_t getSetType() const { DARABONBA_PTR_GET_DEFAULT(setType_, 0) };
        inline DataItem& setSetType(int32_t setType) { DARABONBA_PTR_SET_VALUE(setType_, setType) };


        // sourceDataType Field Functions 
        bool hasSourceDataType() const { return this->sourceDataType_ != nullptr;};
        void deleteSourceDataType() { this->sourceDataType_ = nullptr;};
        inline int32_t getSourceDataType() const { DARABONBA_PTR_GET_DEFAULT(sourceDataType_, 0) };
        inline DataItem& setSourceDataType(int32_t sourceDataType) { DARABONBA_PTR_SET_VALUE(sourceDataType_, sourceDataType) };


        // subDir Field Functions 
        bool hasSubDir() const { return this->subDir_ != nullptr;};
        void deleteSubDir() { this->subDir_ = nullptr;};
        inline string getSubDir() const { DARABONBA_PTR_GET_DEFAULT(subDir_, "") };
        inline DataItem& setSubDir(string subDir) { DARABONBA_PTR_SET_VALUE(subDir_, subDir) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline DataItem& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // userGroup Field Functions 
        bool hasUserGroup() const { return this->userGroup_ != nullptr;};
        void deleteUserGroup() { this->userGroup_ = nullptr;};
        inline string getUserGroup() const { DARABONBA_PTR_GET_DEFAULT(userGroup_, "") };
        inline DataItem& setUserGroup(string userGroup) { DARABONBA_PTR_SET_VALUE(userGroup_, userGroup) };


      protected:
        shared_ptr<int32_t> autoTranscoding_ {};
        shared_ptr<int32_t> channelId0_ {};
        shared_ptr<int32_t> channelId1_ {};
        shared_ptr<int32_t> channelType_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<int32_t> createType_ {};
        shared_ptr<int32_t> dataSetType_ {};
        shared_ptr<int32_t> isDelete_ {};
        shared_ptr<string> roleConfigProp_ {};
        shared_ptr<int32_t> roleConfigStatus_ {};
        shared_ptr<string> roleConfigTask_ {};
        shared_ptr<string> setBucketName_ {};
        shared_ptr<string> setDomain_ {};
        shared_ptr<string> setFolderName_ {};
        shared_ptr<int64_t> setId_ {};
        shared_ptr<string> setName_ {};
        shared_ptr<int32_t> setNumber_ {};
        shared_ptr<string> setRoleArn_ {};
        shared_ptr<int32_t> setType_ {};
        shared_ptr<int32_t> sourceDataType_ {};
        shared_ptr<string> subDir_ {};
        shared_ptr<string> updateTime_ {};
        shared_ptr<string> userGroup_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Data::DataItem> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Data::DataItem>) };
      inline vector<Data::DataItem> getData() { DARABONBA_PTR_GET(data_, vector<Data::DataItem>) };
      inline Data& setData(const vector<Data::DataItem> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Data& setData(vector<Data::DataItem> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    protected:
      shared_ptr<vector<Data::DataItem>> data_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->currentPage_ == nullptr && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr
        && this->messages_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDataSetResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListDataSetResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListDataSetResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDataSetResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListDataSetResponseBody::Data) };
    inline ListDataSetResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListDataSetResponseBody::Data) };
    inline ListDataSetResponseBody& setData(const ListDataSetResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataSetResponseBody& setData(ListDataSetResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDataSetResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDataSetResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const ListDataSetResponseBody::Messages & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, ListDataSetResponseBody::Messages) };
    inline ListDataSetResponseBody::Messages getMessages() { DARABONBA_PTR_GET(messages_, ListDataSetResponseBody::Messages) };
    inline ListDataSetResponseBody& setMessages(const ListDataSetResponseBody::Messages & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline ListDataSetResponseBody& setMessages(ListDataSetResponseBody::Messages && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataSetResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataSetResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataSetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataSetResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> count_ {};
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<ListDataSetResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListDataSetResponseBody::Messages> messages_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
