// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFLINKAISERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFLINKAISERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class GetFlinkAiServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFlinkAiServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, GetFlinkAiServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    GetFlinkAiServiceRequest() = default ;
    GetFlinkAiServiceRequest(const GetFlinkAiServiceRequest &) = default ;
    GetFlinkAiServiceRequest(GetFlinkAiServiceRequest &&) = default ;
    GetFlinkAiServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFlinkAiServiceRequest() = default ;
    GetFlinkAiServiceRequest& operator=(const GetFlinkAiServiceRequest &) = default ;
    GetFlinkAiServiceRequest& operator=(GetFlinkAiServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->region_ == nullptr; };
    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetFlinkAiServiceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> region_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
