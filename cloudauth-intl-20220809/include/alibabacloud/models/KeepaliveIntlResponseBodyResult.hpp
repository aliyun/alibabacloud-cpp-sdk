// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KEEPALIVEINTLRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_KEEPALIVEINTLRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class KeepaliveIntlResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KeepaliveIntlResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, KeepaliveIntlResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    KeepaliveIntlResponseBodyResult() = default ;
    KeepaliveIntlResponseBodyResult(const KeepaliveIntlResponseBodyResult &) = default ;
    KeepaliveIntlResponseBodyResult(KeepaliveIntlResponseBodyResult &&) = default ;
    KeepaliveIntlResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KeepaliveIntlResponseBodyResult() = default ;
    KeepaliveIntlResponseBodyResult& operator=(const KeepaliveIntlResponseBodyResult &) = default ;
    KeepaliveIntlResponseBodyResult& operator=(KeepaliveIntlResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->result_ != nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline KeepaliveIntlResponseBodyResult& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    // The result of the call.
    std::shared_ptr<string> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
