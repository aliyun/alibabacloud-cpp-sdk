// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFILTERCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFILTERCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteFilterConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFilterConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UuId, uuId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFilterConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UuId, uuId_);
    };
    DeleteFilterConfigsRequest() = default ;
    DeleteFilterConfigsRequest(const DeleteFilterConfigsRequest &) = default ;
    DeleteFilterConfigsRequest(DeleteFilterConfigsRequest &&) = default ;
    DeleteFilterConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFilterConfigsRequest() = default ;
    DeleteFilterConfigsRequest& operator=(const DeleteFilterConfigsRequest &) = default ;
    DeleteFilterConfigsRequest& operator=(DeleteFilterConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->uuId_ != nullptr; };
    // uuId Field Functions 
    bool hasUuId() const { return this->uuId_ != nullptr;};
    void deleteUuId() { this->uuId_ = nullptr;};
    inline string uuId() const { DARABONBA_PTR_GET_DEFAULT(uuId_, "") };
    inline DeleteFilterConfigsRequest& setUuId(string uuId) { DARABONBA_PTR_SET_VALUE(uuId_, uuId) };


  protected:
    std::shared_ptr<string> uuId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
