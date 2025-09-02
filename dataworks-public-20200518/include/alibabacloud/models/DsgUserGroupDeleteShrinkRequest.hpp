// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGUSERGROUPDELETESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGUSERGROUPDELETESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgUserGroupDeleteShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgUserGroupDeleteShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, idsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DsgUserGroupDeleteShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, idsShrink_);
    };
    DsgUserGroupDeleteShrinkRequest() = default ;
    DsgUserGroupDeleteShrinkRequest(const DsgUserGroupDeleteShrinkRequest &) = default ;
    DsgUserGroupDeleteShrinkRequest(DsgUserGroupDeleteShrinkRequest &&) = default ;
    DsgUserGroupDeleteShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgUserGroupDeleteShrinkRequest() = default ;
    DsgUserGroupDeleteShrinkRequest& operator=(const DsgUserGroupDeleteShrinkRequest &) = default ;
    DsgUserGroupDeleteShrinkRequest& operator=(DsgUserGroupDeleteShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->idsShrink_ != nullptr; };
    // idsShrink Field Functions 
    bool hasIdsShrink() const { return this->idsShrink_ != nullptr;};
    void deleteIdsShrink() { this->idsShrink_ = nullptr;};
    inline string idsShrink() const { DARABONBA_PTR_GET_DEFAULT(idsShrink_, "") };
    inline DsgUserGroupDeleteShrinkRequest& setIdsShrink(string idsShrink) { DARABONBA_PTR_SET_VALUE(idsShrink_, idsShrink) };


  protected:
    // The information about the user group.
    std::shared_ptr<string> idsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
