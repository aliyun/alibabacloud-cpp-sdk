// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEAPPINSTANCEFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEAPPINSTANCEFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class OperateAppInstanceForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateAppInstanceForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(OperateEvent, operateEvent_);
    };
    friend void from_json(const Darabonba::Json& j, OperateAppInstanceForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(OperateEvent, operateEvent_);
    };
    OperateAppInstanceForPartnerRequest() = default ;
    OperateAppInstanceForPartnerRequest(const OperateAppInstanceForPartnerRequest &) = default ;
    OperateAppInstanceForPartnerRequest(OperateAppInstanceForPartnerRequest &&) = default ;
    OperateAppInstanceForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateAppInstanceForPartnerRequest() = default ;
    OperateAppInstanceForPartnerRequest& operator=(const OperateAppInstanceForPartnerRequest &) = default ;
    OperateAppInstanceForPartnerRequest& operator=(OperateAppInstanceForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extend_ == nullptr
        && return this->operateEvent_ == nullptr; };
    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string extend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline OperateAppInstanceForPartnerRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // operateEvent Field Functions 
    bool hasOperateEvent() const { return this->operateEvent_ != nullptr;};
    void deleteOperateEvent() { this->operateEvent_ = nullptr;};
    inline string operateEvent() const { DARABONBA_PTR_GET_DEFAULT(operateEvent_, "") };
    inline OperateAppInstanceForPartnerRequest& setOperateEvent(string operateEvent) { DARABONBA_PTR_SET_VALUE(operateEvent_, operateEvent) };


  protected:
    std::shared_ptr<string> extend_ = nullptr;
    std::shared_ptr<string> operateEvent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
