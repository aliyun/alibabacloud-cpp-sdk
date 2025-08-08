// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOUTBOUNNUMLISTRESPONSEBODYDATANUMGROUP_HPP_
#define ALIBABACLOUD_MODELS_GETOUTBOUNNUMLISTRESPONSEBODYDATANUMGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetOutbounNumListResponseBodyDataNumGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOutbounNumListResponseBodyDataNumGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetOutbounNumListResponseBodyDataNumGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetOutbounNumListResponseBodyDataNumGroup() = default ;
    GetOutbounNumListResponseBodyDataNumGroup(const GetOutbounNumListResponseBodyDataNumGroup &) = default ;
    GetOutbounNumListResponseBodyDataNumGroup(GetOutbounNumListResponseBodyDataNumGroup &&) = default ;
    GetOutbounNumListResponseBodyDataNumGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOutbounNumListResponseBodyDataNumGroup() = default ;
    GetOutbounNumListResponseBodyDataNumGroup& operator=(const GetOutbounNumListResponseBodyDataNumGroup &) = default ;
    GetOutbounNumListResponseBodyDataNumGroup& operator=(GetOutbounNumListResponseBodyDataNumGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->type_ != nullptr && this->value_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetOutbounNumListResponseBodyDataNumGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline GetOutbounNumListResponseBodyDataNumGroup& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetOutbounNumListResponseBodyDataNumGroup& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
