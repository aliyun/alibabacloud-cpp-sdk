// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVISORCHECKSFOPAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVISORCHECKSFOPAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class DescribeAdvisorChecksFoPagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvisorChecksFoPagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvisorChecksFoPagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAdvisorChecksFoPagesResponseBody() = default ;
    DescribeAdvisorChecksFoPagesResponseBody(const DescribeAdvisorChecksFoPagesResponseBody &) = default ;
    DescribeAdvisorChecksFoPagesResponseBody(DescribeAdvisorChecksFoPagesResponseBody &&) = default ;
    DescribeAdvisorChecksFoPagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvisorChecksFoPagesResponseBody() = default ;
    DescribeAdvisorChecksFoPagesResponseBody& operator=(const DescribeAdvisorChecksFoPagesResponseBody &) = default ;
    DescribeAdvisorChecksFoPagesResponseBody& operator=(DescribeAdvisorChecksFoPagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(ConfigSupport, configSupport_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(InspectionScope, inspectionScope_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OperateColumn, operateColumn_);
          DARABONBA_PTR_TO_JSON(Product, product_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SubCategory, subCategory_);
          DARABONBA_PTR_TO_JSON(Tips, tips_);
          DARABONBA_PTR_TO_JSON(ViewColumn, viewColumn_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(ConfigSupport, configSupport_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(InspectionScope, inspectionScope_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OperateColumn, operateColumn_);
          DARABONBA_PTR_FROM_JSON(Product, product_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SubCategory, subCategory_);
          DARABONBA_PTR_FROM_JSON(Tips, tips_);
          DARABONBA_PTR_FROM_JSON(ViewColumn, viewColumn_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->category_ == nullptr
        && this->code_ == nullptr && this->configSupport_ == nullptr && this->description_ == nullptr && this->inspectionScope_ == nullptr && this->name_ == nullptr
        && this->operateColumn_ == nullptr && this->product_ == nullptr && this->riskLevel_ == nullptr && this->source_ == nullptr && this->status_ == nullptr
        && this->subCategory_ == nullptr && this->tips_ == nullptr && this->viewColumn_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Result& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Result& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // configSupport Field Functions 
        bool hasConfigSupport() const { return this->configSupport_ != nullptr;};
        void deleteConfigSupport() { this->configSupport_ = nullptr;};
        inline string getConfigSupport() const { DARABONBA_PTR_GET_DEFAULT(configSupport_, "") };
        inline Result& setConfigSupport(string configSupport) { DARABONBA_PTR_SET_VALUE(configSupport_, configSupport) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // inspectionScope Field Functions 
        bool hasInspectionScope() const { return this->inspectionScope_ != nullptr;};
        void deleteInspectionScope() { this->inspectionScope_ = nullptr;};
        inline string getInspectionScope() const { DARABONBA_PTR_GET_DEFAULT(inspectionScope_, "") };
        inline Result& setInspectionScope(string inspectionScope) { DARABONBA_PTR_SET_VALUE(inspectionScope_, inspectionScope) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // operateColumn Field Functions 
        bool hasOperateColumn() const { return this->operateColumn_ != nullptr;};
        void deleteOperateColumn() { this->operateColumn_ = nullptr;};
        inline string getOperateColumn() const { DARABONBA_PTR_GET_DEFAULT(operateColumn_, "") };
        inline Result& setOperateColumn(string operateColumn) { DARABONBA_PTR_SET_VALUE(operateColumn_, operateColumn) };


        // product Field Functions 
        bool hasProduct() const { return this->product_ != nullptr;};
        void deleteProduct() { this->product_ = nullptr;};
        inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
        inline Result& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline int64_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0L) };
        inline Result& setRiskLevel(int64_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline Result& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subCategory Field Functions 
        bool hasSubCategory() const { return this->subCategory_ != nullptr;};
        void deleteSubCategory() { this->subCategory_ = nullptr;};
        inline const vector<int64_t> & getSubCategory() const { DARABONBA_PTR_GET_CONST(subCategory_, vector<int64_t>) };
        inline vector<int64_t> getSubCategory() { DARABONBA_PTR_GET(subCategory_, vector<int64_t>) };
        inline Result& setSubCategory(const vector<int64_t> & subCategory) { DARABONBA_PTR_SET_VALUE(subCategory_, subCategory) };
        inline Result& setSubCategory(vector<int64_t> && subCategory) { DARABONBA_PTR_SET_RVALUE(subCategory_, subCategory) };


        // tips Field Functions 
        bool hasTips() const { return this->tips_ != nullptr;};
        void deleteTips() { this->tips_ = nullptr;};
        inline string getTips() const { DARABONBA_PTR_GET_DEFAULT(tips_, "") };
        inline Result& setTips(string tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };


        // viewColumn Field Functions 
        bool hasViewColumn() const { return this->viewColumn_ != nullptr;};
        void deleteViewColumn() { this->viewColumn_ = nullptr;};
        inline string getViewColumn() const { DARABONBA_PTR_GET_DEFAULT(viewColumn_, "") };
        inline Result& setViewColumn(string viewColumn) { DARABONBA_PTR_SET_VALUE(viewColumn_, viewColumn) };


      protected:
        shared_ptr<string> category_ {};
        shared_ptr<string> code_ {};
        shared_ptr<string> configSupport_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> inspectionScope_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> operateColumn_ {};
        shared_ptr<string> product_ {};
        shared_ptr<int64_t> riskLevel_ {};
        shared_ptr<string> source_ {};
        shared_ptr<string> status_ {};
        shared_ptr<vector<int64_t>> subCategory_ {};
        shared_ptr<string> tips_ {};
        shared_ptr<string> viewColumn_ {};
      };

      virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->result_ == nullptr && this->total_ == nullptr; };
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


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int32_t> pageNo_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<Data::Result>> result_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAdvisorChecksFoPagesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeAdvisorChecksFoPagesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeAdvisorChecksFoPagesResponseBody::Data>) };
    inline vector<DescribeAdvisorChecksFoPagesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeAdvisorChecksFoPagesResponseBody::Data>) };
    inline DescribeAdvisorChecksFoPagesResponseBody& setData(const vector<DescribeAdvisorChecksFoPagesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAdvisorChecksFoPagesResponseBody& setData(vector<DescribeAdvisorChecksFoPagesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAdvisorChecksFoPagesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAdvisorChecksFoPagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAdvisorChecksFoPagesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<DescribeAdvisorChecksFoPagesResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
