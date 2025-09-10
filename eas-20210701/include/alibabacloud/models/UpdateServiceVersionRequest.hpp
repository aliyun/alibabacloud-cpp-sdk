// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateServiceVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    UpdateServiceVersionRequest() = default ;
    UpdateServiceVersionRequest(const UpdateServiceVersionRequest &) = default ;
    UpdateServiceVersionRequest(UpdateServiceVersionRequest &&) = default ;
    UpdateServiceVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceVersionRequest() = default ;
    UpdateServiceVersionRequest& operator=(const UpdateServiceVersionRequest &) = default ;
    UpdateServiceVersionRequest& operator=(UpdateServiceVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->version_ != nullptr; };
    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline UpdateServiceVersionRequest& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The destination version of the service. The value must be of the INT type. The value must be greater than 0 and smaller than the current version of the service.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
