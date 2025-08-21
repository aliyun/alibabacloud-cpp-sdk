// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIAGNOSEINDICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDIAGNOSEINDICESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDiagnoseIndicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiagnoseIndicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiagnoseIndicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(lang, lang_);
    };
    ListDiagnoseIndicesRequest() = default ;
    ListDiagnoseIndicesRequest(const ListDiagnoseIndicesRequest &) = default ;
    ListDiagnoseIndicesRequest(ListDiagnoseIndicesRequest &&) = default ;
    ListDiagnoseIndicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiagnoseIndicesRequest() = default ;
    ListDiagnoseIndicesRequest& operator=(const ListDiagnoseIndicesRequest &) = default ;
    ListDiagnoseIndicesRequest& operator=(ListDiagnoseIndicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListDiagnoseIndicesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The language. Multiple languages are supported.
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
