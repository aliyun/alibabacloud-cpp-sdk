// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetAppConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cost, cost_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cost, cost_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    GetAppConfigResponseBody() = default ;
    GetAppConfigResponseBody(const GetAppConfigResponseBody &) = default ;
    GetAppConfigResponseBody(GetAppConfigResponseBody &&) = default ;
    GetAppConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppConfigResponseBody() = default ;
    GetAppConfigResponseBody& operator=(const GetAppConfigResponseBody &) = default ;
    GetAppConfigResponseBody& operator=(GetAppConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(embeddingTypeList, embeddingTypeList_);
        DARABONBA_PTR_TO_JSON(frontendConfig, frontendConfig_);
        DARABONBA_PTR_TO_JSON(libraryDocumentStatusList, libraryDocumentStatusList_);
        DARABONBA_PTR_TO_JSON(llmHelperTypeList, llmHelperTypeList_);
        DARABONBA_PTR_TO_JSON(textIndexCategoryList, textIndexCategoryList_);
        DARABONBA_PTR_TO_JSON(vectorIndexCategoryList, vectorIndexCategoryList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(embeddingTypeList, embeddingTypeList_);
        DARABONBA_PTR_FROM_JSON(frontendConfig, frontendConfig_);
        DARABONBA_PTR_FROM_JSON(libraryDocumentStatusList, libraryDocumentStatusList_);
        DARABONBA_PTR_FROM_JSON(llmHelperTypeList, llmHelperTypeList_);
        DARABONBA_PTR_FROM_JSON(textIndexCategoryList, textIndexCategoryList_);
        DARABONBA_PTR_FROM_JSON(vectorIndexCategoryList, vectorIndexCategoryList_);
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
      virtual bool empty() const override { return this->embeddingTypeList_ == nullptr
        && this->frontendConfig_ == nullptr && this->libraryDocumentStatusList_ == nullptr && this->llmHelperTypeList_ == nullptr && this->textIndexCategoryList_ == nullptr && this->vectorIndexCategoryList_ == nullptr; };
      // embeddingTypeList Field Functions 
      bool hasEmbeddingTypeList() const { return this->embeddingTypeList_ != nullptr;};
      void deleteEmbeddingTypeList() { this->embeddingTypeList_ = nullptr;};
      inline const vector<map<string, string>> & getEmbeddingTypeList() const { DARABONBA_PTR_GET_CONST(embeddingTypeList_, vector<map<string, string>>) };
      inline vector<map<string, string>> getEmbeddingTypeList() { DARABONBA_PTR_GET(embeddingTypeList_, vector<map<string, string>>) };
      inline Data& setEmbeddingTypeList(const vector<map<string, string>> & embeddingTypeList) { DARABONBA_PTR_SET_VALUE(embeddingTypeList_, embeddingTypeList) };
      inline Data& setEmbeddingTypeList(vector<map<string, string>> && embeddingTypeList) { DARABONBA_PTR_SET_RVALUE(embeddingTypeList_, embeddingTypeList) };


      // frontendConfig Field Functions 
      bool hasFrontendConfig() const { return this->frontendConfig_ != nullptr;};
      void deleteFrontendConfig() { this->frontendConfig_ = nullptr;};
      inline const map<string, bool> & getFrontendConfig() const { DARABONBA_PTR_GET_CONST(frontendConfig_, map<string, bool>) };
      inline map<string, bool> getFrontendConfig() { DARABONBA_PTR_GET(frontendConfig_, map<string, bool>) };
      inline Data& setFrontendConfig(const map<string, bool> & frontendConfig) { DARABONBA_PTR_SET_VALUE(frontendConfig_, frontendConfig) };
      inline Data& setFrontendConfig(map<string, bool> && frontendConfig) { DARABONBA_PTR_SET_RVALUE(frontendConfig_, frontendConfig) };


      // libraryDocumentStatusList Field Functions 
      bool hasLibraryDocumentStatusList() const { return this->libraryDocumentStatusList_ != nullptr;};
      void deleteLibraryDocumentStatusList() { this->libraryDocumentStatusList_ = nullptr;};
      inline const vector<map<string, string>> & getLibraryDocumentStatusList() const { DARABONBA_PTR_GET_CONST(libraryDocumentStatusList_, vector<map<string, string>>) };
      inline vector<map<string, string>> getLibraryDocumentStatusList() { DARABONBA_PTR_GET(libraryDocumentStatusList_, vector<map<string, string>>) };
      inline Data& setLibraryDocumentStatusList(const vector<map<string, string>> & libraryDocumentStatusList) { DARABONBA_PTR_SET_VALUE(libraryDocumentStatusList_, libraryDocumentStatusList) };
      inline Data& setLibraryDocumentStatusList(vector<map<string, string>> && libraryDocumentStatusList) { DARABONBA_PTR_SET_RVALUE(libraryDocumentStatusList_, libraryDocumentStatusList) };


      // llmHelperTypeList Field Functions 
      bool hasLlmHelperTypeList() const { return this->llmHelperTypeList_ != nullptr;};
      void deleteLlmHelperTypeList() { this->llmHelperTypeList_ = nullptr;};
      inline const vector<map<string, string>> & getLlmHelperTypeList() const { DARABONBA_PTR_GET_CONST(llmHelperTypeList_, vector<map<string, string>>) };
      inline vector<map<string, string>> getLlmHelperTypeList() { DARABONBA_PTR_GET(llmHelperTypeList_, vector<map<string, string>>) };
      inline Data& setLlmHelperTypeList(const vector<map<string, string>> & llmHelperTypeList) { DARABONBA_PTR_SET_VALUE(llmHelperTypeList_, llmHelperTypeList) };
      inline Data& setLlmHelperTypeList(vector<map<string, string>> && llmHelperTypeList) { DARABONBA_PTR_SET_RVALUE(llmHelperTypeList_, llmHelperTypeList) };


      // textIndexCategoryList Field Functions 
      bool hasTextIndexCategoryList() const { return this->textIndexCategoryList_ != nullptr;};
      void deleteTextIndexCategoryList() { this->textIndexCategoryList_ = nullptr;};
      inline const vector<string> & getTextIndexCategoryList() const { DARABONBA_PTR_GET_CONST(textIndexCategoryList_, vector<string>) };
      inline vector<string> getTextIndexCategoryList() { DARABONBA_PTR_GET(textIndexCategoryList_, vector<string>) };
      inline Data& setTextIndexCategoryList(const vector<string> & textIndexCategoryList) { DARABONBA_PTR_SET_VALUE(textIndexCategoryList_, textIndexCategoryList) };
      inline Data& setTextIndexCategoryList(vector<string> && textIndexCategoryList) { DARABONBA_PTR_SET_RVALUE(textIndexCategoryList_, textIndexCategoryList) };


      // vectorIndexCategoryList Field Functions 
      bool hasVectorIndexCategoryList() const { return this->vectorIndexCategoryList_ != nullptr;};
      void deleteVectorIndexCategoryList() { this->vectorIndexCategoryList_ = nullptr;};
      inline const vector<string> & getVectorIndexCategoryList() const { DARABONBA_PTR_GET_CONST(vectorIndexCategoryList_, vector<string>) };
      inline vector<string> getVectorIndexCategoryList() { DARABONBA_PTR_GET(vectorIndexCategoryList_, vector<string>) };
      inline Data& setVectorIndexCategoryList(const vector<string> & vectorIndexCategoryList) { DARABONBA_PTR_SET_VALUE(vectorIndexCategoryList_, vectorIndexCategoryList) };
      inline Data& setVectorIndexCategoryList(vector<string> && vectorIndexCategoryList) { DARABONBA_PTR_SET_RVALUE(vectorIndexCategoryList_, vectorIndexCategoryList) };


    protected:
      shared_ptr<vector<map<string, string>>> embeddingTypeList_ {};
      shared_ptr<map<string, bool>> frontendConfig_ {};
      shared_ptr<vector<map<string, string>>> libraryDocumentStatusList_ {};
      shared_ptr<vector<map<string, string>>> llmHelperTypeList_ {};
      shared_ptr<vector<string>> textIndexCategoryList_ {};
      shared_ptr<vector<string>> vectorIndexCategoryList_ {};
    };

    virtual bool empty() const override { return this->cost_ == nullptr
        && this->data_ == nullptr && this->dataType_ == nullptr && this->errCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->time_ == nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline GetAppConfigResponseBody& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAppConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAppConfigResponseBody::Data) };
    inline GetAppConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAppConfigResponseBody::Data) };
    inline GetAppConfigResponseBody& setData(const GetAppConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAppConfigResponseBody& setData(GetAppConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GetAppConfigResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetAppConfigResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAppConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAppConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetAppConfigResponseBody& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    shared_ptr<int64_t> cost_ {};
    shared_ptr<GetAppConfigResponseBody::Data> data_ {};
    shared_ptr<string> dataType_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
