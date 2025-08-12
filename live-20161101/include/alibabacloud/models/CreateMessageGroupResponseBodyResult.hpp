// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMESSAGEGROUPRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEMESSAGEGROUPRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateMessageGroupResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMessageGroupResponseBodyResult& obj) { 
      DARABONBA_ANY_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMessageGroupResponseBodyResult& obj) { 
      DARABONBA_ANY_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
    };
    CreateMessageGroupResponseBodyResult() = default ;
    CreateMessageGroupResponseBodyResult(const CreateMessageGroupResponseBodyResult &) = default ;
    CreateMessageGroupResponseBodyResult(CreateMessageGroupResponseBodyResult &&) = default ;
    CreateMessageGroupResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMessageGroupResponseBodyResult() = default ;
    CreateMessageGroupResponseBodyResult& operator=(const CreateMessageGroupResponseBodyResult &) = default ;
    CreateMessageGroupResponseBodyResult& operator=(CreateMessageGroupResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extension_ != nullptr
        && this->groupId_ != nullptr; };
    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline     const Darabonba::Json & extension() const { DARABONBA_GET(extension_) };
    Darabonba::Json & extension() { DARABONBA_GET(extension_) };
    inline CreateMessageGroupResponseBodyResult& setExtension(const Darabonba::Json & extension) { DARABONBA_SET_VALUE(extension_, extension) };
    inline CreateMessageGroupResponseBodyResult& setExtension(Darabonba::Json & extension) { DARABONBA_SET_RVALUE(extension_, extension) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateMessageGroupResponseBodyResult& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


  protected:
    // The extended field.
    Darabonba::Json extension_ = nullptr;
    // The ID of the message group.
    std::shared_ptr<string> groupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
