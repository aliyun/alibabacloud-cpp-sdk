// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20200326
{
namespace Models
{
  class ListProductsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListProductsResponseBody() = default ;
    ListProductsResponseBody(const ListProductsResponseBody &) = default ;
    ListProductsResponseBody(ListProductsResponseBody &&) = default ;
    ListProductsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductsResponseBody() = default ;
    ListProductsResponseBody& operator=(const ListProductsResponseBody &) = default ;
    ListProductsResponseBody& operator=(ListProductsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConsultationMore, consultationMore_);
        DARABONBA_PTR_TO_JSON(HotConsultation, hotConsultation_);
        DARABONBA_PTR_TO_JSON(HotTech, hotTech_);
        DARABONBA_PTR_TO_JSON(TechMore, techMore_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConsultationMore, consultationMore_);
        DARABONBA_PTR_FROM_JSON(HotConsultation, hotConsultation_);
        DARABONBA_PTR_FROM_JSON(HotTech, hotTech_);
        DARABONBA_PTR_FROM_JSON(TechMore, techMore_);
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
      class TechMore : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TechMore& obj) { 
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(ProductList, productList_);
        };
        friend void from_json(const Darabonba::Json& j, TechMore& obj) { 
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(ProductList, productList_);
        };
        TechMore() = default ;
        TechMore(const TechMore &) = default ;
        TechMore(TechMore &&) = default ;
        TechMore(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TechMore() = default ;
        TechMore& operator=(const TechMore &) = default ;
        TechMore& operator=(TechMore &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ProductList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ProductList& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
          };
          friend void from_json(const Darabonba::Json& j, ProductList& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
          };
          ProductList() = default ;
          ProductList(const ProductList &) = default ;
          ProductList(ProductList &&) = default ;
          ProductList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ProductList() = default ;
          ProductList& operator=(const ProductList &) = default ;
          ProductList& operator=(ProductList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->productCode_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline ProductList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ProductList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // productCode Field Functions 
          bool hasProductCode() const { return this->productCode_ != nullptr;};
          void deleteProductCode() { this->productCode_ = nullptr;};
          inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
          inline ProductList& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


        protected:
          shared_ptr<string> description_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> productCode_ {};
        };

        virtual bool empty() const override { return this->groupName_ == nullptr
        && this->productList_ == nullptr; };
        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline TechMore& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // productList Field Functions 
        bool hasProductList() const { return this->productList_ != nullptr;};
        void deleteProductList() { this->productList_ = nullptr;};
        inline const vector<TechMore::ProductList> & getProductList() const { DARABONBA_PTR_GET_CONST(productList_, vector<TechMore::ProductList>) };
        inline vector<TechMore::ProductList> getProductList() { DARABONBA_PTR_GET(productList_, vector<TechMore::ProductList>) };
        inline TechMore& setProductList(const vector<TechMore::ProductList> & productList) { DARABONBA_PTR_SET_VALUE(productList_, productList) };
        inline TechMore& setProductList(vector<TechMore::ProductList> && productList) { DARABONBA_PTR_SET_RVALUE(productList_, productList) };


      protected:
        shared_ptr<string> groupName_ {};
        shared_ptr<vector<TechMore::ProductList>> productList_ {};
      };

      class HotTech : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotTech& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        };
        friend void from_json(const Darabonba::Json& j, HotTech& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        };
        HotTech() = default ;
        HotTech(const HotTech &) = default ;
        HotTech(HotTech &&) = default ;
        HotTech(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotTech() = default ;
        HotTech& operator=(const HotTech &) = default ;
        HotTech& operator=(HotTech &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->productCode_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline HotTech& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline HotTech& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // productCode Field Functions 
        bool hasProductCode() const { return this->productCode_ != nullptr;};
        void deleteProductCode() { this->productCode_ = nullptr;};
        inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
        inline HotTech& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> productCode_ {};
      };

      class HotConsultation : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotConsultation& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        };
        friend void from_json(const Darabonba::Json& j, HotConsultation& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        };
        HotConsultation() = default ;
        HotConsultation(const HotConsultation &) = default ;
        HotConsultation(HotConsultation &&) = default ;
        HotConsultation(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotConsultation() = default ;
        HotConsultation& operator=(const HotConsultation &) = default ;
        HotConsultation& operator=(HotConsultation &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->productCode_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline HotConsultation& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline HotConsultation& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // productCode Field Functions 
        bool hasProductCode() const { return this->productCode_ != nullptr;};
        void deleteProductCode() { this->productCode_ = nullptr;};
        inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
        inline HotConsultation& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> productCode_ {};
      };

      class ConsultationMore : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConsultationMore& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        };
        friend void from_json(const Darabonba::Json& j, ConsultationMore& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        };
        ConsultationMore() = default ;
        ConsultationMore(const ConsultationMore &) = default ;
        ConsultationMore(ConsultationMore &&) = default ;
        ConsultationMore(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConsultationMore() = default ;
        ConsultationMore& operator=(const ConsultationMore &) = default ;
        ConsultationMore& operator=(ConsultationMore &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->productCode_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ConsultationMore& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ConsultationMore& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // productCode Field Functions 
        bool hasProductCode() const { return this->productCode_ != nullptr;};
        void deleteProductCode() { this->productCode_ = nullptr;};
        inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
        inline ConsultationMore& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> productCode_ {};
      };

      virtual bool empty() const override { return this->consultationMore_ == nullptr
        && this->hotConsultation_ == nullptr && this->hotTech_ == nullptr && this->techMore_ == nullptr; };
      // consultationMore Field Functions 
      bool hasConsultationMore() const { return this->consultationMore_ != nullptr;};
      void deleteConsultationMore() { this->consultationMore_ = nullptr;};
      inline const vector<Data::ConsultationMore> & getConsultationMore() const { DARABONBA_PTR_GET_CONST(consultationMore_, vector<Data::ConsultationMore>) };
      inline vector<Data::ConsultationMore> getConsultationMore() { DARABONBA_PTR_GET(consultationMore_, vector<Data::ConsultationMore>) };
      inline Data& setConsultationMore(const vector<Data::ConsultationMore> & consultationMore) { DARABONBA_PTR_SET_VALUE(consultationMore_, consultationMore) };
      inline Data& setConsultationMore(vector<Data::ConsultationMore> && consultationMore) { DARABONBA_PTR_SET_RVALUE(consultationMore_, consultationMore) };


      // hotConsultation Field Functions 
      bool hasHotConsultation() const { return this->hotConsultation_ != nullptr;};
      void deleteHotConsultation() { this->hotConsultation_ = nullptr;};
      inline const vector<Data::HotConsultation> & getHotConsultation() const { DARABONBA_PTR_GET_CONST(hotConsultation_, vector<Data::HotConsultation>) };
      inline vector<Data::HotConsultation> getHotConsultation() { DARABONBA_PTR_GET(hotConsultation_, vector<Data::HotConsultation>) };
      inline Data& setHotConsultation(const vector<Data::HotConsultation> & hotConsultation) { DARABONBA_PTR_SET_VALUE(hotConsultation_, hotConsultation) };
      inline Data& setHotConsultation(vector<Data::HotConsultation> && hotConsultation) { DARABONBA_PTR_SET_RVALUE(hotConsultation_, hotConsultation) };


      // hotTech Field Functions 
      bool hasHotTech() const { return this->hotTech_ != nullptr;};
      void deleteHotTech() { this->hotTech_ = nullptr;};
      inline const vector<Data::HotTech> & getHotTech() const { DARABONBA_PTR_GET_CONST(hotTech_, vector<Data::HotTech>) };
      inline vector<Data::HotTech> getHotTech() { DARABONBA_PTR_GET(hotTech_, vector<Data::HotTech>) };
      inline Data& setHotTech(const vector<Data::HotTech> & hotTech) { DARABONBA_PTR_SET_VALUE(hotTech_, hotTech) };
      inline Data& setHotTech(vector<Data::HotTech> && hotTech) { DARABONBA_PTR_SET_RVALUE(hotTech_, hotTech) };


      // techMore Field Functions 
      bool hasTechMore() const { return this->techMore_ != nullptr;};
      void deleteTechMore() { this->techMore_ = nullptr;};
      inline const vector<Data::TechMore> & getTechMore() const { DARABONBA_PTR_GET_CONST(techMore_, vector<Data::TechMore>) };
      inline vector<Data::TechMore> getTechMore() { DARABONBA_PTR_GET(techMore_, vector<Data::TechMore>) };
      inline Data& setTechMore(const vector<Data::TechMore> & techMore) { DARABONBA_PTR_SET_VALUE(techMore_, techMore) };
      inline Data& setTechMore(vector<Data::TechMore> && techMore) { DARABONBA_PTR_SET_RVALUE(techMore_, techMore) };


    protected:
      shared_ptr<vector<Data::ConsultationMore>> consultationMore_ {};
      shared_ptr<vector<Data::HotConsultation>> hotConsultation_ {};
      shared_ptr<vector<Data::HotTech>> hotTech_ {};
      shared_ptr<vector<Data::TechMore>> techMore_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListProductsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListProductsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListProductsResponseBody::Data) };
    inline ListProductsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListProductsResponseBody::Data) };
    inline ListProductsResponseBody& setData(const ListProductsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListProductsResponseBody& setData(ListProductsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListProductsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProductsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListProductsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<ListProductsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20200326
#endif
