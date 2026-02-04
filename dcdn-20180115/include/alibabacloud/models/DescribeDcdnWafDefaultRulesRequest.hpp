// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDEFAULTRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDEFAULTRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafDefaultRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafDefaultRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(QueryArgs, queryArgs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafDefaultRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryArgs, queryArgs_);
    };
    DescribeDcdnWafDefaultRulesRequest() = default ;
    DescribeDcdnWafDefaultRulesRequest(const DescribeDcdnWafDefaultRulesRequest &) = default ;
    DescribeDcdnWafDefaultRulesRequest(DescribeDcdnWafDefaultRulesRequest &&) = default ;
    DescribeDcdnWafDefaultRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafDefaultRulesRequest() = default ;
    DescribeDcdnWafDefaultRulesRequest& operator=(const DescribeDcdnWafDefaultRulesRequest &) = default ;
    DescribeDcdnWafDefaultRulesRequest& operator=(DescribeDcdnWafDefaultRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryArgs_ == nullptr; };
    // queryArgs Field Functions 
    bool hasQueryArgs() const { return this->queryArgs_ != nullptr;};
    void deleteQueryArgs() { this->queryArgs_ = nullptr;};
    inline string getQueryArgs() const { DARABONBA_PTR_GET_DEFAULT(queryArgs_, "") };
    inline DescribeDcdnWafDefaultRulesRequest& setQueryArgs(string queryArgs) { DARABONBA_PTR_SET_VALUE(queryArgs_, queryArgs) };


  protected:
    // The query conditions. The value is a string in the JSON format. Format: `QueryArgs={"DefenseScene":"anti_scan"}`
    shared_ptr<string> queryArgs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
