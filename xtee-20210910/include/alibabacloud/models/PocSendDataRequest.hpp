// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POCSENDDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_POCSENDDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class PocSendDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PocSendDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchNo, batchNo_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ParamsList, paramsList_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, PocSendDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchNo, batchNo_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ParamsList, paramsList_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    PocSendDataRequest() = default ;
    PocSendDataRequest(const PocSendDataRequest &) = default ;
    PocSendDataRequest(PocSendDataRequest &&) = default ;
    PocSendDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PocSendDataRequest() = default ;
    PocSendDataRequest& operator=(const PocSendDataRequest &) = default ;
    PocSendDataRequest& operator=(PocSendDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchNo_ != nullptr
        && this->lang_ != nullptr && this->paramsList_ != nullptr && this->regId_ != nullptr && this->token_ != nullptr; };
    // batchNo Field Functions 
    bool hasBatchNo() const { return this->batchNo_ != nullptr;};
    void deleteBatchNo() { this->batchNo_ = nullptr;};
    inline int64_t batchNo() const { DARABONBA_PTR_GET_DEFAULT(batchNo_, 0L) };
    inline PocSendDataRequest& setBatchNo(int64_t batchNo) { DARABONBA_PTR_SET_VALUE(batchNo_, batchNo) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline PocSendDataRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // paramsList Field Functions 
    bool hasParamsList() const { return this->paramsList_ != nullptr;};
    void deleteParamsList() { this->paramsList_ = nullptr;};
    inline string paramsList() const { DARABONBA_PTR_GET_DEFAULT(paramsList_, "") };
    inline PocSendDataRequest& setParamsList(string paramsList) { DARABONBA_PTR_SET_VALUE(paramsList_, paramsList) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline PocSendDataRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline PocSendDataRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // Starting position for batch operations, starting from 0.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> batchNo_ = nullptr;
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Return parameters, in JSON format.
    // 
    // This parameter is required.
    std::shared_ptr<string> paramsList_ = nullptr;
    // Region code.
    std::shared_ptr<string> regId_ = nullptr;
    // Task token.
    // 
    // This parameter is required.
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
