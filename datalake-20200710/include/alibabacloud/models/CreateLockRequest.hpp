// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOCKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOCKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LockObj.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class CreateLockRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLockRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LockObjList, lockObjList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLockRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LockObjList, lockObjList_);
    };
    CreateLockRequest() = default ;
    CreateLockRequest(const CreateLockRequest &) = default ;
    CreateLockRequest(CreateLockRequest &&) = default ;
    CreateLockRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLockRequest() = default ;
    CreateLockRequest& operator=(const CreateLockRequest &) = default ;
    CreateLockRequest& operator=(CreateLockRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lockObjList_ == nullptr; };
    // lockObjList Field Functions 
    bool hasLockObjList() const { return this->lockObjList_ != nullptr;};
    void deleteLockObjList() { this->lockObjList_ = nullptr;};
    inline const vector<LockObj> & lockObjList() const { DARABONBA_PTR_GET_CONST(lockObjList_, vector<LockObj>) };
    inline vector<LockObj> lockObjList() { DARABONBA_PTR_GET(lockObjList_, vector<LockObj>) };
    inline CreateLockRequest& setLockObjList(const vector<LockObj> & lockObjList) { DARABONBA_PTR_SET_VALUE(lockObjList_, lockObjList) };
    inline CreateLockRequest& setLockObjList(vector<LockObj> && lockObjList) { DARABONBA_PTR_SET_RVALUE(lockObjList_, lockObjList) };


  protected:
    // The list of locks.
    std::shared_ptr<vector<LockObj>> lockObjList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
