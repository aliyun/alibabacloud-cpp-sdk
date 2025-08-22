// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSLSREALTIMELOGDELIVERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSLSREALTIMELOGDELIVERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnSLSRealtimeLogDeliveryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnSLSRealtimeLogDeliveryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnSLSRealtimeLogDeliveryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    DescribeDcdnSLSRealtimeLogDeliveryRequest() = default ;
    DescribeDcdnSLSRealtimeLogDeliveryRequest(const DescribeDcdnSLSRealtimeLogDeliveryRequest &) = default ;
    DescribeDcdnSLSRealtimeLogDeliveryRequest(DescribeDcdnSLSRealtimeLogDeliveryRequest &&) = default ;
    DescribeDcdnSLSRealtimeLogDeliveryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnSLSRealtimeLogDeliveryRequest() = default ;
    DescribeDcdnSLSRealtimeLogDeliveryRequest& operator=(const DescribeDcdnSLSRealtimeLogDeliveryRequest &) = default ;
    DescribeDcdnSLSRealtimeLogDeliveryRequest& operator=(DescribeDcdnSLSRealtimeLogDeliveryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectName_ != nullptr; };
    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DescribeDcdnSLSRealtimeLogDeliveryRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The name of a real-time log delivery project.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
