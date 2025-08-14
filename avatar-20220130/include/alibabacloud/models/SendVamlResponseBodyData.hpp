// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDVAMLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SENDVAMLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SendVamlResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendVamlResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(UniqueCode, uniqueCode_);
    };
    friend void from_json(const Darabonba::Json& j, SendVamlResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(UniqueCode, uniqueCode_);
    };
    SendVamlResponseBodyData() = default ;
    SendVamlResponseBodyData(const SendVamlResponseBodyData &) = default ;
    SendVamlResponseBodyData(SendVamlResponseBodyData &&) = default ;
    SendVamlResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendVamlResponseBodyData() = default ;
    SendVamlResponseBodyData& operator=(const SendVamlResponseBodyData &) = default ;
    SendVamlResponseBodyData& operator=(SendVamlResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sessionId_ != nullptr
        && this->uniqueCode_ != nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SendVamlResponseBodyData& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // uniqueCode Field Functions 
    bool hasUniqueCode() const { return this->uniqueCode_ != nullptr;};
    void deleteUniqueCode() { this->uniqueCode_ = nullptr;};
    inline string uniqueCode() const { DARABONBA_PTR_GET_DEFAULT(uniqueCode_, "") };
    inline SendVamlResponseBodyData& setUniqueCode(string uniqueCode) { DARABONBA_PTR_SET_VALUE(uniqueCode_, uniqueCode) };


  protected:
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> uniqueCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
