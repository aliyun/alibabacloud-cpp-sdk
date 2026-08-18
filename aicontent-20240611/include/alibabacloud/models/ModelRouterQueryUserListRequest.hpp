// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERQUERYUSERLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERQUERYUSERLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterQueryUserListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterQueryUserListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterQueryUserListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
    };
    ModelRouterQueryUserListRequest() = default ;
    ModelRouterQueryUserListRequest(const ModelRouterQueryUserListRequest &) = default ;
    ModelRouterQueryUserListRequest(ModelRouterQueryUserListRequest &&) = default ;
    ModelRouterQueryUserListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterQueryUserListRequest() = default ;
    ModelRouterQueryUserListRequest& operator=(const ModelRouterQueryUserListRequest &) = default ;
    ModelRouterQueryUserListRequest& operator=(ModelRouterQueryUserListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->phone_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ModelRouterQueryUserListRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ModelRouterQueryUserListRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ModelRouterQueryUserListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline ModelRouterQueryUserListRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


  protected:
    // The search keyword.
    shared_ptr<string> keyword_ {};
    // The page number.
    shared_ptr<int32_t> pageIndex_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // Specifies the phone number for exact matching (not fuzzy). When specified together with keyword, the two conditions are combined with AND, meaning both must be satisfied. If not specified, no filtering by phone number is applied.
    shared_ptr<string> phone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
