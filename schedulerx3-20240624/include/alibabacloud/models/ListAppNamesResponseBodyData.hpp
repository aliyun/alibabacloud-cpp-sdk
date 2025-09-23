// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPNAMESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPNAMESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListAppNamesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppNamesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppGroupId, appGroupId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(WorkerRegistry, workerRegistry_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppNamesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppGroupId, appGroupId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(WorkerRegistry, workerRegistry_);
    };
    ListAppNamesResponseBodyData() = default ;
    ListAppNamesResponseBodyData(const ListAppNamesResponseBodyData &) = default ;
    ListAppNamesResponseBodyData(ListAppNamesResponseBodyData &&) = default ;
    ListAppNamesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppNamesResponseBodyData() = default ;
    ListAppNamesResponseBodyData& operator=(const ListAppNamesResponseBodyData &) = default ;
    ListAppNamesResponseBodyData& operator=(ListAppNamesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appGroupId_ != nullptr
        && this->appName_ != nullptr && this->appType_ != nullptr && this->id_ != nullptr && this->title_ != nullptr && this->workerRegistry_ != nullptr; };
    // appGroupId Field Functions 
    bool hasAppGroupId() const { return this->appGroupId_ != nullptr;};
    void deleteAppGroupId() { this->appGroupId_ = nullptr;};
    inline string appGroupId() const { DARABONBA_PTR_GET_DEFAULT(appGroupId_, "") };
    inline ListAppNamesResponseBodyData& setAppGroupId(string appGroupId) { DARABONBA_PTR_SET_VALUE(appGroupId_, appGroupId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAppNamesResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline int32_t appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, 0) };
    inline ListAppNamesResponseBodyData& setAppType(int32_t appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListAppNamesResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListAppNamesResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // workerRegistry Field Functions 
    bool hasWorkerRegistry() const { return this->workerRegistry_ != nullptr;};
    void deleteWorkerRegistry() { this->workerRegistry_ = nullptr;};
    inline string workerRegistry() const { DARABONBA_PTR_GET_DEFAULT(workerRegistry_, "") };
    inline ListAppNamesResponseBodyData& setWorkerRegistry(string workerRegistry) { DARABONBA_PTR_SET_VALUE(workerRegistry_, workerRegistry) };


  protected:
    std::shared_ptr<string> appGroupId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<int32_t> appType_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> workerRegistry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
