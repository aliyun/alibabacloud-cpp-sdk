// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHFORMDATASECONDGENERATIONNOTABLEFIELDRESPONSEBODYDATAORIGINATOR_HPP_
#define ALIBABACLOUD_MODELS_SEARCHFORMDATASECONDGENERATIONNOTABLEFIELDRESPONSEBODYDATAORIGINATOR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginator : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginator& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginator& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginator() = default ;
    SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginator(const SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginator &) = default ;
    SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginator(SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginator &&) = default ;
    SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginator(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginator() = default ;
    SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginator& operator=(const SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginator &) = default ;
    SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginator& operator=(SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginator &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->userId_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline const Models::SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName & name() const { DARABONBA_PTR_GET_CONST(name_, Models::SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName) };
    inline Models::SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName name() { DARABONBA_PTR_GET(name_, Models::SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName) };
    inline SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginator& setName(const Models::SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName & name) { DARABONBA_PTR_SET_VALUE(name_, name) };
    inline SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginator& setName(Models::SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName && name) { DARABONBA_PTR_SET_RVALUE(name_, name) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginator& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<Models::SearchFormDataSecondGenerationNoTableFieldResponseBodyDataOriginatorName> name_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
