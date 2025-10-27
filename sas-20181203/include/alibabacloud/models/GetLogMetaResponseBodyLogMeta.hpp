// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGMETARESPONSEBODYLOGMETA_HPP_
#define ALIBABACLOUD_MODELS_GETLOGMETARESPONSEBODYLOGMETA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetLogMetaResponseBodyLogMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLogMetaResponseBodyLogMeta& obj) { 
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetLogMetaResponseBodyLogMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetLogMetaResponseBodyLogMeta() = default ;
    GetLogMetaResponseBodyLogMeta(const GetLogMetaResponseBodyLogMeta &) = default ;
    GetLogMetaResponseBodyLogMeta(GetLogMetaResponseBodyLogMeta &&) = default ;
    GetLogMetaResponseBodyLogMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLogMetaResponseBodyLogMeta() = default ;
    GetLogMetaResponseBodyLogMeta& operator=(const GetLogMetaResponseBodyLogMeta &) = default ;
    GetLogMetaResponseBodyLogMeta& operator=(GetLogMetaResponseBodyLogMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logStore_ == nullptr
        && return this->project_ == nullptr && return this->status_ == nullptr; };
    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline GetLogMetaResponseBodyLogMeta& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline GetLogMetaResponseBodyLogMeta& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetLogMetaResponseBodyLogMeta& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name of the dedicated Logstore in which logs are stored.
    std::shared_ptr<string> logStore_ = nullptr;
    // The Simple Log Service project.
    std::shared_ptr<string> project_ = nullptr;
    // The status of a data shipping task of a log. Valid values:
    // 
    // *   **enabled**
    // *   **disabled**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
