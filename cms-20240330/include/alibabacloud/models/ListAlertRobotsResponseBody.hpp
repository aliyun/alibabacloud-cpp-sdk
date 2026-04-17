// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTROBOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTROBOTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertRobotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertRobotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(robots, robots_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertRobotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(robots, robots_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListAlertRobotsResponseBody() = default ;
    ListAlertRobotsResponseBody(const ListAlertRobotsResponseBody &) = default ;
    ListAlertRobotsResponseBody(ListAlertRobotsResponseBody &&) = default ;
    ListAlertRobotsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertRobotsResponseBody() = default ;
    ListAlertRobotsResponseBody& operator=(const ListAlertRobotsResponseBody &) = default ;
    ListAlertRobotsResponseBody& operator=(ListAlertRobotsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Robots : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Robots& obj) { 
        DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
        DARABONBA_PTR_TO_JSON(lang, lang_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(robotId, robotId_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(url, url_);
        DARABONBA_PTR_TO_JSON(workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, Robots& obj) { 
        DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
        DARABONBA_PTR_FROM_JSON(lang, lang_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(robotId, robotId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(url, url_);
        DARABONBA_PTR_FROM_JSON(workspace, workspace_);
      };
      Robots() = default ;
      Robots(const Robots &) = default ;
      Robots(Robots &&) = default ;
      Robots(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Robots() = default ;
      Robots& operator=(const Robots &) = default ;
      Robots& operator=(Robots &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->digitalEmployeeName_ == nullptr
        && this->lang_ == nullptr && this->name_ == nullptr && this->robotId_ == nullptr && this->type_ == nullptr && this->url_ == nullptr
        && this->workspace_ == nullptr; };
      // digitalEmployeeName Field Functions 
      bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
      void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
      inline string getDigitalEmployeeName() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeName_, "") };
      inline Robots& setDigitalEmployeeName(string digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };


      // lang Field Functions 
      bool hasLang() const { return this->lang_ != nullptr;};
      void deleteLang() { this->lang_ = nullptr;};
      inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
      inline Robots& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Robots& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // robotId Field Functions 
      bool hasRobotId() const { return this->robotId_ != nullptr;};
      void deleteRobotId() { this->robotId_ = nullptr;};
      inline string getRobotId() const { DARABONBA_PTR_GET_DEFAULT(robotId_, "") };
      inline Robots& setRobotId(string robotId) { DARABONBA_PTR_SET_VALUE(robotId_, robotId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Robots& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Robots& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline Robots& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      shared_ptr<string> digitalEmployeeName_ {};
      shared_ptr<string> lang_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> robotId_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> url_ {};
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->robots_ == nullptr && this->total_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListAlertRobotsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAlertRobotsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlertRobotsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // robots Field Functions 
    bool hasRobots() const { return this->robots_ != nullptr;};
    void deleteRobots() { this->robots_ = nullptr;};
    inline const vector<ListAlertRobotsResponseBody::Robots> & getRobots() const { DARABONBA_PTR_GET_CONST(robots_, vector<ListAlertRobotsResponseBody::Robots>) };
    inline vector<ListAlertRobotsResponseBody::Robots> getRobots() { DARABONBA_PTR_GET(robots_, vector<ListAlertRobotsResponseBody::Robots>) };
    inline ListAlertRobotsResponseBody& setRobots(const vector<ListAlertRobotsResponseBody::Robots> & robots) { DARABONBA_PTR_SET_VALUE(robots_, robots) };
    inline ListAlertRobotsResponseBody& setRobots(vector<ListAlertRobotsResponseBody::Robots> && robots) { DARABONBA_PTR_SET_RVALUE(robots_, robots) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListAlertRobotsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListAlertRobotsResponseBody::Robots>> robots_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
