// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListDatasetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CustomSemanticSearchConfig, customSemanticSearchConfig_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(ThirdSearchConfig, thirdSearchConfig_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CustomSemanticSearchConfig, customSemanticSearchConfig_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(ThirdSearchConfig, thirdSearchConfig_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDatasetsResponseBody() = default ;
    ListDatasetsResponseBody(const ListDatasetsResponseBody &) = default ;
    ListDatasetsResponseBody(ListDatasetsResponseBody &&) = default ;
    ListDatasetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetsResponseBody() = default ;
    ListDatasetsResponseBody& operator=(const ListDatasetsResponseBody &) = default ;
    ListDatasetsResponseBody& operator=(ListDatasetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ThirdSearchConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ThirdSearchConfig& obj) { 
        DARABONBA_PTR_TO_JSON(DatasetQuota, datasetQuota_);
        DARABONBA_PTR_TO_JSON(DatasetUsedQuota, datasetUsedQuota_);
      };
      friend void from_json(const Darabonba::Json& j, ThirdSearchConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(DatasetQuota, datasetQuota_);
        DARABONBA_PTR_FROM_JSON(DatasetUsedQuota, datasetUsedQuota_);
      };
      ThirdSearchConfig() = default ;
      ThirdSearchConfig(const ThirdSearchConfig &) = default ;
      ThirdSearchConfig(ThirdSearchConfig &&) = default ;
      ThirdSearchConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ThirdSearchConfig() = default ;
      ThirdSearchConfig& operator=(const ThirdSearchConfig &) = default ;
      ThirdSearchConfig& operator=(ThirdSearchConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->datasetQuota_ == nullptr
        && this->datasetUsedQuota_ == nullptr; };
      // datasetQuota Field Functions 
      bool hasDatasetQuota() const { return this->datasetQuota_ != nullptr;};
      void deleteDatasetQuota() { this->datasetQuota_ = nullptr;};
      inline int32_t getDatasetQuota() const { DARABONBA_PTR_GET_DEFAULT(datasetQuota_, 0) };
      inline ThirdSearchConfig& setDatasetQuota(int32_t datasetQuota) { DARABONBA_PTR_SET_VALUE(datasetQuota_, datasetQuota) };


      // datasetUsedQuota Field Functions 
      bool hasDatasetUsedQuota() const { return this->datasetUsedQuota_ != nullptr;};
      void deleteDatasetUsedQuota() { this->datasetUsedQuota_ = nullptr;};
      inline int32_t getDatasetUsedQuota() const { DARABONBA_PTR_GET_DEFAULT(datasetUsedQuota_, 0) };
      inline ThirdSearchConfig& setDatasetUsedQuota(int32_t datasetUsedQuota) { DARABONBA_PTR_SET_VALUE(datasetUsedQuota_, datasetUsedQuota) };


    protected:
      shared_ptr<int32_t> datasetQuota_ {};
      shared_ptr<int32_t> datasetUsedQuota_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(DatasetDescription, datasetDescription_);
        DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
        DARABONBA_PTR_TO_JSON(DatasetType, datasetType_);
        DARABONBA_PTR_TO_JSON(DocUsedQuota, docUsedQuota_);
        DARABONBA_PTR_TO_JSON(SearchDatasetEnable, searchDatasetEnable_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(DatasetDescription, datasetDescription_);
        DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
        DARABONBA_PTR_FROM_JSON(DatasetType, datasetType_);
        DARABONBA_PTR_FROM_JSON(DocUsedQuota, docUsedQuota_);
        DARABONBA_PTR_FROM_JSON(SearchDatasetEnable, searchDatasetEnable_);
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
        && this->createUser_ == nullptr && this->datasetDescription_ == nullptr && this->datasetId_ == nullptr && this->datasetName_ == nullptr && this->datasetType_ == nullptr
        && this->docUsedQuota_ == nullptr && this->searchDatasetEnable_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline Data& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // datasetDescription Field Functions 
      bool hasDatasetDescription() const { return this->datasetDescription_ != nullptr;};
      void deleteDatasetDescription() { this->datasetDescription_ = nullptr;};
      inline string getDatasetDescription() const { DARABONBA_PTR_GET_DEFAULT(datasetDescription_, "") };
      inline Data& setDatasetDescription(string datasetDescription) { DARABONBA_PTR_SET_VALUE(datasetDescription_, datasetDescription) };


      // datasetId Field Functions 
      bool hasDatasetId() const { return this->datasetId_ != nullptr;};
      void deleteDatasetId() { this->datasetId_ = nullptr;};
      inline int64_t getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
      inline Data& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


      // datasetName Field Functions 
      bool hasDatasetName() const { return this->datasetName_ != nullptr;};
      void deleteDatasetName() { this->datasetName_ = nullptr;};
      inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
      inline Data& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


      // datasetType Field Functions 
      bool hasDatasetType() const { return this->datasetType_ != nullptr;};
      void deleteDatasetType() { this->datasetType_ = nullptr;};
      inline string getDatasetType() const { DARABONBA_PTR_GET_DEFAULT(datasetType_, "") };
      inline Data& setDatasetType(string datasetType) { DARABONBA_PTR_SET_VALUE(datasetType_, datasetType) };


      // docUsedQuota Field Functions 
      bool hasDocUsedQuota() const { return this->docUsedQuota_ != nullptr;};
      void deleteDocUsedQuota() { this->docUsedQuota_ = nullptr;};
      inline int64_t getDocUsedQuota() const { DARABONBA_PTR_GET_DEFAULT(docUsedQuota_, 0L) };
      inline Data& setDocUsedQuota(int64_t docUsedQuota) { DARABONBA_PTR_SET_VALUE(docUsedQuota_, docUsedQuota) };


      // searchDatasetEnable Field Functions 
      bool hasSearchDatasetEnable() const { return this->searchDatasetEnable_ != nullptr;};
      void deleteSearchDatasetEnable() { this->searchDatasetEnable_ = nullptr;};
      inline int32_t getSearchDatasetEnable() const { DARABONBA_PTR_GET_DEFAULT(searchDatasetEnable_, 0) };
      inline Data& setSearchDatasetEnable(int32_t searchDatasetEnable) { DARABONBA_PTR_SET_VALUE(searchDatasetEnable_, searchDatasetEnable) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> createUser_ {};
      shared_ptr<string> datasetDescription_ {};
      shared_ptr<int64_t> datasetId_ {};
      shared_ptr<string> datasetName_ {};
      shared_ptr<string> datasetType_ {};
      shared_ptr<int64_t> docUsedQuota_ {};
      shared_ptr<int32_t> searchDatasetEnable_ {};
    };

    class CustomSemanticSearchConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomSemanticSearchConfig& obj) { 
        DARABONBA_PTR_TO_JSON(DatasetQuota, datasetQuota_);
        DARABONBA_PTR_TO_JSON(DatasetUsedQuota, datasetUsedQuota_);
        DARABONBA_PTR_TO_JSON(DocQuota, docQuota_);
        DARABONBA_PTR_TO_JSON(DocUsedQuota, docUsedQuota_);
      };
      friend void from_json(const Darabonba::Json& j, CustomSemanticSearchConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(DatasetQuota, datasetQuota_);
        DARABONBA_PTR_FROM_JSON(DatasetUsedQuota, datasetUsedQuota_);
        DARABONBA_PTR_FROM_JSON(DocQuota, docQuota_);
        DARABONBA_PTR_FROM_JSON(DocUsedQuota, docUsedQuota_);
      };
      CustomSemanticSearchConfig() = default ;
      CustomSemanticSearchConfig(const CustomSemanticSearchConfig &) = default ;
      CustomSemanticSearchConfig(CustomSemanticSearchConfig &&) = default ;
      CustomSemanticSearchConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomSemanticSearchConfig() = default ;
      CustomSemanticSearchConfig& operator=(const CustomSemanticSearchConfig &) = default ;
      CustomSemanticSearchConfig& operator=(CustomSemanticSearchConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->datasetQuota_ == nullptr
        && this->datasetUsedQuota_ == nullptr && this->docQuota_ == nullptr && this->docUsedQuota_ == nullptr; };
      // datasetQuota Field Functions 
      bool hasDatasetQuota() const { return this->datasetQuota_ != nullptr;};
      void deleteDatasetQuota() { this->datasetQuota_ = nullptr;};
      inline int32_t getDatasetQuota() const { DARABONBA_PTR_GET_DEFAULT(datasetQuota_, 0) };
      inline CustomSemanticSearchConfig& setDatasetQuota(int32_t datasetQuota) { DARABONBA_PTR_SET_VALUE(datasetQuota_, datasetQuota) };


      // datasetUsedQuota Field Functions 
      bool hasDatasetUsedQuota() const { return this->datasetUsedQuota_ != nullptr;};
      void deleteDatasetUsedQuota() { this->datasetUsedQuota_ = nullptr;};
      inline int32_t getDatasetUsedQuota() const { DARABONBA_PTR_GET_DEFAULT(datasetUsedQuota_, 0) };
      inline CustomSemanticSearchConfig& setDatasetUsedQuota(int32_t datasetUsedQuota) { DARABONBA_PTR_SET_VALUE(datasetUsedQuota_, datasetUsedQuota) };


      // docQuota Field Functions 
      bool hasDocQuota() const { return this->docQuota_ != nullptr;};
      void deleteDocQuota() { this->docQuota_ = nullptr;};
      inline int64_t getDocQuota() const { DARABONBA_PTR_GET_DEFAULT(docQuota_, 0L) };
      inline CustomSemanticSearchConfig& setDocQuota(int64_t docQuota) { DARABONBA_PTR_SET_VALUE(docQuota_, docQuota) };


      // docUsedQuota Field Functions 
      bool hasDocUsedQuota() const { return this->docUsedQuota_ != nullptr;};
      void deleteDocUsedQuota() { this->docUsedQuota_ = nullptr;};
      inline int64_t getDocUsedQuota() const { DARABONBA_PTR_GET_DEFAULT(docUsedQuota_, 0L) };
      inline CustomSemanticSearchConfig& setDocUsedQuota(int64_t docUsedQuota) { DARABONBA_PTR_SET_VALUE(docUsedQuota_, docUsedQuota) };


    protected:
      shared_ptr<int32_t> datasetQuota_ {};
      shared_ptr<int32_t> datasetUsedQuota_ {};
      shared_ptr<int64_t> docQuota_ {};
      shared_ptr<int64_t> docUsedQuota_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->customSemanticSearchConfig_ == nullptr && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->thirdSearchConfig_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDatasetsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // customSemanticSearchConfig Field Functions 
    bool hasCustomSemanticSearchConfig() const { return this->customSemanticSearchConfig_ != nullptr;};
    void deleteCustomSemanticSearchConfig() { this->customSemanticSearchConfig_ = nullptr;};
    inline const ListDatasetsResponseBody::CustomSemanticSearchConfig & getCustomSemanticSearchConfig() const { DARABONBA_PTR_GET_CONST(customSemanticSearchConfig_, ListDatasetsResponseBody::CustomSemanticSearchConfig) };
    inline ListDatasetsResponseBody::CustomSemanticSearchConfig getCustomSemanticSearchConfig() { DARABONBA_PTR_GET(customSemanticSearchConfig_, ListDatasetsResponseBody::CustomSemanticSearchConfig) };
    inline ListDatasetsResponseBody& setCustomSemanticSearchConfig(const ListDatasetsResponseBody::CustomSemanticSearchConfig & customSemanticSearchConfig) { DARABONBA_PTR_SET_VALUE(customSemanticSearchConfig_, customSemanticSearchConfig) };
    inline ListDatasetsResponseBody& setCustomSemanticSearchConfig(ListDatasetsResponseBody::CustomSemanticSearchConfig && customSemanticSearchConfig) { DARABONBA_PTR_SET_RVALUE(customSemanticSearchConfig_, customSemanticSearchConfig) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDatasetsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDatasetsResponseBody::Data>) };
    inline vector<ListDatasetsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDatasetsResponseBody::Data>) };
    inline ListDatasetsResponseBody& setData(const vector<ListDatasetsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDatasetsResponseBody& setData(vector<ListDatasetsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDatasetsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDatasetsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDatasetsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDatasetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatasetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDatasetsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // thirdSearchConfig Field Functions 
    bool hasThirdSearchConfig() const { return this->thirdSearchConfig_ != nullptr;};
    void deleteThirdSearchConfig() { this->thirdSearchConfig_ = nullptr;};
    inline const ListDatasetsResponseBody::ThirdSearchConfig & getThirdSearchConfig() const { DARABONBA_PTR_GET_CONST(thirdSearchConfig_, ListDatasetsResponseBody::ThirdSearchConfig) };
    inline ListDatasetsResponseBody::ThirdSearchConfig getThirdSearchConfig() { DARABONBA_PTR_GET(thirdSearchConfig_, ListDatasetsResponseBody::ThirdSearchConfig) };
    inline ListDatasetsResponseBody& setThirdSearchConfig(const ListDatasetsResponseBody::ThirdSearchConfig & thirdSearchConfig) { DARABONBA_PTR_SET_VALUE(thirdSearchConfig_, thirdSearchConfig) };
    inline ListDatasetsResponseBody& setThirdSearchConfig(ListDatasetsResponseBody::ThirdSearchConfig && thirdSearchConfig) { DARABONBA_PTR_SET_RVALUE(thirdSearchConfig_, thirdSearchConfig) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDatasetsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListDatasetsResponseBody::CustomSemanticSearchConfig> customSemanticSearchConfig_ {};
    shared_ptr<vector<ListDatasetsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<ListDatasetsResponseBody::ThirdSearchConfig> thirdSearchConfig_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
