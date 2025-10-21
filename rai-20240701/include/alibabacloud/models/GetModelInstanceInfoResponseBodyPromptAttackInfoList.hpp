// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELINSTANCEINFORESPONSEBODYPROMPTATTACKINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMODELINSTANCEINFORESPONSEBODYPROMPTATTACKINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetModelInstanceInfoResponseBodyPromptAttackInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelInstanceInfoResponseBodyPromptAttackInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryLabel, categoryLabel_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelInstanceInfoResponseBodyPromptAttackInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryLabel, categoryLabel_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
    };
    GetModelInstanceInfoResponseBodyPromptAttackInfoList() = default ;
    GetModelInstanceInfoResponseBodyPromptAttackInfoList(const GetModelInstanceInfoResponseBodyPromptAttackInfoList &) = default ;
    GetModelInstanceInfoResponseBodyPromptAttackInfoList(GetModelInstanceInfoResponseBodyPromptAttackInfoList &&) = default ;
    GetModelInstanceInfoResponseBodyPromptAttackInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelInstanceInfoResponseBodyPromptAttackInfoList() = default ;
    GetModelInstanceInfoResponseBodyPromptAttackInfoList& operator=(const GetModelInstanceInfoResponseBodyPromptAttackInfoList &) = default ;
    GetModelInstanceInfoResponseBodyPromptAttackInfoList& operator=(GetModelInstanceInfoResponseBodyPromptAttackInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && return this->categoryLabel_ == nullptr && return this->securityLevel_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline GetModelInstanceInfoResponseBodyPromptAttackInfoList& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryLabel Field Functions 
    bool hasCategoryLabel() const { return this->categoryLabel_ != nullptr;};
    void deleteCategoryLabel() { this->categoryLabel_ = nullptr;};
    inline string categoryLabel() const { DARABONBA_PTR_GET_DEFAULT(categoryLabel_, "") };
    inline GetModelInstanceInfoResponseBodyPromptAttackInfoList& setCategoryLabel(string categoryLabel) { DARABONBA_PTR_SET_VALUE(categoryLabel_, categoryLabel) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline int32_t securityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, 0) };
    inline GetModelInstanceInfoResponseBodyPromptAttackInfoList& setSecurityLevel(int32_t securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


  protected:
    std::shared_ptr<int64_t> categoryId_ = nullptr;
    std::shared_ptr<string> categoryLabel_ = nullptr;
    std::shared_ptr<int32_t> securityLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
