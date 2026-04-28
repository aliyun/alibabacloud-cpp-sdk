// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVISORCHECKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVISORCHECKSRESPONSEBODY_HPP_
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
  class DescribeAdvisorChecksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvisorChecksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvisorChecksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAdvisorChecksResponseBody() = default ;
    DescribeAdvisorChecksResponseBody(const DescribeAdvisorChecksResponseBody &) = default ;
    DescribeAdvisorChecksResponseBody(DescribeAdvisorChecksResponseBody &&) = default ;
    DescribeAdvisorChecksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvisorChecksResponseBody() = default ;
    DescribeAdvisorChecksResponseBody& operator=(const DescribeAdvisorChecksResponseBody &) = default ;
    DescribeAdvisorChecksResponseBody& operator=(DescribeAdvisorChecksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AdvisorCheck, advisorCheck_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AdvisorCheck, advisorCheck_);
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
      class AdvisorCheck : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdvisorCheck& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OperateColumn, operateColumn_);
          DARABONBA_PTR_TO_JSON(Product, product_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tips, tips_);
          DARABONBA_PTR_TO_JSON(ViewColumn, viewColumn_);
        };
        friend void from_json(const Darabonba::Json& j, AdvisorCheck& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OperateColumn, operateColumn_);
          DARABONBA_PTR_FROM_JSON(Product, product_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tips, tips_);
          DARABONBA_PTR_FROM_JSON(ViewColumn, viewColumn_);
        };
        AdvisorCheck() = default ;
        AdvisorCheck(const AdvisorCheck &) = default ;
        AdvisorCheck(AdvisorCheck &&) = default ;
        AdvisorCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdvisorCheck() = default ;
        AdvisorCheck& operator=(const AdvisorCheck &) = default ;
        AdvisorCheck& operator=(AdvisorCheck &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->category_ == nullptr
        && this->code_ == nullptr && this->description_ == nullptr && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->name_ == nullptr
        && this->operateColumn_ == nullptr && this->product_ == nullptr && this->status_ == nullptr && this->tips_ == nullptr && this->viewColumn_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline AdvisorCheck& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline AdvisorCheck& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AdvisorCheck& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // gmtCreated Field Functions 
        bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
        void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
        inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
        inline AdvisorCheck& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline AdvisorCheck& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AdvisorCheck& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // operateColumn Field Functions 
        bool hasOperateColumn() const { return this->operateColumn_ != nullptr;};
        void deleteOperateColumn() { this->operateColumn_ = nullptr;};
        inline string getOperateColumn() const { DARABONBA_PTR_GET_DEFAULT(operateColumn_, "") };
        inline AdvisorCheck& setOperateColumn(string operateColumn) { DARABONBA_PTR_SET_VALUE(operateColumn_, operateColumn) };


        // product Field Functions 
        bool hasProduct() const { return this->product_ != nullptr;};
        void deleteProduct() { this->product_ = nullptr;};
        inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
        inline AdvisorCheck& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AdvisorCheck& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tips Field Functions 
        bool hasTips() const { return this->tips_ != nullptr;};
        void deleteTips() { this->tips_ = nullptr;};
        inline string getTips() const { DARABONBA_PTR_GET_DEFAULT(tips_, "") };
        inline AdvisorCheck& setTips(string tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };


        // viewColumn Field Functions 
        bool hasViewColumn() const { return this->viewColumn_ != nullptr;};
        void deleteViewColumn() { this->viewColumn_ = nullptr;};
        inline string getViewColumn() const { DARABONBA_PTR_GET_DEFAULT(viewColumn_, "") };
        inline AdvisorCheck& setViewColumn(string viewColumn) { DARABONBA_PTR_SET_VALUE(viewColumn_, viewColumn) };


      protected:
        shared_ptr<string> category_ {};
        shared_ptr<string> code_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> gmtCreated_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> operateColumn_ {};
        shared_ptr<string> product_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> tips_ {};
        shared_ptr<string> viewColumn_ {};
      };

      virtual bool empty() const override { return this->advisorCheck_ == nullptr; };
      // advisorCheck Field Functions 
      bool hasAdvisorCheck() const { return this->advisorCheck_ != nullptr;};
      void deleteAdvisorCheck() { this->advisorCheck_ = nullptr;};
      inline const vector<Data::AdvisorCheck> & getAdvisorCheck() const { DARABONBA_PTR_GET_CONST(advisorCheck_, vector<Data::AdvisorCheck>) };
      inline vector<Data::AdvisorCheck> getAdvisorCheck() { DARABONBA_PTR_GET(advisorCheck_, vector<Data::AdvisorCheck>) };
      inline Data& setAdvisorCheck(const vector<Data::AdvisorCheck> & advisorCheck) { DARABONBA_PTR_SET_VALUE(advisorCheck_, advisorCheck) };
      inline Data& setAdvisorCheck(vector<Data::AdvisorCheck> && advisorCheck) { DARABONBA_PTR_SET_RVALUE(advisorCheck_, advisorCheck) };


    protected:
      shared_ptr<vector<Data::AdvisorCheck>> advisorCheck_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAdvisorChecksResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAdvisorChecksResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeAdvisorChecksResponseBody::Data) };
    inline DescribeAdvisorChecksResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeAdvisorChecksResponseBody::Data) };
    inline DescribeAdvisorChecksResponseBody& setData(const DescribeAdvisorChecksResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAdvisorChecksResponseBody& setData(DescribeAdvisorChecksResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAdvisorChecksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<DescribeAdvisorChecksResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
