// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTAUSER_HPP_
#define ALIBABACLOUD_MODELS_QUOTAUSER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QuotaUserResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class QuotaUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuotaUser& obj) { 
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(WorkloadCount, workloadCount_);
    };
    friend void from_json(const Darabonba::Json& j, QuotaUser& obj) { 
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(WorkloadCount, workloadCount_);
    };
    QuotaUser() = default ;
    QuotaUser(const QuotaUser &) = default ;
    QuotaUser(QuotaUser &&) = default ;
    QuotaUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuotaUser() = default ;
    QuotaUser& operator=(const QuotaUser &) = default ;
    QuotaUser& operator=(QuotaUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resources_ == nullptr
        && return this->userId_ == nullptr && return this->username_ == nullptr && return this->workloadCount_ == nullptr; };
    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const QuotaUserResources & resources() const { DARABONBA_PTR_GET_CONST(resources_, QuotaUserResources) };
    inline QuotaUserResources resources() { DARABONBA_PTR_GET(resources_, QuotaUserResources) };
    inline QuotaUser& setResources(const QuotaUserResources & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline QuotaUser& setResources(QuotaUserResources && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QuotaUser& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline QuotaUser& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // workloadCount Field Functions 
    bool hasWorkloadCount() const { return this->workloadCount_ != nullptr;};
    void deleteWorkloadCount() { this->workloadCount_ = nullptr;};
    inline int32_t workloadCount() const { DARABONBA_PTR_GET_DEFAULT(workloadCount_, 0) };
    inline QuotaUser& setWorkloadCount(int32_t workloadCount) { DARABONBA_PTR_SET_VALUE(workloadCount_, workloadCount) };


  protected:
    std::shared_ptr<QuotaUserResources> resources_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
    std::shared_ptr<int32_t> workloadCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
