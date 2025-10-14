// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFORMLISTINAPPRESPONSEBODYDATATITLE_HPP_
#define ALIBABACLOUD_MODELS_GETFORMLISTINAPPRESPONSEBODYDATATITLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetFormListInAppResponseBodyDataTitle : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFormListInAppResponseBodyDataTitle& obj) { 
      DARABONBA_PTR_TO_JSON(EnUS, enUS_);
      DARABONBA_PTR_TO_JSON(ZhCN, zhCN_);
    };
    friend void from_json(const Darabonba::Json& j, GetFormListInAppResponseBodyDataTitle& obj) { 
      DARABONBA_PTR_FROM_JSON(EnUS, enUS_);
      DARABONBA_PTR_FROM_JSON(ZhCN, zhCN_);
    };
    GetFormListInAppResponseBodyDataTitle() = default ;
    GetFormListInAppResponseBodyDataTitle(const GetFormListInAppResponseBodyDataTitle &) = default ;
    GetFormListInAppResponseBodyDataTitle(GetFormListInAppResponseBodyDataTitle &&) = default ;
    GetFormListInAppResponseBodyDataTitle(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFormListInAppResponseBodyDataTitle() = default ;
    GetFormListInAppResponseBodyDataTitle& operator=(const GetFormListInAppResponseBodyDataTitle &) = default ;
    GetFormListInAppResponseBodyDataTitle& operator=(GetFormListInAppResponseBodyDataTitle &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enUS_ == nullptr
        && return this->zhCN_ == nullptr; };
    // enUS Field Functions 
    bool hasEnUS() const { return this->enUS_ != nullptr;};
    void deleteEnUS() { this->enUS_ = nullptr;};
    inline string enUS() const { DARABONBA_PTR_GET_DEFAULT(enUS_, "") };
    inline GetFormListInAppResponseBodyDataTitle& setEnUS(string enUS) { DARABONBA_PTR_SET_VALUE(enUS_, enUS) };


    // zhCN Field Functions 
    bool hasZhCN() const { return this->zhCN_ != nullptr;};
    void deleteZhCN() { this->zhCN_ = nullptr;};
    inline string zhCN() const { DARABONBA_PTR_GET_DEFAULT(zhCN_, "") };
    inline GetFormListInAppResponseBodyDataTitle& setZhCN(string zhCN) { DARABONBA_PTR_SET_VALUE(zhCN_, zhCN) };


  protected:
    std::shared_ptr<string> enUS_ = nullptr;
    std::shared_ptr<string> zhCN_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
