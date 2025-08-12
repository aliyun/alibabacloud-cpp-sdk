// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTEVENTSTRUCT_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTEVENTSTRUCT_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentEventStruct : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentEventStruct& obj) { 
      DARABONBA_PTR_TO_JSON(autoRecoverTime, autoRecoverTime_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(dimension, dimension_);
      DARABONBA_PTR_TO_JSON(groupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(incidentEventId, incidentEventId_);
      DARABONBA_PTR_TO_JSON(incidentId, incidentId_);
      DARABONBA_PTR_TO_JSON(lastTime, lastTime_);
      DARABONBA_PTR_TO_JSON(recoverTime, recoverTime_);
      DARABONBA_PTR_TO_JSON(resource, resource_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentEventStruct& obj) { 
      DARABONBA_PTR_FROM_JSON(autoRecoverTime, autoRecoverTime_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(groupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(incidentEventId, incidentEventId_);
      DARABONBA_PTR_FROM_JSON(incidentId, incidentId_);
      DARABONBA_PTR_FROM_JSON(lastTime, lastTime_);
      DARABONBA_PTR_FROM_JSON(recoverTime, recoverTime_);
      DARABONBA_PTR_FROM_JSON(resource, resource_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    IncidentEventStruct() = default ;
    IncidentEventStruct(const IncidentEventStruct &) = default ;
    IncidentEventStruct(IncidentEventStruct &&) = default ;
    IncidentEventStruct(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentEventStruct() = default ;
    IncidentEventStruct& operator=(const IncidentEventStruct &) = default ;
    IncidentEventStruct& operator=(IncidentEventStruct &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRecoverTime_ != nullptr
        && this->content_ != nullptr && this->count_ != nullptr && this->dimension_ != nullptr && this->groupBy_ != nullptr && this->incidentEventId_ != nullptr
        && this->incidentId_ != nullptr && this->lastTime_ != nullptr && this->recoverTime_ != nullptr && this->resource_ != nullptr && this->status_ != nullptr
        && this->time_ != nullptr && this->title_ != nullptr && this->userId_ != nullptr; };
    // autoRecoverTime Field Functions 
    bool hasAutoRecoverTime() const { return this->autoRecoverTime_ != nullptr;};
    void deleteAutoRecoverTime() { this->autoRecoverTime_ = nullptr;};
    inline int64_t autoRecoverTime() const { DARABONBA_PTR_GET_DEFAULT(autoRecoverTime_, 0L) };
    inline IncidentEventStruct& setAutoRecoverTime(int64_t autoRecoverTime) { DARABONBA_PTR_SET_VALUE(autoRecoverTime_, autoRecoverTime) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline IncidentEventStruct& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline IncidentEventStruct& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline const map<string, string> & dimension() const { DARABONBA_PTR_GET_CONST(dimension_, map<string, string>) };
    inline map<string, string> dimension() { DARABONBA_PTR_GET(dimension_, map<string, string>) };
    inline IncidentEventStruct& setDimension(const map<string, string> & dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };
    inline IncidentEventStruct& setDimension(map<string, string> && dimension) { DARABONBA_PTR_SET_RVALUE(dimension_, dimension) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline const map<string, string> & groupBy() const { DARABONBA_PTR_GET_CONST(groupBy_, map<string, string>) };
    inline map<string, string> groupBy() { DARABONBA_PTR_GET(groupBy_, map<string, string>) };
    inline IncidentEventStruct& setGroupBy(const map<string, string> & groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };
    inline IncidentEventStruct& setGroupBy(map<string, string> && groupBy) { DARABONBA_PTR_SET_RVALUE(groupBy_, groupBy) };


    // incidentEventId Field Functions 
    bool hasIncidentEventId() const { return this->incidentEventId_ != nullptr;};
    void deleteIncidentEventId() { this->incidentEventId_ = nullptr;};
    inline string incidentEventId() const { DARABONBA_PTR_GET_DEFAULT(incidentEventId_, "") };
    inline IncidentEventStruct& setIncidentEventId(string incidentEventId) { DARABONBA_PTR_SET_VALUE(incidentEventId_, incidentEventId) };


    // incidentId Field Functions 
    bool hasIncidentId() const { return this->incidentId_ != nullptr;};
    void deleteIncidentId() { this->incidentId_ = nullptr;};
    inline string incidentId() const { DARABONBA_PTR_GET_DEFAULT(incidentId_, "") };
    inline IncidentEventStruct& setIncidentId(string incidentId) { DARABONBA_PTR_SET_VALUE(incidentId_, incidentId) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int64_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
    inline IncidentEventStruct& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // recoverTime Field Functions 
    bool hasRecoverTime() const { return this->recoverTime_ != nullptr;};
    void deleteRecoverTime() { this->recoverTime_ = nullptr;};
    inline int64_t recoverTime() const { DARABONBA_PTR_GET_DEFAULT(recoverTime_, 0L) };
    inline IncidentEventStruct& setRecoverTime(int64_t recoverTime) { DARABONBA_PTR_SET_VALUE(recoverTime_, recoverTime) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const map<string, string> & resource() const { DARABONBA_PTR_GET_CONST(resource_, map<string, string>) };
    inline map<string, string> resource() { DARABONBA_PTR_GET(resource_, map<string, string>) };
    inline IncidentEventStruct& setResource(const map<string, string> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline IncidentEventStruct& setResource(map<string, string> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline IncidentEventStruct& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline IncidentEventStruct& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline IncidentEventStruct& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline IncidentEventStruct& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> autoRecoverTime_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<map<string, string>> dimension_ = nullptr;
    std::shared_ptr<map<string, string>> groupBy_ = nullptr;
    std::shared_ptr<string> incidentEventId_ = nullptr;
    std::shared_ptr<string> incidentId_ = nullptr;
    std::shared_ptr<int64_t> lastTime_ = nullptr;
    std::shared_ptr<int64_t> recoverTime_ = nullptr;
    std::shared_ptr<map<string, string>> resource_ = nullptr;
    std::shared_ptr<int64_t> status_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
