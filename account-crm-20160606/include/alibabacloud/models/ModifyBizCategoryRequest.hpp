// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBIZCATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBIZCATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class ModifyBizCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBizCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ParamList, paramList_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBizCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ModifyBizCategoryRequest() = default ;
    ModifyBizCategoryRequest(const ModifyBizCategoryRequest &) = default ;
    ModifyBizCategoryRequest(ModifyBizCategoryRequest &&) = default ;
    ModifyBizCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBizCategoryRequest() = default ;
    ModifyBizCategoryRequest& operator=(const ModifyBizCategoryRequest &) = default ;
    ModifyBizCategoryRequest& operator=(ModifyBizCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paramList_ == nullptr
        && this->userId_ == nullptr; };
    // paramList Field Functions 
    bool hasParamList() const { return this->paramList_ != nullptr;};
    void deleteParamList() { this->paramList_ = nullptr;};
    inline string getParamList() const { DARABONBA_PTR_GET_DEFAULT(paramList_, "") };
    inline ModifyBizCategoryRequest& setParamList(string paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline ModifyBizCategoryRequest& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    shared_ptr<string> paramList_ {};
    // This parameter is required.
    shared_ptr<int64_t> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
