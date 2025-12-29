// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUILDCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBUILDCONFIGSRESPONSEBODY_HPP_
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
  class ListBuildConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBuildConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListBuildConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListBuildConfigsResponseBody() = default ;
    ListBuildConfigsResponseBody(const ListBuildConfigsResponseBody &) = default ;
    ListBuildConfigsResponseBody(ListBuildConfigsResponseBody &&) = default ;
    ListBuildConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBuildConfigsResponseBody() = default ;
    ListBuildConfigsResponseBody& operator=(const ListBuildConfigsResponseBody &) = default ;
    ListBuildConfigsResponseBody& operator=(ListBuildConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BuildIn, buildIn_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Keywords, keywords_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(TagDescription, tagDescription_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UpdateUser, updateUser_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BuildIn, buildIn_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(TagDescription, tagDescription_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UpdateUser, updateUser_);
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
      class Keywords : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Keywords& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Key, key_);
        };
        friend void from_json(const Darabonba::Json& j, Keywords& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
        };
        Keywords() = default ;
        Keywords(const Keywords &) = default ;
        Keywords(Keywords &&) = default ;
        Keywords(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Keywords() = default ;
        Keywords& operator=(const Keywords &) = default ;
        Keywords& operator=(Keywords &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->key_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Keywords& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Keywords& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> key_ {};
      };

      virtual bool empty() const override { return this->buildIn_ == nullptr
        && this->createTime_ == nullptr && this->createUser_ == nullptr && this->id_ == nullptr && this->keywords_ == nullptr && this->tag_ == nullptr
        && this->tagDescription_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr && this->updateUser_ == nullptr; };
      // buildIn Field Functions 
      bool hasBuildIn() const { return this->buildIn_ != nullptr;};
      void deleteBuildIn() { this->buildIn_ = nullptr;};
      inline bool getBuildIn() const { DARABONBA_PTR_GET_DEFAULT(buildIn_, false) };
      inline Data& setBuildIn(bool buildIn) { DARABONBA_PTR_SET_VALUE(buildIn_, buildIn) };


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


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // keywords Field Functions 
      bool hasKeywords() const { return this->keywords_ != nullptr;};
      void deleteKeywords() { this->keywords_ = nullptr;};
      inline const vector<Data::Keywords> & getKeywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<Data::Keywords>) };
      inline vector<Data::Keywords> getKeywords() { DARABONBA_PTR_GET(keywords_, vector<Data::Keywords>) };
      inline Data& setKeywords(const vector<Data::Keywords> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
      inline Data& setKeywords(vector<Data::Keywords> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline Data& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // tagDescription Field Functions 
      bool hasTagDescription() const { return this->tagDescription_ != nullptr;};
      void deleteTagDescription() { this->tagDescription_ = nullptr;};
      inline string getTagDescription() const { DARABONBA_PTR_GET_DEFAULT(tagDescription_, "") };
      inline Data& setTagDescription(string tagDescription) { DARABONBA_PTR_SET_VALUE(tagDescription_, tagDescription) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // updateUser Field Functions 
      bool hasUpdateUser() const { return this->updateUser_ != nullptr;};
      void deleteUpdateUser() { this->updateUser_ = nullptr;};
      inline string getUpdateUser() const { DARABONBA_PTR_GET_DEFAULT(updateUser_, "") };
      inline Data& setUpdateUser(string updateUser) { DARABONBA_PTR_SET_VALUE(updateUser_, updateUser) };


    protected:
      shared_ptr<bool> buildIn_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> createUser_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<vector<Data::Keywords>> keywords_ {};
      shared_ptr<string> tag_ {};
      shared_ptr<string> tagDescription_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> updateUser_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListBuildConfigsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListBuildConfigsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListBuildConfigsResponseBody::Data>) };
    inline vector<ListBuildConfigsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListBuildConfigsResponseBody::Data>) };
    inline ListBuildConfigsResponseBody& setData(const vector<ListBuildConfigsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListBuildConfigsResponseBody& setData(vector<ListBuildConfigsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListBuildConfigsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListBuildConfigsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBuildConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListBuildConfigsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListBuildConfigsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
