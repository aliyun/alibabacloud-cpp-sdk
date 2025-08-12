// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINLIMITRESPONSEBODYLIVEDOMAINLIMITLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINLIMITRESPONSEBODYLIVEDOMAINLIMITLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainLimitResponseBodyLiveDomainLimitList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainLimitResponseBodyLiveDomainLimitList& obj) { 
      DARABONBA_PTR_TO_JSON(LiveDomainLimit, liveDomainLimit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainLimitResponseBodyLiveDomainLimitList& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveDomainLimit, liveDomainLimit_);
    };
    DescribeLiveDomainLimitResponseBodyLiveDomainLimitList() = default ;
    DescribeLiveDomainLimitResponseBodyLiveDomainLimitList(const DescribeLiveDomainLimitResponseBodyLiveDomainLimitList &) = default ;
    DescribeLiveDomainLimitResponseBodyLiveDomainLimitList(DescribeLiveDomainLimitResponseBodyLiveDomainLimitList &&) = default ;
    DescribeLiveDomainLimitResponseBodyLiveDomainLimitList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainLimitResponseBodyLiveDomainLimitList() = default ;
    DescribeLiveDomainLimitResponseBodyLiveDomainLimitList& operator=(const DescribeLiveDomainLimitResponseBodyLiveDomainLimitList &) = default ;
    DescribeLiveDomainLimitResponseBodyLiveDomainLimitList& operator=(DescribeLiveDomainLimitResponseBodyLiveDomainLimitList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveDomainLimit_ != nullptr; };
    // liveDomainLimit Field Functions 
    bool hasLiveDomainLimit() const { return this->liveDomainLimit_ != nullptr;};
    void deleteLiveDomainLimit() { this->liveDomainLimit_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit> & liveDomainLimit() const { DARABONBA_PTR_GET_CONST(liveDomainLimit_, vector<Models::DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit>) };
    inline vector<Models::DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit> liveDomainLimit() { DARABONBA_PTR_GET(liveDomainLimit_, vector<Models::DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit>) };
    inline DescribeLiveDomainLimitResponseBodyLiveDomainLimitList& setLiveDomainLimit(const vector<Models::DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit> & liveDomainLimit) { DARABONBA_PTR_SET_VALUE(liveDomainLimit_, liveDomainLimit) };
    inline DescribeLiveDomainLimitResponseBodyLiveDomainLimitList& setLiveDomainLimit(vector<Models::DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit> && liveDomainLimit) { DARABONBA_PTR_SET_RVALUE(liveDomainLimit_, liveDomainLimit) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainLimitResponseBodyLiveDomainLimitListLiveDomainLimit>> liveDomainLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
