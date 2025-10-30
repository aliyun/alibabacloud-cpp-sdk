// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDXBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BINDXBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindXBResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindXBResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AuthId, authId_);
      DARABONBA_PTR_TO_JSON(TelX, telX_);
    };
    friend void from_json(const Darabonba::Json& j, BindXBResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthId, authId_);
      DARABONBA_PTR_FROM_JSON(TelX, telX_);
    };
    BindXBResponseBodyData() = default ;
    BindXBResponseBodyData(const BindXBResponseBodyData &) = default ;
    BindXBResponseBodyData(BindXBResponseBodyData &&) = default ;
    BindXBResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindXBResponseBodyData() = default ;
    BindXBResponseBodyData& operator=(const BindXBResponseBodyData &) = default ;
    BindXBResponseBodyData& operator=(BindXBResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authId_ == nullptr
        && return this->telX_ == nullptr; };
    // authId Field Functions 
    bool hasAuthId() const { return this->authId_ != nullptr;};
    void deleteAuthId() { this->authId_ = nullptr;};
    inline string authId() const { DARABONBA_PTR_GET_DEFAULT(authId_, "") };
    inline BindXBResponseBodyData& setAuthId(string authId) { DARABONBA_PTR_SET_VALUE(authId_, authId) };


    // telX Field Functions 
    bool hasTelX() const { return this->telX_ != nullptr;};
    void deleteTelX() { this->telX_ = nullptr;};
    inline string telX() const { DARABONBA_PTR_GET_DEFAULT(telX_, "") };
    inline BindXBResponseBodyData& setTelX(string telX) { DARABONBA_PTR_SET_VALUE(telX_, telX) };


  protected:
    // 工作号关系绑定的唯一标识
    std::shared_ptr<string> authId_ = nullptr;
    // X号码
    std::shared_ptr<string> telX_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
