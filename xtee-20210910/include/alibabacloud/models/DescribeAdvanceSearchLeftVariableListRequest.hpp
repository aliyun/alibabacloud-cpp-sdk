// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVANCESEARCHLEFTVARIABLELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVANCESEARCHLEFTVARIABLELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAdvanceSearchLeftVariableListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvanceSearchLeftVariableListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(eventCodes, eventCodes_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvanceSearchLeftVariableListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(eventCodes, eventCodes_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
    };
    DescribeAdvanceSearchLeftVariableListRequest() = default ;
    DescribeAdvanceSearchLeftVariableListRequest(const DescribeAdvanceSearchLeftVariableListRequest &) = default ;
    DescribeAdvanceSearchLeftVariableListRequest(DescribeAdvanceSearchLeftVariableListRequest &&) = default ;
    DescribeAdvanceSearchLeftVariableListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvanceSearchLeftVariableListRequest() = default ;
    DescribeAdvanceSearchLeftVariableListRequest& operator=(const DescribeAdvanceSearchLeftVariableListRequest &) = default ;
    DescribeAdvanceSearchLeftVariableListRequest& operator=(DescribeAdvanceSearchLeftVariableListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->eventCodes_ == nullptr && this->regId_ == nullptr && this->scene_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeAdvanceSearchLeftVariableListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // eventCodes Field Functions 
    bool hasEventCodes() const { return this->eventCodes_ != nullptr;};
    void deleteEventCodes() { this->eventCodes_ = nullptr;};
    inline string getEventCodes() const { DARABONBA_PTR_GET_DEFAULT(eventCodes_, "") };
    inline DescribeAdvanceSearchLeftVariableListRequest& setEventCodes(string eventCodes) { DARABONBA_PTR_SET_VALUE(eventCodes_, eventCodes) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeAdvanceSearchLeftVariableListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline DescribeAdvanceSearchLeftVariableListRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Event code.
    // 
    // This parameter is required.
    shared_ptr<string> eventCodes_ {};
    // Region code
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
