// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPERATORLISTBYSCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPERATORLISTBYSCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeOperatorListBySceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOperatorListBySceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOperatorListBySceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
    };
    DescribeOperatorListBySceneRequest() = default ;
    DescribeOperatorListBySceneRequest(const DescribeOperatorListBySceneRequest &) = default ;
    DescribeOperatorListBySceneRequest(DescribeOperatorListBySceneRequest &&) = default ;
    DescribeOperatorListBySceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOperatorListBySceneRequest() = default ;
    DescribeOperatorListBySceneRequest& operator=(const DescribeOperatorListBySceneRequest &) = default ;
    DescribeOperatorListBySceneRequest& operator=(DescribeOperatorListBySceneRequest &&) = default ;
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
    inline DescribeOperatorListBySceneRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeOperatorListBySceneRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline DescribeOperatorListBySceneRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Scene type.
    shared_ptr<string> scene_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
