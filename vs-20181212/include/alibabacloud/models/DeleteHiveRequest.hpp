// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHIVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHIVEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DeleteHiveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHiveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HiveId, hiveId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHiveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HiveId, hiveId_);
    };
    DeleteHiveRequest() = default ;
    DeleteHiveRequest(const DeleteHiveRequest &) = default ;
    DeleteHiveRequest(DeleteHiveRequest &&) = default ;
    DeleteHiveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHiveRequest() = default ;
    DeleteHiveRequest& operator=(const DeleteHiveRequest &) = default ;
    DeleteHiveRequest& operator=(DeleteHiveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hiveId_ == nullptr; };
    // hiveId Field Functions 
    bool hasHiveId() const { return this->hiveId_ != nullptr;};
    void deleteHiveId() { this->hiveId_ = nullptr;};
    inline string getHiveId() const { DARABONBA_PTR_GET_DEFAULT(hiveId_, "") };
    inline DeleteHiveRequest& setHiveId(string hiveId) { DARABONBA_PTR_SET_VALUE(hiveId_, hiveId) };


  protected:
    // This parameter is required.
    shared_ptr<string> hiveId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
