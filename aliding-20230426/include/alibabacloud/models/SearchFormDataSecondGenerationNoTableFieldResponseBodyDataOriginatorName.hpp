// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHFORMDATASECONDGENERATIONNOTABLEFIELDRESPONSEBODYDATAORIGINATORNAME_HPP_
#define ALIBABACLOUD_MODELS_SEARCHFORMDATASECONDGENERATIONNOTABLEFIELDRESPONSEBODYDATAORIGINATORNAME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName& obj) { 
      DARABONBA_PTR_TO_JSON(NameInChinese, nameInChinese_);
      DARABONBA_PTR_TO_JSON(NameInEnglish, nameInEnglish_);
    };
    friend void from_json(const Darabonba::Json& j, SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName& obj) { 
      DARABONBA_PTR_FROM_JSON(NameInChinese, nameInChinese_);
      DARABONBA_PTR_FROM_JSON(NameInEnglish, nameInEnglish_);
    };
    SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName() = default ;
    SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName(const SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName &) = default ;
    SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName(SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName &&) = default ;
    SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName() = default ;
    SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName& operator=(const SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName &) = default ;
    SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName& operator=(SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nameInChinese_ != nullptr
        && this->nameInEnglish_ != nullptr; };
    // nameInChinese Field Functions 
    bool hasNameInChinese() const { return this->nameInChinese_ != nullptr;};
    void deleteNameInChinese() { this->nameInChinese_ = nullptr;};
    inline string nameInChinese() const { DARABONBA_PTR_GET_DEFAULT(nameInChinese_, "") };
    inline SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName& setNameInChinese(string nameInChinese) { DARABONBA_PTR_SET_VALUE(nameInChinese_, nameInChinese) };


    // nameInEnglish Field Functions 
    bool hasNameInEnglish() const { return this->nameInEnglish_ != nullptr;};
    void deleteNameInEnglish() { this->nameInEnglish_ = nullptr;};
    inline string nameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(nameInEnglish_, "") };
    inline SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName& setNameInEnglish(string nameInEnglish) { DARABONBA_PTR_SET_VALUE(nameInEnglish_, nameInEnglish) };


  protected:
    std::shared_ptr<string> nameInChinese_ = nullptr;
    std::shared_ptr<string> nameInEnglish_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
