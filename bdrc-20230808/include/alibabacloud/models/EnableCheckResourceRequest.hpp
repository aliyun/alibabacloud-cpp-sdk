// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLECHECKRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLECHECKRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class EnableCheckResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableCheckResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
    };
    friend void from_json(const Darabonba::Json& j, EnableCheckResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
    };
    EnableCheckResourceRequest() = default ;
    EnableCheckResourceRequest(const EnableCheckResourceRequest &) = default ;
    EnableCheckResourceRequest(EnableCheckResourceRequest &&) = default ;
    EnableCheckResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableCheckResourceRequest() = default ;
    EnableCheckResourceRequest& operator=(const EnableCheckResourceRequest &) = default ;
    EnableCheckResourceRequest& operator=(EnableCheckResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceArn_ == nullptr; };
    // resourceArn Field Functions 
    bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
    void deleteResourceArn() { this->resourceArn_ = nullptr;};
    inline string getResourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
    inline EnableCheckResourceRequest& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


  protected:
    // Unique resource identity.
    // 
    // This parameter is required.
    shared_ptr<string> resourceArn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
