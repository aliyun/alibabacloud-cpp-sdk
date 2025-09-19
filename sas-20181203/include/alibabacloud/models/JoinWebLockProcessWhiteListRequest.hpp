// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOINWEBLOCKPROCESSWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_JOINWEBLOCKPROCESSWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class JoinWebLockProcessWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JoinWebLockProcessWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProcessPaths, processPaths_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, JoinWebLockProcessWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProcessPaths, processPaths_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    JoinWebLockProcessWhiteListRequest() = default ;
    JoinWebLockProcessWhiteListRequest(const JoinWebLockProcessWhiteListRequest &) = default ;
    JoinWebLockProcessWhiteListRequest(JoinWebLockProcessWhiteListRequest &&) = default ;
    JoinWebLockProcessWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JoinWebLockProcessWhiteListRequest() = default ;
    JoinWebLockProcessWhiteListRequest& operator=(const JoinWebLockProcessWhiteListRequest &) = default ;
    JoinWebLockProcessWhiteListRequest& operator=(JoinWebLockProcessWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->processPaths_ != nullptr
        && this->uuids_ != nullptr; };
    // processPaths Field Functions 
    bool hasProcessPaths() const { return this->processPaths_ != nullptr;};
    void deleteProcessPaths() { this->processPaths_ = nullptr;};
    inline const vector<string> & processPaths() const { DARABONBA_PTR_GET_CONST(processPaths_, vector<string>) };
    inline vector<string> processPaths() { DARABONBA_PTR_GET(processPaths_, vector<string>) };
    inline JoinWebLockProcessWhiteListRequest& setProcessPaths(const vector<string> & processPaths) { DARABONBA_PTR_SET_VALUE(processPaths_, processPaths) };
    inline JoinWebLockProcessWhiteListRequest& setProcessPaths(vector<string> && processPaths) { DARABONBA_PTR_SET_RVALUE(processPaths_, processPaths) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string uuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline JoinWebLockProcessWhiteListRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The paths of the processes.
    std::shared_ptr<vector<string>> processPaths_ = nullptr;
    // The UUIDs of the servers on which the processes run. Separate multiple UUIDs with commas (,).
    std::shared_ptr<string> uuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
