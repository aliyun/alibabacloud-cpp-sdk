// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class RegisterAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Memo, memo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Memo, memo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RegisterAccountRequest() = default ;
    RegisterAccountRequest(const RegisterAccountRequest &) = default ;
    RegisterAccountRequest(RegisterAccountRequest &&) = default ;
    RegisterAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterAccountRequest() = default ;
    RegisterAccountRequest& operator=(const RegisterAccountRequest &) = default ;
    RegisterAccountRequest& operator=(RegisterAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memo_ == nullptr
        && return this->regionId_ == nullptr; };
    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline RegisterAccountRequest& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RegisterAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> memo_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
