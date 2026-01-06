// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAVIGATIONBYFORMTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNAVIGATIONBYFORMTYPERESPONSEBODY_HPP_
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
  class ListNavigationByFormTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNavigationByFormTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, ListNavigationByFormTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    ListNavigationByFormTypeResponseBody() = default ;
    ListNavigationByFormTypeResponseBody(const ListNavigationByFormTypeResponseBody &) = default ;
    ListNavigationByFormTypeResponseBody(ListNavigationByFormTypeResponseBody &&) = default ;
    ListNavigationByFormTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNavigationByFormTypeResponseBody() = default ;
    ListNavigationByFormTypeResponseBody& operator=(const ListNavigationByFormTypeResponseBody &) = default ;
    ListNavigationByFormTypeResponseBody& operator=(ListNavigationByFormTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
        DARABONBA_PTR_TO_JSON(ProcessCode, processCode_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
        DARABONBA_PTR_FROM_JSON(ProcessCode, processCode_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
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
      class Title : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Title& obj) { 
          DARABONBA_PTR_TO_JSON(NameInChinese, nameInChinese_);
          DARABONBA_PTR_TO_JSON(NameInEnglish, nameInEnglish_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Title& obj) { 
          DARABONBA_PTR_FROM_JSON(NameInChinese, nameInChinese_);
          DARABONBA_PTR_FROM_JSON(NameInEnglish, nameInEnglish_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Title() = default ;
        Title(const Title &) = default ;
        Title(Title &&) = default ;
        Title(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Title() = default ;
        Title& operator=(const Title &) = default ;
        Title& operator=(Title &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->nameInChinese_ == nullptr
        && this->nameInEnglish_ == nullptr && this->type_ == nullptr; };
        // nameInChinese Field Functions 
        bool hasNameInChinese() const { return this->nameInChinese_ != nullptr;};
        void deleteNameInChinese() { this->nameInChinese_ = nullptr;};
        inline string getNameInChinese() const { DARABONBA_PTR_GET_DEFAULT(nameInChinese_, "") };
        inline Title& setNameInChinese(string nameInChinese) { DARABONBA_PTR_SET_VALUE(nameInChinese_, nameInChinese) };


        // nameInEnglish Field Functions 
        bool hasNameInEnglish() const { return this->nameInEnglish_ != nullptr;};
        void deleteNameInEnglish() { this->nameInEnglish_ = nullptr;};
        inline string getNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(nameInEnglish_, "") };
        inline Title& setNameInEnglish(string nameInEnglish) { DARABONBA_PTR_SET_VALUE(nameInEnglish_, nameInEnglish) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Title& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> nameInChinese_ {};
        shared_ptr<string> nameInEnglish_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->formUuid_ == nullptr
        && this->processCode_ == nullptr && this->title_ == nullptr; };
      // formUuid Field Functions 
      bool hasFormUuid() const { return this->formUuid_ != nullptr;};
      void deleteFormUuid() { this->formUuid_ = nullptr;};
      inline string getFormUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
      inline Result& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


      // processCode Field Functions 
      bool hasProcessCode() const { return this->processCode_ != nullptr;};
      void deleteProcessCode() { this->processCode_ = nullptr;};
      inline string getProcessCode() const { DARABONBA_PTR_GET_DEFAULT(processCode_, "") };
      inline Result& setProcessCode(string processCode) { DARABONBA_PTR_SET_VALUE(processCode_, processCode) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline const Result::Title & getTitle() const { DARABONBA_PTR_GET_CONST(title_, Result::Title) };
      inline Result::Title getTitle() { DARABONBA_PTR_GET(title_, Result::Title) };
      inline Result& setTitle(const Result::Title & title) { DARABONBA_PTR_SET_VALUE(title_, title) };
      inline Result& setTitle(Result::Title && title) { DARABONBA_PTR_SET_RVALUE(title_, title) };


    protected:
      shared_ptr<string> formUuid_ {};
      shared_ptr<string> processCode_ {};
      shared_ptr<Result::Title> title_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNavigationByFormTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListNavigationByFormTypeResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListNavigationByFormTypeResponseBody::Result>) };
    inline vector<ListNavigationByFormTypeResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListNavigationByFormTypeResponseBody::Result>) };
    inline ListNavigationByFormTypeResponseBody& setResult(const vector<ListNavigationByFormTypeResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListNavigationByFormTypeResponseBody& setResult(vector<ListNavigationByFormTypeResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline ListNavigationByFormTypeResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline ListNavigationByFormTypeResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListNavigationByFormTypeResponseBody::Result>> result_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
