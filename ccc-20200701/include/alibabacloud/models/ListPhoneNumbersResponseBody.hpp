// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPHONENUMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPHONENUMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListPhoneNumbersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPhoneNumbersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPhoneNumbersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPhoneNumbersResponseBody() = default ;
    ListPhoneNumbersResponseBody(const ListPhoneNumbersResponseBody &) = default ;
    ListPhoneNumbersResponseBody(ListPhoneNumbersResponseBody &&) = default ;
    ListPhoneNumbersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPhoneNumbersResponseBody() = default ;
    ListPhoneNumbersResponseBody& operator=(const ListPhoneNumbersResponseBody &) = default ;
    ListPhoneNumbersResponseBody& operator=(ListPhoneNumbersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(Active, active_);
          DARABONBA_PTR_TO_JSON(City, city_);
          DARABONBA_PTR_TO_JSON(ContactFlowId, contactFlowId_);
          DARABONBA_PTR_TO_JSON(ContactFlowName, contactFlowName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Number, number_);
          DARABONBA_PTR_TO_JSON(Provider, provider_);
          DARABONBA_PTR_TO_JSON(Province, province_);
          DARABONBA_PTR_TO_JSON(SkillGroups, skillGroups_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Usage, usage_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(Active, active_);
          DARABONBA_PTR_FROM_JSON(City, city_);
          DARABONBA_PTR_FROM_JSON(ContactFlowId, contactFlowId_);
          DARABONBA_PTR_FROM_JSON(ContactFlowName, contactFlowName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Number, number_);
          DARABONBA_PTR_FROM_JSON(Provider, provider_);
          DARABONBA_PTR_FROM_JSON(Province, province_);
          DARABONBA_PTR_FROM_JSON(SkillGroups, skillGroups_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Usage, usage_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SkillGroups : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SkillGroups& obj) { 
            DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
          };
          friend void from_json(const Darabonba::Json& j, SkillGroups& obj) { 
            DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
          };
          SkillGroups() = default ;
          SkillGroups(const SkillGroups &) = default ;
          SkillGroups(SkillGroups &&) = default ;
          SkillGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SkillGroups() = default ;
          SkillGroups& operator=(const SkillGroups &) = default ;
          SkillGroups& operator=(SkillGroups &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->displayName_ == nullptr
        && this->instanceId_ == nullptr && this->name_ == nullptr && this->skillGroupId_ == nullptr; };
          // displayName Field Functions 
          bool hasDisplayName() const { return this->displayName_ != nullptr;};
          void deleteDisplayName() { this->displayName_ = nullptr;};
          inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
          inline SkillGroups& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline SkillGroups& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline SkillGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // skillGroupId Field Functions 
          bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
          void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
          inline string getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
          inline SkillGroups& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


        protected:
          shared_ptr<string> displayName_ {};
          shared_ptr<string> instanceId_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> skillGroupId_ {};
        };

        virtual bool empty() const override { return this->active_ == nullptr
        && this->city_ == nullptr && this->contactFlowId_ == nullptr && this->contactFlowName_ == nullptr && this->createTime_ == nullptr && this->instanceId_ == nullptr
        && this->number_ == nullptr && this->provider_ == nullptr && this->province_ == nullptr && this->skillGroups_ == nullptr && this->tags_ == nullptr
        && this->usage_ == nullptr && this->userId_ == nullptr; };
        // active Field Functions 
        bool hasActive() const { return this->active_ != nullptr;};
        void deleteActive() { this->active_ = nullptr;};
        inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
        inline List& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


        // city Field Functions 
        bool hasCity() const { return this->city_ != nullptr;};
        void deleteCity() { this->city_ = nullptr;};
        inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
        inline List& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


        // contactFlowId Field Functions 
        bool hasContactFlowId() const { return this->contactFlowId_ != nullptr;};
        void deleteContactFlowId() { this->contactFlowId_ = nullptr;};
        inline string getContactFlowId() const { DARABONBA_PTR_GET_DEFAULT(contactFlowId_, "") };
        inline List& setContactFlowId(string contactFlowId) { DARABONBA_PTR_SET_VALUE(contactFlowId_, contactFlowId) };


        // contactFlowName Field Functions 
        bool hasContactFlowName() const { return this->contactFlowName_ != nullptr;};
        void deleteContactFlowName() { this->contactFlowName_ = nullptr;};
        inline string getContactFlowName() const { DARABONBA_PTR_GET_DEFAULT(contactFlowName_, "") };
        inline List& setContactFlowName(string contactFlowName) { DARABONBA_PTR_SET_VALUE(contactFlowName_, contactFlowName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline List& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // number Field Functions 
        bool hasNumber() const { return this->number_ != nullptr;};
        void deleteNumber() { this->number_ = nullptr;};
        inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
        inline List& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


        // provider Field Functions 
        bool hasProvider() const { return this->provider_ != nullptr;};
        void deleteProvider() { this->provider_ = nullptr;};
        inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
        inline List& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


        // province Field Functions 
        bool hasProvince() const { return this->province_ != nullptr;};
        void deleteProvince() { this->province_ = nullptr;};
        inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
        inline List& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


        // skillGroups Field Functions 
        bool hasSkillGroups() const { return this->skillGroups_ != nullptr;};
        void deleteSkillGroups() { this->skillGroups_ = nullptr;};
        inline const vector<List::SkillGroups> & getSkillGroups() const { DARABONBA_PTR_GET_CONST(skillGroups_, vector<List::SkillGroups>) };
        inline vector<List::SkillGroups> getSkillGroups() { DARABONBA_PTR_GET(skillGroups_, vector<List::SkillGroups>) };
        inline List& setSkillGroups(const vector<List::SkillGroups> & skillGroups) { DARABONBA_PTR_SET_VALUE(skillGroups_, skillGroups) };
        inline List& setSkillGroups(vector<List::SkillGroups> && skillGroups) { DARABONBA_PTR_SET_RVALUE(skillGroups_, skillGroups) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
        inline List& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


        // usage Field Functions 
        bool hasUsage() const { return this->usage_ != nullptr;};
        void deleteUsage() { this->usage_ = nullptr;};
        inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
        inline List& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline List& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<bool> active_ {};
        shared_ptr<string> city_ {};
        shared_ptr<string> contactFlowId_ {};
        shared_ptr<string> contactFlowName_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> number_ {};
        shared_ptr<string> provider_ {};
        shared_ptr<string> province_ {};
        shared_ptr<vector<List::SkillGroups>> skillGroups_ {};
        shared_ptr<string> tags_ {};
        shared_ptr<string> usage_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListPhoneNumbersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListPhoneNumbersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListPhoneNumbersResponseBody::Data) };
    inline ListPhoneNumbersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListPhoneNumbersResponseBody::Data) };
    inline ListPhoneNumbersResponseBody& setData(const ListPhoneNumbersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListPhoneNumbersResponseBody& setData(ListPhoneNumbersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListPhoneNumbersResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPhoneNumbersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPhoneNumbersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListPhoneNumbersResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
