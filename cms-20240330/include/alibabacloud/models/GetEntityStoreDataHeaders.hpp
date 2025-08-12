// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENTITYSTOREDATAHEADERS_HPP_
#define ALIBABACLOUD_MODELS_GETENTITYSTOREDATAHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetEntityStoreDataHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEntityStoreDataHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(acceptEncoding, acceptEncoding_);
    };
    friend void from_json(const Darabonba::Json& j, GetEntityStoreDataHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(acceptEncoding, acceptEncoding_);
    };
    GetEntityStoreDataHeaders() = default ;
    GetEntityStoreDataHeaders(const GetEntityStoreDataHeaders &) = default ;
    GetEntityStoreDataHeaders(GetEntityStoreDataHeaders &&) = default ;
    GetEntityStoreDataHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEntityStoreDataHeaders() = default ;
    GetEntityStoreDataHeaders& operator=(const GetEntityStoreDataHeaders &) = default ;
    GetEntityStoreDataHeaders& operator=(GetEntityStoreDataHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commonHeaders_ != nullptr
        && this->acceptEncoding_ != nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & commonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> commonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline GetEntityStoreDataHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline GetEntityStoreDataHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // acceptEncoding Field Functions 
    bool hasAcceptEncoding() const { return this->acceptEncoding_ != nullptr;};
    void deleteAcceptEncoding() { this->acceptEncoding_ = nullptr;};
    inline string acceptEncoding() const { DARABONBA_PTR_GET_DEFAULT(acceptEncoding_, "") };
    inline GetEntityStoreDataHeaders& setAcceptEncoding(string acceptEncoding) { DARABONBA_PTR_SET_VALUE(acceptEncoding_, acceptEncoding) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    std::shared_ptr<string> acceptEncoding_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
