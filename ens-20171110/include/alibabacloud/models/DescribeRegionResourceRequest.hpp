// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeRegionResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(IspType, ispType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(IspType, ispType_);
    };
    DescribeRegionResourceRequest() = default ;
    DescribeRegionResourceRequest(const DescribeRegionResourceRequest &) = default ;
    DescribeRegionResourceRequest(DescribeRegionResourceRequest &&) = default ;
    DescribeRegionResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionResourceRequest() = default ;
    DescribeRegionResourceRequest& operator=(const DescribeRegionResourceRequest &) = default ;
    DescribeRegionResourceRequest& operator=(DescribeRegionResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ensRegionId_ == nullptr
        && this->ispType_ == nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeRegionResourceRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // ispType Field Functions 
    bool hasIspType() const { return this->ispType_ != nullptr;};
    void deleteIspType() { this->ispType_ = nullptr;};
    inline string getIspType() const { DARABONBA_PTR_GET_DEFAULT(ispType_, "") };
    inline DescribeRegionResourceRequest& setIspType(string ispType) { DARABONBA_PTR_SET_VALUE(ispType_, ispType) };


  protected:
    shared_ptr<string> ensRegionId_ {};
    shared_ptr<string> ispType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
