// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFORMDATABYIDRESPONSEBODYORIGINATORNAME_HPP_
#define ALIBABACLOUD_MODELS_GETFORMDATABYIDRESPONSEBODYORIGINATORNAME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetFormDataByIDResponseBodyOriginatorName : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFormDataByIDResponseBodyOriginatorName& obj) { 
      DARABONBA_PTR_TO_JSON(NameInChinese, nameInChinese_);
      DARABONBA_PTR_TO_JSON(NameInEnglish, nameInEnglish_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetFormDataByIDResponseBodyOriginatorName& obj) { 
      DARABONBA_PTR_FROM_JSON(NameInChinese, nameInChinese_);
      DARABONBA_PTR_FROM_JSON(NameInEnglish, nameInEnglish_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetFormDataByIDResponseBodyOriginatorName() = default ;
    GetFormDataByIDResponseBodyOriginatorName(const GetFormDataByIDResponseBodyOriginatorName &) = default ;
    GetFormDataByIDResponseBodyOriginatorName(GetFormDataByIDResponseBodyOriginatorName &&) = default ;
    GetFormDataByIDResponseBodyOriginatorName(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFormDataByIDResponseBodyOriginatorName() = default ;
    GetFormDataByIDResponseBodyOriginatorName& operator=(const GetFormDataByIDResponseBodyOriginatorName &) = default ;
    GetFormDataByIDResponseBodyOriginatorName& operator=(GetFormDataByIDResponseBodyOriginatorName &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nameInChinese_ != nullptr
        && this->nameInEnglish_ != nullptr && this->type_ != nullptr; };
    // nameInChinese Field Functions 
    bool hasNameInChinese() const { return this->nameInChinese_ != nullptr;};
    void deleteNameInChinese() { this->nameInChinese_ = nullptr;};
    inline string nameInChinese() const { DARABONBA_PTR_GET_DEFAULT(nameInChinese_, "") };
    inline GetFormDataByIDResponseBodyOriginatorName& setNameInChinese(string nameInChinese) { DARABONBA_PTR_SET_VALUE(nameInChinese_, nameInChinese) };


    // nameInEnglish Field Functions 
    bool hasNameInEnglish() const { return this->nameInEnglish_ != nullptr;};
    void deleteNameInEnglish() { this->nameInEnglish_ = nullptr;};
    inline string nameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(nameInEnglish_, "") };
    inline GetFormDataByIDResponseBodyOriginatorName& setNameInEnglish(string nameInEnglish) { DARABONBA_PTR_SET_VALUE(nameInEnglish_, nameInEnglish) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetFormDataByIDResponseBodyOriginatorName& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> nameInChinese_ = nullptr;
    std::shared_ptr<string> nameInEnglish_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
