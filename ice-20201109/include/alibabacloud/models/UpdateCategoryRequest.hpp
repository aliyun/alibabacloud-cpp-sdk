// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(CateName, cateName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(CateName, cateName_);
    };
    UpdateCategoryRequest() = default ;
    UpdateCategoryRequest(const UpdateCategoryRequest &) = default ;
    UpdateCategoryRequest(UpdateCategoryRequest &&) = default ;
    UpdateCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCategoryRequest() = default ;
    UpdateCategoryRequest& operator=(const UpdateCategoryRequest &) = default ;
    UpdateCategoryRequest& operator=(UpdateCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cateId_ != nullptr
        && this->cateName_ != nullptr; };
    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline UpdateCategoryRequest& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // cateName Field Functions 
    bool hasCateName() const { return this->cateName_ != nullptr;};
    void deleteCateName() { this->cateName_ = nullptr;};
    inline string cateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
    inline UpdateCategoryRequest& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


  protected:
    // The category ID. You can use one of the following methods to obtain the ID:
    // 
    // *   Log on to the [Intelligent Media Services (IMS) console](https://ims.console.aliyun.com) and choose **Media Asset Management** > **Category Management** to view the category ID.
    // *   View the value of CateId returned by the AddCategory operation that you called to create a category.
    // *   View the value of CateId returned by the GetCategories operation that you called to query a category.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> cateId_ = nullptr;
    // The category name.
    // 
    // This parameter is required.
    std::shared_ptr<string> cateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
