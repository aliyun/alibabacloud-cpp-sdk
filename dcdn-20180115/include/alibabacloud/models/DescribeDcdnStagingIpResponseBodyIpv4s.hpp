// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSTAGINGIPRESPONSEBODYIPV4S_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSTAGINGIPRESPONSEBODYIPV4S_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnStagingIpResponseBodyIPV4s : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnStagingIpResponseBodyIPV4s& obj) { 
      DARABONBA_PTR_TO_JSON(IPV4, IPV4_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnStagingIpResponseBodyIPV4s& obj) { 
      DARABONBA_PTR_FROM_JSON(IPV4, IPV4_);
    };
    DescribeDcdnStagingIpResponseBodyIPV4s() = default ;
    DescribeDcdnStagingIpResponseBodyIPV4s(const DescribeDcdnStagingIpResponseBodyIPV4s &) = default ;
    DescribeDcdnStagingIpResponseBodyIPV4s(DescribeDcdnStagingIpResponseBodyIPV4s &&) = default ;
    DescribeDcdnStagingIpResponseBodyIPV4s(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnStagingIpResponseBodyIPV4s() = default ;
    DescribeDcdnStagingIpResponseBodyIPV4s& operator=(const DescribeDcdnStagingIpResponseBodyIPV4s &) = default ;
    DescribeDcdnStagingIpResponseBodyIPV4s& operator=(DescribeDcdnStagingIpResponseBodyIPV4s &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->IPV4_ != nullptr; };
    // IPV4 Field Functions 
    bool hasIPV4() const { return this->IPV4_ != nullptr;};
    void deleteIPV4() { this->IPV4_ = nullptr;};
    inline const vector<string> & IPV4() const { DARABONBA_PTR_GET_CONST(IPV4_, vector<string>) };
    inline vector<string> IPV4() { DARABONBA_PTR_GET(IPV4_, vector<string>) };
    inline DescribeDcdnStagingIpResponseBodyIPV4s& setIPV4(const vector<string> & IPV4) { DARABONBA_PTR_SET_VALUE(IPV4_, IPV4) };
    inline DescribeDcdnStagingIpResponseBodyIPV4s& setIPV4(vector<string> && IPV4) { DARABONBA_PTR_SET_RVALUE(IPV4_, IPV4) };


  protected:
    std::shared_ptr<vector<string>> IPV4_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
