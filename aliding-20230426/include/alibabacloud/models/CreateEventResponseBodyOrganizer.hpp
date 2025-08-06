// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTRESPONSEBODYORGANIZER_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTRESPONSEBODYORGANIZER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateEventResponseBodyOrganizer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventResponseBodyOrganizer& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ResponseStatus, responseStatus_);
      DARABONBA_PTR_TO_JSON(Self, self_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventResponseBodyOrganizer& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ResponseStatus, responseStatus_);
      DARABONBA_PTR_FROM_JSON(Self, self_);
    };
    CreateEventResponseBodyOrganizer() = default ;
    CreateEventResponseBodyOrganizer(const CreateEventResponseBodyOrganizer &) = default ;
    CreateEventResponseBodyOrganizer(CreateEventResponseBodyOrganizer &&) = default ;
    CreateEventResponseBodyOrganizer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventResponseBodyOrganizer() = default ;
    CreateEventResponseBodyOrganizer& operator=(const CreateEventResponseBodyOrganizer &) = default ;
    CreateEventResponseBodyOrganizer& operator=(CreateEventResponseBodyOrganizer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayName_ != nullptr
        && this->id_ != nullptr && this->responseStatus_ != nullptr && this->self_ != nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateEventResponseBodyOrganizer& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateEventResponseBodyOrganizer& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // responseStatus Field Functions 
    bool hasResponseStatus() const { return this->responseStatus_ != nullptr;};
    void deleteResponseStatus() { this->responseStatus_ = nullptr;};
    inline string responseStatus() const { DARABONBA_PTR_GET_DEFAULT(responseStatus_, "") };
    inline CreateEventResponseBodyOrganizer& setResponseStatus(string responseStatus) { DARABONBA_PTR_SET_VALUE(responseStatus_, responseStatus) };


    // self Field Functions 
    bool hasSelf() const { return this->self_ != nullptr;};
    void deleteSelf() { this->self_ = nullptr;};
    inline bool self() const { DARABONBA_PTR_GET_DEFAULT(self_, false) };
    inline CreateEventResponseBodyOrganizer& setSelf(bool self) { DARABONBA_PTR_SET_VALUE(self_, self) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> responseStatus_ = nullptr;
    std::shared_ptr<bool> self_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
