// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFCTRIGGERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFCTRIGGERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ListFCTriggerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFCTriggerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventMetaName, eventMetaName_);
      DARABONBA_PTR_TO_JSON(EventMetaVersion, eventMetaVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListFCTriggerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventMetaName, eventMetaName_);
      DARABONBA_PTR_FROM_JSON(EventMetaVersion, eventMetaVersion_);
    };
    ListFCTriggerRequest() = default ;
    ListFCTriggerRequest(const ListFCTriggerRequest &) = default ;
    ListFCTriggerRequest(ListFCTriggerRequest &&) = default ;
    ListFCTriggerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFCTriggerRequest() = default ;
    ListFCTriggerRequest& operator=(const ListFCTriggerRequest &) = default ;
    ListFCTriggerRequest& operator=(ListFCTriggerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventMetaName_ != nullptr
        && this->eventMetaVersion_ != nullptr; };
    // eventMetaName Field Functions 
    bool hasEventMetaName() const { return this->eventMetaName_ != nullptr;};
    void deleteEventMetaName() { this->eventMetaName_ = nullptr;};
    inline string eventMetaName() const { DARABONBA_PTR_GET_DEFAULT(eventMetaName_, "") };
    inline ListFCTriggerRequest& setEventMetaName(string eventMetaName) { DARABONBA_PTR_SET_VALUE(eventMetaName_, eventMetaName) };


    // eventMetaVersion Field Functions 
    bool hasEventMetaVersion() const { return this->eventMetaVersion_ != nullptr;};
    void deleteEventMetaVersion() { this->eventMetaVersion_ = nullptr;};
    inline string eventMetaVersion() const { DARABONBA_PTR_GET_DEFAULT(eventMetaVersion_, "") };
    inline ListFCTriggerRequest& setEventMetaVersion(string eventMetaVersion) { DARABONBA_PTR_SET_VALUE(eventMetaVersion_, eventMetaVersion) };


  protected:
    // The name of the event. You can specify only one name.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventMetaName_ = nullptr;
    // The version number of the event. You can specify only one version number.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventMetaVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
