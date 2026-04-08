// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGUPDATEDESENSSTATUSLISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGUPDATEDESENSSTATUSLISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgUpdateDesensStatusListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgUpdateDesensStatusListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesensStatus, desensStatus_);
      DARABONBA_PTR_TO_JSON(Ids, idsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DsgUpdateDesensStatusListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesensStatus, desensStatus_);
      DARABONBA_PTR_FROM_JSON(Ids, idsShrink_);
    };
    DsgUpdateDesensStatusListShrinkRequest() = default ;
    DsgUpdateDesensStatusListShrinkRequest(const DsgUpdateDesensStatusListShrinkRequest &) = default ;
    DsgUpdateDesensStatusListShrinkRequest(DsgUpdateDesensStatusListShrinkRequest &&) = default ;
    DsgUpdateDesensStatusListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgUpdateDesensStatusListShrinkRequest() = default ;
    DsgUpdateDesensStatusListShrinkRequest& operator=(const DsgUpdateDesensStatusListShrinkRequest &) = default ;
    DsgUpdateDesensStatusListShrinkRequest& operator=(DsgUpdateDesensStatusListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desensStatus_ == nullptr
        && this->idsShrink_ == nullptr; };
    // desensStatus Field Functions 
    bool hasDesensStatus() const { return this->desensStatus_ != nullptr;};
    void deleteDesensStatus() { this->desensStatus_ = nullptr;};
    inline int32_t getDesensStatus() const { DARABONBA_PTR_GET_DEFAULT(desensStatus_, 0) };
    inline DsgUpdateDesensStatusListShrinkRequest& setDesensStatus(int32_t desensStatus) { DARABONBA_PTR_SET_VALUE(desensStatus_, desensStatus) };


    // idsShrink Field Functions 
    bool hasIdsShrink() const { return this->idsShrink_ != nullptr;};
    void deleteIdsShrink() { this->idsShrink_ = nullptr;};
    inline string getIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(idsShrink_, "") };
    inline DsgUpdateDesensStatusListShrinkRequest& setIdsShrink(string idsShrink) { DARABONBA_PTR_SET_VALUE(idsShrink_, idsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> desensStatus_ {};
    // This parameter is required.
    shared_ptr<string> idsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
