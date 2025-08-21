// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJIANGSUTELECOMDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETJIANGSUTELECOMDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetJiangSuTelecomDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJiangSuTelecomDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
    };
    friend void from_json(const Darabonba::Json& j, GetJiangSuTelecomDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
    };
    GetJiangSuTelecomDataRequest() = default ;
    GetJiangSuTelecomDataRequest(const GetJiangSuTelecomDataRequest &) = default ;
    GetJiangSuTelecomDataRequest(GetJiangSuTelecomDataRequest &&) = default ;
    GetJiangSuTelecomDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJiangSuTelecomDataRequest() = default ;
    GetJiangSuTelecomDataRequest& operator=(const GetJiangSuTelecomDataRequest &) = default ;
    GetJiangSuTelecomDataRequest& operator=(GetJiangSuTelecomDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline GetJiangSuTelecomDataRequest& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


  protected:
    std::shared_ptr<string> date_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
