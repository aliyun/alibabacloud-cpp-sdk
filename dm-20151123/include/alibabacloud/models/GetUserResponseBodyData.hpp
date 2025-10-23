// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetUserResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EnableEventbridge, enableEventbridge_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableEventbridge, enableEventbridge_);
    };
    GetUserResponseBodyData() = default ;
    GetUserResponseBodyData(const GetUserResponseBodyData &) = default ;
    GetUserResponseBodyData(GetUserResponseBodyData &&) = default ;
    GetUserResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBodyData() = default ;
    GetUserResponseBodyData& operator=(const GetUserResponseBodyData &) = default ;
    GetUserResponseBodyData& operator=(GetUserResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableEventbridge_ == nullptr; };
    // enableEventbridge Field Functions 
    bool hasEnableEventbridge() const { return this->enableEventbridge_ != nullptr;};
    void deleteEnableEventbridge() { this->enableEventbridge_ = nullptr;};
    inline bool enableEventbridge() const { DARABONBA_PTR_GET_DEFAULT(enableEventbridge_, false) };
    inline GetUserResponseBodyData& setEnableEventbridge(bool enableEventbridge) { DARABONBA_PTR_SET_VALUE(enableEventbridge_, enableEventbridge) };


  protected:
    // Whether EventBridge is enabled
    std::shared_ptr<bool> enableEventbridge_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
