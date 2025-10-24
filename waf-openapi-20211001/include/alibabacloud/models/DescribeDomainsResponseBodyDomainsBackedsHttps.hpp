// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODYDOMAINSBACKEDSHTTPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODYDOMAINSBACKEDSHTTPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDomainsResponseBodyDomainsBackedsHttps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsResponseBodyDomainsBackedsHttps& obj) { 
      DARABONBA_PTR_TO_JSON(Backend, backend_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsResponseBodyDomainsBackedsHttps& obj) { 
      DARABONBA_PTR_FROM_JSON(Backend, backend_);
    };
    DescribeDomainsResponseBodyDomainsBackedsHttps() = default ;
    DescribeDomainsResponseBodyDomainsBackedsHttps(const DescribeDomainsResponseBodyDomainsBackedsHttps &) = default ;
    DescribeDomainsResponseBodyDomainsBackedsHttps(DescribeDomainsResponseBodyDomainsBackedsHttps &&) = default ;
    DescribeDomainsResponseBodyDomainsBackedsHttps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsResponseBodyDomainsBackedsHttps() = default ;
    DescribeDomainsResponseBodyDomainsBackedsHttps& operator=(const DescribeDomainsResponseBodyDomainsBackedsHttps &) = default ;
    DescribeDomainsResponseBodyDomainsBackedsHttps& operator=(DescribeDomainsResponseBodyDomainsBackedsHttps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backend_ == nullptr; };
    // backend Field Functions 
    bool hasBackend() const { return this->backend_ != nullptr;};
    void deleteBackend() { this->backend_ = nullptr;};
    inline string backend() const { DARABONBA_PTR_GET_DEFAULT(backend_, "") };
    inline DescribeDomainsResponseBodyDomainsBackedsHttps& setBackend(string backend) { DARABONBA_PTR_SET_VALUE(backend_, backend) };


  protected:
    // The HTTPS address of the origin server.
    std::shared_ptr<string> backend_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
