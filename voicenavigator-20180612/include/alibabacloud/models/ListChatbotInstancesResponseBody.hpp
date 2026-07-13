// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHATBOTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHATBOTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class ListChatbotInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChatbotInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bots, bots_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListChatbotInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bots, bots_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListChatbotInstancesResponseBody() = default ;
    ListChatbotInstancesResponseBody(const ListChatbotInstancesResponseBody &) = default ;
    ListChatbotInstancesResponseBody(ListChatbotInstancesResponseBody &&) = default ;
    ListChatbotInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChatbotInstancesResponseBody() = default ;
    ListChatbotInstancesResponseBody& operator=(const ListChatbotInstancesResponseBody &) = default ;
    ListChatbotInstancesResponseBody& operator=(ListChatbotInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Bots : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Bots& obj) { 
        DARABONBA_PTR_TO_JSON(Avatar, avatar_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Introduction, introduction_);
        DARABONBA_PTR_TO_JSON(LanguageCode, languageCode_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
      };
      friend void from_json(const Darabonba::Json& j, Bots& obj) { 
        DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Introduction, introduction_);
        DARABONBA_PTR_FROM_JSON(LanguageCode, languageCode_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
      };
      Bots() = default ;
      Bots(const Bots &) = default ;
      Bots(Bots &&) = default ;
      Bots(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Bots() = default ;
      Bots& operator=(const Bots &) = default ;
      Bots& operator=(Bots &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->avatar_ == nullptr
        && this->createTime_ == nullptr && this->instanceId_ == nullptr && this->introduction_ == nullptr && this->languageCode_ == nullptr && this->name_ == nullptr
        && this->timeZone_ == nullptr; };
      // avatar Field Functions 
      bool hasAvatar() const { return this->avatar_ != nullptr;};
      void deleteAvatar() { this->avatar_ = nullptr;};
      inline string getAvatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
      inline Bots& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Bots& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Bots& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // introduction Field Functions 
      bool hasIntroduction() const { return this->introduction_ != nullptr;};
      void deleteIntroduction() { this->introduction_ = nullptr;};
      inline string getIntroduction() const { DARABONBA_PTR_GET_DEFAULT(introduction_, "") };
      inline Bots& setIntroduction(string introduction) { DARABONBA_PTR_SET_VALUE(introduction_, introduction) };


      // languageCode Field Functions 
      bool hasLanguageCode() const { return this->languageCode_ != nullptr;};
      void deleteLanguageCode() { this->languageCode_ = nullptr;};
      inline string getLanguageCode() const { DARABONBA_PTR_GET_DEFAULT(languageCode_, "") };
      inline Bots& setLanguageCode(string languageCode) { DARABONBA_PTR_SET_VALUE(languageCode_, languageCode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Bots& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // timeZone Field Functions 
      bool hasTimeZone() const { return this->timeZone_ != nullptr;};
      void deleteTimeZone() { this->timeZone_ = nullptr;};
      inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
      inline Bots& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    protected:
      // The icon of the instance.
      shared_ptr<string> avatar_ {};
      // The time when the instance was created.
      shared_ptr<string> createTime_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> introduction_ {};
      // The language code.
      shared_ptr<string> languageCode_ {};
      // The name of the instance.
      shared_ptr<string> name_ {};
      // The time zone.
      shared_ptr<string> timeZone_ {};
    };

    virtual bool empty() const override { return this->bots_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // bots Field Functions 
    bool hasBots() const { return this->bots_ != nullptr;};
    void deleteBots() { this->bots_ = nullptr;};
    inline const vector<ListChatbotInstancesResponseBody::Bots> & getBots() const { DARABONBA_PTR_GET_CONST(bots_, vector<ListChatbotInstancesResponseBody::Bots>) };
    inline vector<ListChatbotInstancesResponseBody::Bots> getBots() { DARABONBA_PTR_GET(bots_, vector<ListChatbotInstancesResponseBody::Bots>) };
    inline ListChatbotInstancesResponseBody& setBots(const vector<ListChatbotInstancesResponseBody::Bots> & bots) { DARABONBA_PTR_SET_VALUE(bots_, bots) };
    inline ListChatbotInstancesResponseBody& setBots(vector<ListChatbotInstancesResponseBody::Bots> && bots) { DARABONBA_PTR_SET_RVALUE(bots_, bots) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListChatbotInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListChatbotInstancesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListChatbotInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListChatbotInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of instances.
    shared_ptr<vector<ListChatbotInstancesResponseBody::Bots>> bots_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
