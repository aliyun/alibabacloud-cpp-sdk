// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERCEPTIONTARGETDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINTERCEPTIONTARGETDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetInterceptionTargetDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterceptionTargetDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterceptionTargetDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
    };
    GetInterceptionTargetDetailRequest() = default ;
    GetInterceptionTargetDetailRequest(const GetInterceptionTargetDetailRequest &) = default ;
    GetInterceptionTargetDetailRequest(GetInterceptionTargetDetailRequest &&) = default ;
    GetInterceptionTargetDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterceptionTargetDetailRequest() = default ;
    GetInterceptionTargetDetailRequest& operator=(const GetInterceptionTargetDetailRequest &) = default ;
    GetInterceptionTargetDetailRequest& operator=(GetInterceptionTargetDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->targetId_ == nullptr; };
    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline int64_t getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, 0L) };
    inline GetInterceptionTargetDetailRequest& setTargetId(int64_t targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


  protected:
    // The ID of the network object.
    // 
    // > You can call the [ListInterceptionTargetPage](~~ListInterceptionTargetPage~~) operation to query the IDs of network objects.
    // 
    // This parameter is required.
    shared_ptr<int64_t> targetId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
