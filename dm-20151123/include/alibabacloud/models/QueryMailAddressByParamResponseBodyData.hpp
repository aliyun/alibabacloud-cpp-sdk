// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMAILADDRESSBYPARAMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYMAILADDRESSBYPARAMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMailAddressByParamResponseBodyDataMailAddress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryMailAddressByParamResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMailAddressByParamResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(mailAddress, mailAddress_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMailAddressByParamResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(mailAddress, mailAddress_);
    };
    QueryMailAddressByParamResponseBodyData() = default ;
    QueryMailAddressByParamResponseBodyData(const QueryMailAddressByParamResponseBodyData &) = default ;
    QueryMailAddressByParamResponseBodyData(QueryMailAddressByParamResponseBodyData &&) = default ;
    QueryMailAddressByParamResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMailAddressByParamResponseBodyData() = default ;
    QueryMailAddressByParamResponseBodyData& operator=(const QueryMailAddressByParamResponseBodyData &) = default ;
    QueryMailAddressByParamResponseBodyData& operator=(QueryMailAddressByParamResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mailAddress_ != nullptr; };
    // mailAddress Field Functions 
    bool hasMailAddress() const { return this->mailAddress_ != nullptr;};
    void deleteMailAddress() { this->mailAddress_ = nullptr;};
    inline const vector<Models::QueryMailAddressByParamResponseBodyDataMailAddress> & mailAddress() const { DARABONBA_PTR_GET_CONST(mailAddress_, vector<Models::QueryMailAddressByParamResponseBodyDataMailAddress>) };
    inline vector<Models::QueryMailAddressByParamResponseBodyDataMailAddress> mailAddress() { DARABONBA_PTR_GET(mailAddress_, vector<Models::QueryMailAddressByParamResponseBodyDataMailAddress>) };
    inline QueryMailAddressByParamResponseBodyData& setMailAddress(const vector<Models::QueryMailAddressByParamResponseBodyDataMailAddress> & mailAddress) { DARABONBA_PTR_SET_VALUE(mailAddress_, mailAddress) };
    inline QueryMailAddressByParamResponseBodyData& setMailAddress(vector<Models::QueryMailAddressByParamResponseBodyDataMailAddress> && mailAddress) { DARABONBA_PTR_SET_RVALUE(mailAddress_, mailAddress) };


  protected:
    std::shared_ptr<vector<Models::QueryMailAddressByParamResponseBodyDataMailAddress>> mailAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
