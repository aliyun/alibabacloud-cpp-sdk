// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESCHEDULEDPRELOADJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESCHEDULEDPRELOADJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteScheduledPreloadJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteScheduledPreloadJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteScheduledPreloadJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    DeleteScheduledPreloadJobRequest() = default ;
    DeleteScheduledPreloadJobRequest(const DeleteScheduledPreloadJobRequest &) = default ;
    DeleteScheduledPreloadJobRequest(DeleteScheduledPreloadJobRequest &&) = default ;
    DeleteScheduledPreloadJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteScheduledPreloadJobRequest() = default ;
    DeleteScheduledPreloadJobRequest& operator=(const DeleteScheduledPreloadJobRequest &) = default ;
    DeleteScheduledPreloadJobRequest& operator=(DeleteScheduledPreloadJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DeleteScheduledPreloadJobRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The ID of the scheduled prefetch task.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
