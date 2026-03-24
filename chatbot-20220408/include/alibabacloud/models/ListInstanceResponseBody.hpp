// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListInstanceResponseBody() = default ;
    ListInstanceResponseBody(const ListInstanceResponseBody &) = default ;
    ListInstanceResponseBody(ListInstanceResponseBody &&) = default ;
    ListInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceResponseBody() = default ;
    ListInstanceResponseBody& operator=(const ListInstanceResponseBody &) = default ;
    ListInstanceResponseBody& operator=(ListInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(Avatar, avatar_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Introduction, introduction_);
        DARABONBA_PTR_TO_JSON(LanguageCode, languageCode_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RobotType, robotType_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Introduction, introduction_);
        DARABONBA_PTR_FROM_JSON(LanguageCode, languageCode_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RobotType, robotType_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->avatar_ == nullptr
        && this->createTime_ == nullptr && this->instanceId_ == nullptr && this->introduction_ == nullptr && this->languageCode_ == nullptr && this->name_ == nullptr
        && this->robotType_ == nullptr; };
      // avatar Field Functions 
      bool hasAvatar() const { return this->avatar_ != nullptr;};
      void deleteAvatar() { this->avatar_ = nullptr;};
      inline string getAvatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
      inline Instances& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Instances& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // introduction Field Functions 
      bool hasIntroduction() const { return this->introduction_ != nullptr;};
      void deleteIntroduction() { this->introduction_ = nullptr;};
      inline string getIntroduction() const { DARABONBA_PTR_GET_DEFAULT(introduction_, "") };
      inline Instances& setIntroduction(string introduction) { DARABONBA_PTR_SET_VALUE(introduction_, introduction) };


      // languageCode Field Functions 
      bool hasLanguageCode() const { return this->languageCode_ != nullptr;};
      void deleteLanguageCode() { this->languageCode_ = nullptr;};
      inline string getLanguageCode() const { DARABONBA_PTR_GET_DEFAULT(languageCode_, "") };
      inline Instances& setLanguageCode(string languageCode) { DARABONBA_PTR_SET_VALUE(languageCode_, languageCode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Instances& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // robotType Field Functions 
      bool hasRobotType() const { return this->robotType_ != nullptr;};
      void deleteRobotType() { this->robotType_ = nullptr;};
      inline string getRobotType() const { DARABONBA_PTR_GET_DEFAULT(robotType_, "") };
      inline Instances& setRobotType(string robotType) { DARABONBA_PTR_SET_VALUE(robotType_, robotType) };


    protected:
      shared_ptr<string> avatar_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> introduction_ {};
      shared_ptr<string> languageCode_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> robotType_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ListInstanceResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ListInstanceResponseBody::Instances>) };
    inline vector<ListInstanceResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<ListInstanceResponseBody::Instances>) };
    inline ListInstanceResponseBody& setInstances(const vector<ListInstanceResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListInstanceResponseBody& setInstances(vector<ListInstanceResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListInstanceResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListInstanceResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListInstanceResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListInstanceResponseBody::Instances>> instances_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
