// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMOSAICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMOSAICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class AddMosaicsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMosaicsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MarkPosition, markPosition_);
      DARABONBA_PTR_TO_JSON(SubSceneId, subSceneId_);
    };
    friend void from_json(const Darabonba::Json& j, AddMosaicsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MarkPosition, markPosition_);
      DARABONBA_PTR_FROM_JSON(SubSceneId, subSceneId_);
    };
    AddMosaicsRequest() = default ;
    AddMosaicsRequest(const AddMosaicsRequest &) = default ;
    AddMosaicsRequest(AddMosaicsRequest &&) = default ;
    AddMosaicsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMosaicsRequest() = default ;
    AddMosaicsRequest& operator=(const AddMosaicsRequest &) = default ;
    AddMosaicsRequest& operator=(AddMosaicsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->markPosition_ == nullptr
        && return this->subSceneId_ == nullptr; };
    // markPosition Field Functions 
    bool hasMarkPosition() const { return this->markPosition_ != nullptr;};
    void deleteMarkPosition() { this->markPosition_ = nullptr;};
    inline string markPosition() const { DARABONBA_PTR_GET_DEFAULT(markPosition_, "") };
    inline AddMosaicsRequest& setMarkPosition(string markPosition) { DARABONBA_PTR_SET_VALUE(markPosition_, markPosition) };


    // subSceneId Field Functions 
    bool hasSubSceneId() const { return this->subSceneId_ != nullptr;};
    void deleteSubSceneId() { this->subSceneId_ = nullptr;};
    inline string subSceneId() const { DARABONBA_PTR_GET_DEFAULT(subSceneId_, "") };
    inline AddMosaicsRequest& setSubSceneId(string subSceneId) { DARABONBA_PTR_SET_VALUE(subSceneId_, subSceneId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> markPosition_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> subSceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
