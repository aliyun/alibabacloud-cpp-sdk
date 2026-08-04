// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERLISTDEPTMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERLISTDEPTMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterListDeptMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterListDeptMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(authConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(includeAuthorization, includeAuthorization_);
      DARABONBA_PTR_TO_JSON(includeBalance, includeBalance_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterListDeptMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(authConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(includeAuthorization, includeAuthorization_);
      DARABONBA_PTR_FROM_JSON(includeBalance, includeBalance_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ModelRouterListDeptMembersRequest() = default ;
    ModelRouterListDeptMembersRequest(const ModelRouterListDeptMembersRequest &) = default ;
    ModelRouterListDeptMembersRequest(ModelRouterListDeptMembersRequest &&) = default ;
    ModelRouterListDeptMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterListDeptMembersRequest() = default ;
    ModelRouterListDeptMembersRequest& operator=(const ModelRouterListDeptMembersRequest &) = default ;
    ModelRouterListDeptMembersRequest& operator=(ModelRouterListDeptMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authConfig_ == nullptr
        && this->includeAuthorization_ == nullptr && this->includeBalance_ == nullptr && this->keyword_ == nullptr && this->model_ == nullptr && this->pageIndex_ == nullptr
        && this->pageSize_ == nullptr; };
    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline string getAuthConfig() const { DARABONBA_PTR_GET_DEFAULT(authConfig_, "") };
    inline ModelRouterListDeptMembersRequest& setAuthConfig(string authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };


    // includeAuthorization Field Functions 
    bool hasIncludeAuthorization() const { return this->includeAuthorization_ != nullptr;};
    void deleteIncludeAuthorization() { this->includeAuthorization_ = nullptr;};
    inline bool getIncludeAuthorization() const { DARABONBA_PTR_GET_DEFAULT(includeAuthorization_, false) };
    inline ModelRouterListDeptMembersRequest& setIncludeAuthorization(bool includeAuthorization) { DARABONBA_PTR_SET_VALUE(includeAuthorization_, includeAuthorization) };


    // includeBalance Field Functions 
    bool hasIncludeBalance() const { return this->includeBalance_ != nullptr;};
    void deleteIncludeBalance() { this->includeBalance_ = nullptr;};
    inline bool getIncludeBalance() const { DARABONBA_PTR_GET_DEFAULT(includeBalance_, false) };
    inline ModelRouterListDeptMembersRequest& setIncludeBalance(bool includeBalance) { DARABONBA_PTR_SET_VALUE(includeBalance_, includeBalance) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ModelRouterListDeptMembersRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ModelRouterListDeptMembersRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ModelRouterListDeptMembersRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ModelRouterListDeptMembersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<string> authConfig_ {};
    shared_ptr<bool> includeAuthorization_ {};
    shared_ptr<bool> includeBalance_ {};
    shared_ptr<string> keyword_ {};
    shared_ptr<string> model_ {};
    shared_ptr<int32_t> pageIndex_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
