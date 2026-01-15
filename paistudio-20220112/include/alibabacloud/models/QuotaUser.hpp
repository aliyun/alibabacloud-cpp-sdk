// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTAUSER_HPP_
#define ALIBABACLOUD_MODELS_QUOTAUSER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResourceAmount.hpp>
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
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(Submitted, submitted_);
        DARABONBA_PTR_TO_JSON(Used, used_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(Submitted, submitted_);
        DARABONBA_PTR_FROM_JSON(Used, used_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->submitted_ == nullptr
        && this->used_ == nullptr; };
      // submitted Field Functions 
      bool hasSubmitted() const { return this->submitted_ != nullptr;};
      void deleteSubmitted() { this->submitted_ = nullptr;};
      inline const ResourceAmount & getSubmitted() const { DARABONBA_PTR_GET_CONST(submitted_, ResourceAmount) };
      inline ResourceAmount getSubmitted() { DARABONBA_PTR_GET(submitted_, ResourceAmount) };
      inline Resources& setSubmitted(const ResourceAmount & submitted) { DARABONBA_PTR_SET_VALUE(submitted_, submitted) };
      inline Resources& setSubmitted(ResourceAmount && submitted) { DARABONBA_PTR_SET_RVALUE(submitted_, submitted) };


      // used Field Functions 
      bool hasUsed() const { return this->used_ != nullptr;};
      void deleteUsed() { this->used_ = nullptr;};
      inline const ResourceAmount & getUsed() const { DARABONBA_PTR_GET_CONST(used_, ResourceAmount) };
      inline ResourceAmount getUsed() { DARABONBA_PTR_GET(used_, ResourceAmount) };
      inline Resources& setUsed(const ResourceAmount & used) { DARABONBA_PTR_SET_VALUE(used_, used) };
      inline Resources& setUsed(ResourceAmount && used) { DARABONBA_PTR_SET_RVALUE(used_, used) };


    protected:
      shared_ptr<ResourceAmount> submitted_ {};
      shared_ptr<ResourceAmount> used_ {};
    };

    virtual bool empty() const override { return this->resources_ == nullptr
        && this->userId_ == nullptr && this->username_ == nullptr && this->workloadCount_ == nullptr; };
    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const QuotaUser::Resources & getResources() const { DARABONBA_PTR_GET_CONST(resources_, QuotaUser::Resources) };
    inline QuotaUser::Resources getResources() { DARABONBA_PTR_GET(resources_, QuotaUser::Resources) };
    inline QuotaUser& setResources(const QuotaUser::Resources & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline QuotaUser& setResources(QuotaUser::Resources && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QuotaUser& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline QuotaUser& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // workloadCount Field Functions 
    bool hasWorkloadCount() const { return this->workloadCount_ != nullptr;};
    void deleteWorkloadCount() { this->workloadCount_ = nullptr;};
    inline int32_t getWorkloadCount() const { DARABONBA_PTR_GET_DEFAULT(workloadCount_, 0) };
    inline QuotaUser& setWorkloadCount(int32_t workloadCount) { DARABONBA_PTR_SET_VALUE(workloadCount_, workloadCount) };


  protected:
    shared_ptr<QuotaUser::Resources> resources_ {};
    shared_ptr<string> userId_ {};
    shared_ptr<string> username_ {};
    shared_ptr<int32_t> workloadCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
