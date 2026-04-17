// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTROBOTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTROBOTSREQUEST_HPP_
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
  class ListAlertRobotsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertRobotsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(robotIds, robotIds_);
      DARABONBA_PTR_TO_JSON(types, types_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertRobotsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(robotIds, robotIds_);
      DARABONBA_PTR_FROM_JSON(types, types_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ListAlertRobotsRequest() = default ;
    ListAlertRobotsRequest(const ListAlertRobotsRequest &) = default ;
    ListAlertRobotsRequest(ListAlertRobotsRequest &&) = default ;
    ListAlertRobotsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertRobotsRequest() = default ;
    ListAlertRobotsRequest& operator=(const ListAlertRobotsRequest &) = default ;
    ListAlertRobotsRequest& operator=(ListAlertRobotsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->robotIds_ == nullptr && this->types_ == nullptr && this->workspace_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAlertRobotsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListAlertRobotsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAlertRobotsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // robotIds Field Functions 
    bool hasRobotIds() const { return this->robotIds_ != nullptr;};
    void deleteRobotIds() { this->robotIds_ = nullptr;};
    inline const vector<string> & getRobotIds() const { DARABONBA_PTR_GET_CONST(robotIds_, vector<string>) };
    inline vector<string> getRobotIds() { DARABONBA_PTR_GET(robotIds_, vector<string>) };
    inline ListAlertRobotsRequest& setRobotIds(const vector<string> & robotIds) { DARABONBA_PTR_SET_VALUE(robotIds_, robotIds) };
    inline ListAlertRobotsRequest& setRobotIds(vector<string> && robotIds) { DARABONBA_PTR_SET_RVALUE(robotIds_, robotIds) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline const vector<string> & getTypes() const { DARABONBA_PTR_GET_CONST(types_, vector<string>) };
    inline vector<string> getTypes() { DARABONBA_PTR_GET(types_, vector<string>) };
    inline ListAlertRobotsRequest& setTypes(const vector<string> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
    inline ListAlertRobotsRequest& setTypes(vector<string> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ListAlertRobotsRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<vector<string>> robotIds_ {};
    shared_ptr<vector<string>> types_ {};
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
