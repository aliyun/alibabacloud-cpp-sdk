// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLASSIFICATIONTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLASSIFICATIONTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetClassificationTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClassificationTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetClassificationTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetClassificationTemplateRequest() = default ;
    GetClassificationTemplateRequest(const GetClassificationTemplateRequest &) = default ;
    GetClassificationTemplateRequest(GetClassificationTemplateRequest &&) = default ;
    GetClassificationTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClassificationTemplateRequest() = default ;
    GetClassificationTemplateRequest& operator=(const GetClassificationTemplateRequest &) = default ;
    GetClassificationTemplateRequest& operator=(GetClassificationTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->tid_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline GetClassificationTemplateRequest& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetClassificationTemplateRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
