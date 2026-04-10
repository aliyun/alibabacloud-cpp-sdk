// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREDEMPTIONRECORDSHEADERS_HPP_
#define ALIBABACLOUD_MODELS_QUERYREDEMPTIONRECORDSHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class QueryRedemptionRecordsHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRedemptionRecordsHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(X-Load-Test, xLoadTest_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRedemptionRecordsHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(X-Load-Test, xLoadTest_);
    };
    QueryRedemptionRecordsHeaders() = default ;
    QueryRedemptionRecordsHeaders(const QueryRedemptionRecordsHeaders &) = default ;
    QueryRedemptionRecordsHeaders(QueryRedemptionRecordsHeaders &&) = default ;
    QueryRedemptionRecordsHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRedemptionRecordsHeaders() = default ;
    QueryRedemptionRecordsHeaders& operator=(const QueryRedemptionRecordsHeaders &) = default ;
    QueryRedemptionRecordsHeaders& operator=(QueryRedemptionRecordsHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && this->xLoadTest_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & getCommonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> getCommonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline QueryRedemptionRecordsHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline QueryRedemptionRecordsHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xLoadTest Field Functions 
    bool hasXLoadTest() const { return this->xLoadTest_ != nullptr;};
    void deleteXLoadTest() { this->xLoadTest_ = nullptr;};
    inline bool getXLoadTest() const { DARABONBA_PTR_GET_DEFAULT(xLoadTest_, false) };
    inline QueryRedemptionRecordsHeaders& setXLoadTest(bool xLoadTest) { DARABONBA_PTR_SET_VALUE(xLoadTest_, xLoadTest) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    shared_ptr<bool> xLoadTest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
