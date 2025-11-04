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
      DARABONBA_PTR_TO_JSON(Hibernate, hibernate_);
      DARABONBA_PTR_TO_JSON(Isolate, isolate_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceInstanceRequest& obj) { 
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
    virtual bool empty() const override { return this->hibernate_ == nullptr
        && return this->isolate_ == nullptr; };
    // hibernate Field Functions 
    bool hasHibernate() const { return this->hibernate_ != nullptr;};
    void deleteHibernate() { this->hibernate_ = nullptr;};
    inline bool hibernate() const { DARABONBA_PTR_GET_DEFAULT(hibernate_, false) };
    inline UpdateServiceInstanceRequest& setHibernate(bool hibernate) { DARABONBA_PTR_SET_VALUE(hibernate_, hibernate) };


    // isolate Field Functions 
    bool hasIsolate() const { return this->isolate_ != nullptr;};
    void deleteIsolate() { this->isolate_ = nullptr;};
    inline bool isolate() const { DARABONBA_PTR_GET_DEFAULT(isolate_, false) };
    inline UpdateServiceInstanceRequest& setIsolate(bool isolate) { DARABONBA_PTR_SET_VALUE(isolate_, isolate) };


  protected:
    std::shared_ptr<bool> hibernate_ = nullptr;
    // Specifies whether to isolate the service instance. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isolate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
