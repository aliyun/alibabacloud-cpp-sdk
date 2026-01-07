// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateServiceInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsReplica, isReplica_);
      DARABONBA_PTR_TO_JSON(Detach, detach_);
      DARABONBA_PTR_TO_JSON(Hibernate, hibernate_);
      DARABONBA_PTR_TO_JSON(Isolate, isolate_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsReplica, isReplica_);
      DARABONBA_PTR_FROM_JSON(Detach, detach_);
      DARABONBA_PTR_FROM_JSON(Hibernate, hibernate_);
      DARABONBA_PTR_FROM_JSON(Isolate, isolate_);
    };
    UpdateServiceInstanceRequest() = default ;
    UpdateServiceInstanceRequest(const UpdateServiceInstanceRequest &) = default ;
    UpdateServiceInstanceRequest(UpdateServiceInstanceRequest &&) = default ;
    UpdateServiceInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceInstanceRequest() = default ;
    UpdateServiceInstanceRequest& operator=(const UpdateServiceInstanceRequest &) = default ;
    UpdateServiceInstanceRequest& operator=(UpdateServiceInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isReplica_ == nullptr
        && this->detach_ == nullptr && this->hibernate_ == nullptr && this->isolate_ == nullptr; };
    // isReplica Field Functions 
    bool hasIsReplica() const { return this->isReplica_ != nullptr;};
    void deleteIsReplica() { this->isReplica_ = nullptr;};
    inline bool getIsReplica() const { DARABONBA_PTR_GET_DEFAULT(isReplica_, false) };
    inline UpdateServiceInstanceRequest& setIsReplica(bool isReplica) { DARABONBA_PTR_SET_VALUE(isReplica_, isReplica) };


    // detach Field Functions 
    bool hasDetach() const { return this->detach_ != nullptr;};
    void deleteDetach() { this->detach_ = nullptr;};
    inline bool getDetach() const { DARABONBA_PTR_GET_DEFAULT(detach_, false) };
    inline UpdateServiceInstanceRequest& setDetach(bool detach) { DARABONBA_PTR_SET_VALUE(detach_, detach) };


    // hibernate Field Functions 
    bool hasHibernate() const { return this->hibernate_ != nullptr;};
    void deleteHibernate() { this->hibernate_ = nullptr;};
    inline bool getHibernate() const { DARABONBA_PTR_GET_DEFAULT(hibernate_, false) };
    inline UpdateServiceInstanceRequest& setHibernate(bool hibernate) { DARABONBA_PTR_SET_VALUE(hibernate_, hibernate) };


    // isolate Field Functions 
    bool hasIsolate() const { return this->isolate_ != nullptr;};
    void deleteIsolate() { this->isolate_ = nullptr;};
    inline bool getIsolate() const { DARABONBA_PTR_GET_DEFAULT(isolate_, false) };
    inline UpdateServiceInstanceRequest& setIsolate(bool isolate) { DARABONBA_PTR_SET_VALUE(isolate_, isolate) };


  protected:
    shared_ptr<bool> isReplica_ {};
    shared_ptr<bool> detach_ {};
    shared_ptr<bool> hibernate_ {};
    // Specifies whether to isolate the service instance. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> isolate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
