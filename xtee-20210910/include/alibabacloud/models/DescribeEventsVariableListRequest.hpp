// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTSVARIABLELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTSVARIABLELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventsVariableListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventsVariableListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(createType, createType_);
      DARABONBA_PTR_TO_JSON(eventCodes, eventCodes_);
      DARABONBA_PTR_TO_JSON(filterDTO, filterDTO_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventsVariableListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(createType, createType_);
      DARABONBA_PTR_FROM_JSON(eventCodes, eventCodes_);
      DARABONBA_PTR_FROM_JSON(filterDTO, filterDTO_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
    };
    DescribeEventsVariableListRequest() = default ;
    DescribeEventsVariableListRequest(const DescribeEventsVariableListRequest &) = default ;
    DescribeEventsVariableListRequest(DescribeEventsVariableListRequest &&) = default ;
    DescribeEventsVariableListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventsVariableListRequest() = default ;
    DescribeEventsVariableListRequest& operator=(const DescribeEventsVariableListRequest &) = default ;
    DescribeEventsVariableListRequest& operator=(DescribeEventsVariableListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->createType_ == nullptr && this->eventCodes_ == nullptr && this->filterDTO_ == nullptr && this->regId_ == nullptr && this->scene_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeEventsVariableListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline string getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
    inline DescribeEventsVariableListRequest& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // eventCodes Field Functions 
    bool hasEventCodes() const { return this->eventCodes_ != nullptr;};
    void deleteEventCodes() { this->eventCodes_ = nullptr;};
    inline string getEventCodes() const { DARABONBA_PTR_GET_DEFAULT(eventCodes_, "") };
    inline DescribeEventsVariableListRequest& setEventCodes(string eventCodes) { DARABONBA_PTR_SET_VALUE(eventCodes_, eventCodes) };


    // filterDTO Field Functions 
    bool hasFilterDTO() const { return this->filterDTO_ != nullptr;};
    void deleteFilterDTO() { this->filterDTO_ = nullptr;};
    inline string getFilterDTO() const { DARABONBA_PTR_GET_DEFAULT(filterDTO_, "") };
    inline DescribeEventsVariableListRequest& setFilterDTO(string filterDTO) { DARABONBA_PTR_SET_VALUE(filterDTO_, filterDTO) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeEventsVariableListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline DescribeEventsVariableListRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Creation type
    shared_ptr<string> createType_ {};
    // Event code.
    // 
    // This parameter is required.
    shared_ptr<string> eventCodes_ {};
    // Filter object
    shared_ptr<string> filterDTO_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Applicable scene code
    // 
    // This parameter is required.
    shared_ptr<string> scene_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
