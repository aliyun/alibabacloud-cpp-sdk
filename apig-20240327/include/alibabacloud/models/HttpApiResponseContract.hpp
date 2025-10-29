// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIRESPONSECONTRACT_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIRESPONSECONTRACT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiResponseContractItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiResponseContract : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiResponseContract& obj) { 
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(items, items_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiResponseContract& obj) { 
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(items, items_);
    };
    HttpApiResponseContract() = default ;
    HttpApiResponseContract(const HttpApiResponseContract &) = default ;
    HttpApiResponseContract(HttpApiResponseContract &&) = default ;
    HttpApiResponseContract(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiResponseContract() = default ;
    HttpApiResponseContract& operator=(const HttpApiResponseContract &) = default ;
    HttpApiResponseContract& operator=(HttpApiResponseContract &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentType_ == nullptr
        && return this->items_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline HttpApiResponseContract& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<HttpApiResponseContractItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<HttpApiResponseContractItems>) };
    inline vector<HttpApiResponseContractItems> items() { DARABONBA_PTR_GET(items_, vector<HttpApiResponseContractItems>) };
    inline HttpApiResponseContract& setItems(const vector<HttpApiResponseContractItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline HttpApiResponseContract& setItems(vector<HttpApiResponseContractItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<vector<HttpApiResponseContractItems>> items_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
