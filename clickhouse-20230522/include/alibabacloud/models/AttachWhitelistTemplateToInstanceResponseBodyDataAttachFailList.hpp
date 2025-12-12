// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHWHITELISTTEMPLATETOINSTANCERESPONSEBODYDATAATTACHFAILLIST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHWHITELISTTEMPLATETOINSTANCERESPONSEBODYDATAATTACHFAILLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList() = default ;
    AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList(const AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList &) = default ;
    AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList(AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList &&) = default ;
    AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList() = default ;
    AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList& operator=(const AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList &) = default ;
    AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList& operator=(AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->reason_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
