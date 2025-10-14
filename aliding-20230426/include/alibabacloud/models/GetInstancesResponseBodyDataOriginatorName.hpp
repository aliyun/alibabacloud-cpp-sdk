// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESRESPONSEBODYDATAORIGINATORNAME_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESRESPONSEBODYDATAORIGINATORNAME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetInstancesResponseBodyDataOriginatorName : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstancesResponseBodyDataOriginatorName& obj) { 
      DARABONBA_PTR_TO_JSON(NameInChinese, nameInChinese_);
      DARABONBA_PTR_TO_JSON(NameInEnglish, nameInEnglish_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstancesResponseBodyDataOriginatorName& obj) { 
      DARABONBA_PTR_FROM_JSON(NameInChinese, nameInChinese_);
      DARABONBA_PTR_FROM_JSON(NameInEnglish, nameInEnglish_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetInstancesResponseBodyDataOriginatorName() = default ;
    GetInstancesResponseBodyDataOriginatorName(const GetInstancesResponseBodyDataOriginatorName &) = default ;
    GetInstancesResponseBodyDataOriginatorName(GetInstancesResponseBodyDataOriginatorName &&) = default ;
    GetInstancesResponseBodyDataOriginatorName(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstancesResponseBodyDataOriginatorName() = default ;
    GetInstancesResponseBodyDataOriginatorName& operator=(const GetInstancesResponseBodyDataOriginatorName &) = default ;
    GetInstancesResponseBodyDataOriginatorName& operator=(GetInstancesResponseBodyDataOriginatorName &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nameInChinese_ == nullptr
        && return this->nameInEnglish_ == nullptr && return this->type_ == nullptr; };
    // nameInChinese Field Functions 
    bool hasNameInChinese() const { return this->nameInChinese_ != nullptr;};
    void deleteNameInChinese() { this->nameInChinese_ = nullptr;};
    inline string nameInChinese() const { DARABONBA_PTR_GET_DEFAULT(nameInChinese_, "") };
    inline GetInstancesResponseBodyDataOriginatorName& setNameInChinese(string nameInChinese) { DARABONBA_PTR_SET_VALUE(nameInChinese_, nameInChinese) };


    // nameInEnglish Field Functions 
    bool hasNameInEnglish() const { return this->nameInEnglish_ != nullptr;};
    void deleteNameInEnglish() { this->nameInEnglish_ = nullptr;};
    inline string nameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(nameInEnglish_, "") };
    inline GetInstancesResponseBodyDataOriginatorName& setNameInEnglish(string nameInEnglish) { DARABONBA_PTR_SET_VALUE(nameInEnglish_, nameInEnglish) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetInstancesResponseBodyDataOriginatorName& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> nameInChinese_ = nullptr;
    std::shared_ptr<string> nameInEnglish_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
