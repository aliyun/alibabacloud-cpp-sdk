// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVERUNHEADERS_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVERUNHEADERS_HPP_
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
  class RetrieveRunHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveRunHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveRunHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
    };
    RetrieveRunHeaders() = default ;
    RetrieveRunHeaders(const RetrieveRunHeaders &) = default ;
    RetrieveRunHeaders(RetrieveRunHeaders &&) = default ;
    RetrieveRunHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveRunHeaders() = default ;
    RetrieveRunHeaders& operator=(const RetrieveRunHeaders &) = default ;
    RetrieveRunHeaders& operator=(RetrieveRunHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && this->accountId_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & getCommonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> getCommonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline RetrieveRunHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline RetrieveRunHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline RetrieveRunHeaders& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    shared_ptr<string> accountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
