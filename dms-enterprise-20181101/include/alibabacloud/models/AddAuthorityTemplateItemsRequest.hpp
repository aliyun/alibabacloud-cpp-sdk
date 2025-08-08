// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAUTHORITYTEMPLATEITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAUTHORITYTEMPLATEITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddAuthorityTemplateItemsRequestItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AddAuthorityTemplateItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAuthorityTemplateItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, AddAuthorityTemplateItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    AddAuthorityTemplateItemsRequest() = default ;
    AddAuthorityTemplateItemsRequest(const AddAuthorityTemplateItemsRequest &) = default ;
    AddAuthorityTemplateItemsRequest(AddAuthorityTemplateItemsRequest &&) = default ;
    AddAuthorityTemplateItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAuthorityTemplateItemsRequest() = default ;
    AddAuthorityTemplateItemsRequest& operator=(const AddAuthorityTemplateItemsRequest &) = default ;
    AddAuthorityTemplateItemsRequest& operator=(AddAuthorityTemplateItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->templateId_ != nullptr && this->tid_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<AddAuthorityTemplateItemsRequestItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<AddAuthorityTemplateItemsRequestItems>) };
    inline vector<AddAuthorityTemplateItemsRequestItems> items() { DARABONBA_PTR_GET(items_, vector<AddAuthorityTemplateItemsRequestItems>) };
    inline AddAuthorityTemplateItemsRequest& setItems(const vector<AddAuthorityTemplateItemsRequestItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline AddAuthorityTemplateItemsRequest& setItems(vector<AddAuthorityTemplateItemsRequestItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline AddAuthorityTemplateItemsRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline AddAuthorityTemplateItemsRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<AddAuthorityTemplateItemsRequestItems>> items_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> templateId_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
