// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAYPUBLISHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRAYPUBLISHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GrayPublishRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrayPublishRequest& obj) { 
      DARABONBA_PTR_TO_JSON(X-Request-ChangeId, xRequestChangeId_);
    };
    friend void from_json(const Darabonba::Json& j, GrayPublishRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(X-Request-ChangeId, xRequestChangeId_);
    };
    GrayPublishRequest() = default ;
    GrayPublishRequest(const GrayPublishRequest &) = default ;
    GrayPublishRequest(GrayPublishRequest &&) = default ;
    GrayPublishRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrayPublishRequest() = default ;
    GrayPublishRequest& operator=(const GrayPublishRequest &) = default ;
    GrayPublishRequest& operator=(GrayPublishRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->xRequestChangeId_ == nullptr; };
    // xRequestChangeId Field Functions 
    bool hasXRequestChangeId() const { return this->xRequestChangeId_ != nullptr;};
    void deleteXRequestChangeId() { this->xRequestChangeId_ = nullptr;};
    inline string getXRequestChangeId() const { DARABONBA_PTR_GET_DEFAULT(xRequestChangeId_, "") };
    inline GrayPublishRequest& setXRequestChangeId(string xRequestChangeId) { DARABONBA_PTR_SET_VALUE(xRequestChangeId_, xRequestChangeId) };


  protected:
    shared_ptr<string> xRequestChangeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
