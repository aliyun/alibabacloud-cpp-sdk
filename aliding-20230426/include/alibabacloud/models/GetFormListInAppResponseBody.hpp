// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFORMLISTINAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFORMLISTINAPPRESPONSEBODY_HPP_
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
  class GetFormListInAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFormListInAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetFormListInAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetFormListInAppResponseBody() = default ;
    GetFormListInAppResponseBody(const GetFormListInAppResponseBody &) = default ;
    GetFormListInAppResponseBody(GetFormListInAppResponseBody &&) = default ;
    GetFormListInAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFormListInAppResponseBody() = default ;
    GetFormListInAppResponseBody& operator=(const GetFormListInAppResponseBody &) = default ;
    GetFormListInAppResponseBody& operator=(GetFormListInAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(FormType, formType_);
        DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(FormType, formType_);
        DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
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
      class Title : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Title& obj) { 
          DARABONBA_PTR_TO_JSON(EnUS, enUS_);
          DARABONBA_PTR_TO_JSON(ZhCN, zhCN_);
        };
        friend void from_json(const Darabonba::Json& j, Title& obj) { 
          DARABONBA_PTR_FROM_JSON(EnUS, enUS_);
          DARABONBA_PTR_FROM_JSON(ZhCN, zhCN_);
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
        virtual bool empty() const override { return this->enUS_ == nullptr
        && this->zhCN_ == nullptr; };
        // enUS Field Functions 
        bool hasEnUS() const { return this->enUS_ != nullptr;};
        void deleteEnUS() { this->enUS_ = nullptr;};
        inline string getEnUS() const { DARABONBA_PTR_GET_DEFAULT(enUS_, "") };
        inline Title& setEnUS(string enUS) { DARABONBA_PTR_SET_VALUE(enUS_, enUS) };


        // zhCN Field Functions 
        bool hasZhCN() const { return this->zhCN_ != nullptr;};
        void deleteZhCN() { this->zhCN_ = nullptr;};
        inline string getZhCN() const { DARABONBA_PTR_GET_DEFAULT(zhCN_, "") };
        inline Title& setZhCN(string zhCN) { DARABONBA_PTR_SET_VALUE(zhCN_, zhCN) };


      protected:
        shared_ptr<string> enUS_ {};
        shared_ptr<string> zhCN_ {};
      };

      virtual bool empty() const override { return this->creator_ == nullptr
        && this->formType_ == nullptr && this->formUuid_ == nullptr && this->gmtCreate_ == nullptr && this->title_ == nullptr; };
      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Data& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // formType Field Functions 
      bool hasFormType() const { return this->formType_ != nullptr;};
      void deleteFormType() { this->formType_ = nullptr;};
      inline string getFormType() const { DARABONBA_PTR_GET_DEFAULT(formType_, "") };
      inline Data& setFormType(string formType) { DARABONBA_PTR_SET_VALUE(formType_, formType) };


      // formUuid Field Functions 
      bool hasFormUuid() const { return this->formUuid_ != nullptr;};
      void deleteFormUuid() { this->formUuid_ = nullptr;};
      inline string getFormUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
      inline Data& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline const Data::Title & getTitle() const { DARABONBA_PTR_GET_CONST(title_, Data::Title) };
      inline Data::Title getTitle() { DARABONBA_PTR_GET(title_, Data::Title) };
      inline Data& setTitle(const Data::Title & title) { DARABONBA_PTR_SET_VALUE(title_, title) };
      inline Data& setTitle(Data::Title && title) { DARABONBA_PTR_SET_RVALUE(title_, title) };


    protected:
      shared_ptr<string> creator_ {};
      shared_ptr<string> formType_ {};
      shared_ptr<string> formUuid_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<Data::Title> title_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr && this->vendorRequestId_ == nullptr
        && this->vendorType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetFormListInAppResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetFormListInAppResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetFormListInAppResponseBody::Data>) };
    inline vector<GetFormListInAppResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetFormListInAppResponseBody::Data>) };
    inline GetFormListInAppResponseBody& setData(const vector<GetFormListInAppResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFormListInAppResponseBody& setData(vector<GetFormListInAppResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFormListInAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetFormListInAppResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetFormListInAppResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetFormListInAppResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetFormListInAppResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<GetFormListInAppResponseBody::Data>> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
