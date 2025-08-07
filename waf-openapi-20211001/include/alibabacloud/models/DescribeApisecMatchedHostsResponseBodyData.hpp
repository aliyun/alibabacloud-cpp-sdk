// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECMATCHEDHOSTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECMATCHEDHOSTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecMatchedHostsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecMatchedHostsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(MatchedHost, matchedHost_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecMatchedHostsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(MatchedHost, matchedHost_);
    };
    DescribeApisecMatchedHostsResponseBodyData() = default ;
    DescribeApisecMatchedHostsResponseBodyData(const DescribeApisecMatchedHostsResponseBodyData &) = default ;
    DescribeApisecMatchedHostsResponseBodyData(DescribeApisecMatchedHostsResponseBodyData &&) = default ;
    DescribeApisecMatchedHostsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecMatchedHostsResponseBodyData() = default ;
    DescribeApisecMatchedHostsResponseBodyData& operator=(const DescribeApisecMatchedHostsResponseBodyData &) = default ;
    DescribeApisecMatchedHostsResponseBodyData& operator=(DescribeApisecMatchedHostsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->matchedHost_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeApisecMatchedHostsResponseBodyData& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // matchedHost Field Functions 
    bool hasMatchedHost() const { return this->matchedHost_ != nullptr;};
    void deleteMatchedHost() { this->matchedHost_ = nullptr;};
    inline string matchedHost() const { DARABONBA_PTR_GET_DEFAULT(matchedHost_, "") };
    inline DescribeApisecMatchedHostsResponseBodyData& setMatchedHost(string matchedHost) { DARABONBA_PTR_SET_VALUE(matchedHost_, matchedHost) };


  protected:
    // The number of APIs related to the domain name.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The domain name or IP address.
    std::shared_ptr<string> matchedHost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
