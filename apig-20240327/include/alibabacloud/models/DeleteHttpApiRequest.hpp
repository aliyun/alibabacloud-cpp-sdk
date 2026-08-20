// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHTTPAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHTTPAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class DeleteHttpApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHttpApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHttpApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    DeleteHttpApiRequest() = default ;
    DeleteHttpApiRequest(const DeleteHttpApiRequest &) = default ;
    DeleteHttpApiRequest(DeleteHttpApiRequest &&) = default ;
    DeleteHttpApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHttpApiRequest() = default ;
    DeleteHttpApiRequest& operator=(const DeleteHttpApiRequest &) = default ;
    DeleteHttpApiRequest& operator=(DeleteHttpApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteHttpApiRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // Specifies whether to perform only a dry run. If set to true, all synchronous validations identical to an actual deletion are executed (including admission checks such as whether a published API cannot be deleted), but the API is not deleted, no associated configurations are cleaned up, and no side effects are produced. If this parameter is not specified or is set to false, the behavior is the same as the existing version.
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
