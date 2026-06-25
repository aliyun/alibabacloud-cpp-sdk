// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class DetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
    };
    friend void from_json(const Darabonba::Json& j, DetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
    };
    DetailRequest() = default ;
    DetailRequest(const DetailRequest &) = default ;
    DetailRequest(DetailRequest &&) = default ;
    DetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetailRequest() = default ;
    DetailRequest& operator=(const DetailRequest &) = default ;
    DetailRequest& operator=(DetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceName_ == nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DetailRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


  protected:
    // The name of the Image Search instance. The name can be up to 20 characters in length.
    // If you have purchased an Image Search instance, log on to the [Image Search console](https://imagesearch.console.aliyun.com/) to view the instance name.
    // If you have not purchased an Image Search instance, refer to [Activate the service](https://help.aliyun.com/document_detail/179178.html) and [Create an instance](https://help.aliyun.com/document_detail/66569.html).
    // >The instance name is not the instance ID. Instance names must be unique within the same region. Make sure you distinguish between the two.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
