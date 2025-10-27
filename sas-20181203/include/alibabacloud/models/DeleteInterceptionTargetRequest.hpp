// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINTERCEPTIONTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINTERCEPTIONTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteInterceptionTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInterceptionTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TargetIds, targetIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInterceptionTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetIds, targetIds_);
    };
    DeleteInterceptionTargetRequest() = default ;
    DeleteInterceptionTargetRequest(const DeleteInterceptionTargetRequest &) = default ;
    DeleteInterceptionTargetRequest(DeleteInterceptionTargetRequest &&) = default ;
    DeleteInterceptionTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInterceptionTargetRequest() = default ;
    DeleteInterceptionTargetRequest& operator=(const DeleteInterceptionTargetRequest &) = default ;
    DeleteInterceptionTargetRequest& operator=(DeleteInterceptionTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->targetIds_ == nullptr; };
    // targetIds Field Functions 
    bool hasTargetIds() const { return this->targetIds_ != nullptr;};
    void deleteTargetIds() { this->targetIds_ = nullptr;};
    inline string targetIds() const { DARABONBA_PTR_GET_DEFAULT(targetIds_, "") };
    inline DeleteInterceptionTargetRequest& setTargetIds(string targetIds) { DARABONBA_PTR_SET_VALUE(targetIds_, targetIds) };


  protected:
    // The IDs of the network objects that you want to remove. You can call the [ListInterceptionTargetPage](~~ListInterceptionTargetPage~~) operation to query the IDs of the network objects.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
