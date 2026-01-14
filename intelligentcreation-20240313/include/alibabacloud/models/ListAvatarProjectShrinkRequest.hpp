// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVATARPROJECTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAVATARPROJECTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ListAvatarProjectShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvatarProjectShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(projectIdList, projectIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvatarProjectShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(projectIdList, projectIdListShrink_);
    };
    ListAvatarProjectShrinkRequest() = default ;
    ListAvatarProjectShrinkRequest(const ListAvatarProjectShrinkRequest &) = default ;
    ListAvatarProjectShrinkRequest(ListAvatarProjectShrinkRequest &&) = default ;
    ListAvatarProjectShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvatarProjectShrinkRequest() = default ;
    ListAvatarProjectShrinkRequest& operator=(const ListAvatarProjectShrinkRequest &) = default ;
    ListAvatarProjectShrinkRequest& operator=(ListAvatarProjectShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectIdListShrink_ == nullptr; };
    // projectIdListShrink Field Functions 
    bool hasProjectIdListShrink() const { return this->projectIdListShrink_ != nullptr;};
    void deleteProjectIdListShrink() { this->projectIdListShrink_ = nullptr;};
    inline string getProjectIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(projectIdListShrink_, "") };
    inline ListAvatarProjectShrinkRequest& setProjectIdListShrink(string projectIdListShrink) { DARABONBA_PTR_SET_VALUE(projectIdListShrink_, projectIdListShrink) };


  protected:
    shared_ptr<string> projectIdListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
