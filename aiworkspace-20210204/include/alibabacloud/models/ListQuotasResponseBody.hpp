// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListQuotasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Quotas, quotas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Quotas, quotas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListQuotasResponseBody() = default ;
    ListQuotasResponseBody(const ListQuotasResponseBody &) = default ;
    ListQuotasResponseBody(ListQuotasResponseBody &&) = default ;
    ListQuotasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotasResponseBody() = default ;
    ListQuotasResponseBody& operator=(const ListQuotasResponseBody &) = default ;
    ListQuotasResponseBody& operator=(ListQuotasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Quotas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Quotas& obj) { 
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(QuotaType, quotaType_);
        DARABONBA_PTR_TO_JSON(Specs, specs_);
      };
      friend void from_json(const Darabonba::Json& j, Quotas& obj) { 
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(QuotaType, quotaType_);
        DARABONBA_PTR_FROM_JSON(Specs, specs_);
      };
      Quotas() = default ;
      Quotas(const Quotas &) = default ;
      Quotas(Quotas &&) = default ;
      Quotas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Quotas() = default ;
      Quotas& operator=(const Quotas &) = default ;
      Quotas& operator=(Quotas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Specs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Specs& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Specs& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Specs() = default ;
        Specs(const Specs &) = default ;
        Specs(Specs &&) = default ;
        Specs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Specs() = default ;
        Specs& operator=(const Specs &) = default ;
        Specs& operator=(Specs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Specs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Specs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Specs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The specification name.
        shared_ptr<string> name_ {};
        // The specification type. The parameter can be left empty.
        shared_ptr<string> type_ {};
        // The specification value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->displayName_ == nullptr
        && this->id_ == nullptr && this->mode_ == nullptr && this->name_ == nullptr && this->productCode_ == nullptr && this->quotaType_ == nullptr
        && this->specs_ == nullptr; };
      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Quotas& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Quotas& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Quotas& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Quotas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Quotas& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // quotaType Field Functions 
      bool hasQuotaType() const { return this->quotaType_ != nullptr;};
      void deleteQuotaType() { this->quotaType_ = nullptr;};
      inline string getQuotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
      inline Quotas& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


      // specs Field Functions 
      bool hasSpecs() const { return this->specs_ != nullptr;};
      void deleteSpecs() { this->specs_ = nullptr;};
      inline const vector<Quotas::Specs> & getSpecs() const { DARABONBA_PTR_GET_CONST(specs_, vector<Quotas::Specs>) };
      inline vector<Quotas::Specs> getSpecs() { DARABONBA_PTR_GET(specs_, vector<Quotas::Specs>) };
      inline Quotas& setSpecs(const vector<Quotas::Specs> & specs) { DARABONBA_PTR_SET_VALUE(specs_, specs) };
      inline Quotas& setSpecs(vector<Quotas::Specs> && specs) { DARABONBA_PTR_SET_RVALUE(specs_, specs) };


    protected:
      // The alias of the quota.
      shared_ptr<string> displayName_ {};
      // The quota ID.
      shared_ptr<string> id_ {};
      // The billing method. Valid values:
      // 
      // *   isolate: subscription
      // *   share: pay-as-you-go
      shared_ptr<string> mode_ {};
      // The quota name.
      shared_ptr<string> name_ {};
      // The product code. Valid values:
      // 
      // *   PAI_isolate: CPU subscription resource groups of PAI
      // *   PAI_share: GPU pay-as-you-go resource groups of PAI
      shared_ptr<string> productCode_ {};
      // The quota type. Valid value:
      // 
      // PAI: indicates GPU resource groups of MaxCompute.
      shared_ptr<string> quotaType_ {};
      // The quota specifications.
      shared_ptr<vector<Quotas::Specs>> specs_ {};
    };

    virtual bool empty() const override { return this->quotas_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // quotas Field Functions 
    bool hasQuotas() const { return this->quotas_ != nullptr;};
    void deleteQuotas() { this->quotas_ = nullptr;};
    inline const vector<ListQuotasResponseBody::Quotas> & getQuotas() const { DARABONBA_PTR_GET_CONST(quotas_, vector<ListQuotasResponseBody::Quotas>) };
    inline vector<ListQuotasResponseBody::Quotas> getQuotas() { DARABONBA_PTR_GET(quotas_, vector<ListQuotasResponseBody::Quotas>) };
    inline ListQuotasResponseBody& setQuotas(const vector<ListQuotasResponseBody::Quotas> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
    inline ListQuotasResponseBody& setQuotas(vector<ListQuotasResponseBody::Quotas> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQuotasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListQuotasResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned quotas.
    shared_ptr<vector<ListQuotasResponseBody::Quotas>> quotas_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of quotas that meet the filter conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
