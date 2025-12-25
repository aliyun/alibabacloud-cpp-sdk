// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKUSERPROPERTYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKUSERPROPERTYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class CheckUserPropertyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckUserPropertyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, CheckUserPropertyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    CheckUserPropertyRequest() = default ;
    CheckUserPropertyRequest(const CheckUserPropertyRequest &) = default ;
    CheckUserPropertyRequest(CheckUserPropertyRequest &&) = default ;
    CheckUserPropertyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckUserPropertyRequest() = default ;
    CheckUserPropertyRequest& operator=(const CheckUserPropertyRequest &) = default ;
    CheckUserPropertyRequest& operator=(CheckUserPropertyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->uid_ == nullptr; };
    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline CheckUserPropertyRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
