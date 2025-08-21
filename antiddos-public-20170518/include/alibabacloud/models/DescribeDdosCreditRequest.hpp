// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSCREDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSCREDITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeDdosCreditRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosCreditRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DdosRegionId, ddosRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosCreditRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DdosRegionId, ddosRegionId_);
    };
    DescribeDdosCreditRequest() = default ;
    DescribeDdosCreditRequest(const DescribeDdosCreditRequest &) = default ;
    DescribeDdosCreditRequest(DescribeDdosCreditRequest &&) = default ;
    DescribeDdosCreditRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosCreditRequest() = default ;
    DescribeDdosCreditRequest& operator=(const DescribeDdosCreditRequest &) = default ;
    DescribeDdosCreditRequest& operator=(DescribeDdosCreditRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ddosRegionId_ != nullptr; };
    // ddosRegionId Field Functions 
    bool hasDdosRegionId() const { return this->ddosRegionId_ != nullptr;};
    void deleteDdosRegionId() { this->ddosRegionId_ = nullptr;};
    inline string ddosRegionId() const { DARABONBA_PTR_GET_DEFAULT(ddosRegionId_, "") };
    inline DescribeDdosCreditRequest& setDdosRegionId(string ddosRegionId) { DARABONBA_PTR_SET_VALUE(ddosRegionId_, ddosRegionId) };


  protected:
    // The ID of the region.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/353250.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> ddosRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
