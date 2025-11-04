// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHPUBLICMEDIAINFORESPONSEBODYPUBLICMEDIAINFOSMEDIAINFODYNAMICMETADATA_HPP_
#define ALIBABACLOUD_MODELS_SEARCHPUBLICMEDIAINFORESPONSEBODYPUBLICMEDIAINFOSMEDIAINFODYNAMICMETADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData() = default ;
    SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData(const SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData &) = default ;
    SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData(SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData &&) = default ;
    SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData() = default ;
    SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData& operator=(const SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData &) = default ;
    SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData& operator=(SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->type_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> data_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
