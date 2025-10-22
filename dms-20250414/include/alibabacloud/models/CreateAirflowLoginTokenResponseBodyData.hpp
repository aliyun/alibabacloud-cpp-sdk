// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAIRFLOWLOGINTOKENRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEAIRFLOWLOGINTOKENRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateAirflowLoginTokenResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAirflowLoginTokenResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAirflowLoginTokenResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    CreateAirflowLoginTokenResponseBodyData() = default ;
    CreateAirflowLoginTokenResponseBodyData(const CreateAirflowLoginTokenResponseBodyData &) = default ;
    CreateAirflowLoginTokenResponseBodyData(CreateAirflowLoginTokenResponseBodyData &&) = default ;
    CreateAirflowLoginTokenResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAirflowLoginTokenResponseBodyData() = default ;
    CreateAirflowLoginTokenResponseBodyData& operator=(const CreateAirflowLoginTokenResponseBodyData &) = default ;
    CreateAirflowLoginTokenResponseBodyData& operator=(CreateAirflowLoginTokenResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->host_ == nullptr
        && return this->token_ == nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline CreateAirflowLoginTokenResponseBodyData& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline CreateAirflowLoginTokenResponseBodyData& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // The endpoint that is used to access the Airflow instance.
    std::shared_ptr<string> host_ = nullptr;
    // The generated token.
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
