// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESNAPSHOTINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATESNAPSHOTINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CreateSnapshotInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSnapshotInput& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSnapshotInput& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    CreateSnapshotInput() = default ;
    CreateSnapshotInput(const CreateSnapshotInput &) = default ;
    CreateSnapshotInput(CreateSnapshotInput &&) = default ;
    CreateSnapshotInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSnapshotInput() = default ;
    CreateSnapshotInput& operator=(const CreateSnapshotInput &) = default ;
    CreateSnapshotInput& operator=(CreateSnapshotInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->sessionId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSnapshotInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline CreateSnapshotInput& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
