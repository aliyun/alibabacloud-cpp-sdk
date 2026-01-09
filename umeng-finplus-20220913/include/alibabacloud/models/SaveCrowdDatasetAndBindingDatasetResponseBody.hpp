// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVECROWDDATASETANDBINDINGDATASETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SAVECROWDDATASETANDBINDINGDATASETRESPONSEBODY_HPP_
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
  class SaveCrowdDatasetAndBindingDatasetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveCrowdDatasetAndBindingDatasetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SaveCrowdDatasetAndBindingDatasetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SaveCrowdDatasetAndBindingDatasetResponseBody() = default ;
    SaveCrowdDatasetAndBindingDatasetResponseBody(const SaveCrowdDatasetAndBindingDatasetResponseBody &) = default ;
    SaveCrowdDatasetAndBindingDatasetResponseBody(SaveCrowdDatasetAndBindingDatasetResponseBody &&) = default ;
    SaveCrowdDatasetAndBindingDatasetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveCrowdDatasetAndBindingDatasetResponseBody() = default ;
    SaveCrowdDatasetAndBindingDatasetResponseBody& operator=(const SaveCrowdDatasetAndBindingDatasetResponseBody &) = default ;
    SaveCrowdDatasetAndBindingDatasetResponseBody& operator=(SaveCrowdDatasetAndBindingDatasetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(appId, appId_);
        DARABONBA_PTR_TO_JSON(crowdDatasetId, crowdDatasetId_);
        DARABONBA_PTR_TO_JSON(datasetIds, datasetIds_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(uploadStatus, uploadStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(appId, appId_);
        DARABONBA_PTR_FROM_JSON(crowdDatasetId, crowdDatasetId_);
        DARABONBA_PTR_FROM_JSON(datasetIds, datasetIds_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(uploadStatus, uploadStatus_);
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
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->crowdDatasetId_ == nullptr && this->datasetIds_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->uploadStatus_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // crowdDatasetId Field Functions 
      bool hasCrowdDatasetId() const { return this->crowdDatasetId_ != nullptr;};
      void deleteCrowdDatasetId() { this->crowdDatasetId_ = nullptr;};
      inline string getCrowdDatasetId() const { DARABONBA_PTR_GET_DEFAULT(crowdDatasetId_, "") };
      inline Data& setCrowdDatasetId(string crowdDatasetId) { DARABONBA_PTR_SET_VALUE(crowdDatasetId_, crowdDatasetId) };


      // datasetIds Field Functions 
      bool hasDatasetIds() const { return this->datasetIds_ != nullptr;};
      void deleteDatasetIds() { this->datasetIds_ = nullptr;};
      inline const vector<string> & getDatasetIds() const { DARABONBA_PTR_GET_CONST(datasetIds_, vector<string>) };
      inline vector<string> getDatasetIds() { DARABONBA_PTR_GET(datasetIds_, vector<string>) };
      inline Data& setDatasetIds(const vector<string> & datasetIds) { DARABONBA_PTR_SET_VALUE(datasetIds_, datasetIds) };
      inline Data& setDatasetIds(vector<string> && datasetIds) { DARABONBA_PTR_SET_RVALUE(datasetIds_, datasetIds) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // uploadStatus Field Functions 
      bool hasUploadStatus() const { return this->uploadStatus_ != nullptr;};
      void deleteUploadStatus() { this->uploadStatus_ = nullptr;};
      inline string getUploadStatus() const { DARABONBA_PTR_GET_DEFAULT(uploadStatus_, "") };
      inline Data& setUploadStatus(string uploadStatus) { DARABONBA_PTR_SET_VALUE(uploadStatus_, uploadStatus) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> crowdDatasetId_ {};
      shared_ptr<vector<string>> datasetIds_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> uploadStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SaveCrowdDatasetAndBindingDatasetResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SaveCrowdDatasetAndBindingDatasetResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SaveCrowdDatasetAndBindingDatasetResponseBody::Data) };
    inline SaveCrowdDatasetAndBindingDatasetResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SaveCrowdDatasetAndBindingDatasetResponseBody::Data) };
    inline SaveCrowdDatasetAndBindingDatasetResponseBody& setData(const SaveCrowdDatasetAndBindingDatasetResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SaveCrowdDatasetAndBindingDatasetResponseBody& setData(SaveCrowdDatasetAndBindingDatasetResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline SaveCrowdDatasetAndBindingDatasetResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SaveCrowdDatasetAndBindingDatasetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SaveCrowdDatasetAndBindingDatasetResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<SaveCrowdDatasetAndBindingDatasetResponseBody::Data> data_ {};
    shared_ptr<string> msg_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
