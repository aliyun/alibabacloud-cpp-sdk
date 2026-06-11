// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROMPTVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROMPTVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class GetPromptVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPromptVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPromptVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPromptVersionResponseBody() = default ;
    GetPromptVersionResponseBody(const GetPromptVersionResponseBody &) = default ;
    GetPromptVersionResponseBody(GetPromptVersionResponseBody &&) = default ;
    GetPromptVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPromptVersionResponseBody() = default ;
    GetPromptVersionResponseBody& operator=(const GetPromptVersionResponseBody &) = default ;
    GetPromptVersionResponseBody& operator=(GetPromptVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CommitMsg, commitMsg_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
        DARABONBA_PTR_TO_JSON(PromptKey, promptKey_);
        DARABONBA_PTR_TO_JSON(SrcUser, srcUser_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(Variables, variables_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CommitMsg, commitMsg_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
        DARABONBA_PTR_FROM_JSON(PromptKey, promptKey_);
        DARABONBA_PTR_FROM_JSON(SrcUser, srcUser_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(Variables, variables_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
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
      class Variables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Variables& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Variables& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Variables() = default ;
        Variables(const Variables &) = default ;
        Variables(Variables &&) = default ;
        Variables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Variables() = default ;
        Variables& operator=(const Variables &) = default ;
        Variables& operator=(Variables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr; };
        // defaultValue Field Functions 
        bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
        void deleteDefaultValue() { this->defaultValue_ = nullptr;};
        inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
        inline Variables& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Variables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Variables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> defaultValue_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->commitMsg_ == nullptr
        && this->gmtModified_ == nullptr && this->md5_ == nullptr && this->promptKey_ == nullptr && this->srcUser_ == nullptr && this->status_ == nullptr
        && this->template_ == nullptr && this->variables_ == nullptr && this->version_ == nullptr; };
      // commitMsg Field Functions 
      bool hasCommitMsg() const { return this->commitMsg_ != nullptr;};
      void deleteCommitMsg() { this->commitMsg_ = nullptr;};
      inline string getCommitMsg() const { DARABONBA_PTR_GET_DEFAULT(commitMsg_, "") };
      inline Data& setCommitMsg(string commitMsg) { DARABONBA_PTR_SET_VALUE(commitMsg_, commitMsg) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Data& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline Data& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // promptKey Field Functions 
      bool hasPromptKey() const { return this->promptKey_ != nullptr;};
      void deletePromptKey() { this->promptKey_ = nullptr;};
      inline string getPromptKey() const { DARABONBA_PTR_GET_DEFAULT(promptKey_, "") };
      inline Data& setPromptKey(string promptKey) { DARABONBA_PTR_SET_VALUE(promptKey_, promptKey) };


      // srcUser Field Functions 
      bool hasSrcUser() const { return this->srcUser_ != nullptr;};
      void deleteSrcUser() { this->srcUser_ = nullptr;};
      inline string getSrcUser() const { DARABONBA_PTR_GET_DEFAULT(srcUser_, "") };
      inline Data& setSrcUser(string srcUser) { DARABONBA_PTR_SET_VALUE(srcUser_, srcUser) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline Data& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // variables Field Functions 
      bool hasVariables() const { return this->variables_ != nullptr;};
      void deleteVariables() { this->variables_ = nullptr;};
      inline const vector<Data::Variables> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Data::Variables>) };
      inline vector<Data::Variables> getVariables() { DARABONBA_PTR_GET(variables_, vector<Data::Variables>) };
      inline Data& setVariables(const vector<Data::Variables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
      inline Data& setVariables(vector<Data::Variables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> commitMsg_ {};
      shared_ptr<int64_t> gmtModified_ {};
      shared_ptr<string> md5_ {};
      shared_ptr<string> promptKey_ {};
      shared_ptr<string> srcUser_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> template_ {};
      shared_ptr<vector<Data::Variables>> variables_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPromptVersionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPromptVersionResponseBody::Data) };
    inline GetPromptVersionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPromptVersionResponseBody::Data) };
    inline GetPromptVersionResponseBody& setData(const GetPromptVersionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPromptVersionResponseBody& setData(GetPromptVersionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPromptVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetPromptVersionResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
