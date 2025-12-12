// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRULECATEGORYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDRULECATEGORYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class AddRuleCategoryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRuleCategoryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Select, select_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddRuleCategoryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Select, select_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddRuleCategoryResponseBodyData() = default ;
    AddRuleCategoryResponseBodyData(const AddRuleCategoryResponseBodyData &) = default ;
    AddRuleCategoryResponseBodyData(AddRuleCategoryResponseBodyData &&) = default ;
    AddRuleCategoryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRuleCategoryResponseBodyData() = default ;
    AddRuleCategoryResponseBodyData& operator=(const AddRuleCategoryResponseBodyData &) = default ;
    AddRuleCategoryResponseBodyData& operator=(AddRuleCategoryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->select_ == nullptr
        && return this->type_ == nullptr; };
    // select Field Functions 
    bool hasSelect() const { return this->select_ != nullptr;};
    void deleteSelect() { this->select_ = nullptr;};
    inline bool select() const { DARABONBA_PTR_GET_DEFAULT(select_, false) };
    inline AddRuleCategoryResponseBodyData& setSelect(bool select) { DARABONBA_PTR_SET_VALUE(select_, select) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline AddRuleCategoryResponseBodyData& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> select_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
