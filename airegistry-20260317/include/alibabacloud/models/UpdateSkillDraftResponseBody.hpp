// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESKILLDRAFTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESKILLDRAFTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class UpdateSkillDraftResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSkillDraftResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSkillDraftResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateSkillDraftResponseBody() = default ;
    UpdateSkillDraftResponseBody(const UpdateSkillDraftResponseBody &) = default ;
    UpdateSkillDraftResponseBody(UpdateSkillDraftResponseBody &&) = default ;
    UpdateSkillDraftResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSkillDraftResponseBody() = default ;
    UpdateSkillDraftResponseBody& operator=(const UpdateSkillDraftResponseBody &) = default ;
    UpdateSkillDraftResponseBody& operator=(UpdateSkillDraftResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateSkillDraftResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
