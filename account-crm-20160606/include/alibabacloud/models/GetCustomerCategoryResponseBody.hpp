// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMERCATEGORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMERCATEGORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class GetCustomerCategoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomerCategoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomerCategoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCustomerCategoryResponseBody() = default ;
    GetCustomerCategoryResponseBody(const GetCustomerCategoryResponseBody &) = default ;
    GetCustomerCategoryResponseBody(GetCustomerCategoryResponseBody &&) = default ;
    GetCustomerCategoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomerCategoryResponseBody() = default ;
    GetCustomerCategoryResponseBody& operator=(const GetCustomerCategoryResponseBody &) = default ;
    GetCustomerCategoryResponseBody& operator=(GetCustomerCategoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BizCategory, bizCategory_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BizCategory, bizCategory_);
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
      class BizCategory : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BizCategory& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(IsCheck, isCheck_);
          DARABONBA_PTR_TO_JSON(MainBiz, mainBiz_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Other, other_);
          DARABONBA_PTR_TO_JSON(SubConfigs, subConfigs_);
        };
        friend void from_json(const Darabonba::Json& j, BizCategory& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(IsCheck, isCheck_);
          DARABONBA_PTR_FROM_JSON(MainBiz, mainBiz_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Other, other_);
          DARABONBA_PTR_FROM_JSON(SubConfigs, subConfigs_);
        };
        BizCategory() = default ;
        BizCategory(const BizCategory &) = default ;
        BizCategory(BizCategory &&) = default ;
        BizCategory(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BizCategory() = default ;
        BizCategory& operator=(const BizCategory &) = default ;
        BizCategory& operator=(BizCategory &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SubConfigs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubConfigs& obj) { 
            DARABONBA_PTR_TO_JSON(BizSubCategory, bizSubCategory_);
          };
          friend void from_json(const Darabonba::Json& j, SubConfigs& obj) { 
            DARABONBA_PTR_FROM_JSON(BizSubCategory, bizSubCategory_);
          };
          SubConfigs() = default ;
          SubConfigs(const SubConfigs &) = default ;
          SubConfigs(SubConfigs &&) = default ;
          SubConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubConfigs() = default ;
          SubConfigs& operator=(const SubConfigs &) = default ;
          SubConfigs& operator=(SubConfigs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class BizSubCategory : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BizSubCategory& obj) { 
              DARABONBA_PTR_TO_JSON(Code, code_);
              DARABONBA_PTR_TO_JSON(IsCheck, isCheck_);
              DARABONBA_PTR_TO_JSON(MainBiz, mainBiz_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Other, other_);
            };
            friend void from_json(const Darabonba::Json& j, BizSubCategory& obj) { 
              DARABONBA_PTR_FROM_JSON(Code, code_);
              DARABONBA_PTR_FROM_JSON(IsCheck, isCheck_);
              DARABONBA_PTR_FROM_JSON(MainBiz, mainBiz_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Other, other_);
            };
            BizSubCategory() = default ;
            BizSubCategory(const BizSubCategory &) = default ;
            BizSubCategory(BizSubCategory &&) = default ;
            BizSubCategory(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BizSubCategory() = default ;
            BizSubCategory& operator=(const BizSubCategory &) = default ;
            BizSubCategory& operator=(BizSubCategory &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->code_ == nullptr
        && this->isCheck_ == nullptr && this->mainBiz_ == nullptr && this->name_ == nullptr && this->other_ == nullptr; };
            // code Field Functions 
            bool hasCode() const { return this->code_ != nullptr;};
            void deleteCode() { this->code_ = nullptr;};
            inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
            inline BizSubCategory& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


            // isCheck Field Functions 
            bool hasIsCheck() const { return this->isCheck_ != nullptr;};
            void deleteIsCheck() { this->isCheck_ = nullptr;};
            inline bool getIsCheck() const { DARABONBA_PTR_GET_DEFAULT(isCheck_, false) };
            inline BizSubCategory& setIsCheck(bool isCheck) { DARABONBA_PTR_SET_VALUE(isCheck_, isCheck) };


            // mainBiz Field Functions 
            bool hasMainBiz() const { return this->mainBiz_ != nullptr;};
            void deleteMainBiz() { this->mainBiz_ = nullptr;};
            inline bool getMainBiz() const { DARABONBA_PTR_GET_DEFAULT(mainBiz_, false) };
            inline BizSubCategory& setMainBiz(bool mainBiz) { DARABONBA_PTR_SET_VALUE(mainBiz_, mainBiz) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline BizSubCategory& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // other Field Functions 
            bool hasOther() const { return this->other_ != nullptr;};
            void deleteOther() { this->other_ = nullptr;};
            inline string getOther() const { DARABONBA_PTR_GET_DEFAULT(other_, "") };
            inline BizSubCategory& setOther(string other) { DARABONBA_PTR_SET_VALUE(other_, other) };


          protected:
            shared_ptr<string> code_ {};
            shared_ptr<bool> isCheck_ {};
            shared_ptr<bool> mainBiz_ {};
            shared_ptr<string> name_ {};
            shared_ptr<string> other_ {};
          };

          virtual bool empty() const override { return this->bizSubCategory_ == nullptr; };
          // bizSubCategory Field Functions 
          bool hasBizSubCategory() const { return this->bizSubCategory_ != nullptr;};
          void deleteBizSubCategory() { this->bizSubCategory_ = nullptr;};
          inline const vector<SubConfigs::BizSubCategory> & getBizSubCategory() const { DARABONBA_PTR_GET_CONST(bizSubCategory_, vector<SubConfigs::BizSubCategory>) };
          inline vector<SubConfigs::BizSubCategory> getBizSubCategory() { DARABONBA_PTR_GET(bizSubCategory_, vector<SubConfigs::BizSubCategory>) };
          inline SubConfigs& setBizSubCategory(const vector<SubConfigs::BizSubCategory> & bizSubCategory) { DARABONBA_PTR_SET_VALUE(bizSubCategory_, bizSubCategory) };
          inline SubConfigs& setBizSubCategory(vector<SubConfigs::BizSubCategory> && bizSubCategory) { DARABONBA_PTR_SET_RVALUE(bizSubCategory_, bizSubCategory) };


        protected:
          shared_ptr<vector<SubConfigs::BizSubCategory>> bizSubCategory_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->isCheck_ == nullptr && this->mainBiz_ == nullptr && this->name_ == nullptr && this->other_ == nullptr && this->subConfigs_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline BizCategory& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // isCheck Field Functions 
        bool hasIsCheck() const { return this->isCheck_ != nullptr;};
        void deleteIsCheck() { this->isCheck_ = nullptr;};
        inline bool getIsCheck() const { DARABONBA_PTR_GET_DEFAULT(isCheck_, false) };
        inline BizCategory& setIsCheck(bool isCheck) { DARABONBA_PTR_SET_VALUE(isCheck_, isCheck) };


        // mainBiz Field Functions 
        bool hasMainBiz() const { return this->mainBiz_ != nullptr;};
        void deleteMainBiz() { this->mainBiz_ = nullptr;};
        inline bool getMainBiz() const { DARABONBA_PTR_GET_DEFAULT(mainBiz_, false) };
        inline BizCategory& setMainBiz(bool mainBiz) { DARABONBA_PTR_SET_VALUE(mainBiz_, mainBiz) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline BizCategory& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // other Field Functions 
        bool hasOther() const { return this->other_ != nullptr;};
        void deleteOther() { this->other_ = nullptr;};
        inline string getOther() const { DARABONBA_PTR_GET_DEFAULT(other_, "") };
        inline BizCategory& setOther(string other) { DARABONBA_PTR_SET_VALUE(other_, other) };


        // subConfigs Field Functions 
        bool hasSubConfigs() const { return this->subConfigs_ != nullptr;};
        void deleteSubConfigs() { this->subConfigs_ = nullptr;};
        inline const BizCategory::SubConfigs & getSubConfigs() const { DARABONBA_PTR_GET_CONST(subConfigs_, BizCategory::SubConfigs) };
        inline BizCategory::SubConfigs getSubConfigs() { DARABONBA_PTR_GET(subConfigs_, BizCategory::SubConfigs) };
        inline BizCategory& setSubConfigs(const BizCategory::SubConfigs & subConfigs) { DARABONBA_PTR_SET_VALUE(subConfigs_, subConfigs) };
        inline BizCategory& setSubConfigs(BizCategory::SubConfigs && subConfigs) { DARABONBA_PTR_SET_RVALUE(subConfigs_, subConfigs) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<bool> isCheck_ {};
        shared_ptr<bool> mainBiz_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> other_ {};
        shared_ptr<BizCategory::SubConfigs> subConfigs_ {};
      };

      virtual bool empty() const override { return this->bizCategory_ == nullptr; };
      // bizCategory Field Functions 
      bool hasBizCategory() const { return this->bizCategory_ != nullptr;};
      void deleteBizCategory() { this->bizCategory_ = nullptr;};
      inline const vector<Data::BizCategory> & getBizCategory() const { DARABONBA_PTR_GET_CONST(bizCategory_, vector<Data::BizCategory>) };
      inline vector<Data::BizCategory> getBizCategory() { DARABONBA_PTR_GET(bizCategory_, vector<Data::BizCategory>) };
      inline Data& setBizCategory(const vector<Data::BizCategory> & bizCategory) { DARABONBA_PTR_SET_VALUE(bizCategory_, bizCategory) };
      inline Data& setBizCategory(vector<Data::BizCategory> && bizCategory) { DARABONBA_PTR_SET_RVALUE(bizCategory_, bizCategory) };


    protected:
      shared_ptr<vector<Data::BizCategory>> bizCategory_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCustomerCategoryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCustomerCategoryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCustomerCategoryResponseBody::Data) };
    inline GetCustomerCategoryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCustomerCategoryResponseBody::Data) };
    inline GetCustomerCategoryResponseBody& setData(const GetCustomerCategoryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCustomerCategoryResponseBody& setData(GetCustomerCategoryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCustomerCategoryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCustomerCategoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCustomerCategoryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetCustomerCategoryResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
