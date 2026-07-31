// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEARTIFACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEARTIFACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeArtifactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeArtifactRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DescribeArtifactRequest& obj) { 
      (void)j; (void)obj; 
    };
    DescribeArtifactRequest() = default ;
    DescribeArtifactRequest(const DescribeArtifactRequest &) = default ;
    DescribeArtifactRequest(DescribeArtifactRequest &&) = default ;
    DescribeArtifactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeArtifactRequest() = default ;
    DescribeArtifactRequest& operator=(const DescribeArtifactRequest &) = default ;
    DescribeArtifactRequest& operator=(DescribeArtifactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
