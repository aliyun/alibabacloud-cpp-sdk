// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTCORPNUMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTCORPNUMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ImportCorpNumbersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportCorpNumbersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(CorpName, corpName_);
      DARABONBA_PTR_TO_JSON(NumberList, numberList_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
    };
    friend void from_json(const Darabonba::Json& j, ImportCorpNumbersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(CorpName, corpName_);
      DARABONBA_PTR_FROM_JSON(NumberList, numberList_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
    };
    ImportCorpNumbersRequest() = default ;
    ImportCorpNumbersRequest(const ImportCorpNumbersRequest &) = default ;
    ImportCorpNumbersRequest(ImportCorpNumbersRequest &&) = default ;
    ImportCorpNumbersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportCorpNumbersRequest() = default ;
    ImportCorpNumbersRequest& operator=(const ImportCorpNumbersRequest &) = default ;
    ImportCorpNumbersRequest& operator=(ImportCorpNumbersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->city_ != nullptr
        && this->corpName_ != nullptr && this->numberList_ != nullptr && this->provider_ != nullptr && this->province_ != nullptr && this->tagList_ != nullptr; };
    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline ImportCorpNumbersRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string corpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline ImportCorpNumbersRequest& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // numberList Field Functions 
    bool hasNumberList() const { return this->numberList_ != nullptr;};
    void deleteNumberList() { this->numberList_ = nullptr;};
    inline string numberList() const { DARABONBA_PTR_GET_DEFAULT(numberList_, "") };
    inline ImportCorpNumbersRequest& setNumberList(string numberList) { DARABONBA_PTR_SET_VALUE(numberList_, numberList) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ImportCorpNumbersRequest& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline ImportCorpNumbersRequest& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline string tagList() const { DARABONBA_PTR_GET_DEFAULT(tagList_, "") };
    inline ImportCorpNumbersRequest& setTagList(string tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };


  protected:
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> corpName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> numberList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> provider_ = nullptr;
    std::shared_ptr<string> province_ = nullptr;
    std::shared_ptr<string> tagList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
