// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYADDREQUESTHOTELSHARE_HPP_
#define ALIBABACLOUD_MODELS_APPLYADDREQUESTHOTELSHARE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyAddRequestHotelShare : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyAddRequestHotelShare& obj) { 
      DARABONBA_PTR_TO_JSON(param, param_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyAddRequestHotelShare& obj) { 
      DARABONBA_PTR_FROM_JSON(param, param_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ApplyAddRequestHotelShare() = default ;
    ApplyAddRequestHotelShare(const ApplyAddRequestHotelShare &) = default ;
    ApplyAddRequestHotelShare(ApplyAddRequestHotelShare &&) = default ;
    ApplyAddRequestHotelShare(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyAddRequestHotelShare() = default ;
    ApplyAddRequestHotelShare& operator=(const ApplyAddRequestHotelShare &) = default ;
    ApplyAddRequestHotelShare& operator=(ApplyAddRequestHotelShare &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->param_ != nullptr
        && this->type_ != nullptr; };
    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline string param() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
    inline ApplyAddRequestHotelShare& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ApplyAddRequestHotelShare& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> param_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
