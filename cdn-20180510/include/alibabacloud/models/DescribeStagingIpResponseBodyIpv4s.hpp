// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTAGINGIPRESPONSEBODYIPV4S_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTAGINGIPRESPONSEBODYIPV4S_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeStagingIpResponseBodyIPV4s : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStagingIpResponseBodyIPV4s& obj) { 
      DARABONBA_PTR_TO_JSON(IPV4, IPV4_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStagingIpResponseBodyIPV4s& obj) { 
      DARABONBA_PTR_FROM_JSON(IPV4, IPV4_);
    };
    DescribeStagingIpResponseBodyIPV4s() = default ;
    DescribeStagingIpResponseBodyIPV4s(const DescribeStagingIpResponseBodyIPV4s &) = default ;
    DescribeStagingIpResponseBodyIPV4s(DescribeStagingIpResponseBodyIPV4s &&) = default ;
    DescribeStagingIpResponseBodyIPV4s(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStagingIpResponseBodyIPV4s() = default ;
    DescribeStagingIpResponseBodyIPV4s& operator=(const DescribeStagingIpResponseBodyIPV4s &) = default ;
    DescribeStagingIpResponseBodyIPV4s& operator=(DescribeStagingIpResponseBodyIPV4s &&) = default ;
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
    inline DescribeStagingIpResponseBodyIPV4s& setIPV4(const vector<string> & IPV4) { DARABONBA_PTR_SET_VALUE(IPV4_, IPV4) };
    inline DescribeStagingIpResponseBodyIPV4s& setIPV4(vector<string> && IPV4) { DARABONBA_PTR_SET_RVALUE(IPV4_, IPV4) };


  protected:
    std::shared_ptr<vector<string>> IPV4_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
