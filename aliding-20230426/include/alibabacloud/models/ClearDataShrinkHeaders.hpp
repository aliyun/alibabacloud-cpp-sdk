// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLEARDATASHRINKHEADERS_HPP_
#define ALIBABACLOUD_MODELS_CLEARDATASHRINKHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ClearDataShrinkHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClearDataShrinkHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(AccountContext, accountContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ClearDataShrinkHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(AccountContext, accountContextShrink_);
    };
    ClearDataShrinkHeaders() = default ;
    ClearDataShrinkHeaders(const ClearDataShrinkHeaders &) = default ;
    ClearDataShrinkHeaders(ClearDataShrinkHeaders &&) = default ;
    ClearDataShrinkHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClearDataShrinkHeaders() = default ;
    ClearDataShrinkHeaders& operator=(const ClearDataShrinkHeaders &) = default ;
    ClearDataShrinkHeaders& operator=(ClearDataShrinkHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commonHeaders_ != nullptr
        && this->accountContextShrink_ != nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & commonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> commonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline ClearDataShrinkHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline ClearDataShrinkHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // accountContextShrink Field Functions 
    bool hasAccountContextShrink() const { return this->accountContextShrink_ != nullptr;};
    void deleteAccountContextShrink() { this->accountContextShrink_ = nullptr;};
    inline string accountContextShrink() const { DARABONBA_PTR_GET_DEFAULT(accountContextShrink_, "") };
    inline ClearDataShrinkHeaders& setAccountContextShrink(string accountContextShrink) { DARABONBA_PTR_SET_VALUE(accountContextShrink_, accountContextShrink) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    std::shared_ptr<string> accountContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
