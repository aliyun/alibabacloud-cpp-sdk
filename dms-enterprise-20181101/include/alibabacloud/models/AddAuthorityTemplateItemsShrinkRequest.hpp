// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAUTHORITYTEMPLATEITEMSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAUTHORITYTEMPLATEITEMSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AddAuthorityTemplateItemsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAuthorityTemplateItemsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Items, itemsShrink_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, AddAuthorityTemplateItemsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, itemsShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    AddAuthorityTemplateItemsShrinkRequest() = default ;
    AddAuthorityTemplateItemsShrinkRequest(const AddAuthorityTemplateItemsShrinkRequest &) = default ;
    AddAuthorityTemplateItemsShrinkRequest(AddAuthorityTemplateItemsShrinkRequest &&) = default ;
    AddAuthorityTemplateItemsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAuthorityTemplateItemsShrinkRequest() = default ;
    AddAuthorityTemplateItemsShrinkRequest& operator=(const AddAuthorityTemplateItemsShrinkRequest &) = default ;
    AddAuthorityTemplateItemsShrinkRequest& operator=(AddAuthorityTemplateItemsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->itemsShrink_ != nullptr
        && this->templateId_ != nullptr && this->tid_ != nullptr; };
    // itemsShrink Field Functions 
    bool hasItemsShrink() const { return this->itemsShrink_ != nullptr;};
    void deleteItemsShrink() { this->itemsShrink_ = nullptr;};
    inline string itemsShrink() const { DARABONBA_PTR_GET_DEFAULT(itemsShrink_, "") };
    inline AddAuthorityTemplateItemsShrinkRequest& setItemsShrink(string itemsShrink) { DARABONBA_PTR_SET_VALUE(itemsShrink_, itemsShrink) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline AddAuthorityTemplateItemsShrinkRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline AddAuthorityTemplateItemsShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> itemsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> templateId_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
