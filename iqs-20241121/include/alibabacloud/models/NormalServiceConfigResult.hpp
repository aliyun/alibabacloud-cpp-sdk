// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NORMALSERVICECONFIGRESULT_HPP_
#define ALIBABACLOUD_MODELS_NORMALSERVICECONFIGRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UserAPICountInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class NormalServiceConfigResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NormalServiceConfigResult& obj) { 
      DARABONBA_PTR_TO_JSON(availableTime, availableTime_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(userAPICountInfos, userAPICountInfos_);
    };
    friend void from_json(const Darabonba::Json& j, NormalServiceConfigResult& obj) { 
      DARABONBA_PTR_FROM_JSON(availableTime, availableTime_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(userAPICountInfos, userAPICountInfos_);
    };
    NormalServiceConfigResult() = default ;
    NormalServiceConfigResult(const NormalServiceConfigResult &) = default ;
    NormalServiceConfigResult(NormalServiceConfigResult &&) = default ;
    NormalServiceConfigResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NormalServiceConfigResult() = default ;
    NormalServiceConfigResult& operator=(const NormalServiceConfigResult &) = default ;
    NormalServiceConfigResult& operator=(NormalServiceConfigResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableTime_ == nullptr
        && this->gmtCreate_ == nullptr && this->status_ == nullptr && this->userAPICountInfos_ == nullptr; };
    // availableTime Field Functions 
    bool hasAvailableTime() const { return this->availableTime_ != nullptr;};
    void deleteAvailableTime() { this->availableTime_ = nullptr;};
    inline string getAvailableTime() const { DARABONBA_PTR_GET_DEFAULT(availableTime_, "") };
    inline NormalServiceConfigResult& setAvailableTime(string availableTime) { DARABONBA_PTR_SET_VALUE(availableTime_, availableTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline NormalServiceConfigResult& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline NormalServiceConfigResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userAPICountInfos Field Functions 
    bool hasUserAPICountInfos() const { return this->userAPICountInfos_ != nullptr;};
    void deleteUserAPICountInfos() { this->userAPICountInfos_ = nullptr;};
    inline const vector<UserAPICountInfo> & getUserAPICountInfos() const { DARABONBA_PTR_GET_CONST(userAPICountInfos_, vector<UserAPICountInfo>) };
    inline vector<UserAPICountInfo> getUserAPICountInfos() { DARABONBA_PTR_GET(userAPICountInfos_, vector<UserAPICountInfo>) };
    inline NormalServiceConfigResult& setUserAPICountInfos(const vector<UserAPICountInfo> & userAPICountInfos) { DARABONBA_PTR_SET_VALUE(userAPICountInfos_, userAPICountInfos) };
    inline NormalServiceConfigResult& setUserAPICountInfos(vector<UserAPICountInfo> && userAPICountInfos) { DARABONBA_PTR_SET_RVALUE(userAPICountInfos_, userAPICountInfos) };


  protected:
    shared_ptr<string> availableTime_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> status_ {};
    shared_ptr<vector<UserAPICountInfo>> userAPICountInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
