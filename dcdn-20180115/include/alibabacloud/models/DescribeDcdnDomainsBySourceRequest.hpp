// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINSBYSOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINSBYSOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainsBySourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainsBySourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Sources, sources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainsBySourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
    };
    DescribeDcdnDomainsBySourceRequest() = default ;
    DescribeDcdnDomainsBySourceRequest(const DescribeDcdnDomainsBySourceRequest &) = default ;
    DescribeDcdnDomainsBySourceRequest(DescribeDcdnDomainsBySourceRequest &&) = default ;
    DescribeDcdnDomainsBySourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainsBySourceRequest() = default ;
    DescribeDcdnDomainsBySourceRequest& operator=(const DescribeDcdnDomainsBySourceRequest &) = default ;
    DescribeDcdnDomainsBySourceRequest& operator=(DescribeDcdnDomainsBySourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sources_ == nullptr; };
    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline string getSources() const { DARABONBA_PTR_GET_DEFAULT(sources_, "") };
    inline DescribeDcdnDomainsBySourceRequest& setSources(string sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };


  protected:
    // The list of origin servers. Separate origin servers with commas (,). You can specify a maximum of 20 origin servers. Fuzzy match is not supported.
    // 
    // This parameter is required.
    shared_ptr<string> sources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
