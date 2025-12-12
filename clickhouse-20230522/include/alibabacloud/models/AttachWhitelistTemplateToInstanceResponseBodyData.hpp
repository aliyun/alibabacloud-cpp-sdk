// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHWHITELISTTEMPLATETOINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ATTACHWHITELISTTEMPLATETOINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList.hpp>
#include <alibabacloud/models/AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class AttachWhitelistTemplateToInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachWhitelistTemplateToInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AttachFailList, attachFailList_);
      DARABONBA_PTR_TO_JSON(AttachSuccessedList, attachSuccessedList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, AttachWhitelistTemplateToInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachFailList, attachFailList_);
      DARABONBA_PTR_FROM_JSON(AttachSuccessedList, attachSuccessedList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    AttachWhitelistTemplateToInstanceResponseBodyData() = default ;
    AttachWhitelistTemplateToInstanceResponseBodyData(const AttachWhitelistTemplateToInstanceResponseBodyData &) = default ;
    AttachWhitelistTemplateToInstanceResponseBodyData(AttachWhitelistTemplateToInstanceResponseBodyData &&) = default ;
    AttachWhitelistTemplateToInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachWhitelistTemplateToInstanceResponseBodyData() = default ;
    AttachWhitelistTemplateToInstanceResponseBodyData& operator=(const AttachWhitelistTemplateToInstanceResponseBodyData &) = default ;
    AttachWhitelistTemplateToInstanceResponseBodyData& operator=(AttachWhitelistTemplateToInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachFailList_ == nullptr
        && return this->attachSuccessedList_ == nullptr && return this->status_ == nullptr; };
    // attachFailList Field Functions 
    bool hasAttachFailList() const { return this->attachFailList_ != nullptr;};
    void deleteAttachFailList() { this->attachFailList_ = nullptr;};
    inline const vector<Models::AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList> & attachFailList() const { DARABONBA_PTR_GET_CONST(attachFailList_, vector<Models::AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList>) };
    inline vector<Models::AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList> attachFailList() { DARABONBA_PTR_GET(attachFailList_, vector<Models::AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList>) };
    inline AttachWhitelistTemplateToInstanceResponseBodyData& setAttachFailList(const vector<Models::AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList> & attachFailList) { DARABONBA_PTR_SET_VALUE(attachFailList_, attachFailList) };
    inline AttachWhitelistTemplateToInstanceResponseBodyData& setAttachFailList(vector<Models::AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList> && attachFailList) { DARABONBA_PTR_SET_RVALUE(attachFailList_, attachFailList) };


    // attachSuccessedList Field Functions 
    bool hasAttachSuccessedList() const { return this->attachSuccessedList_ != nullptr;};
    void deleteAttachSuccessedList() { this->attachSuccessedList_ = nullptr;};
    inline const vector<Models::AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList> & attachSuccessedList() const { DARABONBA_PTR_GET_CONST(attachSuccessedList_, vector<Models::AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList>) };
    inline vector<Models::AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList> attachSuccessedList() { DARABONBA_PTR_GET(attachSuccessedList_, vector<Models::AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList>) };
    inline AttachWhitelistTemplateToInstanceResponseBodyData& setAttachSuccessedList(const vector<Models::AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList> & attachSuccessedList) { DARABONBA_PTR_SET_VALUE(attachSuccessedList_, attachSuccessedList) };
    inline AttachWhitelistTemplateToInstanceResponseBodyData& setAttachSuccessedList(vector<Models::AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList> && attachSuccessedList) { DARABONBA_PTR_SET_RVALUE(attachSuccessedList_, attachSuccessedList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AttachWhitelistTemplateToInstanceResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<Models::AttachWhitelistTemplateToInstanceResponseBodyDataAttachFailList>> attachFailList_ = nullptr;
    std::shared_ptr<vector<Models::AttachWhitelistTemplateToInstanceResponseBodyDataAttachSuccessedList>> attachSuccessedList_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
