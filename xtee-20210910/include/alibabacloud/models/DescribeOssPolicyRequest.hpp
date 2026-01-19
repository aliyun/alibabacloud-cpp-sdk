// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeOssPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
    };
    DescribeOssPolicyRequest() = default ;
    DescribeOssPolicyRequest(const DescribeOssPolicyRequest &) = default ;
    DescribeOssPolicyRequest(DescribeOssPolicyRequest &&) = default ;
    DescribeOssPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssPolicyRequest() = default ;
    DescribeOssPolicyRequest& operator=(const DescribeOssPolicyRequest &) = default ;
    DescribeOssPolicyRequest& operator=(DescribeOssPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->regId_ == nullptr && this->scene_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeOssPolicyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeOssPolicyRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline DescribeOssPolicyRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Region code
    // 
    // This parameter is required.
    shared_ptr<string> regId_ {};
    // Scene
    // 
    // This parameter is required.
    shared_ptr<string> scene_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
