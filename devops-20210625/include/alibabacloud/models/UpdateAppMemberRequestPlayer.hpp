// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPMEMBERREQUESTPLAYER_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPMEMBERREQUESTPLAYER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateAppMemberRequestPlayer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAppMemberRequestPlayer& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAppMemberRequestPlayer& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    UpdateAppMemberRequestPlayer() = default ;
    UpdateAppMemberRequestPlayer(const UpdateAppMemberRequestPlayer &) = default ;
    UpdateAppMemberRequestPlayer(UpdateAppMemberRequestPlayer &&) = default ;
    UpdateAppMemberRequestPlayer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAppMemberRequestPlayer() = default ;
    UpdateAppMemberRequestPlayer& operator=(const UpdateAppMemberRequestPlayer &) = default ;
    UpdateAppMemberRequestPlayer& operator=(UpdateAppMemberRequestPlayer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->type_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateAppMemberRequestPlayer& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateAppMemberRequestPlayer& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
