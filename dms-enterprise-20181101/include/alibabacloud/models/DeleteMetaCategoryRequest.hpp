// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMETACATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMETACATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DeleteMetaCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMetaCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMetaCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    DeleteMetaCategoryRequest() = default ;
    DeleteMetaCategoryRequest(const DeleteMetaCategoryRequest &) = default ;
    DeleteMetaCategoryRequest(DeleteMetaCategoryRequest &&) = default ;
    DeleteMetaCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMetaCategoryRequest() = default ;
    DeleteMetaCategoryRequest& operator=(const DeleteMetaCategoryRequest &) = default ;
    DeleteMetaCategoryRequest& operator=(DeleteMetaCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryId_ != nullptr
        && this->tid_ != nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline DeleteMetaCategoryRequest& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline DeleteMetaCategoryRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> categoryId_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
