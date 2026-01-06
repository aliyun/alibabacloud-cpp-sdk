// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCORPACCOMPLISHMENTTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCORPACCOMPLISHMENTTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetCorpAccomplishmentTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCorpAccomplishmentTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetCorpAccomplishmentTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetCorpAccomplishmentTasksResponseBody() = default ;
    GetCorpAccomplishmentTasksResponseBody(const GetCorpAccomplishmentTasksResponseBody &) = default ;
    GetCorpAccomplishmentTasksResponseBody(GetCorpAccomplishmentTasksResponseBody &&) = default ;
    GetCorpAccomplishmentTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCorpAccomplishmentTasksResponseBody() = default ;
    GetCorpAccomplishmentTasksResponseBody& operator=(const GetCorpAccomplishmentTasksResponseBody &) = default ;
    GetCorpAccomplishmentTasksResponseBody& operator=(GetCorpAccomplishmentTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ActiveTimeGMT, activeTimeGMT_);
        DARABONBA_PTR_TO_JSON(ActualActionerId, actualActionerId_);
        DARABONBA_PTR_TO_JSON(AppType, appType_);
        DARABONBA_PTR_TO_JSON(CreateTimeGMT, createTimeGMT_);
        DARABONBA_PTR_TO_JSON(FinishTimeGMT, finishTimeGMT_);
        DARABONBA_PTR_TO_JSON(OriginatorEmail, originatorEmail_);
        DARABONBA_PTR_TO_JSON(OriginatorId, originatorId_);
        DARABONBA_PTR_TO_JSON(OriginatorName, originatorName_);
        DARABONBA_PTR_TO_JSON(OriginatorNameInEnglish, originatorNameInEnglish_);
        DARABONBA_PTR_TO_JSON(OriginatorNickName, originatorNickName_);
        DARABONBA_PTR_TO_JSON(OriginatorNickNameInEnglish, originatorNickNameInEnglish_);
        DARABONBA_PTR_TO_JSON(OriginatorPhoto, originatorPhoto_);
        DARABONBA_PTR_TO_JSON(OutResult, outResult_);
        DARABONBA_PTR_TO_JSON(OutResultName, outResultName_);
        DARABONBA_PTR_TO_JSON(ProcessInstanceId, processInstanceId_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ActiveTimeGMT, activeTimeGMT_);
        DARABONBA_PTR_FROM_JSON(ActualActionerId, actualActionerId_);
        DARABONBA_PTR_FROM_JSON(AppType, appType_);
        DARABONBA_PTR_FROM_JSON(CreateTimeGMT, createTimeGMT_);
        DARABONBA_PTR_FROM_JSON(FinishTimeGMT, finishTimeGMT_);
        DARABONBA_PTR_FROM_JSON(OriginatorEmail, originatorEmail_);
        DARABONBA_PTR_FROM_JSON(OriginatorId, originatorId_);
        DARABONBA_PTR_FROM_JSON(OriginatorName, originatorName_);
        DARABONBA_PTR_FROM_JSON(OriginatorNameInEnglish, originatorNameInEnglish_);
        DARABONBA_PTR_FROM_JSON(OriginatorNickName, originatorNickName_);
        DARABONBA_PTR_FROM_JSON(OriginatorNickNameInEnglish, originatorNickNameInEnglish_);
        DARABONBA_PTR_FROM_JSON(OriginatorPhoto, originatorPhoto_);
        DARABONBA_PTR_FROM_JSON(OutResult, outResult_);
        DARABONBA_PTR_FROM_JSON(OutResultName, outResultName_);
        DARABONBA_PTR_FROM_JSON(ProcessInstanceId, processInstanceId_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
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
      virtual bool empty() const override { return this->activeTimeGMT_ == nullptr
        && this->actualActionerId_ == nullptr && this->appType_ == nullptr && this->createTimeGMT_ == nullptr && this->finishTimeGMT_ == nullptr && this->originatorEmail_ == nullptr
        && this->originatorId_ == nullptr && this->originatorName_ == nullptr && this->originatorNameInEnglish_ == nullptr && this->originatorNickName_ == nullptr && this->originatorNickNameInEnglish_ == nullptr
        && this->originatorPhoto_ == nullptr && this->outResult_ == nullptr && this->outResultName_ == nullptr && this->processInstanceId_ == nullptr && this->title_ == nullptr; };
      // activeTimeGMT Field Functions 
      bool hasActiveTimeGMT() const { return this->activeTimeGMT_ != nullptr;};
      void deleteActiveTimeGMT() { this->activeTimeGMT_ = nullptr;};
      inline string getActiveTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(activeTimeGMT_, "") };
      inline Data& setActiveTimeGMT(string activeTimeGMT) { DARABONBA_PTR_SET_VALUE(activeTimeGMT_, activeTimeGMT) };


      // actualActionerId Field Functions 
      bool hasActualActionerId() const { return this->actualActionerId_ != nullptr;};
      void deleteActualActionerId() { this->actualActionerId_ = nullptr;};
      inline string getActualActionerId() const { DARABONBA_PTR_GET_DEFAULT(actualActionerId_, "") };
      inline Data& setActualActionerId(string actualActionerId) { DARABONBA_PTR_SET_VALUE(actualActionerId_, actualActionerId) };


      // appType Field Functions 
      bool hasAppType() const { return this->appType_ != nullptr;};
      void deleteAppType() { this->appType_ = nullptr;};
      inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
      inline Data& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


      // createTimeGMT Field Functions 
      bool hasCreateTimeGMT() const { return this->createTimeGMT_ != nullptr;};
      void deleteCreateTimeGMT() { this->createTimeGMT_ = nullptr;};
      inline string getCreateTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createTimeGMT_, "") };
      inline Data& setCreateTimeGMT(string createTimeGMT) { DARABONBA_PTR_SET_VALUE(createTimeGMT_, createTimeGMT) };


      // finishTimeGMT Field Functions 
      bool hasFinishTimeGMT() const { return this->finishTimeGMT_ != nullptr;};
      void deleteFinishTimeGMT() { this->finishTimeGMT_ = nullptr;};
      inline string getFinishTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(finishTimeGMT_, "") };
      inline Data& setFinishTimeGMT(string finishTimeGMT) { DARABONBA_PTR_SET_VALUE(finishTimeGMT_, finishTimeGMT) };


      // originatorEmail Field Functions 
      bool hasOriginatorEmail() const { return this->originatorEmail_ != nullptr;};
      void deleteOriginatorEmail() { this->originatorEmail_ = nullptr;};
      inline string getOriginatorEmail() const { DARABONBA_PTR_GET_DEFAULT(originatorEmail_, "") };
      inline Data& setOriginatorEmail(string originatorEmail) { DARABONBA_PTR_SET_VALUE(originatorEmail_, originatorEmail) };


      // originatorId Field Functions 
      bool hasOriginatorId() const { return this->originatorId_ != nullptr;};
      void deleteOriginatorId() { this->originatorId_ = nullptr;};
      inline string getOriginatorId() const { DARABONBA_PTR_GET_DEFAULT(originatorId_, "") };
      inline Data& setOriginatorId(string originatorId) { DARABONBA_PTR_SET_VALUE(originatorId_, originatorId) };


      // originatorName Field Functions 
      bool hasOriginatorName() const { return this->originatorName_ != nullptr;};
      void deleteOriginatorName() { this->originatorName_ = nullptr;};
      inline string getOriginatorName() const { DARABONBA_PTR_GET_DEFAULT(originatorName_, "") };
      inline Data& setOriginatorName(string originatorName) { DARABONBA_PTR_SET_VALUE(originatorName_, originatorName) };


      // originatorNameInEnglish Field Functions 
      bool hasOriginatorNameInEnglish() const { return this->originatorNameInEnglish_ != nullptr;};
      void deleteOriginatorNameInEnglish() { this->originatorNameInEnglish_ = nullptr;};
      inline string getOriginatorNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(originatorNameInEnglish_, "") };
      inline Data& setOriginatorNameInEnglish(string originatorNameInEnglish) { DARABONBA_PTR_SET_VALUE(originatorNameInEnglish_, originatorNameInEnglish) };


      // originatorNickName Field Functions 
      bool hasOriginatorNickName() const { return this->originatorNickName_ != nullptr;};
      void deleteOriginatorNickName() { this->originatorNickName_ = nullptr;};
      inline string getOriginatorNickName() const { DARABONBA_PTR_GET_DEFAULT(originatorNickName_, "") };
      inline Data& setOriginatorNickName(string originatorNickName) { DARABONBA_PTR_SET_VALUE(originatorNickName_, originatorNickName) };


      // originatorNickNameInEnglish Field Functions 
      bool hasOriginatorNickNameInEnglish() const { return this->originatorNickNameInEnglish_ != nullptr;};
      void deleteOriginatorNickNameInEnglish() { this->originatorNickNameInEnglish_ = nullptr;};
      inline string getOriginatorNickNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(originatorNickNameInEnglish_, "") };
      inline Data& setOriginatorNickNameInEnglish(string originatorNickNameInEnglish) { DARABONBA_PTR_SET_VALUE(originatorNickNameInEnglish_, originatorNickNameInEnglish) };


      // originatorPhoto Field Functions 
      bool hasOriginatorPhoto() const { return this->originatorPhoto_ != nullptr;};
      void deleteOriginatorPhoto() { this->originatorPhoto_ = nullptr;};
      inline string getOriginatorPhoto() const { DARABONBA_PTR_GET_DEFAULT(originatorPhoto_, "") };
      inline Data& setOriginatorPhoto(string originatorPhoto) { DARABONBA_PTR_SET_VALUE(originatorPhoto_, originatorPhoto) };


      // outResult Field Functions 
      bool hasOutResult() const { return this->outResult_ != nullptr;};
      void deleteOutResult() { this->outResult_ = nullptr;};
      inline string getOutResult() const { DARABONBA_PTR_GET_DEFAULT(outResult_, "") };
      inline Data& setOutResult(string outResult) { DARABONBA_PTR_SET_VALUE(outResult_, outResult) };


      // outResultName Field Functions 
      bool hasOutResultName() const { return this->outResultName_ != nullptr;};
      void deleteOutResultName() { this->outResultName_ = nullptr;};
      inline string getOutResultName() const { DARABONBA_PTR_GET_DEFAULT(outResultName_, "") };
      inline Data& setOutResultName(string outResultName) { DARABONBA_PTR_SET_VALUE(outResultName_, outResultName) };


      // processInstanceId Field Functions 
      bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
      void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
      inline string getProcessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
      inline Data& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      shared_ptr<string> activeTimeGMT_ {};
      shared_ptr<string> actualActionerId_ {};
      shared_ptr<string> appType_ {};
      shared_ptr<string> createTimeGMT_ {};
      shared_ptr<string> finishTimeGMT_ {};
      shared_ptr<string> originatorEmail_ {};
      shared_ptr<string> originatorId_ {};
      shared_ptr<string> originatorName_ {};
      shared_ptr<string> originatorNameInEnglish_ {};
      shared_ptr<string> originatorNickName_ {};
      shared_ptr<string> originatorNickNameInEnglish_ {};
      shared_ptr<string> originatorPhoto_ {};
      shared_ptr<string> outResult_ {};
      shared_ptr<string> outResultName_ {};
      shared_ptr<string> processInstanceId_ {};
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetCorpAccomplishmentTasksResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetCorpAccomplishmentTasksResponseBody::Data>) };
    inline vector<GetCorpAccomplishmentTasksResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetCorpAccomplishmentTasksResponseBody::Data>) };
    inline GetCorpAccomplishmentTasksResponseBody& setData(const vector<GetCorpAccomplishmentTasksResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCorpAccomplishmentTasksResponseBody& setData(vector<GetCorpAccomplishmentTasksResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetCorpAccomplishmentTasksResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCorpAccomplishmentTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetCorpAccomplishmentTasksResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetCorpAccomplishmentTasksResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetCorpAccomplishmentTasksResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<vector<GetCorpAccomplishmentTasksResponseBody::Data>> data_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
