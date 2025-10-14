// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESRESPONSEBODYDATAACTIONEXECUTORNAME_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESRESPONSEBODYDATAACTIONEXECUTORNAME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetInstancesResponseBodyDataActionExecutorName : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstancesResponseBodyDataActionExecutorName& obj) { 
      DARABONBA_PTR_TO_JSON(NameInChinese, nameInChinese_);
      DARABONBA_PTR_TO_JSON(NameInEnglish, nameInEnglish_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstancesResponseBodyDataActionExecutorName& obj) { 
      DARABONBA_PTR_FROM_JSON(NameInChinese, nameInChinese_);
      DARABONBA_PTR_FROM_JSON(NameInEnglish, nameInEnglish_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetInstancesResponseBodyDataActionExecutorName() = default ;
    GetInstancesResponseBodyDataActionExecutorName(const GetInstancesResponseBodyDataActionExecutorName &) = default ;
    GetInstancesResponseBodyDataActionExecutorName(GetInstancesResponseBodyDataActionExecutorName &&) = default ;
    GetInstancesResponseBodyDataActionExecutorName(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstancesResponseBodyDataActionExecutorName() = default ;
    GetInstancesResponseBodyDataActionExecutorName& operator=(const GetInstancesResponseBodyDataActionExecutorName &) = default ;
    GetInstancesResponseBodyDataActionExecutorName& operator=(GetInstancesResponseBodyDataActionExecutorName &&) = default ;
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
    inline GetInstancesResponseBodyDataActionExecutorName& setNameInChinese(string nameInChinese) { DARABONBA_PTR_SET_VALUE(nameInChinese_, nameInChinese) };


    // nameInEnglish Field Functions 
    bool hasNameInEnglish() const { return this->nameInEnglish_ != nullptr;};
    void deleteNameInEnglish() { this->nameInEnglish_ = nullptr;};
    inline string nameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(nameInEnglish_, "") };
    inline GetInstancesResponseBodyDataActionExecutorName& setNameInEnglish(string nameInEnglish) { DARABONBA_PTR_SET_VALUE(nameInEnglish_, nameInEnglish) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetInstancesResponseBodyDataActionExecutorName& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> nameInChinese_ = nullptr;
    std::shared_ptr<string> nameInEnglish_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
