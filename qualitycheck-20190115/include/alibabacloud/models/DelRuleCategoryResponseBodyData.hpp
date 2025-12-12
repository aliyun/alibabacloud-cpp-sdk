// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELRULECATEGORYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DELRULECATEGORYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class DelRuleCategoryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DelRuleCategoryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Select, select_);
    };
    friend void from_json(const Darabonba::Json& j, DelRuleCategoryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Select, select_);
    };
    DelRuleCategoryResponseBodyData() = default ;
    DelRuleCategoryResponseBodyData(const DelRuleCategoryResponseBodyData &) = default ;
    DelRuleCategoryResponseBodyData(DelRuleCategoryResponseBodyData &&) = default ;
    DelRuleCategoryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DelRuleCategoryResponseBodyData() = default ;
    DelRuleCategoryResponseBodyData& operator=(const DelRuleCategoryResponseBodyData &) = default ;
    DelRuleCategoryResponseBodyData& operator=(DelRuleCategoryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->select_ == nullptr; };
    // select Field Functions 
    bool hasSelect() const { return this->select_ != nullptr;};
    void deleteSelect() { this->select_ = nullptr;};
    inline bool select() const { DARABONBA_PTR_GET_DEFAULT(select_, false) };
    inline DelRuleCategoryResponseBodyData& setSelect(bool select) { DARABONBA_PTR_SET_VALUE(select_, select) };


  protected:
    std::shared_ptr<bool> select_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
