// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DelAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DelAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppItemId, appItemId_);
    };
    friend void from_json(const Darabonba::Json& j, DelAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppItemId, appItemId_);
    };
    DelAppRequest() = default ;
    DelAppRequest(const DelAppRequest &) = default ;
    DelAppRequest(DelAppRequest &&) = default ;
    DelAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DelAppRequest() = default ;
    DelAppRequest& operator=(const DelAppRequest &) = default ;
    DelAppRequest& operator=(DelAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appItemId_ != nullptr; };
    // appItemId Field Functions 
    bool hasAppItemId() const { return this->appItemId_ != nullptr;};
    void deleteAppItemId() { this->appItemId_ = nullptr;};
    inline string appItemId() const { DARABONBA_PTR_GET_DEFAULT(appItemId_, "") };
    inline DelAppRequest& setAppItemId(string appItemId) { DARABONBA_PTR_SET_VALUE(appItemId_, appItemId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appItemId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
