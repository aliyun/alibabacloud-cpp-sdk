// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHWHITELISTTEMPLATETOINSTANCERESPONSEBODYDATAATTACHSUCCESSEDLISTTEMPLATESDBINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_ATTACHWHITELISTTEMPLATETOINSTANCERESPONSEBODYDATAATTACHSUCCESSEDLISTTEMPLATESDBINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplatesDbInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplatesDbInstances& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplatesDbInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
    };
    AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplatesDbInstances() = default ;
    AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplatesDbInstances(const AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplatesDbInstances &) = default ;
    AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplatesDbInstances(AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplatesDbInstances &&) = default ;
    AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplatesDbInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplatesDbInstances() = default ;
    AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplatesDbInstances& operator=(const AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplatesDbInstances &) = default ;
    AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplatesDbInstances& operator=(AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplatesDbInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplatesDbInstances& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


  protected:
    std::shared_ptr<string> DBInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
