// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYROBOTUNSUBSCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYROBOTUNSUBSCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryRobotUnsubscriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRobotUnsubscriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RobotCode, robotCode_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRobotUnsubscriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RobotCode, robotCode_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
    };
    QueryRobotUnsubscriptionRequest() = default ;
    QueryRobotUnsubscriptionRequest(const QueryRobotUnsubscriptionRequest &) = default ;
    QueryRobotUnsubscriptionRequest(QueryRobotUnsubscriptionRequest &&) = default ;
    QueryRobotUnsubscriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRobotUnsubscriptionRequest() = default ;
    QueryRobotUnsubscriptionRequest& operator=(const QueryRobotUnsubscriptionRequest &) = default ;
    QueryRobotUnsubscriptionRequest& operator=(QueryRobotUnsubscriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->robotCode_ == nullptr && this->sceneCode_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline QueryRobotUnsubscriptionRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryRobotUnsubscriptionRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // robotCode Field Functions 
    bool hasRobotCode() const { return this->robotCode_ != nullptr;};
    void deleteRobotCode() { this->robotCode_ = nullptr;};
    inline string getRobotCode() const { DARABONBA_PTR_GET_DEFAULT(robotCode_, "") };
    inline QueryRobotUnsubscriptionRequest& setRobotCode(string robotCode) { DARABONBA_PTR_SET_VALUE(robotCode_, robotCode) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline QueryRobotUnsubscriptionRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


  protected:
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> robotCode_ {};
    shared_ptr<string> sceneCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
