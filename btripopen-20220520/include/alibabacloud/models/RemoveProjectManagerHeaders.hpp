// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEPROJECTMANAGERHEADERS_HPP_
#define ALIBABACLOUD_MODELS_REMOVEPROJECTMANAGERHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class RemoveProjectManagerHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveProjectManagerHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(x-acs-btrip-corp-token, xAcsBtripCorpToken_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveProjectManagerHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(x-acs-btrip-corp-token, xAcsBtripCorpToken_);
    };
    RemoveProjectManagerHeaders() = default ;
    RemoveProjectManagerHeaders(const RemoveProjectManagerHeaders &) = default ;
    RemoveProjectManagerHeaders(RemoveProjectManagerHeaders &&) = default ;
    RemoveProjectManagerHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveProjectManagerHeaders() = default ;
    RemoveProjectManagerHeaders& operator=(const RemoveProjectManagerHeaders &) = default ;
    RemoveProjectManagerHeaders& operator=(RemoveProjectManagerHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && this->xAcsBtripCorpToken_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & getCommonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> getCommonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline RemoveProjectManagerHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline RemoveProjectManagerHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xAcsBtripCorpToken Field Functions 
    bool hasXAcsBtripCorpToken() const { return this->xAcsBtripCorpToken_ != nullptr;};
    void deleteXAcsBtripCorpToken() { this->xAcsBtripCorpToken_ = nullptr;};
    inline string getXAcsBtripCorpToken() const { DARABONBA_PTR_GET_DEFAULT(xAcsBtripCorpToken_, "") };
    inline RemoveProjectManagerHeaders& setXAcsBtripCorpToken(string xAcsBtripCorpToken) { DARABONBA_PTR_SET_VALUE(xAcsBtripCorpToken_, xAcsBtripCorpToken) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    shared_ptr<string> xAcsBtripCorpToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
