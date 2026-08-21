// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROHIBITEDSOFTWARESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPROHIBITEDSOFTWARESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetProhibitedSoftwareShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProhibitedSoftwareShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SoftwareId, softwareIdShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetProhibitedSoftwareShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SoftwareId, softwareIdShrink_);
    };
    GetProhibitedSoftwareShrinkRequest() = default ;
    GetProhibitedSoftwareShrinkRequest(const GetProhibitedSoftwareShrinkRequest &) = default ;
    GetProhibitedSoftwareShrinkRequest(GetProhibitedSoftwareShrinkRequest &&) = default ;
    GetProhibitedSoftwareShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProhibitedSoftwareShrinkRequest() = default ;
    GetProhibitedSoftwareShrinkRequest& operator=(const GetProhibitedSoftwareShrinkRequest &) = default ;
    GetProhibitedSoftwareShrinkRequest& operator=(GetProhibitedSoftwareShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->softwareIdShrink_ == nullptr; };
    // softwareIdShrink Field Functions 
    bool hasSoftwareIdShrink() const { return this->softwareIdShrink_ != nullptr;};
    void deleteSoftwareIdShrink() { this->softwareIdShrink_ = nullptr;};
    inline string getSoftwareIdShrink() const { DARABONBA_PTR_GET_DEFAULT(softwareIdShrink_, "") };
    inline GetProhibitedSoftwareShrinkRequest& setSoftwareIdShrink(string softwareIdShrink) { DARABONBA_PTR_SET_VALUE(softwareIdShrink_, softwareIdShrink) };


  protected:
    // The prohibited software ID.
    shared_ptr<string> softwareIdShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
