// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEYIKEEDITINGPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEYIKEEDITINGPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class CreateYikeEditingProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateYikeEditingProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EditingProjectId, editingProjectId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateYikeEditingProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EditingProjectId, editingProjectId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateYikeEditingProjectResponseBody() = default ;
    CreateYikeEditingProjectResponseBody(const CreateYikeEditingProjectResponseBody &) = default ;
    CreateYikeEditingProjectResponseBody(CreateYikeEditingProjectResponseBody &&) = default ;
    CreateYikeEditingProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateYikeEditingProjectResponseBody() = default ;
    CreateYikeEditingProjectResponseBody& operator=(const CreateYikeEditingProjectResponseBody &) = default ;
    CreateYikeEditingProjectResponseBody& operator=(CreateYikeEditingProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->editingProjectId_ == nullptr
        && this->requestId_ == nullptr; };
    // editingProjectId Field Functions 
    bool hasEditingProjectId() const { return this->editingProjectId_ != nullptr;};
    void deleteEditingProjectId() { this->editingProjectId_ = nullptr;};
    inline string getEditingProjectId() const { DARABONBA_PTR_GET_DEFAULT(editingProjectId_, "") };
    inline CreateYikeEditingProjectResponseBody& setEditingProjectId(string editingProjectId) { DARABONBA_PTR_SET_VALUE(editingProjectId_, editingProjectId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateYikeEditingProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> editingProjectId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
