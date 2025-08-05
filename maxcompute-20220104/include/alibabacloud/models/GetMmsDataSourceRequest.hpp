// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMMSDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMMSDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetMmsDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMmsDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(lang, lang_);
      DARABONBA_PTR_TO_JSON(withConfig, withConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetMmsDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(lang, lang_);
      DARABONBA_PTR_FROM_JSON(withConfig, withConfig_);
    };
    GetMmsDataSourceRequest() = default ;
    GetMmsDataSourceRequest(const GetMmsDataSourceRequest &) = default ;
    GetMmsDataSourceRequest(GetMmsDataSourceRequest &&) = default ;
    GetMmsDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMmsDataSourceRequest() = default ;
    GetMmsDataSourceRequest& operator=(const GetMmsDataSourceRequest &) = default ;
    GetMmsDataSourceRequest& operator=(GetMmsDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->withConfig_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetMmsDataSourceRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // withConfig Field Functions 
    bool hasWithConfig() const { return this->withConfig_ != nullptr;};
    void deleteWithConfig() { this->withConfig_ = nullptr;};
    inline bool withConfig() const { DARABONBA_PTR_GET_DEFAULT(withConfig_, false) };
    inline GetMmsDataSourceRequest& setWithConfig(bool withConfig) { DARABONBA_PTR_SET_VALUE(withConfig_, withConfig) };


  protected:
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<bool> withConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
