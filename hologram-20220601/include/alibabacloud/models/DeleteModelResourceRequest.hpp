// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMODELRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMODELRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class DeleteModelResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteModelResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aiInstanceId, aiInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteModelResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aiInstanceId, aiInstanceId_);
    };
    DeleteModelResourceRequest() = default ;
    DeleteModelResourceRequest(const DeleteModelResourceRequest &) = default ;
    DeleteModelResourceRequest(DeleteModelResourceRequest &&) = default ;
    DeleteModelResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteModelResourceRequest() = default ;
    DeleteModelResourceRequest& operator=(const DeleteModelResourceRequest &) = default ;
    DeleteModelResourceRequest& operator=(DeleteModelResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aiInstanceId_ == nullptr; };
    // aiInstanceId Field Functions 
    bool hasAiInstanceId() const { return this->aiInstanceId_ != nullptr;};
    void deleteAiInstanceId() { this->aiInstanceId_ = nullptr;};
    inline string getAiInstanceId() const { DARABONBA_PTR_GET_DEFAULT(aiInstanceId_, "") };
    inline DeleteModelResourceRequest& setAiInstanceId(string aiInstanceId) { DARABONBA_PTR_SET_VALUE(aiInstanceId_, aiInstanceId) };


  protected:
    shared_ptr<string> aiInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
