// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSAASINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSAASINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListSaasInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSaasInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EnName, enName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ServiceUrl, serviceUrl_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListSaasInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EnName, enName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ServiceUrl, serviceUrl_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ListSaasInfoResponseBodyData() = default ;
    ListSaasInfoResponseBodyData(const ListSaasInfoResponseBodyData &) = default ;
    ListSaasInfoResponseBodyData(ListSaasInfoResponseBodyData &&) = default ;
    ListSaasInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSaasInfoResponseBodyData() = default ;
    ListSaasInfoResponseBodyData& operator=(const ListSaasInfoResponseBodyData &) = default ;
    ListSaasInfoResponseBodyData& operator=(ListSaasInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->enName_ == nullptr && return this->name_ == nullptr && return this->serviceUrl_ == nullptr && return this->url_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSaasInfoResponseBodyData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // enName Field Functions 
    bool hasEnName() const { return this->enName_ != nullptr;};
    void deleteEnName() { this->enName_ = nullptr;};
    inline string enName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
    inline ListSaasInfoResponseBodyData& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSaasInfoResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // serviceUrl Field Functions 
    bool hasServiceUrl() const { return this->serviceUrl_ != nullptr;};
    void deleteServiceUrl() { this->serviceUrl_ = nullptr;};
    inline string serviceUrl() const { DARABONBA_PTR_GET_DEFAULT(serviceUrl_, "") };
    inline ListSaasInfoResponseBodyData& setServiceUrl(string serviceUrl) { DARABONBA_PTR_SET_VALUE(serviceUrl_, serviceUrl) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListSaasInfoResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> enName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> serviceUrl_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
