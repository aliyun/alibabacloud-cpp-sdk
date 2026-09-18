// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CodeSec20260401
{
namespace Models
{
  class DescribeScanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScanRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DescribeScanRequest& obj) { 
      (void)j; (void)obj; 
    };
    DescribeScanRequest() = default ;
    DescribeScanRequest(const DescribeScanRequest &) = default ;
    DescribeScanRequest(DescribeScanRequest &&) = default ;
    DescribeScanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScanRequest() = default ;
    DescribeScanRequest& operator=(const DescribeScanRequest &) = default ;
    DescribeScanRequest& operator=(DescribeScanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CodeSec20260401
#endif
