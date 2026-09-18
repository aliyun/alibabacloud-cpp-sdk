// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class GetAttackTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
    };
    GetAttackTargetRequest() = default ;
    GetAttackTargetRequest(const GetAttackTargetRequest &) = default ;
    GetAttackTargetRequest(GetAttackTargetRequest &&) = default ;
    GetAttackTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackTargetRequest() = default ;
    GetAttackTargetRequest& operator=(const GetAttackTargetRequest &) = default ;
    GetAttackTargetRequest& operator=(GetAttackTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->targetId_ == nullptr; };
    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline GetAttackTargetRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


  protected:
    // The unique identifier of the scan target. If the target does not exist or belongs to another tenant, a 400 error is returned to avoid exposing whether the resource exists.
    // 
    // This parameter is required.
    shared_ptr<string> targetId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
