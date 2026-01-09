// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTCOMPUTETASK2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SELECTCOMPUTETASK2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class SelectComputeTask2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectComputeTask2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SelectComputeTask2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SelectComputeTask2ResponseBody() = default ;
    SelectComputeTask2ResponseBody(const SelectComputeTask2ResponseBody &) = default ;
    SelectComputeTask2ResponseBody(SelectComputeTask2ResponseBody &&) = default ;
    SelectComputeTask2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectComputeTask2ResponseBody() = default ;
    SelectComputeTask2ResponseBody& operator=(const SelectComputeTask2ResponseBody &) = default ;
    SelectComputeTask2ResponseBody& operator=(SelectComputeTask2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(appId, appId_);
        DARABONBA_PTR_TO_JSON(bcId, bcId_);
        DARABONBA_PTR_TO_JSON(computeOssFileTitle, computeOssFileTitle_);
        DARABONBA_PTR_TO_JSON(datasetIds, datasetIds_);
        DARABONBA_PTR_TO_JSON(exportOssFileList, exportOssFileList_);
        DARABONBA_PTR_TO_JSON(extInfo, extInfo_);
        DARABONBA_PTR_TO_JSON(fileNum, fileNum_);
        DARABONBA_PTR_TO_JSON(hint, hint_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(remarks, remarks_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(taskResultList, taskResultList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(appId, appId_);
        DARABONBA_PTR_FROM_JSON(bcId, bcId_);
        DARABONBA_PTR_FROM_JSON(computeOssFileTitle, computeOssFileTitle_);
        DARABONBA_PTR_FROM_JSON(datasetIds, datasetIds_);
        DARABONBA_PTR_FROM_JSON(exportOssFileList, exportOssFileList_);
        DARABONBA_PTR_FROM_JSON(extInfo, extInfo_);
        DARABONBA_PTR_FROM_JSON(fileNum, fileNum_);
        DARABONBA_PTR_FROM_JSON(hint, hint_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(remarks, remarks_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(taskResultList, taskResultList_);
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
      class TaskResultList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskResultList& obj) { 
          DARABONBA_PTR_TO_JSON(bcId, bcId_);
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(lineNum, lineNum_);
        };
        friend void from_json(const Darabonba::Json& j, TaskResultList& obj) { 
          DARABONBA_PTR_FROM_JSON(bcId, bcId_);
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(lineNum, lineNum_);
        };
        TaskResultList() = default ;
        TaskResultList(const TaskResultList &) = default ;
        TaskResultList(TaskResultList &&) = default ;
        TaskResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskResultList() = default ;
        TaskResultList& operator=(const TaskResultList &) = default ;
        TaskResultList& operator=(TaskResultList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bcId_ == nullptr
        && this->code_ == nullptr && this->lineNum_ == nullptr; };
        // bcId Field Functions 
        bool hasBcId() const { return this->bcId_ != nullptr;};
        void deleteBcId() { this->bcId_ = nullptr;};
        inline int64_t getBcId() const { DARABONBA_PTR_GET_DEFAULT(bcId_, 0L) };
        inline TaskResultList& setBcId(int64_t bcId) { DARABONBA_PTR_SET_VALUE(bcId_, bcId) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
        inline TaskResultList& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // lineNum Field Functions 
        bool hasLineNum() const { return this->lineNum_ != nullptr;};
        void deleteLineNum() { this->lineNum_ = nullptr;};
        inline int64_t getLineNum() const { DARABONBA_PTR_GET_DEFAULT(lineNum_, 0L) };
        inline TaskResultList& setLineNum(int64_t lineNum) { DARABONBA_PTR_SET_VALUE(lineNum_, lineNum) };


      protected:
        shared_ptr<int64_t> bcId_ {};
        shared_ptr<int32_t> code_ {};
        shared_ptr<int64_t> lineNum_ {};
      };

      class ExportOssFileList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExportOssFileList& obj) { 
          DARABONBA_PTR_TO_JSON(downLoadUrl, downLoadUrl_);
          DARABONBA_PTR_TO_JSON(password, password_);
        };
        friend void from_json(const Darabonba::Json& j, ExportOssFileList& obj) { 
          DARABONBA_PTR_FROM_JSON(downLoadUrl, downLoadUrl_);
          DARABONBA_PTR_FROM_JSON(password, password_);
        };
        ExportOssFileList() = default ;
        ExportOssFileList(const ExportOssFileList &) = default ;
        ExportOssFileList(ExportOssFileList &&) = default ;
        ExportOssFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExportOssFileList() = default ;
        ExportOssFileList& operator=(const ExportOssFileList &) = default ;
        ExportOssFileList& operator=(ExportOssFileList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->downLoadUrl_ == nullptr
        && this->password_ == nullptr; };
        // downLoadUrl Field Functions 
        bool hasDownLoadUrl() const { return this->downLoadUrl_ != nullptr;};
        void deleteDownLoadUrl() { this->downLoadUrl_ = nullptr;};
        inline string getDownLoadUrl() const { DARABONBA_PTR_GET_DEFAULT(downLoadUrl_, "") };
        inline ExportOssFileList& setDownLoadUrl(string downLoadUrl) { DARABONBA_PTR_SET_VALUE(downLoadUrl_, downLoadUrl) };


        // password Field Functions 
        bool hasPassword() const { return this->password_ != nullptr;};
        void deletePassword() { this->password_ = nullptr;};
        inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
        inline ExportOssFileList& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      protected:
        shared_ptr<string> downLoadUrl_ {};
        shared_ptr<string> password_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->bcId_ == nullptr && this->computeOssFileTitle_ == nullptr && this->datasetIds_ == nullptr && this->exportOssFileList_ == nullptr && this->extInfo_ == nullptr
        && this->fileNum_ == nullptr && this->hint_ == nullptr && this->name_ == nullptr && this->remarks_ == nullptr && this->status_ == nullptr
        && this->taskResultList_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
      inline Data& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // bcId Field Functions 
      bool hasBcId() const { return this->bcId_ != nullptr;};
      void deleteBcId() { this->bcId_ = nullptr;};
      inline int64_t getBcId() const { DARABONBA_PTR_GET_DEFAULT(bcId_, 0L) };
      inline Data& setBcId(int64_t bcId) { DARABONBA_PTR_SET_VALUE(bcId_, bcId) };


      // computeOssFileTitle Field Functions 
      bool hasComputeOssFileTitle() const { return this->computeOssFileTitle_ != nullptr;};
      void deleteComputeOssFileTitle() { this->computeOssFileTitle_ = nullptr;};
      inline string getComputeOssFileTitle() const { DARABONBA_PTR_GET_DEFAULT(computeOssFileTitle_, "") };
      inline Data& setComputeOssFileTitle(string computeOssFileTitle) { DARABONBA_PTR_SET_VALUE(computeOssFileTitle_, computeOssFileTitle) };


      // datasetIds Field Functions 
      bool hasDatasetIds() const { return this->datasetIds_ != nullptr;};
      void deleteDatasetIds() { this->datasetIds_ = nullptr;};
      inline string getDatasetIds() const { DARABONBA_PTR_GET_DEFAULT(datasetIds_, "") };
      inline Data& setDatasetIds(string datasetIds) { DARABONBA_PTR_SET_VALUE(datasetIds_, datasetIds) };


      // exportOssFileList Field Functions 
      bool hasExportOssFileList() const { return this->exportOssFileList_ != nullptr;};
      void deleteExportOssFileList() { this->exportOssFileList_ = nullptr;};
      inline const vector<Data::ExportOssFileList> & getExportOssFileList() const { DARABONBA_PTR_GET_CONST(exportOssFileList_, vector<Data::ExportOssFileList>) };
      inline vector<Data::ExportOssFileList> getExportOssFileList() { DARABONBA_PTR_GET(exportOssFileList_, vector<Data::ExportOssFileList>) };
      inline Data& setExportOssFileList(const vector<Data::ExportOssFileList> & exportOssFileList) { DARABONBA_PTR_SET_VALUE(exportOssFileList_, exportOssFileList) };
      inline Data& setExportOssFileList(vector<Data::ExportOssFileList> && exportOssFileList) { DARABONBA_PTR_SET_RVALUE(exportOssFileList_, exportOssFileList) };


      // extInfo Field Functions 
      bool hasExtInfo() const { return this->extInfo_ != nullptr;};
      void deleteExtInfo() { this->extInfo_ = nullptr;};
      inline string getExtInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
      inline Data& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


      // fileNum Field Functions 
      bool hasFileNum() const { return this->fileNum_ != nullptr;};
      void deleteFileNum() { this->fileNum_ = nullptr;};
      inline int64_t getFileNum() const { DARABONBA_PTR_GET_DEFAULT(fileNum_, 0L) };
      inline Data& setFileNum(int64_t fileNum) { DARABONBA_PTR_SET_VALUE(fileNum_, fileNum) };


      // hint Field Functions 
      bool hasHint() const { return this->hint_ != nullptr;};
      void deleteHint() { this->hint_ = nullptr;};
      inline string getHint() const { DARABONBA_PTR_GET_DEFAULT(hint_, "") };
      inline Data& setHint(string hint) { DARABONBA_PTR_SET_VALUE(hint_, hint) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // remarks Field Functions 
      bool hasRemarks() const { return this->remarks_ != nullptr;};
      void deleteRemarks() { this->remarks_ = nullptr;};
      inline string getRemarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
      inline Data& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskResultList Field Functions 
      bool hasTaskResultList() const { return this->taskResultList_ != nullptr;};
      void deleteTaskResultList() { this->taskResultList_ = nullptr;};
      inline const vector<Data::TaskResultList> & getTaskResultList() const { DARABONBA_PTR_GET_CONST(taskResultList_, vector<Data::TaskResultList>) };
      inline vector<Data::TaskResultList> getTaskResultList() { DARABONBA_PTR_GET(taskResultList_, vector<Data::TaskResultList>) };
      inline Data& setTaskResultList(const vector<Data::TaskResultList> & taskResultList) { DARABONBA_PTR_SET_VALUE(taskResultList_, taskResultList) };
      inline Data& setTaskResultList(vector<Data::TaskResultList> && taskResultList) { DARABONBA_PTR_SET_RVALUE(taskResultList_, taskResultList) };


    protected:
      shared_ptr<int64_t> appId_ {};
      shared_ptr<int64_t> bcId_ {};
      shared_ptr<string> computeOssFileTitle_ {};
      shared_ptr<string> datasetIds_ {};
      shared_ptr<vector<Data::ExportOssFileList>> exportOssFileList_ {};
      shared_ptr<string> extInfo_ {};
      shared_ptr<int64_t> fileNum_ {};
      shared_ptr<string> hint_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> remarks_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<Data::TaskResultList>> taskResultList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SelectComputeTask2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SelectComputeTask2ResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SelectComputeTask2ResponseBody::Data) };
    inline SelectComputeTask2ResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SelectComputeTask2ResponseBody::Data) };
    inline SelectComputeTask2ResponseBody& setData(const SelectComputeTask2ResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SelectComputeTask2ResponseBody& setData(SelectComputeTask2ResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline SelectComputeTask2ResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SelectComputeTask2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SelectComputeTask2ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<SelectComputeTask2ResponseBody::Data> data_ {};
    shared_ptr<string> msg_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
