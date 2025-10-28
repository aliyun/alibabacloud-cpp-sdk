// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERALLOWEDPREFIXHISTORYRESPONSEBODYALLOWEDPREFIXHISTORYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERALLOWEDPREFIXHISTORYRESPONSEBODYALLOWEDPREFIXHISTORYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedPrefix, allowedPrefix_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedPrefix, allowedPrefix_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
    };
    DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList() = default ;
    DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList(const DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList &) = default ;
    DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList(DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList &&) = default ;
    DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList() = default ;
    DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList& operator=(const DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList &) = default ;
    DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList& operator=(DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedPrefix_ == nullptr
        && return this->gmtCreate_ == nullptr; };
    // allowedPrefix Field Functions 
    bool hasAllowedPrefix() const { return this->allowedPrefix_ != nullptr;};
    void deleteAllowedPrefix() { this->allowedPrefix_ = nullptr;};
    inline const vector<string> & allowedPrefix() const { DARABONBA_PTR_GET_CONST(allowedPrefix_, vector<string>) };
    inline vector<string> allowedPrefix() { DARABONBA_PTR_GET(allowedPrefix_, vector<string>) };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList& setAllowedPrefix(const vector<string> & allowedPrefix) { DARABONBA_PTR_SET_VALUE(allowedPrefix_, allowedPrefix) };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList& setAllowedPrefix(vector<string> && allowedPrefix) { DARABONBA_PTR_SET_RVALUE(allowedPrefix_, allowedPrefix) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


  protected:
    // The route prefix.
    std::shared_ptr<vector<string>> allowedPrefix_ = nullptr;
    // The time when the historical route prefix entry was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
