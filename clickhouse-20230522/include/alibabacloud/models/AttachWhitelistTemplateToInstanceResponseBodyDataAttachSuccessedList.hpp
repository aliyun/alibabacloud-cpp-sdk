// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHWHITELISTTEMPLATETOINSTANCERESPONSEBODYDATAATTACHSUCCESSEDLIST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHWHITELISTTEMPLATETOINSTANCERESPONSEBODYDATAATTACHSUCCESSEDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
    };
    friend void from_json(const Darabonba::Json& j, AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
    };
    AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList() = default ;
    AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList(const AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList &) = default ;
    AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList(AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList &&) = default ;
    AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList() = default ;
    AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList& operator=(const AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList &) = default ;
    AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList& operator=(AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->templates_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<Models::AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplates> & templates() const { DARABONBA_PTR_GET_CONST(templates_, vector<Models::AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplates>) };
    inline vector<Models::AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplates> templates() { DARABONBA_PTR_GET(templates_, vector<Models::AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplates>) };
    inline AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList& setTemplates(const vector<Models::AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList& setTemplates(vector<Models::AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


  protected:
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<vector<Models::AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedListTemplates>> templates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
