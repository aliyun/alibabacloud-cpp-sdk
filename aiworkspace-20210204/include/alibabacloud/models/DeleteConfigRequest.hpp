// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class DeleteConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
    };
    DeleteConfigRequest() = default ;
    DeleteConfigRequest(const DeleteConfigRequest &) = default ;
    DeleteConfigRequest(DeleteConfigRequest &&) = default ;
    DeleteConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteConfigRequest() = default ;
    DeleteConfigRequest& operator=(const DeleteConfigRequest &) = default ;
    DeleteConfigRequest& operator=(DeleteConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryName_ == nullptr
        && this->labels_ == nullptr; };
    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline DeleteConfigRequest& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline DeleteConfigRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


  protected:
    // The category of the configuration item. Valid values:
    // 
    // *   CommonResourceConfig
    // *   DLCAutoRecycle - DLCPriorityConfig
    // *   DSWPriorityConfig
    // *   QuotaMaximumDuration
    // *   CommonTagConfig
    shared_ptr<string> categoryName_ {};
    // The filter conditions. Separate multiple conditions with commas (,). The conditions have an AND relationship.
    shared_ptr<string> labels_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
