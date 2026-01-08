// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePrefixListsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrefixListsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrefixListsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribePrefixListsRequest() = default ;
    DescribePrefixListsRequest(const DescribePrefixListsRequest &) = default ;
    DescribePrefixListsRequest(DescribePrefixListsRequest &&) = default ;
    DescribePrefixListsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrefixListsRequest() = default ;
    DescribePrefixListsRequest& operator=(const DescribePrefixListsRequest &) = default ;
    DescribePrefixListsRequest& operator=(DescribePrefixListsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionNo_ == nullptr
        && this->sourceIp_ == nullptr; };
    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribePrefixListsRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribePrefixListsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionNo_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
