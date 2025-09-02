// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGWHITELISTDELETELISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGWHITELISTDELETELISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgWhiteListDeleteListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgWhiteListDeleteListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, idsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DsgWhiteListDeleteListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, idsShrink_);
    };
    DsgWhiteListDeleteListShrinkRequest() = default ;
    DsgWhiteListDeleteListShrinkRequest(const DsgWhiteListDeleteListShrinkRequest &) = default ;
    DsgWhiteListDeleteListShrinkRequest(DsgWhiteListDeleteListShrinkRequest &&) = default ;
    DsgWhiteListDeleteListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgWhiteListDeleteListShrinkRequest() = default ;
    DsgWhiteListDeleteListShrinkRequest& operator=(const DsgWhiteListDeleteListShrinkRequest &) = default ;
    DsgWhiteListDeleteListShrinkRequest& operator=(DsgWhiteListDeleteListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->idsShrink_ != nullptr; };
    // idsShrink Field Functions 
    bool hasIdsShrink() const { return this->idsShrink_ != nullptr;};
    void deleteIdsShrink() { this->idsShrink_ = nullptr;};
    inline string idsShrink() const { DARABONBA_PTR_GET_DEFAULT(idsShrink_, "") };
    inline DsgWhiteListDeleteListShrinkRequest& setIdsShrink(string idsShrink) { DARABONBA_PTR_SET_VALUE(idsShrink_, idsShrink) };


  protected:
    // The IDs of the whitelists.
    // 
    // This parameter is required.
    std::shared_ptr<string> idsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
