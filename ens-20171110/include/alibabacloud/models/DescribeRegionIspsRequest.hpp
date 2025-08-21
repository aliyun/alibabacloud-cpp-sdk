// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONISPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONISPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeRegionIspsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionIspsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionIspsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
    };
    DescribeRegionIspsRequest() = default ;
    DescribeRegionIspsRequest(const DescribeRegionIspsRequest &) = default ;
    DescribeRegionIspsRequest(DescribeRegionIspsRequest &&) = default ;
    DescribeRegionIspsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionIspsRequest() = default ;
    DescribeRegionIspsRequest& operator=(const DescribeRegionIspsRequest &) = default ;
    DescribeRegionIspsRequest& operator=(DescribeRegionIspsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ensRegionId_ != nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeRegionIspsRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


  protected:
    // The ID of the node. You can specify only one node ID in a call.
    std::shared_ptr<string> ensRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
