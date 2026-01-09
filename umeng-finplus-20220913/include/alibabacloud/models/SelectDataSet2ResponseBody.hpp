// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTDATASET2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SELECTDATASET2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class SelectDataSet2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectDataSet2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SelectDataSet2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SelectDataSet2ResponseBody() = default ;
    SelectDataSet2ResponseBody(const SelectDataSet2ResponseBody &) = default ;
    SelectDataSet2ResponseBody(SelectDataSet2ResponseBody &&) = default ;
    SelectDataSet2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectDataSet2ResponseBody() = default ;
    SelectDataSet2ResponseBody& operator=(const SelectDataSet2ResponseBody &) = default ;
    SelectDataSet2ResponseBody& operator=(SelectDataSet2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(datasetId, datasetId_);
        DARABONBA_PTR_TO_JSON(lineNum, lineNum_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(ossFileCount, ossFileCount_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(statusMsg, statusMsg_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(datasetId, datasetId_);
        DARABONBA_PTR_FROM_JSON(lineNum, lineNum_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(ossFileCount, ossFileCount_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(statusMsg, statusMsg_);
        DARABONBA_PTR_FROM_JSON(type, type_);
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
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->datasetId_ == nullptr && this->lineNum_ == nullptr && this->name_ == nullptr && this->ossFileCount_ == nullptr && this->status_ == nullptr
        && this->statusMsg_ == nullptr && this->type_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // datasetId Field Functions 
      bool hasDatasetId() const { return this->datasetId_ != nullptr;};
      void deleteDatasetId() { this->datasetId_ = nullptr;};
      inline int64_t getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
      inline Data& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


      // lineNum Field Functions 
      bool hasLineNum() const { return this->lineNum_ != nullptr;};
      void deleteLineNum() { this->lineNum_ = nullptr;};
      inline int64_t getLineNum() const { DARABONBA_PTR_GET_DEFAULT(lineNum_, 0L) };
      inline Data& setLineNum(int64_t lineNum) { DARABONBA_PTR_SET_VALUE(lineNum_, lineNum) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ossFileCount Field Functions 
      bool hasOssFileCount() const { return this->ossFileCount_ != nullptr;};
      void deleteOssFileCount() { this->ossFileCount_ = nullptr;};
      inline int64_t getOssFileCount() const { DARABONBA_PTR_GET_DEFAULT(ossFileCount_, 0L) };
      inline Data& setOssFileCount(int64_t ossFileCount) { DARABONBA_PTR_SET_VALUE(ossFileCount_, ossFileCount) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusMsg Field Functions 
      bool hasStatusMsg() const { return this->statusMsg_ != nullptr;};
      void deleteStatusMsg() { this->statusMsg_ = nullptr;};
      inline string getStatusMsg() const { DARABONBA_PTR_GET_DEFAULT(statusMsg_, "") };
      inline Data& setStatusMsg(string statusMsg) { DARABONBA_PTR_SET_VALUE(statusMsg_, statusMsg) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<int64_t> datasetId_ {};
      shared_ptr<int64_t> lineNum_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int64_t> ossFileCount_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> statusMsg_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SelectDataSet2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SelectDataSet2ResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SelectDataSet2ResponseBody::Data) };
    inline SelectDataSet2ResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SelectDataSet2ResponseBody::Data) };
    inline SelectDataSet2ResponseBody& setData(const SelectDataSet2ResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SelectDataSet2ResponseBody& setData(SelectDataSet2ResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline SelectDataSet2ResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SelectDataSet2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SelectDataSet2ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<SelectDataSet2ResponseBody::Data> data_ {};
    shared_ptr<string> msg_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
