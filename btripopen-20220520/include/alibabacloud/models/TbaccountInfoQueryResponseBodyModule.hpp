// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TBACCOUNTINFOQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TBACCOUNTINFOQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TBAccountInfoQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TBAccountInfoQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(tb_account, tbAccount_);
      DARABONBA_PTR_TO_JSON(tb_bond, tbBond_);
    };
    friend void from_json(const Darabonba::Json& j, TBAccountInfoQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(tb_account, tbAccount_);
      DARABONBA_PTR_FROM_JSON(tb_bond, tbBond_);
    };
    TBAccountInfoQueryResponseBodyModule() = default ;
    TBAccountInfoQueryResponseBodyModule(const TBAccountInfoQueryResponseBodyModule &) = default ;
    TBAccountInfoQueryResponseBodyModule(TBAccountInfoQueryResponseBodyModule &&) = default ;
    TBAccountInfoQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TBAccountInfoQueryResponseBodyModule() = default ;
    TBAccountInfoQueryResponseBodyModule& operator=(const TBAccountInfoQueryResponseBodyModule &) = default ;
    TBAccountInfoQueryResponseBodyModule& operator=(TBAccountInfoQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tbAccount_ != nullptr
        && this->tbBond_ != nullptr; };
    // tbAccount Field Functions 
    bool hasTbAccount() const { return this->tbAccount_ != nullptr;};
    void deleteTbAccount() { this->tbAccount_ = nullptr;};
    inline string tbAccount() const { DARABONBA_PTR_GET_DEFAULT(tbAccount_, "") };
    inline TBAccountInfoQueryResponseBodyModule& setTbAccount(string tbAccount) { DARABONBA_PTR_SET_VALUE(tbAccount_, tbAccount) };


    // tbBond Field Functions 
    bool hasTbBond() const { return this->tbBond_ != nullptr;};
    void deleteTbBond() { this->tbBond_ = nullptr;};
    inline bool tbBond() const { DARABONBA_PTR_GET_DEFAULT(tbBond_, false) };
    inline TBAccountInfoQueryResponseBodyModule& setTbBond(bool tbBond) { DARABONBA_PTR_SET_VALUE(tbBond_, tbBond) };


  protected:
    std::shared_ptr<string> tbAccount_ = nullptr;
    std::shared_ptr<bool> tbBond_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
