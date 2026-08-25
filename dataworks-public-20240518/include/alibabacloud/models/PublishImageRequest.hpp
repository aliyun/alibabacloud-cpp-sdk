// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class PublishImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
    };
    friend void from_json(const Darabonba::Json& j, PublishImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
    };
    PublishImageRequest() = default ;
    PublishImageRequest(const PublishImageRequest &) = default ;
    PublishImageRequest(PublishImageRequest &&) = default ;
    PublishImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishImageRequest() = default ;
    PublishImageRequest& operator=(const PublishImageRequest &) = default ;
    PublishImageRequest& operator=(PublishImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->processId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline PublishImageRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline PublishImageRequest& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


  protected:
    // The image ID.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
    // The image publish execution ID, which is used as an idempotence identifier.
    shared_ptr<string> processId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
